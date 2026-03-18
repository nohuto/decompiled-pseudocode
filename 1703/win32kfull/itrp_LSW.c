/*
 * XREFs of itrp_LSW @ 0x1C02D4B70
 * Callers:
 *     <none>
 * Callees:
 *     InvokeGlobalGSScale @ 0x1C02BDD44 (InvokeGlobalGSScale.c)
 */

__int64 __fastcall itrp_LSW(__int64 a1)
{
  __int64 v1; // rbx
  int *v3; // rdx
  int v4; // eax
  __int64 result; // rax

  v1 = qword_1C032CA00;
  word_1C032CA4C = 0;
  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) == *(_QWORD *)(qword_1C032CA00 + 432)
    && (qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2 )
  {
    v3 = (int *)(qword_1C032CA00 + 296);
    qword_1C032C9E8 -= 4LL;
    v4 = *(__int16 *)qword_1C032C9E8;
    *(_WORD *)(qword_1C032CA00 + 154) = *(_WORD *)qword_1C032C9E8;
    *(_DWORD *)(v1 + 112) = InvokeGlobalGSScale(*(_DWORD *)(v1 + 192), v3, v4);
    return a1;
  }
  else
  {
    result = qword_1C032CA58;
    dword_1C032CA50 = 4368;
  }
  return result;
}
