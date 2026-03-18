/*
 * XREFs of MmInitSystemDll @ 0x140808CEC
 * Callers:
 *     Phase1InitializationIoReady @ 0x140809CD4 (Phase1InitializationIoReady.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x1400EE840 (ObFastDereferenceObject.c)
 *     PsQuerySystemDllInfo @ 0x1404499AC (PsQuerySystemDllInfo.c)
 *     PspReferenceSystemDll @ 0x14049C278 (PspReferenceSystemDll.c)
 */

signed __int64 MmInitSystemDll()
{
  signed __int64 result; // rax
  signed __int64 v1; // rbx

  result = PsQuerySystemDllInfo(0);
  v1 = result;
  if ( result )
  {
    result = PspReferenceSystemDll((signed __int64 *)(result - 16));
    qword_14036C180 = *(_QWORD *)(v1 + 24);
    if ( result )
      return ObFastDereferenceObject((signed __int64 *)(v1 - 16), result);
  }
  return result;
}
