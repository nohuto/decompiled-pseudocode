/*
 * XREFs of PfpRpIsRehashNeeded @ 0x140013040
 * Callers:
 *     PfpRpRehashIfNeeded @ 0x1404561D0 (PfpRpRehashIfNeeded.c)
 *     PfpRpFileKeyUpdate @ 0x140456360 (PfpRpFileKeyUpdate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpRpIsRehashNeeded(_DWORD *a1, int *a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rax
  int v4; // ecx

  if ( *a1 < (unsigned int)(2 * (a1[1] >> 5)) )
    return 0LL;
  v3 = 2 * ((unsigned __int64)(unsigned int)a1[1] >> 5);
  if ( v3 > 0xFFFFFFFF )
    return 0LL;
  v4 = 2 * (a1[1] >> 5);
  if ( !(_DWORD)v3 )
    v4 = 64;
  result = 1LL;
  *a2 = v4;
  return result;
}
