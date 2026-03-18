/*
 * XREFs of SeValidateImageData @ 0x1405BA74C
 * Callers:
 *     MiValidateInPage @ 0x140138DF0 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x1405BA580 (MiValidateImagePfn.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeValidateImageData(__int64 a1)
{
  if ( qword_1403A5CA8 )
    return qword_1403A5CA8(a1);
  else
    return 3221226536LL;
}
