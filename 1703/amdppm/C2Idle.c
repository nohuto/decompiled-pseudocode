/*
 * XREFs of C2Idle @ 0x1C0007700
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0008AC4 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C0008B1C (WriteGenAddr.c)
 */

__int64 __fastcall C2Idle(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  int GenAddr; // eax
  int v5; // eax
  __int64 result; // rax

  v2 = a2;
  if ( _InterlockedExchange(&ProcBmRldSet, 0) == 1 )
  {
    GenAddr = ReadGenAddr(&dword_1C0011B7C);
    WriteGenAddr(&dword_1C0011B7C, GenAddr & 0xFFFFFFFD);
    if ( qword_1C0011B8C )
    {
      v5 = ReadGenAddr(&dword_1C0011B88);
      WriteGenAddr(&dword_1C0011B88, v5 & 0xFFFFFFFD);
    }
  }
  if ( (_DWORD)v2 )
    __writemsr(0x48u, 0LL);
  result = ReadGenAddr(a1);
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
