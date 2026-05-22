/*
 * XREFs of ?OnSelect@SpeechRuntimeListener@@AEAAJXZ @ 0x180068B88
 * Callers:
 *     ?OnMessageCallbackStatic@SpeechRuntimeListener@@CAJPEAXPEBXH@Z @ 0x180068EC0 (-OnMessageCallbackStatic@SpeechRuntimeListener@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEAUInputInfo@@_N@Z @ 0x180067D8C (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z @ 0x180068AB8 (-LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpeechRuntimeListener::OnSelect(SpeechRuntimeListener *this)
{
  _DWORD *v2; // rdx
  ISMTracing *v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  LARGE_INTEGER v8[356]; // [rsp+30h] [rbp-B38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B68h] [rbp+0h]

  v2 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v2 && *v2 )
  {
    ISMTracing::Instance();
    ISMTracing::LogSpeechRuntimeListenerFunct_(v3, L"OnSelect");
  }
  memset(v8, 0, sizeof(v8));
  v4 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, 7u, *((_DWORD *)this + 20), v8, 1);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x34,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = *((_QWORD *)this + 9);
  v8[167].HighPart = -1;
  v8[166] = v8[2];
  v8[165].LowPart = 1;
  v6 = (*(__int64 (__fastcall **)(__int64, LARGE_INTEGER *))(*(_QWORD *)v5 + 24LL))(v5, v8);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x3C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v6);
    JUMPOUT(0x180068C88LL);
  }
  return 0LL;
}
