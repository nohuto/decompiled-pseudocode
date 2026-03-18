/*
 * XREFs of SeValidateImageData @ 0x140509A44
 * Callers:
 *     MiValidateInPage @ 0x1400CCA70 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x140509814 (MiValidateImagePfn.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeValidateImageData(__int64 a1)
{
  if ( qword_140362648 )
    return qword_140362648(a1);
  else
    return 3221226536LL;
}
