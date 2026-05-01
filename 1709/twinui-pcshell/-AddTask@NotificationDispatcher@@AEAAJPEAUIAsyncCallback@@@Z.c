/*
 * XREFs of ?AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z @ 0x18007DAA8
 * Callers:
 *     NotificationDispatcher::RunAsync__lambda_794533bae2653f5a8c11b3eb7b48e533___ @ 0x180077D4C (NotificationDispatcher--RunAsync__lambda_794533bae2653f5a8c11b3eb7b48e533___.c)
 *     NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___ @ 0x18007CBC0 (NotificationDispatcher--RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$CTSimpleArray@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@PEA_K@Z @ 0x180045CA4 (-Add@-$CTSimpleArray@V-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall NotificationDispatcher::AddTask(NotificationDispatcher *this, struct IAsyncCallback *a2)
{
  RTL_SRWLOCK *v4; // rdi
  int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IAsyncCallback *v8; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v9; // [rsp+50h] [rbp+18h]

  v4 = (RTL_SRWLOCK *)((char *)this + 88);
  AcquireSRWLockExclusive((PSRWLOCK)this + 11);
  v9 = v4;
  if ( *((_QWORD *)this + 6) )
  {
    v8 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = CTSimpleArray<Microsoft::WRL::ComPtr<IAsyncCallback>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAsyncCallback>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAsyncCallback>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAsyncCallback>>>::Add(
           (__int64)this + 56,
           &v8,
           0LL);
    if ( v8 )
      (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v5 >= 0 )
    {
      PostMessageW(*((HWND *)this + 6), 0x401u, 0LL, 0LL);
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x6A,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
        (const char *)(unsigned int)v5);
    }
  }
  else
  {
    v5 = -2147467260;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x69,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
      (const char *)0x80004004LL);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return (unsigned int)v5;
}
