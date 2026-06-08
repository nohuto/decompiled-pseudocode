/*
 * XREFs of C1Idle @ 0x1C0007670
 * Callers:
 *     <none>
 * Callees:
 *     C1Halt @ 0x1C000BF80 (C1Halt.c)
 */

__int64 __fastcall C1Idle(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax

  v2 = (unsigned int)a2;
  if ( (_DWORD)a2 )
  {
    a2 = 0LL;
    a1 = 72LL;
    __writemsr(0x48u, 0LL);
  }
  result = C1Halt(a1, a2);
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
