/*
 * XREFs of vAdjustGrayStateAndBoldOptions__FONTCONTEXT @ 0x1C0232C10
 * Callers:
 *     bComputeMaxGlyph @ 0x1C023168C (bComputeMaxGlyph.c)
 * Callees:
 *     <none>
 */

void __fastcall vAdjustGrayStateAndBoldOptions__FONTCONTEXT(__int64 a1)
{
  BOOL v2; // ecx
  int v3; // r9d
  int v4; // r8d
  int v5; // eax
  int v6; // eax
  int v7; // r8d

  *(_DWORD *)(a1 + 120) = 5;
  v2 = 0;
  v3 = 1;
  v4 = *(_DWORD *)(a1 + 40);
  if ( (v4 & 0x2000) != 0 )
    v2 = (*(_BYTE *)(a1 + 116) & 3) != 0;
  if ( *(_DWORD *)(a1 + 84) || *(_DWORD *)(a1 + 92) || *(int *)(a1 + 80) <= 0 || *(int *)(a1 + 96) <= 0 )
    v3 = 0;
  if ( v2 )
  {
    v5 = 0;
    if ( *(int *)(a1 + 124) <= 50 )
      v5 = v3;
    if ( v5 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 300LL) & 0x100) != 0 )
      {
        if ( (v4 & 0x2000000) != 0 )
        {
          *(_DWORD *)(a1 + 120) = 7;
          *(_DWORD *)(a1 + 40) = v4 | 0x10000;
        }
        v6 = *(_DWORD *)(a1 + 40);
        if ( (v6 & 0x20000) != 0 )
        {
          *(_DWORD *)(a1 + 120) |= 2u;
          *(_DWORD *)(a1 + 40) = v6 & 0xFFFCFFFF | 0x10000;
        }
        *(_DWORD *)(*(_QWORD *)a1 + 12LL) = *(_DWORD *)(a1 + 40);
      }
      v7 = *(_DWORD *)(a1 + 120);
      if ( (v7 & 4) != 0
        && (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 300LL) & 0x100) != 0
        && (*(_DWORD *)(a1 + 40) & 0x10000000) != 0 )
      {
        *(_DWORD *)(a1 + 120) = v7 | 8;
      }
    }
  }
}
