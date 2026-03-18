/*
 * XREFs of itrp_PushSomeBytes @ 0x1C02D11F4
 * Callers:
 *     itrp_NPUSHB @ 0x1C02D0CF0 (itrp_NPUSHB.c)
 *     itrp_PUSHB @ 0x1C02D1080 (itrp_PUSHB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_PushSomeBytes(int a1, unsigned __int8 *a2)
{
  _DWORD *v2; // r9
  __int64 v3; // r10
  unsigned __int64 v4; // rax
  int v5; // eax

  v2 = (_DWORD *)qword_1C0327C78;
  v3 = *(_QWORD *)(qword_1C0327C90 + 424);
  if ( (qword_1C0327C90 ^ v3 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330]) != *(_QWORD *)(qword_1C0327C90 + 432)
    || a1 > (unsigned __int64)((v3 - qword_1C0327C78) >> 2) )
  {
    dword_1C0327CE0 = 4369;
    return qword_1C0327CE8;
  }
  if ( (unsigned __int64)a2 < qword_1C0327CF0
    || (v4 = (unsigned __int64)&a2[a1], v4 > qword_1C0327CE8)
    || v4 < (unsigned __int64)a2 )
  {
    dword_1C0327CE0 = 4381;
    return qword_1C0327CE8;
  }
  for ( ; a1; --a1 )
  {
    v5 = *a2++;
    *v2++ = v5;
  }
  qword_1C0327C78 = (__int64)v2;
  return (__int64)a2;
}
