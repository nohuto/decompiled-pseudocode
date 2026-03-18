/*
 * XREFs of KeDebugReadEnclaveMemory @ 0x140741FBC
 * Callers:
 *     MiDbgReadWriteEnclave @ 0x140751FF8 (MiDbgReadWriteEnclave.c)
 *     MiDbgReadWriteEnclaveUnaligned @ 0x1407520E4 (MiDbgReadWriteEnclaveUnaligned.c)
 * Callees:
 *     KiEnclsDebugRead @ 0x1401ABCD0 (KiEnclsDebugRead.c)
 */

__int64 __fastcall KeDebugReadEnclaveMemory(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4)
{
  *a4 = 0LL;
  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  while ( a3 )
  {
    *a2 = KiEnclsDebugRead(4LL, 0LL);
    a1 += 8LL;
    ++a2;
    a3 -= 8LL;
    *a4 += 8LL;
  }
  return 0LL;
}
