/*
 * XREFs of ?SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z @ 0x1C01834A0
 * Callers:
 *     DxgkSetAllocationPriority @ 0x1C0185200 (DxgkSetAllocationPriority.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0014504 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00145BC (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?VidMmSetAllocationPriority@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C0024130 (-VidMmSetAllocationPriority@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C008A3F0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::SetAllocationPriority(DXGDEVICE *this, struct _D3DKMT_SETALLOCATIONPRIORITY *a2)
{
  __int64 hResource; // r8
  __int64 v5; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  unsigned int *pPriorities; // rdx
  unsigned int v13; // esi
  __int64 v14; // rcx
  ULONG_PTR i; // rdi
  struct _VIDMM_MULTI_ALLOC *v16; // r8
  __int64 v17; // rax
  __int64 j; // rsi
  unsigned int *v19; // rdx
  unsigned int v20; // r14d
  unsigned int *v21; // rdx
  unsigned int v22; // r15d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  struct _VIDMM_MULTI_ALLOC *Count; // r8
  _BYTE v29[56]; // [rsp+20h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v30; // [rsp+68h] [rbp+10h] BYREF

  hResource = a2->hResource;
  if ( (_DWORD)hResource )
  {
    if ( a2->AllocationCount )
    {
      v5 = WdLogNewEntry5_WdWarning(this, a2, hResource);
      *(_QWORD *)(v5 + 24) = this;
      *(_QWORD *)(v5 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v5);
    }
    else
    {
      DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v30, hResource);
      if ( v30 )
      {
        if ( (DXGDEVICE *)v30[1].Count == this )
        {
          pPriorities = (unsigned int *)a2->pPriorities;
          if ( (unsigned __int64)pPriorities >= MmUserProbeAddress )
            pPriorities = (unsigned int *)MmUserProbeAddress;
          v13 = *pPriorities;
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, (struct DXGFASTMUTEX *const)&v30[10]);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
          for ( i = v30[3].Count; ; i = *(_QWORD *)(i + 64) )
          {
            if ( !i )
            {
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v29);
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v30);
              return 0LL;
            }
            v16 = *(struct _VIDMM_MULTI_ALLOC **)(i + 24);
            if ( !v16 )
              break;
            VIDMM_EXPORT::VidMmSetAllocationPriority(
              *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 528LL),
              *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 536LL),
              v16,
              v13);
          }
          v17 = WdLogNewEntry5_WdError(v14);
          *(_QWORD *)(v17 + 24) = i;
          WdLogEvent5_WdError(v17);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v29);
        }
        else
        {
          v11 = (_QWORD *)WdLogNewEntry5_WdError(v8);
          v11[3] = this;
          v11[4] = v30;
          v11[5] = -1073741811LL;
          WdLogEvent5_WdError(v11);
        }
      }
      else
      {
        v10 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9);
        v10[3] = this;
        v10[4] = a2->hResource;
        v10[5] = -1073741811LL;
        WdLogEvent5_WdWarning(v10);
      }
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v30);
    }
    return 3221225485LL;
  }
  else
  {
    if ( a2->AllocationCount )
    {
      for ( j = 0LL; ; j = (unsigned int)(j + 1) )
      {
        if ( (unsigned int)j >= a2->AllocationCount )
          return 0LL;
        v19 = (unsigned int *)&a2->phAllocationList[j];
        if ( (unsigned __int64)v19 >= MmUserProbeAddress )
          v19 = (unsigned int *)MmUserProbeAddress;
        v20 = *v19;
        v21 = (unsigned int *)&a2->pPriorities[j];
        if ( (unsigned __int64)v21 >= MmUserProbeAddress )
          v21 = (unsigned int *)MmUserProbeAddress;
        v22 = *v21;
        DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v30, v20);
        if ( !v30 )
          break;
        if ( (DXGDEVICE *)v30[1].Count != this )
        {
          v27 = (_QWORD *)WdLogNewEntry5_WdError(v24);
          v27[3] = this;
          v27[4] = v30;
          v27[5] = -1073741811LL;
          goto LABEL_30;
        }
        Count = (struct _VIDMM_MULTI_ALLOC *)v30[3].Count;
        if ( !Count )
        {
          v27 = (_QWORD *)WdLogNewEntry5_WdError(v24);
          v27[3] = v30;
LABEL_30:
          WdLogEvent5_WdError(v27);
LABEL_27:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v30);
          return 3221225485LL;
        }
        VIDMM_EXPORT::VidMmSetAllocationPriority(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 528LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 536LL),
          Count,
          v22);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v30);
      }
      v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
      v26[3] = this;
      v26[4] = v20;
      v26[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v26);
      goto LABEL_27;
    }
    return 0LL;
  }
}
