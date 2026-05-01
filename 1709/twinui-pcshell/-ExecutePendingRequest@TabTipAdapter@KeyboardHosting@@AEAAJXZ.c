/*
 * XREFs of ?ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1801A4018
 * Callers:
 *     ?OnCoreKeyboardClientRegistered@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerCoreKeyboardClientRegisteredEventArgs@45678@@Z @ 0x1801A4010 (-OnCoreKeyboardClientRegistered@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Cor.c)
 *     ?OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1801A46A8 (-OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x1801A5518 (-OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::ExecutePendingRequest(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  PVOID Ptr; // xmm0_8
  unsigned int v4; // esi
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = this + 35;
  AcquireSRWLockExclusive(this + 35);
  Ptr = this[31].Ptr;
  v4 = (unsigned int)this[32].Ptr;
  LOWORD(this[31].Ptr) = 0;
  HIDWORD(this[31].Ptr) = 0;
  LODWORD(this[32].Ptr) = 0;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
  if ( (_BYTE)Ptr )
  {
    if ( BYTE1(Ptr) )
    {
      v5 = KeyboardHosting::TabTipAdapter::OnShellHotKey(this, v4);
      if ( v5 < 0 )
      {
        v6 = 525LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v6,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v5);
        return (unsigned int)v5;
      }
    }
    else
    {
      v5 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, _QWORD))this[1].Ptr + 4))(this + 1, HIDWORD(Ptr));
      if ( v5 < 0 )
      {
        v6 = 529LL;
        goto LABEL_7;
      }
    }
  }
  return 0LL;
}
