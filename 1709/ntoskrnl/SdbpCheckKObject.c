/*
 * XREFs of SdbpCheckKObject @ 0x140541718
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x140547A18 (SdbGetDatabaseMatchEx.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     SdbpCheckForMatch @ 0x140541C48 (SdbpCheckForMatch.c)
 *     AslFileMappingDelete @ 0x140544E28 (AslFileMappingDelete.c)
 *     SdbpReleaseSearchDBContext @ 0x140544E7C (SdbpReleaseSearchDBContext.c)
 *     AslFileMappingCreate @ 0x140545E54 (AslFileMappingCreate.c)
 *     SdbpCreateSearchDBContext @ 0x140547F20 (SdbpCreateSearchDBContext.c)
 *     SdbpMatchAcpi @ 0x14076FA1C (SdbpMatchAcpi.c)
 *     SdbpMatchBios @ 0x14076FAF8 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x14076FB90 (SdbpMatchCpu.c)
 *     SdbpMatchOem @ 0x14076FD48 (SdbpMatchOem.c)
 */

__int64 __fastcall SdbpCheckKObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 v11; // r15
  void *v12; // rsi
  unsigned int SearchDBContext; // ebx
  int v15; // eax
  _QWORD *v16; // rdi
  _DWORD v17[36]; // [rsp+30h] [rbp-51h] BYREF
  void *v18; // [rsp+D0h] [rbp+4Fh] BYREF
  char v19; // [rsp+E0h] [rbp+5Fh] BYREF

  v17[0] = 0;
  memset(&v17[2], 0, 0x58uLL);
  v11 = *(_QWORD *)(a1 + 8);
  v12 = 0LL;
  SearchDBContext = 0;
  v18 = 0LL;
  if ( !a3 || (v15 = AslFileMappingCreate((unsigned int)&v18, a3, a4, a5, a6), v12 = v18, v15 >= 0) )
  {
    memset(v17, 0, 0x60uLL);
    v17[0] |= 0x1Au;
    SearchDBContext = SdbpCreateSearchDBContext(v17, v12);
    if ( SearchDBContext )
    {
      SearchDBContext = SdbpCheckForMatch(a1, v11, a2, (unsigned int)v17, (__int64)&v19, (__int64)&v18);
      if ( SearchDBContext )
      {
        v16 = a7;
        if ( a7 )
        {
          SearchDBContext = SdbpMatchAcpi(v11, a2, *a7);
          if ( SearchDBContext )
          {
            SearchDBContext = SdbpMatchOem(v11, a2, v16[1]);
            if ( SearchDBContext )
            {
              SearchDBContext = SdbpMatchBios(v11, a2, v16[2]);
              if ( SearchDBContext )
                SearchDBContext = SdbpMatchCpu(v11, a2, v16[3]);
            }
          }
        }
      }
    }
  }
  SdbpReleaseSearchDBContext(v17);
  AslFileMappingDelete(v12);
  return SearchDBContext;
}
