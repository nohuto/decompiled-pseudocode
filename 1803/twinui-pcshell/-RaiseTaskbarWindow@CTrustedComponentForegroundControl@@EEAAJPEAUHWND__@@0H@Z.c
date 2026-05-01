/*
 * XREFs of ?RaiseTaskbarWindow@CTrustedComponentForegroundControl@@EEAAJPEAUHWND__@@0H@Z @ 0x180009060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTrustedComponentForegroundControl::RaiseTaskbarWindow(
        CTrustedComponentForegroundControl *this,
        HWND a2,
        HWND a3,
        int a4)
{
  CPrivilegedPresentationOperations *Ptr; // rcx
  __int64 v5; // r9
  __int64 (__fastcall *v6)(CPrivilegedPresentationOperations *__hidden, HWND, HWND, unsigned int); // rax

  Ptr = (CPrivilegedPresentationOperations *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr;
  v5 = a4 != 0 ? 6 : 1;
  v6 = *(__int64 (__fastcall **)(CPrivilegedPresentationOperations *__hidden, HWND, HWND, unsigned int))(*(_QWORD *)Ptr + 32LL);
  if ( v6 == CPrivilegedPresentationOperations::SetWindowBand )
    return CPrivilegedPresentationOperations::SetWindowBand(Ptr, a2, a3, v5);
  else
    return v6(Ptr, a2, a3, v5);
}
