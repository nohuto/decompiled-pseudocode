/*
 * XREFs of EngMapFile @ 0x1C02694B0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     bMapFile @ 0x1C0269910 (bMapFile.c)
 */

PVOID __stdcall EngMapFile(LPWSTR pwsz, ULONG cjSize, ULONG_PTR *piFile)
{
  void *v3; // rbx
  void *v7; // rdi
  __int64 v8; // rdx

  v3 = 0LL;
  v7 = PALLOCMEM2(0x50uLL, 1818846791LL, 1);
  if ( v7 )
  {
    if ( !cjSize )
      cjSize = -1;
    if ( (unsigned int)bMapFile(pwsz, v7, cjSize, 0LL) )
    {
      *piFile = (ULONG_PTR)v7;
      return (PVOID)*((_QWORD *)v7 + 1);
    }
    else
    {
      *piFile = 0LL;
      Win32FreePool(v7, v8);
    }
  }
  return v3;
}
