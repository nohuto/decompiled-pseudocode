/*
 * XREFs of sub_18003FEA8 @ 0x18003FEA8
 * Callers:
 *     sub_18003FCF8 @ 0x18003FCF8 (sub_18003FCF8.c)
 *     sub_18003FFC8 @ 0x18003FFC8 (sub_18003FFC8.c)
 *     sub_1800410D4 @ 0x1800410D4 (sub_1800410D4.c)
 * Callees:
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 */

__int64 __fastcall sub_18003FEA8(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  PVOID v5; // rax

  v2 = 0;
  v3 = a2 + 2;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( (unsigned int)(a2 + 2) > 0xFFFE )
  {
    return (unsigned int)-1073741562;
  }
  else if ( (v3 & 1) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v5 = sub_18003B5E0(v3);
    *(_QWORD *)(a1 + 8) = v5;
    if ( v5 )
      *(_WORD *)(a1 + 2) = v3;
    else
      return (unsigned int)-1073741801;
  }
  return v2;
}
