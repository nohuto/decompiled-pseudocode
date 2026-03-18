/*
 * XREFs of vInitXLATE @ 0x1C01E00C0
 * Callers:
 *     InitializeGre @ 0x1C01DFC44 (InitializeGre.c)
 * Callees:
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 vInitXLATE()
{
  __int64 result; // rax
  _DWORD *v1; // rcx

  memset(&xlateTable, 0, 0x100uLL);
  LODWORD(result) = 0;
  xloIdent.cEntries = 256;
  qword_1C018FD78 = 0LL;
  v1 = &unk_1C018FDB0;
  xloIdent.iUniq = 1;
  *(_QWORD *)&xloIdent.flXlate = 1LL;
  xloIdent.pulXlate = (ULONG *)&unk_1C018FDB0;
  dword_1C018FD80 = 0;
  qword_1C018FD88 = 0LL;
  xmmword_1C018FD90 = 0LL;
  qword_1C018FDA0 = 0LL;
  dword_1C018FDA8 = 0;
  dword_1C018FD84 = -2;
  do
  {
    *v1 = result;
    result = (unsigned int)(result + 1);
    ++v1;
  }
  while ( (unsigned int)result < 0x100 );
  return result;
}
