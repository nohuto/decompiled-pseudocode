/*
 * XREFs of bGrabXform @ 0x1C0231E2C
 * Callers:
 *     ttfdQueryQuadTrueTypeOutline @ 0x1C022D700 (ttfdQueryQuadTrueTypeOutline.c)
 *     ttfdQueryFontData @ 0x1C022FD64 (ttfdQueryFontData.c)
 * Callees:
 *     bSetXform @ 0x1C02321CC (bSetXform.c)
 */

__int64 __fastcall bGrabXform(__int64 a1, __int16 a2, int a3, int a4, int a5, int a6)
{
  __int64 v7; // rcx
  unsigned int v8; // ebp
  int v9; // edi
  int v10; // r14d
  int v11; // esi
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx

  v7 = *(_QWORD *)(a1 + 176);
  v8 = 1;
  if ( (*(_WORD *)(v7 + 152) & 3) == 1 )
    v9 = -1;
  else
    v9 = (*(_WORD *)(v7 + 152) & 3) == 3;
  v10 = *(_DWORD *)(v7 + 164);
  v11 = (*(unsigned __int16 *)(v7 + 152) >> 4) & 1;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) != a1
    || *(_WORD *)(a1 + 402) != a2
    || v9 != a4
    || v11 != a5
    || a3 != ((*(_DWORD *)(a1 + 116) >> 7) & 1)
    || v10 != a6 )
  {
    *(_WORD *)(a1 + 402) = a2;
    v8 = bSetXform(a1, a3, a4, a5, a6);
    if ( v8 )
    {
      v12 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(v12 + 32) != a1 && (*(_DWORD *)(v12 + 400) & 0x10000000) != 0 )
      {
        v13 = *(_DWORD *)(a1 + 80);
        v14 = v13 * *(__int16 *)(v12 + 428);
        if ( v13 <= 0 )
          v15 = -(((-v14 >> 15) + 1) >> 1);
        else
          v15 = ((v14 >> 15) + 1) >> 1;
        *(_DWORD *)(a1 + 404) = v15;
      }
      *(_QWORD *)(v12 + 32) = a1;
    }
    else
    {
      v16 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
      if ( v16 )
        bSetXform(v16, (*(_DWORD *)(v16 + 116) >> 7) & 1, v9, v11, v10);
    }
  }
  return v8;
}
