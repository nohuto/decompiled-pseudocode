/*
 * XREFs of itrp_WCVT @ 0x1C02D4BB0
 * Callers:
 *     <none>
 * Callees:
 *     CompDiv @ 0x1C02B6F58 (CompDiv.c)
 *     itrp_GetCVTScale @ 0x1C02CC400 (itrp_GetCVTScale.c)
 */

__int64 __fastcall itrp_WCVT(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rdi
  int CVTScale; // ecx
  __int64 result; // rax

  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) != *(_QWORD *)(qword_1C0327C90 + 432)
    || (v2 = qword_1C0327C78, (unsigned __int64)((qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2) < 2) )
  {
    dword_1C0327CE0 = 4368;
    return qword_1C0327CE8;
  }
  qword_1C0327C78 -= 4LL;
  v3 = *(_DWORD *)(v2 - 4);
  qword_1C0327C78 = v2 - 8;
  v4 = *(unsigned __int16 *)(qword_1C0327C90 + 360);
  v5 = *(int *)(v2 - 8);
  if ( (int)v5 >= (int)v4
    || (int)v5 < 0
    || (qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ v4 ^ *(_QWORD *)(qword_1C0327C90 + 16)) != *(_QWORD *)(qword_1C0327C90 + 368) )
  {
    dword_1C0327CE0 = 4379;
    return qword_1C0327CE8;
  }
  if ( v3 )
  {
    if ( dword_1C0327CCC != 2 )
    {
      CVTScale = itrp_GetCVTScale();
      v3 = CompDiv(CVTScale, (__int64)v3 << 16);
    }
  }
  result = a1;
  *(_DWORD *)(*(_QWORD *)(qword_1C0327C90 + 16) + 4 * v5) = v3;
  return result;
}
