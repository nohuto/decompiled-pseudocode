/*
 * XREFs of ?PrivilegedInsertAfterWindow@CTrustedComponentForegroundControl@@EEAAJPEAUHWND__@@0@Z @ 0x18002DF60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTrustedComponentForegroundControl::PrivilegedInsertAfterWindow(
        CTrustedComponentForegroundControl *this,
        HWND a2,
        HWND a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(PVOID, HWND, HWND))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 48LL))(
         CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
         a2,
         a3);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6B,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\trustedforegroundcontrol.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
