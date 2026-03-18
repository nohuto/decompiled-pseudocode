/*
 * XREFs of MiDbgReadWriteEnclaveUnaligned @ 0x1406BB7D4
 * Callers:
 *     MiDbgReadWriteEnclave @ 0x1406BB6E8 (MiDbgReadWriteEnclave.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     KeDebugReadEnclaveMemory @ 0x1406ACD70 (KeDebugReadEnclaveMemory.c)
 *     KeDebugWriteEnclaveMemory @ 0x1406ACE00 (KeDebugWriteEnclaveMemory.c)
 */

__int64 __fastcall MiDbgReadWriteEnclaveUnaligned(__int64 a1, void *a2, unsigned int a3, int a4)
{
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 result; // rax
  unsigned int v10; // ebx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v7 = a1 & 7;
  v8 = a1 - v7;
  result = KeDebugReadEnclaveMemory(a1 - v7, &v12, 8LL, v11);
  v10 = result;
  if ( (int)result >= 0 )
  {
    if ( a4 )
    {
      memmove(a2, (char *)&v12 + v7, a3);
    }
    else
    {
      memmove((char *)&v12 + v7, a2, a3);
      return (unsigned int)KeDebugWriteEnclaveMemory(v8, (__int64)&v12, 8LL, v11);
    }
    return v10;
  }
  return result;
}
