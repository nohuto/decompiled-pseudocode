/*
 * XREFs of ?RegisterForWindowArrangementCallout@CTrustedComponentForegroundControl@@EEAAJPEAUHWND__@@H@Z @ 0x18002DEF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTrustedComponentForegroundControl::RegisterForWindowArrangementCallout(
        CTrustedComponentForegroundControl *this,
        HWND a2)
{
  return (*(__int64 (__fastcall **)(PVOID, HWND))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 32LL))(
           CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
           a2);
}
