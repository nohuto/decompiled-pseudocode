/*
 * XREFs of ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C00FB500
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C0002C08 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C007A79C (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     DpiGetDxgAdapterSafe @ 0x1C00FB894 (DpiGetDxgAdapterSafe.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkOpenAdapter(struct _D3DKMT_OPENADAPTER *a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  int DxgAdapterSafe; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  DXGADAPTER *v12; // rsi
  DXGADAPTER *v13; // rbx
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // r8
  DXGADAPTER *v17; // rbp
  __int64 v18; // r13
  __int64 v19; // r14
  __int64 v20; // rcx
  __int64 v21; // r12
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r8
  DXGADAPTER *v25; // rdx
  unsigned int v26; // eax
  unsigned int v27; // r12d
  __int64 v28; // rbp
  int v29; // r14d
  __int64 v30; // r13
  _QWORD *v31; // rbx
  _QWORD *PoolWithTag; // rax
  __int64 v33; // rcx
  _QWORD *v34; // r14
  __int64 v35; // rbp
  _QWORD *v36; // rax
  int v37; // edi
  signed __int64 v38; // rax
  DXGADAPTER *v39; // rbp
  __int64 *ThreadProperty; // rax
  __int64 *v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // r9d
  __int64 v48; // rax
  __int64 v49; // [rsp+30h] [rbp-58h]
  char *v50; // [rsp+38h] [rbp-50h]
  char v51[16]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v52; // [rsp+A0h] [rbp+18h]
  DXGADAPTER *v53; // [rsp+A8h] [rbp+20h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2001);
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  v8 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v42 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v8 = *v42;
      }
    }
  }
  if ( !v8 )
  {
    v43 = WdLogNewEntry5_WdError(v7);
    v37 = -1073741811;
    *(_QWORD *)(v43 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v43);
    goto LABEL_32;
  }
  DxgAdapterSafe = DpiGetDxgAdapterSafe(*(_QWORD *)a1, &v53, v51);
  if ( DxgAdapterSafe < 0 )
  {
    v37 = DxgAdapterSafe;
    goto LABEL_32;
  }
  v12 = v53;
  _InterlockedIncrement64((volatile signed __int64 *)v53 + 3);
  KeEnterCriticalRegion();
  v13 = v53;
  v50 = (char *)v53 + 120;
  ExAcquirePushLockSharedEx((char *)v53 + 120, 0LL);
  if ( *((_DWORD *)v13 + 44) != 1
    || (v17 = v53, *((_BYTE *)v53 + 2229))
    || (v15 = (_QWORD *)*((_QWORD *)v53 + 289)) == 0LL
    || *(_BYTE *)(v15[2] + 185LL) )
  {
LABEL_13:
    if ( *((_DWORD *)v13 + 44) != 1 )
    {
      v46 = WdLogNewEntry5_WdWarning(v15, v14, v16);
      v37 = -1073741130;
      *(_QWORD *)(v46 + 24) = v53;
      *(_QWORD *)(v46 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v46);
      goto LABEL_26;
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v8 + 200, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v47 = *(_DWORD *)(v8 + 216);
        if ( v47 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v23, &EventBlockThread, v24, v47);
      }
      ExAcquirePushLockExclusiveEx(v8 + 200, 0LL);
    }
    v25 = v53;
    *(_QWORD *)(v8 + 208) = KeGetCurrentThread();
    v26 = HMGRTABLE::AllocHandle((unsigned int *)(v8 + 224), (__int64)v25, 1, 0, 0);
    *(_QWORD *)(v8 + 208) = 0LL;
    v27 = v26;
    ExReleasePushLockExclusiveEx(v8 + 200, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedIncrement64((volatile signed __int64 *)v12 + 3);
    if ( !v27 )
    {
      DXGADAPTER::ReleaseReferenceNoTracking(v53);
      v37 = -1073741801;
      goto LABEL_26;
    }
    v28 = *((_QWORD *)v53 + 289);
    if ( !v28 )
    {
LABEL_25:
      v52 = v27;
      v37 = 0;
LABEL_26:
      v38 = _InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v39 = v53;
      if ( v38 == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v53 + 2), v53);
      if ( v37 >= 0 )
      {
        v37 = 0;
        *((_DWORD *)a1 + 2) = v52;
        *(_QWORD *)((char *)a1 + 12) = *(_QWORD *)((char *)v39 + 268);
      }
      goto LABEL_30;
    }
    v29 = 0;
    v30 = v28 + 56;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v28 + 56, 0LL);
    *(_QWORD *)(v28 + 64) = KeGetCurrentThread();
    v31 = *(_QWORD **)(8LL * *(unsigned int *)(*(_QWORD *)(v28 + 16) + 200LL) + *(_QWORD *)(v8 + 40));
    v49 = 8LL * *(unsigned int *)(*(_QWORD *)(v28 + 16) + 200LL);
    if ( !v31 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x4B677844u);
      v31 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v29 = -1073741801;
LABEL_24:
        *(_QWORD *)(v30 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v30, 0LL);
        KeLeaveCriticalRegion();
        if ( v29 < 0 )
        {
          DXGPROCESS::FreeHandleSafe((DXGPROCESS *)v8, v27);
          DXGADAPTER::ReleaseReferenceNoTracking(v53);
          v37 = v29;
          goto LABEL_26;
        }
        goto LABEL_25;
      }
      memset(PoolWithTag, 0, 0x50uLL);
      v31[4] = v8;
      v31[1] = 0LL;
      v34 = v31 + 7;
      v31[2] = 0LL;
      v31[3] = 0LL;
      v31[5] = 0LL;
      *((_WORD *)v31 + 36) = 0;
      v31[6] = v28;
      if ( *(struct _KTHREAD **)(v28 + 64) != KeGetCurrentThread() )
      {
        v48 = WdLogNewEntry5_WdAssertion(v33);
        *(_QWORD *)(v48 + 24) = 3668LL;
        WdLogEvent5_WdAssertion(v48);
      }
      v35 = v28 + 240;
      v36 = *(_QWORD **)(v35 + 8);
      if ( *v36 != v35 )
        __fastfail(3u);
      *v34 = v35;
      v31[8] = v36;
      *v36 = v34;
      *(_QWORD *)(v35 + 8) = v34;
      v29 = 0;
      *(_QWORD *)(v49 + *(_QWORD *)(v8 + 40)) = v31;
    }
    ++*((_DWORD *)v31 + 6);
    goto LABEL_24;
  }
  v18 = v15[64];
  v19 = v15[63];
  v20 = *(_QWORD *)(v8 + 64);
  if ( v20 )
  {
    v21 = *(_QWORD *)(v20 + 8LL * (unsigned int)(*(_DWORD *)v19 - 1) + 16);
    if ( v21 )
      goto LABEL_12;
  }
  else
  {
    v21 = 0LL;
  }
  v44 = WdLogNewEntry5_WdAssertion(v20);
  *(_QWORD *)(v44 + 24) = 915LL;
  WdLogEvent5_WdAssertion(v44);
LABEL_12:
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v19 + 8) + 736LL))(v18, v21) )
    goto LABEL_13;
  v45 = WdLogNewEntry5_WdEvent(v15, v14, v16, v22);
  *(_QWORD *)(v45 + 24) = v17;
  *(_QWORD *)(v45 + 32) = v8;
  WdLogEvent5_WdEvent(v45);
  DXGADAPTER::ReleaseReferenceNoTracking(v17);
  v37 = -1073741790;
LABEL_30:
  ExReleasePushLockSharedEx(v50, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v53 + 2), v53);
LABEL_32:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v10, &EventProfilerExit, v11, 2001);
  return (unsigned int)v37;
}
