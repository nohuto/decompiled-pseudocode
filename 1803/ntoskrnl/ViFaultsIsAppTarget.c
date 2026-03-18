/*
 * XREFs of ViFaultsIsAppTarget @ 0x140825544
 * Callers:
 *     ViCreateProcessCallbackInternal @ 0x140824FFC (ViCreateProcessCallbackInternal.c)
 *     ViFaultsAddAppNoDuplicates @ 0x14082523C (ViFaultsAddAppNoDuplicates.c)
 * Callees:
 *     VfUtilEqualUnicodeString @ 0x140813F68 (VfUtilEqualUnicodeString.c)
 */

__int64 __fastcall ViFaultsIsAppTarget(__int64 a1)
{
  const void **v1; // rbx
  unsigned int v3; // edi

  v1 = (const void **)ViFaultApplicationsList;
  v3 = 0;
  while ( v1 != (const void **)&ViFaultApplicationsList )
  {
    if ( VfUtilEqualUnicodeString(v1 + 2, a1) )
      return 1;
    v1 = (const void **)*v1;
  }
  return v3;
}
