/*
 * XREFs of ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C0098E10
 * Callers:
 *     ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C0098AD0 (-DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00D4248 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00F5360 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C00FC0D0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z @ 0x1C014760C (-AllocateElements@-$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z.c)
 *     ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x1C01A30A8 (-GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C01A3718 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C01A4960 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 */

__int64 __fastcall DXGDEVICE::IssueSyncObjectOpForAllContexts(
        DXGDEVICE *this,
        struct DXGPROCESS *a2,
        unsigned int a3,
        unsigned __int64 a4,
        int a5)
{
  DXGCONTEXT *v5; // rbx
  struct DXGPROCESS *v7; // r12
  DXGDEVICE *v8; // r15
  __int64 v9; // rsi
  DXGCONTEXT *v10; // r9
  unsigned int v11; // r14d
  unsigned int v12; // esi
  int v13; // r10d
  unsigned int v14; // r13d
  _BYTE *PoolWithTag; // rdi
  __int64 v16; // rcx
  const unsigned int *v17; // rdi
  DXGCONTEXT *v18; // rdx
  unsigned int v19; // r8d
  DXGCONTEXT *v20; // rdi
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v25; // rcx
  const unsigned int *v26; // r12
  DXGCONTEXT *j; // rdi
  _DWORD *k; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _DWORD *i; // r15
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned int v39; // [rsp+60h] [rbp-61h] BYREF
  struct DXGPROCESS *v40; // [rsp+68h] [rbp-59h]
  DXGDEVICE *v41; // [rsp+70h] [rbp-51h]
  unsigned __int64 v42; // [rsp+78h] [rbp-49h] BYREF
  PVOID P; // [rsp+80h] [rbp-41h] BYREF
  _BYTE v44[64]; // [rsp+88h] [rbp-39h] BYREF
  unsigned int v45; // [rsp+C8h] [rbp+7h]

  v5 = (DXGDEVICE *)((char *)this + 360);
  v40 = a2;
  v7 = a2;
  v41 = this;
  v8 = this;
  v42 = a4;
  LODWORD(v9) = -1073741823;
  if ( !a5 )
  {
    v20 = *(DXGCONTEXT **)v5;
    while ( v20 != v5 && v20 )
    {
      v21 = *((_DWORD *)v20 + 91);
      v39 = a3;
      if ( (v21 & 0x10) != 0 )
      {
        for ( i = (_DWORD *)*((_QWORD *)v20 + 46); i != (_DWORD *)((char *)v20 + 368) && i; i = *(_DWORD **)i )
        {
          v36 = SubmitWaitForSyncObjectsFromGpu(1u, &v39, &v42, i[6], v40, 0, 1);
          v9 = v36;
          if ( v36 < 0 )
          {
            v37 = WdLogNewEntry5_WdEvent();
            v8 = v41;
            *(_QWORD *)(v37 + 24) = v41;
            *(_QWORD *)(v37 + 32) = v9;
            WdLogEvent5_WdEvent(v37);
            goto LABEL_59;
          }
        }
        v8 = v41;
LABEL_59:
        v7 = v40;
      }
      else
      {
        v22 = WaitForSynchronizationObjectFromGpu(1u, &v39, 0LL, a4, *((_DWORD *)v20 + 6), v7, 0, 1, 0, 0);
        v9 = v22;
        if ( v22 < 0 )
        {
          v38 = WdLogNewEntry5_WdEvent();
          *(_QWORD *)(v38 + 24) = v8;
          *(_QWORD *)(v38 + 32) = v9;
          WdLogEvent5_WdEvent(v38);
          return (unsigned int)v9;
        }
      }
      v20 = *(DXGCONTEXT **)v20;
      a4 = v42;
    }
    return (unsigned int)v9;
  }
  v10 = *(DXGCONTEXT **)v5;
  v11 = 0;
  v12 = 0;
  v39 = a3;
  v13 = 0;
  v14 = 0;
  while ( v10 != v5 && v10 )
  {
    if ( (*((_DWORD *)v10 + 91) & 0x10) != 0 )
      v14 += DXGCONTEXT::GetRenderHwQueueCount(v10);
    else
      ++v12;
    v10 = *(DXGCONTEXT **)v10;
  }
  P = 0LL;
  v45 = 0;
  if ( v13 )
  {
    v26 = (const unsigned int *)PagedPoolZeroedArray<unsigned int,16>::AllocateElements(&P, v14);
    if ( v26 )
    {
      for ( j = *(DXGCONTEXT **)v5; j != v5 && j; j = *(DXGCONTEXT **)j )
      {
        if ( (*((_DWORD *)j + 91) & 0x10) != 0 )
        {
          for ( k = (_DWORD *)*((_QWORD *)j + 46); k != (_DWORD *)((char *)j + 368) && k; k = *(_DWORD **)k )
          {
            if ( v11 >= v14 )
            {
              v29 = WdLogNewEntry5_WdAssertion(v25);
              *(_QWORD *)(v29 + 24) = 5752LL;
              WdLogEvent5_WdAssertion(v29);
            }
            v25 = v11++;
            v26[v25] = k[6];
          }
        }
      }
      if ( v14 != v11 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v25);
        *(_QWORD *)(v30 + 24) = 5762LL;
        WdLogEvent5_WdAssertion(v30);
      }
      v31 = SubmitSignalSyncObjectsToHwQueue(1u, &v39, 0, v14, v26, &v42, v40, 0, 1);
      v9 = v31;
      if ( v31 < 0 )
      {
        v32 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v32 + 24) = v41;
        *(_QWORD *)(v32 + 32) = v9;
        WdLogEvent5_WdEvent(v32);
      }
      PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&P);
      return (unsigned int)v9;
    }
  }
  else
  {
    if ( v12 > 0x10 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v12 < 4 )
        goto LABEL_41;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v12, 0x4B677844u);
      P = PoolWithTag;
    }
    else
    {
      PoolWithTag = v44;
      P = v44;
    }
    v45 = v12;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 4LL * v12);
      v17 = (const unsigned int *)P;
      if ( P )
      {
        v18 = *(DXGCONTEXT **)v5;
        v19 = 0;
        while ( v18 != v5 && v18 )
        {
          v16 = v19++;
          v17[v16] = *((_DWORD *)v18 + 6);
          v18 = *(DXGCONTEXT **)v18;
        }
        if ( v12 != v19 )
        {
          v33 = WdLogNewEntry5_WdAssertion(v16);
          *(_QWORD *)(v33 + 24) = 5802LL;
          WdLogEvent5_WdAssertion(v33);
        }
        v23 = SignalSynchronizationObjectInternal(1u, &v39, 0, v12, v17, 0LL, v42, 0LL, v7, 0, 1);
        v9 = v23;
        if ( v23 < 0 )
        {
          v34 = WdLogNewEntry5_WdEvent();
          *(_QWORD *)(v34 + 24) = v41;
          *(_QWORD *)(v34 + 32) = v9;
          WdLogEvent5_WdEvent(v34);
        }
        if ( P != v44 && P )
          ExFreePoolWithTag(P, 0);
        return (unsigned int)v9;
      }
    }
  }
LABEL_41:
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&P);
  return 3221225495LL;
}
