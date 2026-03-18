/*
 * XREFs of SeValidateImageData @ 0x140423710
 * Callers:
 *     MiValidateInPage @ 0x1400CB690 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x1404234F4 (MiValidateImagePfn.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeValidateImageData(__int64 a1)
{
  if ( qword_140348BA8 )
    return qword_140348BA8(a1);
  else
    return 3221226536LL;
}
