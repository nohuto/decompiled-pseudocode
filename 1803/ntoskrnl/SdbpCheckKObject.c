/*
 * XREFs of SdbpCheckKObject @ 0x14061E2B8
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x1405FCBBC (SdbGetDatabaseMatchEx.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     AslFileMappingDelete @ 0x1405FC298 (AslFileMappingDelete.c)
 *     SdbpReleaseSearchDBContext @ 0x1405FC2EC (SdbpReleaseSearchDBContext.c)
 *     AslFileMappingCreate @ 0x1405FC418 (AslFileMappingCreate.c)
 *     SdbpCreateSearchDBContext @ 0x1405FDB20 (SdbpCreateSearchDBContext.c)
 *     SdbpCheckForMatch @ 0x14061E3E8 (SdbpCheckForMatch.c)
 *     SdbpMatchCpu @ 0x14061FE88 (SdbpMatchCpu.c)
 *     SdbpMatchBios @ 0x14061FEDC (SdbpMatchBios.c)
 *     SdbpMatchOem @ 0x14061FF30 (SdbpMatchOem.c)
 *     SdbpMatchAcpi @ 0x14061FF84 (SdbpMatchAcpi.c)
 */

__int64 __fastcall SdbpCheckKObject(
        __int64 a1,
        unsigned int a2,
        const WCHAR *a3,
        void *a4,
        void *a5,
        void *a6,
        _QWORD *a7)
{
  __int64 v11; // r15
  const wchar_t **v12; // rsi
  unsigned int SearchDBContext; // ebx
  _QWORD *v15; // rdi
  int v16; // eax
  _QWORD v17[18]; // [rsp+30h] [rbp-51h] BYREF
  PVOID *v18; // [rsp+D0h] [rbp+4Fh] BYREF
  char v19; // [rsp+E0h] [rbp+5Fh] BYREF

  memset(v17, 0, 0x60uLL);
  v11 = *(_QWORD *)(a1 + 8);
  v12 = 0LL;
  SearchDBContext = 0;
  v18 = 0LL;
  if ( !a3 || (v16 = AslFileMappingCreate(&v18, a3, a4, a5, a6), v12 = (const wchar_t **)v18, v16 >= 0) )
  {
    memset(v17, 0, 0x60uLL);
    LODWORD(v17[0]) = 26;
    SearchDBContext = SdbpCreateSearchDBContext(v17, v12);
    if ( SearchDBContext )
    {
      SearchDBContext = SdbpCheckForMatch(a1, v11, a2, (unsigned int)v17, (__int64)&v19, (__int64)&v18);
      if ( SearchDBContext )
      {
        v15 = a7;
        if ( a7 )
        {
          SearchDBContext = SdbpMatchAcpi(v11, a2, *a7);
          if ( SearchDBContext )
          {
            SearchDBContext = SdbpMatchOem(v11, a2, v15[1]);
            if ( SearchDBContext )
            {
              SearchDBContext = SdbpMatchBios(v11, a2, v15[2]);
              if ( SearchDBContext )
                SearchDBContext = SdbpMatchCpu(v11, a2, v15[3]);
            }
          }
        }
      }
    }
  }
  SdbpReleaseSearchDBContext(v17);
  AslFileMappingDelete((PVOID *)v12);
  return SearchDBContext;
}
