/*
 * XREFs of SeGetStrongImageReference @ 0x1406F04D4
 * Callers:
 *     MiValidateInPage @ 0x1400CB690 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x1404234F4 (MiValidateImagePfn.c)
 *     MmGetSectionStrongImageReference @ 0x1406BF1BC (MmGetSectionStrongImageReference.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeGetStrongImageReference(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140348BF8 )
    return ((__int64 (*)(void))qword_140348BF8)();
  *a2 = 0LL;
  return result;
}
