/*
 * XREFs of ?ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180249038
 * Callers:
 *     ?OnCoreKeyboardClientRegistered@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerCoreKeyboardClientRegisteredEventArgs@45678@@Z @ 0x18024A370 (-OnCoreKeyboardClientRegistered@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Cor.c)
 *     ?OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x18024AA44 (-OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x18024B61C (-OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@@Z @ 0x18024BDAC (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::ExecutePendingRequest(KeyboardHosting::TabTipAdapter *this)
{
  RTL_SRWLOCK *v1; // rdi
  __int128 v3; // xmm0
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (RTL_SRWLOCK *)((char *)this + 336);
  AcquireSRWLockExclusive((PSRWLOCK)this + 42);
  v3 = *(_OWORD *)((char *)this + 300);
  *((_WORD *)this + 150) = 0;
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 77) = 6;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
  if ( (_BYTE)v3 )
  {
    if ( BYTE1(v3) )
    {
      v4 = KeyboardHosting::TabTipAdapter::OnShellRequestedStateChange(this, DWORD2(v3), DWORD1(v3));
      if ( v4 < 0 )
      {
        v5 = 718LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v5,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v4);
        return (unsigned int)v4;
      }
    }
    else
    {
      v4 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 1) + 32LL))((char *)this + 8, DWORD1(v3));
      if ( v4 < 0 )
      {
        v5 = 722LL;
        goto LABEL_7;
      }
    }
  }
  return 0LL;
}
