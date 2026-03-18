/*
 * XREFs of itrp_JROF @ 0x1C02CE460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_JROF(unsigned __int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  _DWORD *v4; // rcx
  __int64 result; // rax

  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) != *(_QWORD *)(qword_1C0327C90 + 432)
    || (v2 = qword_1C0327C78, (unsigned __int64)((qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2) < 2) )
  {
    dword_1C0327CE0 = 4368;
    return qword_1C0327CE8;
  }
  qword_1C0327C78 -= 4LL;
  v3 = *(_DWORD *)(v2 - 4);
  v4 = (_DWORD *)(v2 - 8);
  qword_1C0327C78 = (__int64)v4;
  if ( v3 )
    return a1;
  a1 += *v4 - 1;
  if ( !--dword_1C0327CF8 )
  {
    dword_1C0327CE0 = 4359;
    return qword_1C0327CE8;
  }
  result = qword_1C0327CE8;
  if ( a1 < qword_1C0327CF0 )
  {
    dword_1C0327CE0 = 4363;
    return result;
  }
  if ( a1 <= qword_1C0327CE8 )
    return a1;
  return result;
}
