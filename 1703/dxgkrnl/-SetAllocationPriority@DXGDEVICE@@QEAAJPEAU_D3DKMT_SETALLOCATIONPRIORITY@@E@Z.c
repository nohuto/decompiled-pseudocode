/*
 * XREFs of ?SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z @ 0x1C017F5D8
 * Callers:
 *     DxgkSetAllocationPriority @ 0x1C0180DF0 (DxgkSetAllocationPriority.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0001C48 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0013770 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0013830 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?VidMmSetAllocationPriority@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C00259EC (-VidMmSetAllocationPriority@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00CADD0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::SetAllocationPriority(
        DXGDEVICE *this,
        struct _D3DKMT_SETALLOCATIONPRIORITY *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 hResource; // r8
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  unsigned int *pPriorities; // rdx
  unsigned int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rcx
  ULONG_PTR i; // rdi
  struct _VIDMM_MULTI_ALLOC *v20; // r8
  __int64 v21; // rax
  __int64 j; // rsi
  unsigned int *v23; // rdx
  unsigned int v24; // r14d
  unsigned int *v25; // rdx
  unsigned int v26; // r15d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  _QWORD *v35; // rax
  struct _VIDMM_MULTI_ALLOC *Count; // r8
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  _BYTE v40[56]; // [rsp+20h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v41; // [rsp+68h] [rbp+10h] BYREF

  hResource = a2->hResource;
  if ( (_DWORD)hResource )
  {
    if ( a2->AllocationCount )
    {
      v7 = WdLogNewEntry5_WdWarning(this, a2, hResource, a4);
      *(_QWORD *)(v7 + 24) = this;
      *(_QWORD *)(v7 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v7);
    }
    else
    {
      DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v41, hResource);
      if ( v41 )
      {
        if ( (DXGDEVICE *)v41[1].Count == this )
        {
          pPriorities = (unsigned int *)a2->pPriorities;
          if ( (unsigned __int64)pPriorities >= MmUserProbeAddress )
            pPriorities = (unsigned int *)MmUserProbeAddress;
          v16 = *pPriorities;
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v40, (struct DXGFASTMUTEX *const)&v41[10], v11, v12);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v40);
          for ( i = v41[3].Count; ; i = *(_QWORD *)(i + 64) )
          {
            if ( !i )
            {
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v40);
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v41);
              return 0LL;
            }
            v20 = *(struct _VIDMM_MULTI_ALLOC **)(i + 24);
            if ( !v20 )
              break;
            VIDMM_EXPORT::VidMmSetAllocationPriority(
              *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 432LL),
              *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 440LL),
              v20,
              v16);
          }
          v21 = WdLogNewEntry5_WdError(v18, v17);
          *(_QWORD *)(v21 + 24) = i;
          WdLogEvent5_WdError(v21);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v40);
        }
        else
        {
          v14 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
          v14[3] = this;
          v14[4] = v41;
          v14[5] = -1073741811LL;
          WdLogEvent5_WdError(v14);
        }
      }
      else
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
        v13[3] = this;
        v13[4] = a2->hResource;
        v13[5] = -1073741811LL;
        WdLogEvent5_WdWarning(v13);
      }
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v41);
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
        v23 = (unsigned int *)&a2->phAllocationList[j];
        if ( (unsigned __int64)v23 >= MmUserProbeAddress )
          v23 = (unsigned int *)MmUserProbeAddress;
        v24 = *v23;
        v25 = (unsigned int *)&a2->pPriorities[j];
        if ( (unsigned __int64)v25 >= MmUserProbeAddress )
          v25 = (unsigned int *)MmUserProbeAddress;
        v26 = *v25;
        DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v41, v24);
        if ( !v41 )
          break;
        if ( (DXGDEVICE *)v41[1].Count != this )
        {
          v35 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
          v35[3] = this;
          v35[4] = v41;
          v35[5] = -1073741811LL;
          goto LABEL_30;
        }
        Count = (struct _VIDMM_MULTI_ALLOC *)v41[3].Count;
        if ( !Count )
        {
          v35 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
          v35[3] = v41;
LABEL_30:
          WdLogEvent5_WdError(v35);
LABEL_27:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v41, v32, v33, v34);
          return 3221225485LL;
        }
        VIDMM_EXPORT::VidMmSetAllocationPriority(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 432LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 440LL),
          Count,
          v26);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v41, v37, v38, v39);
      }
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
      v31[3] = this;
      v31[4] = v24;
      v31[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v31);
      goto LABEL_27;
    }
    return 0LL;
  }
}
