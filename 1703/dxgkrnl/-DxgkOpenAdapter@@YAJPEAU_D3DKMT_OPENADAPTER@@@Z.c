/*
 * XREFs of ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C008C590
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00061C0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C0006C7C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0087F50 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     DpiGetDxgAdapterSafe @ 0x1C008C920 (DpiGetDxgAdapterSafe.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkOpenAdapter(struct _D3DKMT_OPENADAPTER *a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  int DxgAdapterSafe; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  DXGADAPTER *v13; // rsi
  DXGADAPTER *v14; // rbx
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  DXGADAPTER *v19; // rbp
  __int64 v20; // r13
  __int64 v21; // r14
  __int64 v22; // rcx
  __int64 v23; // r15
  __int64 v24; // rcx
  __int64 v25; // r8
  DXGADAPTER *v26; // rdx
  unsigned int v27; // eax
  unsigned int v28; // r13d
  __int64 v29; // rbp
  int v30; // r14d
  __int64 v31; // r15
  _QWORD *v32; // rbx
  _QWORD *PoolWithTag; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  _QWORD *v38; // r14
  __int64 v39; // rbp
  _QWORD *v40; // rax
  int v41; // edi
  signed __int64 v42; // rax
  DXGADAPTER *v43; // rbp
  __int64 *ThreadProperty; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // r9d
  __int64 v51; // rax
  __int64 v52; // [rsp+30h] [rbp-58h]
  char *v53; // [rsp+38h] [rbp-50h]
  char v54[16]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v55; // [rsp+A0h] [rbp+18h]
  DXGADAPTER *v56; // [rsp+A8h] [rbp+20h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2001);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  v9 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v9 = *ThreadProperty;
    }
  }
  if ( !v9 )
  {
    v46 = WdLogNewEntry5_WdError(v8, v7);
    v41 = -1073741811;
    *(_QWORD *)(v46 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v46);
    goto LABEL_32;
  }
  DxgAdapterSafe = DpiGetDxgAdapterSafe(*(_QWORD *)a1, &v56, v54);
  if ( DxgAdapterSafe < 0 )
  {
    v41 = DxgAdapterSafe;
    goto LABEL_32;
  }
  v13 = v56;
  _InterlockedIncrement64((volatile signed __int64 *)v56 + 3);
  KeEnterCriticalRegion();
  v14 = v56;
  v53 = (char *)v56 + 120;
  ExAcquirePushLockSharedEx((char *)v56 + 120, 0LL);
  if ( *((_DWORD *)v14 + 44) != 1
    || (v19 = v56, *((_BYTE *)v56 + 2205))
    || (v16 = (_QWORD *)*((_QWORD *)v56 + 286)) == 0LL
    || *(_BYTE *)(v16[2] + 186LL) )
  {
LABEL_13:
    if ( *((_DWORD *)v14 + 44) != 1 )
    {
      v49 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
      v41 = -1073741130;
      *(_QWORD *)(v49 + 24) = v56;
      *(_QWORD *)(v49 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v49);
      goto LABEL_26;
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v9 + 168, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v50 = *(_DWORD *)(v9 + 184);
        if ( v50 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v24, &EventBlockThread, v25, v50);
      }
      ExAcquirePushLockExclusiveEx(v9 + 168, 0LL);
    }
    v26 = v56;
    *(_QWORD *)(v9 + 176) = KeGetCurrentThread();
    v27 = HMGRTABLE::AllocHandle((unsigned int *)(v9 + 192), (__int64)v26, 1LL, 0LL, 0);
    *(_QWORD *)(v9 + 176) = 0LL;
    v28 = v27;
    ExReleasePushLockExclusiveEx(v9 + 168, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedIncrement64((volatile signed __int64 *)v13 + 3);
    if ( !v28 )
    {
      DXGADAPTER::ReleaseReferenceNoTracking(v56);
      v41 = -1073741801;
      goto LABEL_26;
    }
    v29 = *((_QWORD *)v56 + 286);
    if ( !v29 )
    {
LABEL_25:
      v55 = v28;
      v41 = 0;
LABEL_26:
      v42 = _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v43 = v56;
      if ( v42 == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v56 + 2), v56);
      if ( v41 >= 0 )
      {
        v41 = 0;
        *((_DWORD *)a1 + 2) = v55;
        *(_QWORD *)((char *)a1 + 12) = *(_QWORD *)((char *)v43 + 268);
      }
      goto LABEL_30;
    }
    v30 = 0;
    v31 = v29 + 56;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v29 + 56, 0LL);
    *(_QWORD *)(v29 + 64) = KeGetCurrentThread();
    v32 = *(_QWORD **)(8LL * *(unsigned int *)(*(_QWORD *)(v29 + 16) + 200LL) + *(_QWORD *)(v9 + 40));
    v52 = 8LL * *(unsigned int *)(*(_QWORD *)(v29 + 16) + 200LL);
    if ( !v32 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x4B677844u);
      v32 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v30 = -1073741801;
LABEL_24:
        *(_QWORD *)(v31 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v31, 0LL);
        KeLeaveCriticalRegion();
        if ( v30 < 0 )
        {
          DXGPROCESS::FreeHandleSafe((DXGPROCESS *)v9, v28);
          DXGADAPTER::ReleaseReferenceNoTracking(v56);
          v41 = v30;
          goto LABEL_26;
        }
        goto LABEL_25;
      }
      memset(PoolWithTag, 0, 0x48uLL);
      v32[4] = v9;
      v32[1] = 0LL;
      v38 = v32 + 6;
      v32[2] = 0LL;
      v32[3] = 0LL;
      *((_WORD *)v32 + 32) = 0;
      v32[5] = v29;
      if ( *(struct _KTHREAD **)(v29 + 64) != KeGetCurrentThread() )
      {
        v51 = WdLogNewEntry5_WdAssertion(v35, v34, v36, v37);
        *(_QWORD *)(v51 + 24) = 3545LL;
        WdLogEvent5_WdAssertion(v51);
      }
      v39 = v29 + 240;
      v40 = *(_QWORD **)(v39 + 8);
      if ( *v40 != v39 )
        __fastfail(3u);
      *v38 = v39;
      v32[7] = v40;
      *v40 = v38;
      *(_QWORD *)(v39 + 8) = v38;
      v30 = 0;
      *(_QWORD *)(v52 + *(_QWORD *)(v9 + 40)) = v32;
    }
    ++*((_DWORD *)v32 + 6);
    goto LABEL_24;
  }
  v20 = v16[52];
  v21 = v16[51];
  v22 = *(_QWORD *)(v9 + 64);
  if ( v22 )
  {
    v23 = *(_QWORD *)(v22 + 8LL * (unsigned int)(*(_DWORD *)v21 - 1) + 16);
    if ( v23 )
      goto LABEL_12;
  }
  else
  {
    v23 = 0LL;
  }
  v47 = WdLogNewEntry5_WdAssertion(v22, v15, v17, v18);
  *(_QWORD *)(v47 + 24) = 873LL;
  WdLogEvent5_WdAssertion(v47);
LABEL_12:
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v21 + 8) + 736LL))(v20, v23) )
    goto LABEL_13;
  v48 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v48 + 24) = v19;
  *(_QWORD *)(v48 + 32) = v9;
  WdLogEvent5_WdEvent(v48);
  DXGADAPTER::ReleaseReference(v19);
  v41 = -1073741790;
LABEL_30:
  ExReleasePushLockSharedEx(v53, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v56 + 2), v56);
LABEL_32:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v11, &EventProfilerExit, v12, 2001);
  return (unsigned int)v41;
}
