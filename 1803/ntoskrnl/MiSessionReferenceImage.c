/*
 * XREFs of MiSessionReferenceImage @ 0x14016E50C
 * Callers:
 *     MmChangeImageProtection @ 0x1405BC4E0 (MmChangeImageProtection.c)
 *     MiResolveImageReferences @ 0x1405FABA8 (MiResolveImageReferences.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14012B754 (MiSessionLookupImage.c)
 */

__int64 __fastcall MiSessionReferenceImage(unsigned __int64 a1)
{
  __int64 result; // rax

  result = (__int64)MiSessionLookupImage(a1);
  if ( result )
  {
    ++*(_DWORD *)(result + 60);
    return 1LL;
  }
  return result;
}
