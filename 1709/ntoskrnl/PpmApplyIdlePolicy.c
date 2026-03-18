/*
 * XREFs of PpmApplyIdlePolicy @ 0x14014DAD0
 * Callers:
 *     PpmResetIdlePolicy @ 0x14014D1F0 (PpmResetIdlePolicy.c)
 * Callees:
 *     PpmConvertTime @ 0x14008D4CC (PpmConvertTime.c)
 */

unsigned __int64 __fastcall PpmApplyIdlePolicy(__int64 *a1)
{
  __int64 v1; // r9
  __int64 v2; // rbx
  __int64 v3; // r8
  char v4; // dl
  char v5; // al
  unsigned __int64 result; // rax

  v1 = PpmCurrentProfile;
  v2 = *a1;
  v3 = 2688LL * dword_1403661AC;
  *((_BYTE *)a1 + 60) = *(_BYTE *)(v3 + PpmCurrentProfile + 140);
  v4 = *(_BYTE *)(v3 + v1 + 148);
  *((_BYTE *)a1 + 59) = v4;
  v5 = *(_BYTE *)(v3 + v1 + 149);
  *((_BYTE *)a1 + 57) = v4;
  *((_BYTE *)a1 + 58) = v5;
  *((_BYTE *)a1 + 56) = v5;
  result = PpmConvertTime(*(unsigned int *)(v3 + v1 + 144), 0xF4240uLL, PopQpcFrequency);
  *(_DWORD *)(v2 + 532) = result;
  return result;
}
