/*
 * XREFs of ?AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z @ 0x18007ADC8
 * Callers:
 *     NotificationDispatcher::RunAsync__lambda_fd54a0dac248e9cf9b99375b3d19bed2___ @ 0x180075078 (NotificationDispatcher--RunAsync__lambda_fd54a0dac248e9cf9b99375b3d19bed2___.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___::Run @ 0x18007A050 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Add@?$CTSimpleArray@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@PEA_K@Z @ 0x1800437C0 (-Add@-$CTSimpleArray@V-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall NotificationDispatcher::AddTask(NotificationDispatcher *this, struct IAsyncCallback *a2)
{
  int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IAsyncCallback *v7; // [rsp+40h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+18h] BYREF

  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)this + 9, &SRWLock);
  if ( *((_QWORD *)this + 4) )
  {
    v7 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = CTSimpleArray<Microsoft::WRL::ComPtr<IAsyncCallback>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAsyncCallback>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAsyncCallback>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAsyncCallback>>>::Add(
           (__int64)this + 40,
           &v7,
           0LL);
    if ( v7 )
      (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v4 >= 0 )
    {
      PostMessageW(*((HWND *)this + 4), 0x401u, 0LL, 0LL);
      v4 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x6A,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
        (const char *)(unsigned int)v4);
    }
  }
  else
  {
    v4 = -2147467260;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x69,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
      (const char *)0x80004004LL);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return (unsigned int)v4;
}
