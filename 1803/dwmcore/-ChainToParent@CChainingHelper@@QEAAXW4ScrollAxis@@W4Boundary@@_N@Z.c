/*
 * XREFs of ?ChainToParent@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N@Z @ 0x1801CBC24
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1801BE9A0 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@Z @ 0x1801CBD30 (-RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CChainingHelper::ChainToParent(__int64 a1, int a2, int a3, char a4)
{
  __int64 v4; // rsi
  int v5; // eax
  int v6; // edx
  char v8; // bl
  int v9; // ecx
  int v10; // edx
  __int64 result; // rax

  v4 = a2;
  v5 = 0;
  v6 = 0;
  v8 = a4 | *(_BYTE *)(a1 + 12 * v4) & 0xFE;
  *(_BYTE *)(a1 + 12 * v4) = v8;
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 == 1 )
    {
      if ( ((a3 - 1) & 0xFFFFFFFD) == 0 )
        v5 = 4;
      if ( (unsigned int)(a3 - 2) <= 1 )
        v5 |= 8u;
      v6 = 12;
    }
    else if ( (_DWORD)v4 == 2 )
    {
      if ( ((a3 - 1) & 0xFFFFFFFD) == 0 )
        v5 = 16;
      if ( (unsigned int)(a3 - 2) <= 1 )
        v5 |= 0x20u;
      v6 = 48;
    }
  }
  else
  {
    v5 = ((a3 - 1) & 0xFFFFFFFD) == 0;
    v6 = 3;
  }
  if ( a4 )
  {
    v9 = 63;
    v10 = ~v6;
    if ( (_DWORD)v4 != 2 )
      v9 = 15;
    v5 |= v10 & v9;
  }
  *(_BYTE *)(a1 + 12 * v4) = v8 | 2;
  result = ~v5 & 0xCFFFFFFF;
  *(_DWORD *)(a1 + 12 * v4 + 4) = result;
  *(_BYTE *)(a1 + 36) |= 1u;
  return result;
}
