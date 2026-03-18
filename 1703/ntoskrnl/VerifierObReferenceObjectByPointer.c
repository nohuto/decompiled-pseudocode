/*
 * XREFs of VerifierObReferenceObjectByPointer @ 0x140783210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x140765068 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierObReferenceObjectByPointer(unsigned __int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v8; // r9

  VfUtilCheckKernelAddress(a1, 8LL);
  if ( !*(_QWORD *)(a1 - 48) )
    VerifierBugCheckIfAppropriate(0xC4u, 0x3FuLL, a1, 1uLL, 0LL);
  LOBYTE(v8) = a4;
  return ((__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, __int64))pXdvObReferenceObjectByPointer)(
           a1,
           a2,
           a3,
           v8);
}
