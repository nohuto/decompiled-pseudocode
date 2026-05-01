/*
 * XREFs of ?PrivilegedUpdateSizeConstraints@CTrustedComponentForegroundControl@@EEAAJPEAUHWND__@@PEAUtagSIZE@@1@Z @ 0x180113E30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTrustedComponentForegroundControl::PrivilegedUpdateSizeConstraints(
        CTrustedComponentForegroundControl *this,
        HWND a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(PVOID, HWND, struct tagSIZE *, struct tagSIZE *))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[19].Ptr
                                                                                  + 56LL))(
         CApplicationManagerUtility::g_pIAMGlobals[19].Ptr,
         a2,
         a3,
         a4);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x70,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\trustedforegroundcontrol.cpp",
      (const char *)(unsigned int)v4);
  return v5;
}
