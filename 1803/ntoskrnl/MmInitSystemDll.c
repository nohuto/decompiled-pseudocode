/*
 * XREFs of MmInitSystemDll @ 0x1408C9E98
 * Callers:
 *     Phase1InitializationIoReady @ 0x1408A5E94 (Phase1InitializationIoReady.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140105100 (ObFastDereferenceObject.c)
 *     PspReferenceSystemDll @ 0x1404E9390 (PspReferenceSystemDll.c)
 *     PsQuerySystemDllInfo @ 0x14055FF3C (PsQuerySystemDllInfo.c)
 */

unsigned __int64 MmInitSystemDll()
{
  unsigned __int64 result; // rax
  unsigned __int64 v1; // rbx

  result = PsQuerySystemDllInfo(0);
  v1 = result;
  if ( result )
  {
    result = PspReferenceSystemDll((signed __int64 *)(result - 16));
    qword_1403CB648 = *(_QWORD *)(v1 + 24);
    if ( result )
      return ObFastDereferenceObject((signed __int64 *)(v1 - 16), result);
  }
  return result;
}
