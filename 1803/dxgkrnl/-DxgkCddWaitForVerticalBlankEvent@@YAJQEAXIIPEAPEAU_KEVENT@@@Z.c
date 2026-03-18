/*
 * XREFs of ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z @ 0x1C00AA660
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C0015A44 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00F4D30 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01512D8 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddWaitForVerticalBlankEvent(unsigned int *a1, unsigned int a2, __int64 a3, PVOID *a4)
{
  ULONG v4; // r13d
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  struct DXGADAPTER *v9; // rdi
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdi
  char v13; // r12
  char v14; // r14
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rcx
  PVOID *v19; // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned int v22; // edi
  struct DXGADAPTER *v23; // rcx
  DXGADAPTER *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rbx
  __int64 v51; // rax
  _QWORD *v52; // rax
  _BYTE v53[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct _KTHREAD **v54[2]; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTER *v55; // [rsp+68h] [rbp-98h]
  char v56; // [rsp+70h] [rbp-90h]
  struct _KTHREAD **v57[2]; // [rsp+78h] [rbp-88h] BYREF
  struct DXGADAPTER *v58; // [rsp+88h] [rbp-78h]
  char v59; // [rsp+90h] [rbp-70h]
  int v60; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v61; // [rsp+A8h] [rbp-58h]
  PVOID *__attribute__((__org_arrdim(0,0))) Object; // [rsp+B0h] [rbp-50h]
  union _LARGE_INTEGER Timeout; // [rsp+B8h] [rbp-48h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+C0h] [rbp-40h] BYREF

  v61 = 0LL;
  v4 = a3;
  Object = a4;
  v6 = a2;
  v60 = 3015;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3015);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v60, 3015);
  if ( !a1 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v28 + 24) = 7046LL;
    WdLogEvent5_WdAssertion(v28);
  }
  v8 = *((_QWORD *)a1 + 307);
  if ( !v8 )
  {
    v30 = -1073741637LL;
    goto LABEL_68;
  }
  if ( (unsigned int)v6 >= *(_DWORD *)(v8 + 80) )
  {
    v29 = WdLogNewEntry5_WdError(v7);
    v30 = -1073741811LL;
    *(_QWORD *)(v29 + 24) = v6;
    *(_QWORD *)(v29 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v29);
LABEL_68:
    v52 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v52[3] = a1;
    v52[4] = v6;
    v52[5] = v30;
    WdLogEvent5_WdError(v52);
    v22 = -1073740759;
    goto LABEL_49;
  }
  _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
  v9 = (struct DXGADAPTER *)a1;
  if ( !a1 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v31 + 24) = 2490LL;
    WdLogEvent5_WdAssertion(v31);
  }
  v55 = (DXGADAPTER *)a1;
  v56 = 0;
  if ( a1 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
    v9 = (struct DXGADAPTER *)a1;
    v54[1] = (struct _KTHREAD **)-1LL;
  }
  v58 = v9;
  v59 = 0;
  if ( a1 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
    v57[1] = (struct _KTHREAD **)-1LL;
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)a1 + 2), (struct DXGADAPTER *)a1);
  v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v53);
  if ( v10 < 0 )
    goto LABEL_56;
  v12 = *((_QWORD *)a1 + 307);
  if ( !v12 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v32 + 24) = 2504LL;
    WdLogEvent5_WdAssertion(v32);
    v12 = *((_QWORD *)a1 + 307);
  }
  v13 = 0;
  v14 = 0;
  if ( !v12 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v33 + 24) = 8641LL;
    WdLogEvent5_WdAssertion(v33);
    v12 = *((_QWORD *)a1 + 307);
    if ( !v12 )
      goto LABEL_55;
  }
  if ( (unsigned int)v6 >= *(_DWORD *)(v12 + 80) )
  {
    v34 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v34 + 24) = 5429LL;
    WdLogEvent5_WdAssertion(v34);
  }
  if ( !*(_BYTE *)(*(_QWORD *)(v12 + 112) + 3760 * v6 + 720) )
  {
LABEL_55:
    v10 = -1073740759;
LABEL_56:
    v22 = v10;
    goto LABEL_39;
  }
  if ( !*((_QWORD *)a1 + 308) )
  {
    ADAPTER_DISPLAY::ControlVSyncAdapter(*((ADAPTER_DISPLAY **)a1 + 307), v6);
    goto LABEL_23;
  }
  _InterlockedIncrement((volatile signed __int32 *)a1 + 622);
  v13 = 1;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 308) + 520LL) + 8LL)
                                                          + 552LL))(
          *(_QWORD *)(*((_QWORD *)a1 + 308) + 528LL),
          (unsigned int)v6) )
  {
    LOBYTE(v16) = 1;
    if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 308) + 520LL) + 8LL)
                                                         + 560LL))(
           *(_QWORD *)(*((_QWORD *)a1 + 308) + 528LL),
           1LL,
           v16) >= 0 )
    {
      v14 = 1;
      goto LABEL_23;
    }
    DXGADAPTER::DecrementVSyncWaiter((DXGADAPTER *)a1);
    v36 = WdLogNewEntry5_WdError(v35);
    *(_QWORD *)(v36 + 24) = 2546LL;
    WdLogEvent5_WdError(v36);
    goto LABEL_55;
  }
LABEL_23:
  if ( v55 != v58 )
    COREACCESS::Release(v57);
  if ( !v56 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15);
    v37[5] = v54;
    v37[3] = 275LL;
    v37[4] = 4LL;
    v37[6] = 0LL;
    v37[7] = 0LL;
    WdLogEvent5_WdCriticalError(v37);
  }
  v56 = 0;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v55 + 20) )
    DXGADAPTER::ReleaseCoreResource(v55);
  v17 = *((_QWORD *)a1 + 307);
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v17 + 16)) )
  {
    v38 = WdLogNewEntry5_WdAssertion(v18);
    *(_QWORD *)(v38 + 24) = 6344LL;
    WdLogEvent5_WdAssertion(v38);
  }
  if ( v4 - 1 > 8 )
  {
    v39 = WdLogNewEntry5_WdError(v18);
    v22 = -1073741811;
    *(_QWORD *)(v39 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v39);
  }
  else
  {
    v19 = Object;
    v20 = *(_QWORD *)(v17 + 112) + 912LL;
    Timeout.QuadPart = -800000LL;
    *Object = (PVOID)(3760 * v6 + v20);
    v22 = KeWaitForMultipleObjects(v4, v19, WaitAny, Executive, 0, 0, &Timeout, &WaitBlockArray);
  }
  if ( v13 )
  {
    if ( !*((_QWORD *)a1 + 308) )
    {
      v40 = WdLogNewEntry5_WdAssertion(v21);
      *(_QWORD *)(v40 + 24) = 2579LL;
      WdLogEvent5_WdAssertion(v40);
    }
    if ( _InterlockedDecrement((volatile signed __int32 *)a1 + 622) < 0 )
    {
      v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21);
      v41[5] = a1;
      v41[3] = 275LL;
      v41[4] = 37LL;
      v42 = a1[622];
      v41[7] = 0LL;
      v41[6] = v42;
      WdLogEvent5_WdCriticalError(v41);
    }
  }
  if ( !v14 )
    goto LABEL_39;
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v53) < 0 )
  {
    v51 = WdLogNewEntry5_WdWarning(v44, v43, v45);
    *(_QWORD *)(v51 + 24) = 2605LL;
    goto LABEL_66;
  }
  v46 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 308) + 520LL) + 8LL)
                                                   + 560LL))(
          *(_QWORD *)(*((_QWORD *)a1 + 308) + 528LL),
          1LL);
  v50 = v46;
  if ( v46 < 0 )
  {
    v51 = WdLogNewEntry5_WdWarning(v48, v47, v49);
    *(_QWORD *)(v51 + 24) = v50;
LABEL_66:
    WdLogEvent5_WdWarning(v51);
  }
LABEL_39:
  v23 = v58;
  if ( v58 )
  {
    if ( v59 )
    {
      COREACCESS::Release(v57);
      v23 = v58;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v23 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v23 + 2), v23);
  }
  v24 = v55;
  if ( v55 )
  {
    if ( v56 )
    {
      COREACCESS::Release(v54);
      v24 = v55;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v24 + 2), v24);
  }
LABEL_49:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v60);
  return v22;
}
