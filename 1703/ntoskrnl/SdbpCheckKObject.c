/*
 * XREFs of SdbpCheckKObject @ 0x1405BB128
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x1404B54AC (SdbGetDatabaseMatchEx.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     AslFileMappingDelete @ 0x1404B42DC (AslFileMappingDelete.c)
 *     SdbpReleaseSearchDBContext @ 0x1404B4330 (SdbpReleaseSearchDBContext.c)
 *     AslFileMappingCreate @ 0x1404B445C (AslFileMappingCreate.c)
 *     SdbpCreateSearchDBContext @ 0x1404B5D20 (SdbpCreateSearchDBContext.c)
 *     SdbpCheckForMatch @ 0x1405BB258 (SdbpCheckForMatch.c)
 *     SdbpMatchAcpi @ 0x1405DAC34 (SdbpMatchAcpi.c)
 *     SdbpMatchOem @ 0x1405DAC88 (SdbpMatchOem.c)
 *     SdbpMatchBios @ 0x1405DACDC (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x1405DAD30 (SdbpMatchCpu.c)
 */

__int64 __fastcall SdbpCheckKObject(
        __int64 a1,
        unsigned int a2,
        const WCHAR *a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 v11; // r15
  const wchar_t **v12; // rsi
  unsigned int SearchDBContext; // ebx
  _QWORD *v15; // rdi
  int v16; // eax
  _QWORD v17[18]; // [rsp+30h] [rbp-51h] BYREF
  const wchar_t **v18; // [rsp+D0h] [rbp+4Fh] BYREF
  char v19; // [rsp+E0h] [rbp+5Fh] BYREF

  LODWORD(v17[0]) = 0;
  memset(&v17[1], 0, 0x58uLL);
  v11 = *(_QWORD *)(a1 + 8);
  v12 = 0LL;
  SearchDBContext = 0;
  v18 = 0LL;
  if ( !a3 || (v16 = AslFileMappingCreate((__int64 *)&v18, a3, a4, a5, a6), v12 = v18, v16 >= 0) )
  {
    memset(v17, 0, 0x60uLL);
    LODWORD(v17[0]) |= 0x1Au;
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
