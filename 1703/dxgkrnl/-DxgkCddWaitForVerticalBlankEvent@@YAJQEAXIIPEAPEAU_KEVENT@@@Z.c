/*
 * XREFs of ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z @ 0x1C0095A50
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C0006C14 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00D3290 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0170294 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddWaitForVerticalBlankEvent(DXGADAPTER *this, __int64 a2, __int64 a3, PVOID *a4)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  char v10; // r15
  char v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // r8
  PVOID *v20; // rdx
  __int64 v21; // rdx
  NTSTATUS v22; // esi
  __int64 v23; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // r9
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  ULONG v50; // [rsp+48h] [rbp-C0h]
  _BYTE v51[8]; // [rsp+58h] [rbp-B0h] BYREF
  DXGADAPTER *v52[2]; // [rsp+60h] [rbp-A8h] BYREF
  DXGADAPTER *v53; // [rsp+70h] [rbp-98h]
  char v54; // [rsp+78h] [rbp-90h]
  _BYTE v55[8]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v56; // [rsp+88h] [rbp-80h]
  struct DXGADAPTER *v57; // [rsp+90h] [rbp-78h]
  char v58; // [rsp+98h] [rbp-70h]
  PVOID *__attribute__((__org_arrdim(0,0))) Object; // [rsp+B0h] [rbp-58h]
  union _LARGE_INTEGER Timeout; // [rsp+B8h] [rbp-50h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+C8h] [rbp-40h] BYREF

  v5 = (unsigned int)a2;
  Object = a4;
  v50 = a3;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 3015);
  if ( !this )
  {
    v25 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v25 + 24) = 5997LL;
    WdLogEvent5_WdAssertion(v25);
  }
  v6 = *((_QWORD *)this + 285);
  if ( !v6 )
  {
    v22 = -1073741637;
    goto LABEL_74;
  }
  if ( (unsigned int)v5 >= *(_DWORD *)(v6 + 80) )
  {
    v26 = WdLogNewEntry5_WdError(this, a2);
    v22 = -1073741811;
    *(_QWORD *)(v26 + 24) = v5;
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v26);
LABEL_74:
    v49 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v49[5] = v22;
    v49[3] = this;
    v49[4] = v5;
    WdLogEvent5_WdError(v49);
    goto LABEL_49;
  }
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  v53 = this;
  v54 = 0;
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  v57 = this;
  v52[1] = (DXGADAPTER *)-1LL;
  v58 = 0;
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  v56 = -1LL;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)this + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)this + 2), this);
  v7 = (__int64)v53;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v53 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v53 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v8, &EventBlockThread, v9, 72);
      KeWaitForSingleObject((char *)v53 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v53);
    v7 = (__int64)v53;
  }
  v54 = 1;
  if ( *(_DWORD *)(v7 + 176) != 1 )
    goto LABEL_60;
  if ( v53 == v57 || (COREACCESS::AcquireShared((COREACCESS *)v55), v7 = *((unsigned int *)v57 + 44), (_DWORD)v7 == 1) )
  {
    if ( !*((_QWORD *)this + 285) )
    {
      v28 = WdLogNewEntry5_WdAssertion(v7, a2, a3, a4);
      *(_QWORD *)(v28 + 24) = 2416LL;
      WdLogEvent5_WdAssertion(v28);
    }
    v10 = 0;
    v11 = 0;
    if ( !*((_QWORD *)this + 285) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v7, a2, a3, a4);
      *(_QWORD *)(v29 + 24) = 8198LL;
      WdLogEvent5_WdAssertion(v29);
    }
    v12 = *((_QWORD *)this + 285);
    if ( v12 )
    {
      if ( (unsigned int)v5 >= *(_DWORD *)(v12 + 80) )
      {
        v30 = WdLogNewEntry5_WdAssertion(v7, a2, a3, a4);
        *(_QWORD *)(v30 + 24) = 4896LL;
        WdLogEvent5_WdAssertion(v30);
      }
      if ( *(_BYTE *)(*(_QWORD *)(v12 + 112) + 3208 * v5 + 720) )
      {
        if ( !*((_QWORD *)this + 286) )
        {
          ADAPTER_DISPLAY::ControlVSyncAdapter(*((ADAPTER_DISPLAY **)this + 285), v5);
          goto LABEL_23;
        }
        _InterlockedIncrement((volatile signed __int32 *)this + 578);
        v10 = 1;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 286) + 408LL)
                                                                           + 8LL)
                                                               + 456LL))(
               *(_QWORD *)(*((_QWORD *)this + 286) + 416LL),
               (unsigned int)v5) )
        {
LABEL_23:
          if ( v53 != v57 )
            COREACCESS::Release((COREACCESS *)v55);
          if ( !v54 )
          {
            v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v13, v15);
            v34[5] = v52;
            v34[3] = 275LL;
            v34[4] = 4LL;
            v34[6] = 0LL;
            v34[7] = 0LL;
            WdLogEvent5_WdCriticalError(v34);
          }
          v54 = 0;
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v53 + 20) )
            DXGADAPTER::ReleaseCoreResource(v53);
          v17 = *((_QWORD *)this + 285);
          v18 = *(_QWORD *)(v17 + 16);
          if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v18 + 160)
            || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v18 + 144)) )
          {
            v35 = WdLogNewEntry5_WdAssertion(v18, v13, v15, v16);
            *(_QWORD *)(v35 + 24) = 5730LL;
            WdLogEvent5_WdAssertion(v35);
          }
          if ( v50 - 1 > 8 )
          {
            v36 = WdLogNewEntry5_WdError(v50, v13);
            v22 = -1073741811;
            *(_QWORD *)(v36 + 24) = -1073741811LL;
            WdLogEvent5_WdError(v36);
          }
          else
          {
            v19 = *(_QWORD *)(v17 + 112) + 872LL;
            Timeout.QuadPart = -800000LL;
            v20 = Object;
            *Object = (PVOID)(3208 * v5 + v19);
            v22 = KeWaitForMultipleObjects(v50, v20, WaitAny, Executive, 0, 0, &Timeout, &WaitBlockArray);
          }
          if ( v10 )
          {
            if ( !*((_QWORD *)this + 286) )
            {
              v37 = WdLogNewEntry5_WdAssertion(v7, v21, a3, v23);
              *(_QWORD *)(v37 + 24) = 2491LL;
              WdLogEvent5_WdAssertion(v37);
            }
            if ( _InterlockedDecrement((volatile signed __int32 *)this + 578) < 0 )
            {
              v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v21, a3);
              v38[3] = 275LL;
              v38[4] = 28LL;
              v38[5] = this;
              v38[6] = *((unsigned int *)this + 578);
              v38[7] = 0LL;
              WdLogEvent5_WdCriticalError(v38);
            }
          }
          if ( v11 )
          {
            if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v51) < 0 )
            {
              v48 = WdLogNewEntry5_WdWarning(v40, v39, v41, v42);
              *(_QWORD *)(v48 + 24) = 2517LL;
              WdLogEvent5_WdWarning(v48);
            }
            else
            {
              v43 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 286) + 408LL)
                                                                           + 8LL)
                                                               + 464LL))(
                      *(_QWORD *)(*((_QWORD *)this + 286) + 416LL),
                      1LL);
              v46 = v43;
              if ( v43 < 0 )
              {
                v47 = WdLogNewEntry5_WdWarning(v7, v44, a3, v45);
                *(_QWORD *)(v47 + 24) = v46;
                WdLogEvent5_WdWarning(v47);
              }
            }
          }
          goto LABEL_39;
        }
        LOBYTE(v15) = 1;
        if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 286) + 408LL)
                                                                         + 8LL)
                                                             + 464LL))(
               *(_QWORD *)(*((_QWORD *)this + 286) + 416LL),
               1LL,
               v15) >= 0 )
        {
          v11 = 1;
          goto LABEL_23;
        }
        DXGADAPTER::DecrementVSyncWaiter(this);
        v33 = WdLogNewEntry5_WdError(v32, v31);
        *(_QWORD *)(v33 + 24) = 2458LL;
        WdLogEvent5_WdError(v33);
      }
    }
    v27 = -1073740759;
    goto LABEL_64;
  }
  COREACCESS::Release((COREACCESS *)v55);
LABEL_60:
  COREACCESS::Release((COREACCESS *)v52);
  v27 = -1073741130;
LABEL_64:
  v22 = v27;
LABEL_39:
  if ( v57 )
  {
    if ( v58 )
      COREACCESS::Release((COREACCESS *)v55);
    v7 = (__int64)v57;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v57 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v7 + 16), (struct DXGADAPTER *)v7);
  }
  if ( v53 )
  {
    if ( v54 )
      COREACCESS::Release((COREACCESS *)v52);
    v7 = (__int64)v53;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v7 + 16), (struct DXGADAPTER *)v7);
  }
LABEL_49:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v7, &EventProfilerExit, a3, 3015);
  return (unsigned int)v22;
}
