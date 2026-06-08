/*
 * XREFs of C2Idle @ 0x1C0007A40
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0008E0C (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C0008E5C (WriteGenAddr.c)
 */

__int64 __fastcall C2Idle(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  int GenAddr; // eax
  int v6; // eax

  v2 = (unsigned int)a2;
  result = (unsigned int)_InterlockedExchange(&ProcBmRldSet, 0);
  if ( (_DWORD)result == 1 )
  {
    GenAddr = ReadGenAddr(&dword_1C0011BCC, a2);
    result = WriteGenAddr(&dword_1C0011BCC, GenAddr & 0xFFFFFFFD);
    if ( qword_1C0011BDC )
    {
      v6 = ReadGenAddr(&dword_1C0011BD8, a2);
      result = WriteGenAddr(&dword_1C0011BD8, v6 & 0xFFFFFFFD);
    }
  }
  if ( (_DWORD)v2 )
  {
    result = 0LL;
    a2 = 0LL;
    __writemsr(0x48u, 0LL);
  }
  if ( a1 )
    result = ReadGenAddr(a1, a2);
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
