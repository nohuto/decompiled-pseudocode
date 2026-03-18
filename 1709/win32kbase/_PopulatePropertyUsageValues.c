/*
 * XREFs of _PopulatePropertyUsageValues @ 0x1C00126C0
 * Callers:
 *     RIMGetPointerDeviceProperties @ 0x1C0012420 (RIMGetPointerDeviceProperties.c)
 * Callees:
 *     rimHidP_GetSpecificValueCaps @ 0x1C00128A8 (rimHidP_GetSpecificValueCaps.c)
 */

__int64 __fastcall PopulatePropertyUsageValues(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9)
{
  unsigned __int16 v9; // r15
  unsigned int v10; // ebx
  __int64 v11; // r13
  unsigned int v14; // esi
  __int64 v15; // r14
  unsigned __int16 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int16 v20; // ax
  int v21; // eax

  v9 = a5;
  v10 = 0;
  v11 = *(_QWORD *)(a1 + 16);
  if ( !a5 || !a7 )
    return 0LL;
  v14 = *a2;
  v15 = a6;
  if ( (int)rimHidP_GetSpecificValueCaps(0, 0, a4, 0, a6, (__int64)&a5, a9) >= 0 )
  {
    v16 = 0;
    if ( v14 < a7 )
    {
      v17 = a8;
      while ( 1 )
      {
        if ( v16 >= v9 )
          goto LABEL_13;
        if ( *(_BYTE *)(a1 + 736) == *(_BYTE *)(v15 + 72LL * v16 + 2) && v14 < a3 )
          break;
LABEL_12:
        ++v16;
        if ( v14 >= a7 )
          goto LABEL_13;
      }
      v18 = 28LL * v14;
      *(_WORD *)(v18 + v17 + 24) = *(_WORD *)(v15 + 72LL * v16);
      *(_WORD *)(v18 + v17 + 26) = *(_WORD *)(v15 + 72LL * v16 + 56);
      *(_DWORD *)(v18 + v17) = *(_DWORD *)(v15 + 72LL * v16 + 40);
      *(_DWORD *)(v18 + v17 + 4) = *(_DWORD *)(v15 + 72LL * v16 + 44);
      if ( *(_WORD *)(v15 + 72LL * v16) != 1 )
        goto LABEL_10;
      v20 = *(_WORD *)(v15 + 72LL * v16 + 56);
      if ( v20 == 48 && *(_DWORD *)(v11 + 776) )
      {
        *(_DWORD *)(v18 + v17 + 8) = 0;
        if ( ((*(_DWORD *)(a1 + 224) - 1) & 0xFFFFFFFD) == 0 )
        {
LABEL_18:
          v21 = *(_DWORD *)(a1 + 184);
LABEL_19:
          *(_DWORD *)(v18 + v17 + 12) = v21;
          *(_DWORD *)(v18 + v17 + 16) = 17;
          *(_DWORD *)(v18 + v17 + 20) = 13;
          goto LABEL_11;
        }
      }
      else
      {
        if ( v20 != 49 || !*(_DWORD *)(v11 + 776) )
        {
LABEL_10:
          *(_DWORD *)(v18 + v17 + 8) = *(_DWORD *)(v15 + 72LL * v16 + 48);
          *(_DWORD *)(v18 + v17 + 12) = *(_DWORD *)(v15 + 72LL * v16 + 52);
          *(_DWORD *)(v18 + v17 + 16) = *(_DWORD *)(v15 + 72LL * v16 + 36);
          *(_DWORD *)(v18 + v17 + 20) = *(_DWORD *)(v15 + 72LL * v16 + 32);
LABEL_11:
          ++v14;
          goto LABEL_12;
        }
        *(_DWORD *)(v18 + v17 + 8) = 0;
        if ( ((*(_DWORD *)(a1 + 224) - 1) & 0xFFFFFFFD) != 0 )
          goto LABEL_18;
      }
      v21 = *(_DWORD *)(a1 + 188);
      goto LABEL_19;
    }
LABEL_13:
    *a2 = v14;
    return 1;
  }
  return v10;
}
