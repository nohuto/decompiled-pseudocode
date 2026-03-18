/*
 * XREFs of PiDmInitializeComparisonObject @ 0x140485970
 * Callers:
 *     PiDmObjectGetCachedObjectProperty @ 0x1404854F0 (PiDmObjectGetCachedObjectProperty.c)
 *     PiPnpRtlObjectEventCreate @ 0x14048689C (PiPnpRtlObjectEventCreate.c)
 *     PiDmLookupObject @ 0x140486DB8 (PiDmLookupObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E4664 (PiDmAddCacheReferenceForObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDmInitializeComparisonObject(_WORD *a1, int a2, __int64 a3)
{
  unsigned int v3; // esi
  unsigned __int16 v5; // r10
  unsigned __int16 *v6; // r9
  _WORD *v7; // rax
  __int64 v8; // rcx
  int *v9; // rbx
  int v10; // eax
  int v11; // r10d
  unsigned __int16 v12; // r11
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
  v9 = (int *)(a3 + 24);
  v10 = 0;
  if ( a3 == -24 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v11 = v5 >> 1;
    for ( *v9 = 0; v11; v10 = v13 + 65599 * v10 )
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
    *v9 = v10;
  }
  return v3;
}
