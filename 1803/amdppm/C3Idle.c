/*
 * XREFs of C3Idle @ 0x1C0004CB0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0003518 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C0003568 (WriteGenAddr.c)
 */

char __fastcall C3Idle(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  unsigned int GenAddr; // eax
  unsigned int v5; // eax
  unsigned __int64 v6; // rsi
  char result; // al

  v2 = a2;
  _InterlockedExchange(&ProcBmRldSet, 1);
  GenAddr = ReadGenAddr((__int64)&dword_1C0011BDC);
  WriteGenAddr(&dword_1C0011BDC, GenAddr | 2LL);
  if ( qword_1C0011BEC )
  {
    v5 = ReadGenAddr((__int64)&dword_1C0011BE8);
    WriteGenAddr(&dword_1C0011BE8, v5 | 2LL);
  }
  v6 = (unsigned int)ReadGenAddr((__int64)&dword_1C0011BF4);
  WriteGenAddr(&dword_1C0011BF4, v6 | 1);
  if ( (_DWORD)v2 )
    __writemsr(0x48u, 0LL);
  if ( a1 )
    ReadGenAddr(a1);
  result = WriteGenAddr(&dword_1C0011BF4, v6);
  if ( (_DWORD)v2 )
  {
    result = v2;
    __writemsr(0x48u, v2);
  }
  else
  {
    _mm_lfence();
  }
  return result;
}
