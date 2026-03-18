/*
 * XREFs of itrp_LSW @ 0x1C02CE910
 * Callers:
 *     <none>
 * Callees:
 *     InvokeGlobalGSScale @ 0x1C02B7B40 (InvokeGlobalGSScale.c)
 */

__int64 __fastcall itrp_LSW(__int64 a1)
{
  __int64 v1; // rbx
  int *v3; // rdx
  int v4; // eax
  __int64 result; // rax

  v1 = qword_1C0327C90;
  word_1C0327CDC = 0;
  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) == *(_QWORD *)(qword_1C0327C90 + 432)
    && (qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2 )
  {
    v3 = (int *)(qword_1C0327C90 + 296);
    qword_1C0327C78 -= 4LL;
    v4 = *(__int16 *)qword_1C0327C78;
    *(_WORD *)(qword_1C0327C90 + 154) = *(_WORD *)qword_1C0327C78;
    *(_DWORD *)(v1 + 112) = InvokeGlobalGSScale(*(_DWORD *)(v1 + 192), v3, v4);
    return a1;
  }
  else
  {
    result = qword_1C0327CE8;
    dword_1C0327CE0 = 4368;
  }
  return result;
}
