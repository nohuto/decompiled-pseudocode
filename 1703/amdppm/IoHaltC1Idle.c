/*
 * XREFs of IoHaltC1Idle @ 0x1C00076B0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0008AC4 (ReadGenAddr.c)
 *     C1Halt @ 0x1C000BF80 (C1Halt.c)
 */

__int64 __fastcall IoHaltC1Idle(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax

  v2 = a2;
  if ( a2 )
    __writemsr(0x48u, 0LL);
  ReadGenAddr(a1);
  result = C1Halt(v4, v3);
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
