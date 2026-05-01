/*
 * XREFs of ?SetWindowArrangement@CTrustedComponentForegroundControl@@EEAAJPEAUHWND__@@PEBUtagRECT@@PEAU3@K@Z @ 0x18002DEC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTrustedComponentForegroundControl::SetWindowArrangement(
        CTrustedComponentForegroundControl *this,
        HWND a2,
        const struct tagRECT *a3,
        struct tagRECT *a4,
        unsigned int a5)
{
  return (*(__int64 (__fastcall **)(PVOID, HWND, const struct tagRECT *, struct tagRECT *, unsigned int))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 24LL))(
           CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
           a2,
           a3,
           a4,
           a5);
}
