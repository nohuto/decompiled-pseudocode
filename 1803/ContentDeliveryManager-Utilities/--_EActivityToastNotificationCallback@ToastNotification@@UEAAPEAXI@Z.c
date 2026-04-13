/*
 * XREFs of ??_EActivityToastNotificationCallback@ToastNotification@@UEAAPEAXI@Z @ 0x18004FD90
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800032AC (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180016CE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

ToastNotification::ActivityToastNotificationCallback *__fastcall ToastNotification::ActivityToastNotificationCallback::`vector deleting destructor'(
        ToastNotification::ActivityToastNotificationCallback *this,
        char a2)
{
  void *v4; // rcx
  __int64 v5; // r8
  const char *v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (void *)*((_QWORD *)this + 10);
  if ( v4 && !CloseHandle(v4) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x879, v5, v6);
    JUMPOUT(0x18004FE19LL);
  }
  v7 = *((_QWORD *)this + 9);
  if ( v7 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWnfNameResolver>::Release((volatile signed __int32 *)(2 * v7));
  v8 = *((_QWORD *)this + 4);
  if ( v8 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
