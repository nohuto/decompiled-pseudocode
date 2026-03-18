/*
 * XREFs of itrp_WFV @ 0x1C02D4DD0
 * Callers:
 *     <none>
 * Callees:
 *     itrp_ComputeAndCheck_PF_Proj @ 0x1C02CA748 (itrp_ComputeAndCheck_PF_Proj.c)
 */

__int64 itrp_WFV()
{
  __int64 v0; // rcx
  __int64 v1; // r10
  __int64 result; // rax

  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) == *(_QWORD *)(qword_1C0327C90 + 432)
    && (v0 = qword_1C0327C78, (unsigned __int64)((qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2) >= 2) )
  {
    qword_1C0327C78 -= 4LL;
    HIWORD(dword_1C0327C6C) = *(_WORD *)(v0 - 4);
    qword_1C0327C78 = v0 - 8;
    LOWORD(dword_1C0327C6C) = *(_WORD *)(v0 - 8);
    itrp_ComputeAndCheck_PF_Proj();
    dword_1C0327CBC = 1;
    word_1C0327CDC = 0;
    return v1;
  }
  else
  {
    result = qword_1C0327CE8;
    dword_1C0327CE0 = 4368;
  }
  return result;
}
