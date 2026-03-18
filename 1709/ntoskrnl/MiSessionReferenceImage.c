/*
 * XREFs of MiSessionReferenceImage @ 0x14015C2C0
 * Callers:
 *     MiResolveImageReferences @ 0x1404DC360 (MiResolveImageReferences.c)
 *     MmChangeImageProtection @ 0x140515760 (MmChangeImageProtection.c)
 * Callees:
 *     MiSessionLookupImage @ 0x1400D5620 (MiSessionLookupImage.c)
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
