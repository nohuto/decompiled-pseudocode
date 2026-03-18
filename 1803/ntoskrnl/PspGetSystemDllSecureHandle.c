/*
 * XREFs of PspGetSystemDllSecureHandle @ 0x1408E13F8
 * Callers:
 *     PspInitPhase3 @ 0x1408CA2EC (PspInitPhase3.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140105100 (ObFastDereferenceObject.c)
 *     PspReferenceSystemDll @ 0x1404E9390 (PspReferenceSystemDll.c)
 *     MmGetSectionStrongImageReference @ 0x140755FFC (MmGetSectionStrongImageReference.c)
 */

__int64 __fastcall PspGetSystemDllSecureHandle(signed __int64 *a1, _QWORD *a2)
{
  void *v4; // rax
  unsigned __int64 v5; // rdi
  unsigned int SectionStrongImageReference; // ebx

  v4 = (void *)PspReferenceSystemDll(a1);
  v5 = (unsigned __int64)v4;
  if ( !v4 )
    return 3221225480LL;
  SectionStrongImageReference = MmGetSectionStrongImageReference(0LL, 0, v4, a2);
  ObFastDereferenceObject(a1, v5);
  return SectionStrongImageReference;
}
