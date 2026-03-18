/*
 * XREFs of MiAddSubRegionEntropy @ 0x14083A034
 * Callers:
 *     MiAssignTopLevelRanges @ 0x140839D10 (MiAssignTopLevelRanges.c)
 * Callees:
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 */

unsigned __int64 MiAddSubRegionEntropy()
{
  __int64 v0; // rdi
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rax
  __int64 v3; // rbx
  unsigned __int64 result; // rax

  v0 = qword_140389B30;
  v1 = (unsigned __int64)(unsigned int)ExGenRandom(1) << 32;
  v2 = v1 | (unsigned int)ExGenRandom(1);
  v3 = qword_140389B40;
  qword_140389B30 = v0 + (v2 & 0x7FFFFFFFF8LL);
  qword_140388928 = ((unsigned __int64)(unsigned __int8)ExGenRandom(1) << 30) + v3;
  qword_140388950 = ((qword_140388928 + 0x8FFFFFFFFFLL) & 0xFFFFFF8000000000uLL)
                  + ((unsigned __int64)(unsigned __int8)ExGenRandom(1) << 30);
  result = ((qword_140388950 + 0x8010803FFFLL) & 0xFFFFFF8000000000uLL) - 1;
  qword_140388958 = result;
  return result;
}
