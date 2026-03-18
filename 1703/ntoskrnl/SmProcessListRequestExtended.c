/*
 * XREFs of SmProcessListRequestExtended @ 0x140700A28
 * Callers:
 *     SmProcessListRequest @ 0x14070085C (SmProcessListRequest.c)
 * Callees:
 *     SmKmStoreReference @ 0x140053794 (SmKmStoreReference.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140053AB4 (SmKmStoreRefFromStoreIndex.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     SmKmFileInfoGetPath @ 0x140702128 (SmKmFileInfoGetPath.c)
 */

__int64 __fastcall SmProcessListRequestExtended(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // esi
  unsigned int v6; // r14d
  __int64 v7; // r12
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbp
  int Path; // ebp
  struct _EX_RUNDOWN_REF *v11; // rax
  struct _EX_RUNDOWN_REF *v12; // rax

  v4 = 0LL;
  v5 = 0;
  if ( *(_BYTE *)(a2 + 1) )
  {
    v6 = 1;
    do
    {
      v7 = a2 + 4LL * v5;
      v8 = SmKmStoreReference(a1, *(_DWORD *)(v7 + 4));
      v4 = v8;
      if ( v8 )
      {
        v9 = (unsigned __int64)v5 << 7;
        if ( *(_BYTE *)(v8 + 5988) == 1 )
        {
          Path = SmKmFileInfoGetPath(v8 + 6184, v9 + a2 + 132, 128LL);
          if ( Path < 0 )
            goto LABEL_12;
        }
        else
        {
          *(_WORD *)(a2 + v9 + 132) = 0;
        }
        v11 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, *(_DWORD *)(v4 + 5984) & 0x3FF);
        ExReleaseRundownProtection(v11 + 1);
        v4 = 0LL;
      }
      else
      {
        memmove((void *)(v7 + 4), (const void *)(a2 + 4 * (v6-- + 1LL)), 4 * (*(unsigned __int8 *)(a2 + 1) - v5--) - 4);
        --*(_BYTE *)(a2 + 1);
      }
      ++v5;
      ++v6;
    }
    while ( v5 < *(unsigned __int8 *)(a2 + 1) );
  }
  Path = 0;
LABEL_12:
  if ( v4 )
  {
    v12 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, *(_DWORD *)(v4 + 5984) & 0x3FF);
    ExReleaseRundownProtection(v12 + 1);
  }
  return (unsigned int)Path;
}
