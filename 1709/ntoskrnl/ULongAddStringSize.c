/*
 * XREFs of ULongAddStringSize @ 0x1407381A8
 * Callers:
 *     GetPrintableOperandValue @ 0x140735534 (GetPrintableOperandValue.c)
 *     LocalpGetStringForCondition @ 0x140737BE0 (LocalpGetStringForCondition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ULongAddStringSize(unsigned int a1, __int64 a2, int *a3)
{
  __int64 v5; // rax
  int v6; // edx
  unsigned __int64 v7; // rax
  int v8; // r8d
  unsigned int v9; // ecx

  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)(a2 + 2 * v5) );
  v6 = -1;
  v7 = 2LL * (unsigned int)v5;
  v8 = -1;
  if ( v7 <= 0xFFFFFFFF )
    v8 = v7;
  *a3 = v8;
  v9 = v7 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v7 <= 0xFFFFFFFF )
  {
    if ( v8 + a1 >= a1 )
      v6 = v8 + a1;
    v9 = v8 + a1 < a1 ? 0xC0000095 : 0;
    *a3 = v6;
  }
  return v9;
}
