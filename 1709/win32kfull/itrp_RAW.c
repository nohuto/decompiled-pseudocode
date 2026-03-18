/*
 * XREFs of itrp_RAW @ 0x1C02D1370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_RAW(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // r9d
  __int64 result; // rax

  if ( *(_BYTE *)(qword_1C0327C90 + 333) == 2 )
  {
    v2 = *(_QWORD *)(qword_1C0327C90 + 424);
    if ( (qword_1C0327C90 ^ v2 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C0327C90 + 432)
      && (v2 - qword_1C0327C78) >> 2 )
    {
      v3 = *(__int16 *)(*(_QWORD *)(qword_1C0327C88 + 176) + 2LL * (*(__int16 *)(qword_1C0327C88 + 192) - 1)) + 1;
      *(_DWORD *)qword_1C0327C78 = *(_DWORD *)(*(_QWORD *)(qword_1C0327C88 + 128) + 4LL * (v3 + 1))
                                 - *(_DWORD *)(*(_QWORD *)(qword_1C0327C88 + 128) + 4LL * v3);
      result = a1;
      qword_1C0327C78 += 4LL;
      return result;
    }
    dword_1C0327CE0 = 4369;
  }
  else
  {
    dword_1C0327CE0 = 4365;
  }
  return qword_1C0327CE8;
}
