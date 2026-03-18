/*
 * XREFs of vSetClearTypeState__FONTCONTEXT @ 0x1C0233000
 * Callers:
 *     bComputeMaxGlyph @ 0x1C023168C (bComputeMaxGlyph.c)
 * Callees:
 *     bValidRangeGASP @ 0x1C0229BAC (bValidRangeGASP.c)
 *     bIsGaspFlagSet @ 0x1C0232048 (bIsGaspFlagSet.c)
 *     fd_FindBlocStrike @ 0x1C0232768 (fd_FindBlocStrike.c)
 */

__int16 __fastcall vSetClearTypeState__FONTCONTEXT(__int64 *a1)
{
  __int64 v2; // r8
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // r8
  _WORD *v15; // rsi
  __int64 v16; // rax
  unsigned int v17; // edx
  int v18; // edi
  __int64 v19; // rax
  int v20; // edi
  int v21; // ecx
  int v22; // ecx
  unsigned __int16 v24; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)a1 + 10) |= 0x80000000;
  v2 = a1[1];
  v3 = *((_DWORD *)a1 + 10);
  if ( (*(_DWORD *)(v2 + 300) & 0x100) != 0 && (*((_DWORD *)a1 + 29) & 3) != 0 )
  {
    v4 = *((_DWORD *)a1 + 20);
    v5 = *((_DWORD *)a1 + 24);
    if ( v4 == v5 || v4 == -v5 )
    {
      v6 = *((_DWORD *)a1 + 21);
      v7 = *((_DWORD *)a1 + 23);
      if ( v6 == v7 || v6 == -v7 )
      {
        v8 = a1[24];
        if ( *(_DWORD *)(v8 + 152) )
        {
          if ( (unsigned int)fd_FindBlocStrike(
                               *(_QWORD *)(v2 + 64) + *(unsigned int *)(v8 + 152),
                               *((_WORD *)a1 + 62),
                               *(_DWORD *)(v8 + 156)) )
          {
            v9 = *a1;
            v10 = v3 & 0xEDFEFFFF | 0x2000000;
            *((_DWORD *)a1 + 10) = v10;
            *(_DWORD *)(v9 + 12) = v10;
          }
        }
      }
    }
  }
  v11 = a1[1];
  if ( (*(_DWORD *)(v11 + 300) & 2) != 0 || !_wcsicmp((const wchar_t *)(*(int *)(v11 + 360) + v11 + 352), L"Marlett") )
  {
    v12 = *a1;
    v13 = a1[5] & 0xEDFEFFFF | 0x2000000;
    *((_DWORD *)a1 + 10) = v13;
    *(_DWORD *)(v12 + 12) = v13;
  }
  v14 = a1[24];
  v15 = (_WORD *)(*(unsigned int *)(v14 + 112) + *(_QWORD *)(a1[1] + 64));
  LOWORD(v16) = __ROR2__(*v15, 8);
  if ( (_WORD)v16 )
  {
    if ( *(_DWORD *)(v14 + 112) )
    {
      v17 = *(_DWORD *)(v14 + 116);
      if ( v17 )
      {
        LODWORD(v16) = bValidRangeGASP((__int64)v15, v17, &v24);
        if ( (_DWORD)v16 )
        {
          v18 = *((_DWORD *)a1 + 10);
          if ( (v18 & 0x10000000) != 0 && (unsigned int)bIsGaspFlagSet((__int64)v15, v24, *((_DWORD *)a1 + 31), 8u) )
          {
            v19 = *a1;
            v20 = v18 | 0x20000000;
            *((_DWORD *)a1 + 10) = v20;
            *(_DWORD *)(v19 + 12) = v20;
          }
          LODWORD(v16) = bIsGaspFlagSet((__int64)v15, v24, *((_DWORD *)a1 + 31), 4u);
          if ( !(_DWORD)v16 )
          {
            *((_DWORD *)a1 + 10) |= 0x40000u;
            v21 = *((_DWORD *)a1 + 10);
LABEL_25:
            v16 = *a1;
            *(_DWORD *)(*a1 + 12) = v21;
          }
        }
      }
    }
  }
  else if ( *((int *)a1 + 31) > 20 )
  {
    v22 = *((_DWORD *)a1 + 10);
    if ( (v22 & 0x10000000) != 0 )
    {
      v21 = v22 | 0x20000000;
      *((_DWORD *)a1 + 10) = v21;
      goto LABEL_25;
    }
  }
  return v16;
}
