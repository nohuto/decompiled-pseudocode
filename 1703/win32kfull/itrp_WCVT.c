/*
 * XREFs of itrp_WCVT @ 0x1C02DAEF0
 * Callers:
 *     <none>
 * Callees:
 *     CompDiv @ 0x1C02BD158 (CompDiv.c)
 *     itrp_GetCVTScale @ 0x1C02D2650 (itrp_GetCVTScale.c)
 */

__int64 __fastcall itrp_WCVT(__int64 a1)
{
  __int64 v1; // r8
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rdi
  int CVTScale; // ecx
  int v8; // eax
  __int64 result; // rax

  v1 = qword_1C032CA00;
  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) != *(_QWORD *)(qword_1C032CA00 + 432)
    || (v3 = qword_1C032C9E8, (unsigned __int64)((qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2) < 2) )
  {
    dword_1C032CA50 = 4368;
    return qword_1C032CA58;
  }
  qword_1C032C9E8 -= 4LL;
  v4 = *(_DWORD *)(v3 - 4);
  qword_1C032C9E8 = v3 - 8;
  v5 = *(unsigned __int16 *)(qword_1C032CA00 + 360);
  v6 = *(int *)(v3 - 8);
  if ( (int)v6 >= (int)v5
    || (int)v6 < 0
    || (qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ v5 ^ *(_QWORD *)(qword_1C032CA00 + 16)) != *(_QWORD *)(qword_1C032CA00 + 368) )
  {
    dword_1C032CA50 = 4379;
    return qword_1C032CA58;
  }
  if ( v4 )
  {
    if ( dword_1C032CA3C != 2 )
    {
      CVTScale = itrp_GetCVTScale();
      v8 = CompDiv(CVTScale, (__int64)v4 << 16);
      v1 = qword_1C032CA00;
      v4 = v8;
    }
  }
  result = a1;
  *(_DWORD *)(*(_QWORD *)(v1 + 16) + 4 * v6) = v4;
  return result;
}
