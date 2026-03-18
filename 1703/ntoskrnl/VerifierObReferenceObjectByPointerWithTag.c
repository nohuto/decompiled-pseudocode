/*
 * XREFs of VerifierObReferenceObjectByPointerWithTag @ 0x140783290
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x140765068 (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VerifierObReferenceObjectByPointerWithTag(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        int a5)
{
  __int64 v9; // r9

  VfUtilCheckKernelAddress(a1, 8LL);
  LOBYTE(v9) = a4;
  return ((__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, __int64, int))pXdvObReferenceObjectByPointerWithTag)(
           a1,
           a2,
           a3,
           v9,
           a5);
}
