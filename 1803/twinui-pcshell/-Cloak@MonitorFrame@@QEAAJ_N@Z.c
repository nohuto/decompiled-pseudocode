/*
 * XREFs of ?Cloak@MonitorFrame@@QEAAJ_N@Z @ 0x1802097F8
 * Callers:
 *     _lambda_d4c350abf5d24183546902bae9e0768c_::operator() @ 0x180207E80 (_lambda_d4c350abf5d24183546902bae9e0768c_--operator().c)
 *     ?ViewLoaded@XamlAllUpViewHost@@UEAAJXZ @ 0x180210980 (-ViewLoaded@XamlAllUpViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MonitorFrame::Cloak(MonitorFrame *this, unsigned __int8 a2)
{
  __int64 v2; // rcx
  HWND v3; // rax
  HRESULT v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int pvAttribute; // [rsp+38h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 6);
  pvAttribute = a2;
  v3 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 40LL))(v2);
  v4 = DwmSetWindowAttribute(v3, 0xDu, &pvAttribute, 4u);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D,
    (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\monitorframe.h",
    (const char *)(unsigned int)v4);
  return v5;
}
