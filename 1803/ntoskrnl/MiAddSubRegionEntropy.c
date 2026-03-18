/*
 * XREFs of MiAddSubRegionEntropy @ 0x1408BB8C4
 * Callers:
 *     MiAssignTopLevelRanges @ 0x1408BB5B0 (MiAssignTopLevelRanges.c)
 * Callees:
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 */

unsigned __int64 MiAddSubRegionEntropy()
{
  __int64 v0; // rdi
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rax
  __int64 v3; // rbx
  unsigned __int64 result; // rax

  v0 = qword_1403CD0F0;
  v1 = (unsigned __int64)(unsigned int)ExGenRandom(1) << 32;
  v2 = v1 | (unsigned int)ExGenRandom(1);
  v3 = qword_1403CD100;
  qword_1403CD0F0 = v0 + (v2 & 0x7FFFFFFFF8LL);
  qword_1403CBB28 = ((unsigned __int64)(unsigned __int8)ExGenRandom(1) << 30) + v3;
  result = ((unsigned __int64)(unsigned __int8)ExGenRandom(1) << 30)
         + ((qword_1403CBB28 + 0x8FFFFFFFFFLL) & 0xFFFFFF8000000000uLL);
  qword_1403CBB68 = result;
  qword_1403CBB70 = ((result + 0x8010803FFFLL) & 0xFFFFFF8000000000uLL) - 1;
  return result;
}
