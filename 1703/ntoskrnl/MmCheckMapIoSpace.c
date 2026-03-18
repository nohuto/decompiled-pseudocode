/*
 * XREFs of MmCheckMapIoSpace @ 0x140763FF4
 * Callers:
 *     VerifierMmMapIoSpace @ 0x140782050 (VerifierMmMapIoSpace.c)
 * Callees:
 *     MiIsPfn @ 0x1400DC8A0 (MiIsPfn.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall MmCheckMapIoSpace(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 result; // rax

  v2 = a1 >> 12;
  v3 = ((a1 & 0xFFF) + a2 + 4095) >> 12;
  v4 = 48 * (a1 >> 12);
  do
  {
    result = MiIsPfn(v2);
    if ( (_DWORD)result == 1 )
    {
      result = 0xFFFFFA8000000020uLL;
      if ( !*(_WORD *)(v4 - 0x57FFFFFFFE0LL) )
        result = VerifierBugCheckIfAppropriate(0xC4u, v4 / 48);
    }
    v4 += 48LL;
    ++v2;
    --v3;
  }
  while ( v3 );
  return result;
}
