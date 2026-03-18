/*
 * XREFs of MiGetSectionStrongImageReference @ 0x1406EC490
 * Callers:
 *     MiValidateInPage @ 0x1400CCA70 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x140509814 (MiValidateImagePfn.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1406E8AAC (MiLoadSectionIntoVsmEnclave.c)
 *     MmGetSectionStrongImageReference @ 0x1406EC4E0 (MmGetSectionStrongImageReference.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiGetSectionStrongImageReference(__int64 a1)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( qword_140362698 )
  {
    result = qword_140362698(v3, &v5);
    if ( (int)result < 0 )
      return result;
    v2 = v5;
  }
  else
  {
    result = 0LL;
  }
  *(_QWORD *)(a1 + 16) = v2;
  return result;
}
