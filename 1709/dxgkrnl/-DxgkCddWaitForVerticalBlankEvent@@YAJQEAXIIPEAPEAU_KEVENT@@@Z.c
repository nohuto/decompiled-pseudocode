/*
 * XREFs of ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z @ 0x1C00EEB00
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C00020FC (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0084890 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00AC14C (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddWaitForVerticalBlankEvent(unsigned int *a1, unsigned int a2, __int64 a3, PVOID *a4)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  char v10; // r12
  char v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r8
  PVOID *v19; // rdx
  __int64 v20; // rdx
  unsigned int v21; // r15d
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rax
  ULONG Count; // [rsp+50h] [rbp-B8h]
  _BYTE v48[8]; // [rsp+58h] [rbp-B0h] BYREF
  DXGADAPTER *v49[2]; // [rsp+60h] [rbp-A8h] BYREF
  DXGADAPTER *v50; // [rsp+70h] [rbp-98h]
  char v51; // [rsp+78h] [rbp-90h]
  _BYTE v52[8]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v53; // [rsp+88h] [rbp-80h]
  struct DXGADAPTER *v54; // [rsp+90h] [rbp-78h]
  char v55; // [rsp+98h] [rbp-70h]
  PVOID *__attribute__((__org_arrdim(0,0))) Object; // [rsp+B0h] [rbp-58h]
  union _LARGE_INTEGER Timeout; // [rsp+B8h] [rbp-50h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+C8h] [rbp-40h] BYREF

  v5 = a2;
  Object = a4;
  Count = a3;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3015);
  if ( !a1 )
  {
    v23 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v23 + 24) = 6305LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v6 = *((_QWORD *)a1 + 288);
  if ( !v6 )
  {
    v25 = -1073741637LL;
    goto LABEL_80;
  }
  if ( (unsigned int)v5 >= *(_DWORD *)(v6 + 80) )
  {
    v24 = WdLogNewEntry5_WdError(a1);
    v25 = -1073741811LL;
    *(_QWORD *)(v24 + 24) = v5;
    *(_QWORD *)(v24 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v24);
LABEL_80:
    v46 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v46[3] = a1;
    v46[4] = v5;
    v46[5] = v25;
    WdLogEvent5_WdError(v46);
    v21 = -1073740759;
    goto LABEL_55;
  }
  _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
  if ( !a1 )
  {
    v26 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v26 + 24) = 2437LL;
    WdLogEvent5_WdAssertion(v26);
  }
  v50 = (DXGADAPTER *)a1;
  v51 = 0;
  if ( a1 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
    v49[1] = (DXGADAPTER *)-1LL;
  }
  v54 = (struct DXGADAPTER *)a1;
  v55 = 0;
  if ( a1 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
    v53 = -1LL;
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)a1 + 2), (struct DXGADAPTER *)a1);
  v7 = (__int64)v50;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v50 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v50 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v8, &EventBlockThread, v9, 72);
      KeWaitForSingleObject((char *)v50 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v50);
    v7 = (__int64)v50;
  }
  v51 = 1;
  if ( *(_DWORD *)(v7 + 176) != 1 )
    goto LABEL_67;
  if ( v50 == v54 || (COREACCESS::AcquireShared((COREACCESS *)v52), v7 = *((unsigned int *)v54 + 44), (_DWORD)v7 == 1) )
  {
    if ( !*((_QWORD *)a1 + 288) )
    {
      v28 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v28 + 24) = 2451LL;
      WdLogEvent5_WdAssertion(v28);
    }
    v10 = 0;
    v11 = 0;
    if ( !*((_QWORD *)a1 + 288) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v29 + 24) = 8208LL;
      WdLogEvent5_WdAssertion(v29);
    }
    v12 = *((_QWORD *)a1 + 288);
    if ( v12 )
    {
      if ( (unsigned int)v5 >= *(_DWORD *)(v12 + 80) )
      {
        v30 = WdLogNewEntry5_WdAssertion(v7);
        *(_QWORD *)(v30 + 24) = 5083LL;
        WdLogEvent5_WdAssertion(v30);
      }
      if ( *(_BYTE *)(*(_QWORD *)(v12 + 112) + 3760 * v5 + 720) )
      {
        if ( !*((_QWORD *)a1 + 289) )
        {
          ADAPTER_DISPLAY::ControlVSyncAdapter(*((ADAPTER_DISPLAY **)a1 + 288), v5);
          goto LABEL_29;
        }
        _InterlockedIncrement((volatile signed __int32 *)a1 + 584);
        v10 = 1;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 289) + 504LL)
                                                                           + 8LL)
                                                               + 456LL))(
               *(_QWORD *)(*((_QWORD *)a1 + 289) + 512LL),
               (unsigned int)v5) )
        {
LABEL_29:
          if ( v50 != v54 )
            COREACCESS::Release((COREACCESS *)v52);
          if ( !v51 )
          {
            v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v13, v15);
            v33[5] = v49;
            v33[3] = 275LL;
            v33[4] = 4LL;
            v33[6] = 0LL;
            v33[7] = 0LL;
            WdLogEvent5_WdCriticalError(v33);
          }
          v51 = 0;
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v50 + 20) )
            DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v50);
          v16 = *((_QWORD *)a1 + 288);
          v17 = *(_QWORD *)(v16 + 16);
          if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v17 + 160)
            || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v17 + 144)) )
          {
            v34 = WdLogNewEntry5_WdAssertion(v17);
            *(_QWORD *)(v34 + 24) = 6330LL;
            WdLogEvent5_WdAssertion(v34);
          }
          if ( Count - 1 > 8 )
          {
            v35 = WdLogNewEntry5_WdError(Count);
            v21 = -1073741811;
            *(_QWORD *)(v35 + 24) = -1073741811LL;
            WdLogEvent5_WdError(v35);
          }
          else
          {
            v18 = *(_QWORD *)(v16 + 112) + 912LL;
            Timeout.QuadPart = -800000LL;
            v19 = Object;
            *Object = (PVOID)(3760 * v5 + v18);
            v21 = KeWaitForMultipleObjects(Count, v19, WaitAny, Executive, 0, 0, &Timeout, &WaitBlockArray);
          }
          if ( v10 )
          {
            if ( !*((_QWORD *)a1 + 289) )
            {
              v36 = WdLogNewEntry5_WdAssertion(v7);
              *(_QWORD *)(v36 + 24) = 2526LL;
              WdLogEvent5_WdAssertion(v36);
            }
            if ( _InterlockedDecrement((volatile signed __int32 *)a1 + 584) < 0 )
            {
              v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v20, a3);
              v37[5] = a1;
              v37[3] = 275LL;
              v37[4] = 28LL;
              v37[6] = a1[584];
              v37[7] = 0LL;
              WdLogEvent5_WdCriticalError(v37);
            }
          }
          if ( v11 )
          {
            if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v48) < 0 )
            {
              v45 = WdLogNewEntry5_WdWarning(v39, v38, v40);
              *(_QWORD *)(v45 + 24) = 2552LL;
              WdLogEvent5_WdWarning(v45);
            }
            else
            {
              v41 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 289) + 504LL)
                                                                           + 8LL)
                                                               + 464LL))(
                      *(_QWORD *)(*((_QWORD *)a1 + 289) + 512LL),
                      1LL);
              v43 = v41;
              if ( v41 < 0 )
              {
                v44 = WdLogNewEntry5_WdWarning(v7, v42, a3);
                *(_QWORD *)(v44 + 24) = v43;
                WdLogEvent5_WdWarning(v44);
              }
            }
          }
          goto LABEL_45;
        }
        LOBYTE(v15) = 1;
        if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 289) + 504LL)
                                                                         + 8LL)
                                                             + 464LL))(
               *(_QWORD *)(*((_QWORD *)a1 + 289) + 512LL),
               1LL,
               v15) >= 0 )
        {
          v11 = 1;
          goto LABEL_29;
        }
        DXGADAPTER::DecrementVSyncWaiter((DXGADAPTER *)a1);
        v32 = WdLogNewEntry5_WdError(v31);
        *(_QWORD *)(v32 + 24) = 2493LL;
        WdLogEvent5_WdError(v32);
      }
    }
    v27 = -1073740759;
    goto LABEL_71;
  }
  COREACCESS::Release((COREACCESS *)v52);
LABEL_67:
  COREACCESS::Release((COREACCESS *)v49);
  v27 = -1073741130;
LABEL_71:
  v21 = v27;
LABEL_45:
  if ( v54 )
  {
    if ( v55 )
      COREACCESS::Release((COREACCESS *)v52);
    v7 = (__int64)v54;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v7 + 16), (struct DXGADAPTER *)v7);
  }
  if ( v50 )
  {
    if ( v51 )
      COREACCESS::Release((COREACCESS *)v49);
    v7 = (__int64)v50;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v7 + 16), (struct DXGADAPTER *)v7);
  }
LABEL_55:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v7, &EventProfilerExit, a3, 3015);
  return v21;
}
