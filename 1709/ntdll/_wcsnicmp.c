/*
 * XREFs of _wcsnicmp @ 0x1800926C0
 * Callers:
 *     LdrpGetModuleName @ 0x1800170B8 (LdrpGetModuleName.c)
 *     RtlpCheckPseudoEnvironmentVariable @ 0x180049D30 (RtlpCheckPseudoEnvironmentVariable.c)
 *     punycode_decode @ 0x18004F0C0 (punycode_decode.c)
 *     punycode_encode @ 0x1800854C8 (punycode_encode.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x180102E54 (RtlpHpOptIntoSegmentHeap.c)
 *     ResCGetHighestCacheIndex @ 0x1801106D8 (ResCGetHighestCacheIndex.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsnicmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  int v3; // r9d
  const wchar_t *v4; // r10
  signed __int64 v5; // r11
  unsigned __int16 v6; // cx
  wchar_t v7; // dx

  v3 = 0;
  v4 = String2;
  if ( MaxCount )
  {
    v5 = (char *)String1 - (char *)String2;
    do
    {
      v6 = *(const wchar_t *)((char *)v4 + v5);
      if ( (unsigned __int16)(v6 - 65) <= 0x19u )
        v6 += 32;
      v7 = *v4;
      if ( (unsigned __int16)(*v4 - 65) <= 0x19u )
        v7 += 32;
      ++v4;
      --MaxCount;
    }
    while ( MaxCount && v6 && v6 == v7 );
    return v6 - v7;
  }
  return v3;
}
