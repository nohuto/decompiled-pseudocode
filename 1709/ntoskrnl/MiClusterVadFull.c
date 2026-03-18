/*
 * XREFs of MiClusterVadFull @ 0x14022EDF4
 * Callers:
 *     MiPfnsWorthTrying @ 0x1400C5DF0 (MiPfnsWorthTrying.c)
 *     MiTrimSharedPage @ 0x1400F1EDC (MiTrimSharedPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiClusterVadFull(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  _QWORD *v6; // rdx
  unsigned int v7; // r9d
  unsigned __int64 v8; // r8

  v3 = a1[1] | 0x8000000000000000uLL;
  if ( a2 )
  {
    v4 = *(_QWORD *)(a2 + 8);
    if ( v3 < v4 || v3 >= v4 + 8LL * *(unsigned int *)(a2 + 44) )
      return 0LL;
    v5 = (__int64)(v3 - v4) >> 3;
  }
  else
  {
    v5 = (unsigned __int64)*((unsigned int *)a1 + 2) >> 3;
  }
  if ( (((unsigned __int8)((__int64)(a1 + 0xB000000000LL) / 48) ^ (unsigned __int8)v5) & 0xF) == 0 )
  {
    v6 = a1 + 11;
    v7 = 1;
    v8 = v3 + 8;
    while ( (*(v6 - 4) | 0x8000000000000000uLL) == v8 && (*v6 & 0xFFFFFFFFFLL) == (a1[5] & 0xFFFFFFFFFLL) )
    {
      v8 += 8LL;
      ++v7;
      v6 += 6;
      if ( v7 >= 0x10 )
        return 1LL;
    }
  }
  return 0LL;
}
