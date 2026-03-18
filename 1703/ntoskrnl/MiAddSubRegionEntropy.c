/*
 * XREFs of MiAddSubRegionEntropy @ 0x14081150C
 * Callers:
 *     MiAssignTopLevelRanges @ 0x1408111C0 (MiAssignTopLevelRanges.c)
 * Callees:
 *     ExGenRandom @ 0x14004F864 (ExGenRandom.c)
 */

unsigned __int64 MiAddSubRegionEntropy()
{
  __int64 v0; // rdi
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rax
  __int64 v3; // rbx
  unsigned __int64 result; // rax

  v0 = qword_14036D860;
  v1 = (unsigned __int64)(unsigned int)ExGenRandom(1) << 32;
  v2 = v1 | (unsigned int)ExGenRandom(1);
  v3 = qword_14036D870;
  qword_14036D860 = v0 + (v2 & 0x7FFFFFFFF8LL);
  qword_14036C5A0 = ((unsigned __int64)(unsigned __int8)ExGenRandom(1) << 30) + v3;
  qword_14036C5C8 = ((qword_14036C5A0 + 0x8FFFFFFFFFLL) & 0xFFFFFF8000000000uLL)
                  + ((unsigned __int64)(unsigned __int8)ExGenRandom(1) << 30);
  result = ((qword_14036C5C8 + 0x8010803FFFLL) & 0xFFFFFF8000000000uLL) - 1;
  qword_14036C5D0 = result;
  return result;
}
