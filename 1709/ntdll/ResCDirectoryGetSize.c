/*
 * XREFs of ResCDirectoryGetSize @ 0x18008EBF0
 * Callers:
 *     ResCDirectoryValidateHeader @ 0x18008EC38 (ResCDirectoryValidateHeader.c)
 * Callees:
 *     ResCDirectoryValidateHeader @ 0x18008EC38 (ResCDirectoryValidateHeader.c)
 */

__int64 __fastcall ResCDirectoryGetSize(_DWORD *a1)
{
  unsigned int v1; // edi

  v1 = 0;
  if ( a1 && (unsigned int)ResCDirectoryValidateHeader(a1, 0LL) )
    return (unsigned int)(2 * (a1[14] + 16 * a1[13] + 24 * a1[15]) + 104);
  return v1;
}
