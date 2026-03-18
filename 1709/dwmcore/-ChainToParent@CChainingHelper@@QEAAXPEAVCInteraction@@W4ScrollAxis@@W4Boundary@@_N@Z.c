/*
 * XREFs of ?ChainToParent@CChainingHelper@@QEAAXPEAVCInteraction@@W4ScrollAxis@@W4Boundary@@_N@Z @ 0x180192520
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x180189554 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXPEAVCInteraction@@W4ScrollAxis@@W4Boundary@@_N3@Z @ 0x180192628 (-RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXPEAVCInteraction@@W4ScrollAxis.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CChainingHelper::ChainToParent(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  int v6; // eax
  __int64 v8; // rbx
  char v9; // r11
  int v10; // ecx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  __int64 result; // rax

  v6 = 0;
  v8 = 3LL * a3;
  v9 = a5 | *(_BYTE *)(a1 + 12LL * a3) & 0xFE;
  *(_BYTE *)(a1 + 12LL * a3) = v9;
  v10 = 0;
  if ( a3 )
  {
    v11 = a3 - 1;
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        if ( ((a4 - 1) & 0xFFFFFFFD) == 0 )
          v6 = 16;
        if ( (unsigned int)(a4 - 2) <= 1 )
          v6 |= 0x20u;
        v10 = 48;
      }
    }
    else
    {
      if ( ((a4 - 1) & 0xFFFFFFFD) == 0 )
        v6 = 4;
      if ( (unsigned int)(a4 - 2) <= 1 )
        v6 |= 8u;
      v10 = 12;
    }
  }
  else
  {
    v6 = ((a4 - 1) & 0xFFFFFFFD) == 0;
    if ( (unsigned int)(a4 - 2) <= 1 )
      v6 |= 2u;
    v10 = 3;
  }
  if ( a5 )
  {
    v12 = 63;
    v13 = ~v10;
    if ( a3 != 2 )
      v12 = 15;
    v6 |= v13 & v12;
  }
  result = ~v6 & 0xCFFFFFFF;
  *(_DWORD *)(a1 + 4 * v8 + 4) = result;
  *(_BYTE *)(a1 + 4 * v8) = v9 | 2;
  *(_BYTE *)(a1 + 36) |= 1u;
  return result;
}
