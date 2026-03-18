/*
 * XREFs of PiDmInitializeComparisonObject @ 0x140523AD0
 * Callers:
 *     PiDmAddCacheReferenceForObject @ 0x140518534 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventCreate @ 0x140522FC4 (PiPnpRtlObjectEventCreate.c)
 *     PiDmLookupObject @ 0x1405239E0 (PiDmLookupObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDmInitializeComparisonObject(_WORD *a1, int a2, __int64 a3)
{
  unsigned int v3; // esi
  unsigned __int16 v5; // r9
  unsigned __int16 *v6; // r10
  _WORD *v7; // rax
  __int64 v8; // rdx
  int v9; // eax
  int *v10; // rdi
  int v11; // r11d
  unsigned __int16 v12; // bx
  int v13; // ecx

  v3 = 0;
  *(_QWORD *)(a3 + 16) = a1;
  *(_DWORD *)(a3 + 28) = a2;
  v5 = 0;
  v6 = 0LL;
  if ( a1 )
  {
    v7 = a1;
    v8 = 0x7FFFLL;
    while ( *v7 )
    {
      ++v7;
      if ( !--v8 )
        return 3221225485LL;
    }
    v6 = a1;
    v5 = 2 * (0x7FFF - v8);
  }
  if ( a2 == 3 )
  {
    if ( v5 <= 8u )
      return 3221225524LL;
    v5 -= 8;
    v6 += 4;
  }
  v9 = 0;
  v10 = (int *)(a3 + 24);
  if ( a3 == -24 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v11 = v5 >> 1;
    for ( *v10 = 0; v11; v9 = v13 + 65599 * v9 )
    {
      v12 = *v6++;
      --v11;
      if ( v12 >= 0x61u )
      {
        if ( v12 > 0x7Au )
          v13 = (unsigned __int16)(v12
                                 + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v12 & 0xF)
                                                                                           + 2
                                                                                           * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((v12 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v12 >> 8)]]]);
        else
          v13 = v12 - 32;
      }
      else
      {
        v13 = v12;
      }
    }
    *v10 = v9;
  }
  return v3;
}
