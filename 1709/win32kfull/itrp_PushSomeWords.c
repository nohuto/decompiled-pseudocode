/*
 * XREFs of itrp_PushSomeWords @ 0x1C02D1298
 * Callers:
 *     itrp_NPUSHW @ 0x1C02D0D40 (itrp_NPUSHW.c)
 *     itrp_PUSHW @ 0x1C02D1130 (itrp_PUSHW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_PushSomeWords(int a1, unsigned __int64 a2)
{
  _DWORD *v2; // r11
  unsigned __int8 *v3; // r9
  unsigned __int64 v4; // r10
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int16 v7; // dx
  __int16 v8; // ax

  v2 = (_DWORD *)qword_1C0327C78;
  v3 = (unsigned __int8 *)a2;
  v4 = a1;
  v5 = *(_QWORD *)(qword_1C0327C90 + 424);
  if ( (qword_1C0327C90 ^ v5 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330]) != *(_QWORD *)(qword_1C0327C90 + 432)
    || v4 > (v5 - qword_1C0327C78) >> 2 )
  {
    dword_1C0327CE0 = 4369;
    return qword_1C0327CE8;
  }
  if ( (unsigned int)v4 > 0x3FFFFFFE || a2 < qword_1C0327CF0 || (v6 = a2 + 2 * (int)v4, v6 > qword_1C0327CE8) || v6 < a2 )
  {
    dword_1C0327CE0 = 4381;
    return qword_1C0327CE8;
  }
  for ( ; (_DWORD)v4; LODWORD(v4) = v4 - 1 )
  {
    v7 = *v3 << 8;
    v8 = v3[1];
    v3 += 2;
    *v2++ = (__int16)(v7 + v8);
  }
  qword_1C0327C78 = (__int64)v2;
  return (__int64)v3;
}
