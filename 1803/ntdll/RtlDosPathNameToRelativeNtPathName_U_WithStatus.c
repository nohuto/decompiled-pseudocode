/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x18003D120
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003D190 @ 0x18003D190 (sub_18003D190.c)
 */

__int64 __fastcall RtlDosPathNameToRelativeNtPathName_U_WithStatus(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  int v6; // [rsp+40h] [rbp-18h] BYREF
  __int64 v7; // [rsp+48h] [rbp-10h]

  v7 = a1;
  v6 = 0;
  if ( !a1 )
    return sub_18003D190(2, (unsigned int)&v6, 0, a2, 0LL, a3, a4);
  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)(a1 + 2 * v4) );
  if ( v4 <= 0x7FFE )
  {
    LOWORD(v6) = 2 * v4;
    HIWORD(v6) = 2 * v4 + 2;
    return sub_18003D190(2, (unsigned int)&v6, 0, a2, 0LL, a3, a4);
  }
  return 3221225734LL;
}
