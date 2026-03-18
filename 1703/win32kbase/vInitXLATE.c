/*
 * XREFs of vInitXLATE @ 0x1C01D82BC
 * Callers:
 *     InitializeGre @ 0x1C01D521C (InitializeGre.c)
 * Callees:
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 vInitXLATE()
{
  __int64 result; // rax
  _DWORD *v1; // rcx

  memset(&xlateTable, 0, 0x100uLL);
  LODWORD(result) = 0;
  xloIdent.cEntries = 256;
  qword_1C018B128 = 0LL;
  v1 = &unk_1C018B160;
  xloIdent.iUniq = 1;
  *(_QWORD *)&xloIdent.flXlate = 1LL;
  xloIdent.pulXlate = (ULONG *)&unk_1C018B160;
  dword_1C018B130 = 0;
  qword_1C018B138 = 0LL;
  xmmword_1C018B140 = 0LL;
  qword_1C018B150 = 0LL;
  dword_1C018B158 = 0;
  dword_1C018B134 = -2;
  do
  {
    *v1 = result;
    result = (unsigned int)(result + 1);
    ++v1;
  }
  while ( (unsigned int)result < 0x100 );
  return result;
}
