/*
 * XREFs of GetBinaryOperandLen @ 0x140734894
 * Callers:
 *     GetOperandValue @ 0x140734AFC (GetOperandValue.c)
 * Callees:
 *     <none>
 */

void __fastcall GetBinaryOperandLen(_WORD *a1, _DWORD *a2)
{
  bool v2; // zf
  __int64 v3; // r8
  __int16 v4; // ax
  __int64 v5; // rax

  v2 = *a1 == 32;
  for ( *a2 = 0; !v2; *a2 = v5 )
  {
    v3 = (unsigned int)*a2;
    v4 = a1[v3];
    if ( v4 == 41 )
      break;
    if ( v4 == 125 )
      break;
    if ( v4 == asc_1402DDFBC[0] )
      break;
    if ( v4 == asc_1402DDFA8[0] )
      break;
    if ( v4 == 44 )
      break;
    if ( !v4 )
      break;
    v5 = (unsigned int)(v3 + 1);
    v2 = a1[v5] == 32;
  }
}
