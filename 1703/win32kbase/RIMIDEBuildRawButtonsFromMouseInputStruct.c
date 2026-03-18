/*
 * XREFs of RIMIDEBuildRawButtonsFromMouseInputStruct @ 0x1C01091A8
 * Callers:
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C010AEE4 (RIMIDEInjectMouseFromMouseInputStruct.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIDEBuildRawButtonsFromMouseInputStruct(int a1, __int64 a2)
{
  unsigned int v2; // r10d
  int v4; // r9d
  int v5; // r8d
  int v6; // eax
  int v7; // edx
  int v8; // r9d
  int v9; // eax

  v2 = *(_DWORD *)(a2 + 12);
  v4 = (v2 >> 1) & 1 | 2;
  if ( (v2 & 8) == 0 )
    v4 = (*(_DWORD *)(a2 + 12) >> 1) & 1;
  v5 = v4 | 4;
  if ( (v2 & 0x20) == 0 )
    v5 = v4;
  if ( (v2 & 0x80u) != 0 )
  {
    v6 = v5 | 8;
    if ( *(_DWORD *)(a2 + 8) != 1 )
      v6 = v5;
    v5 = v6;
    if ( *(_DWORD *)(a2 + 8) == 2 )
      v5 = v6 | 0x10;
  }
  v7 = (v2 >> 2) & 1 | 2;
  if ( (v2 & 0x10) == 0 )
    v7 = (v2 >> 2) & 1;
  v8 = v7 | 4;
  if ( (v2 & 0x40) == 0 )
    v8 = v7;
  if ( (v2 & 0x100) != 0 )
  {
    v9 = v8 | 8;
    if ( *(_DWORD *)(a2 + 8) != 1 )
      v9 = v8;
    v8 = v9;
    if ( *(_DWORD *)(a2 + 8) == 2 )
      v8 = v9 | 0x10;
  }
  return ~v8 & (a1 | (unsigned int)v5);
}
