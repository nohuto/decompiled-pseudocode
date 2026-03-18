/*
 * XREFs of MmInitSystemDll @ 0x140857D2C
 * Callers:
 *     Phase1InitializationIoReady @ 0x14082FAF0 (Phase1InitializationIoReady.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140081E20 (ObFastDereferenceObject.c)
 *     PspReferenceSystemDll @ 0x14045FDA4 (PspReferenceSystemDll.c)
 *     PsQuerySystemDllInfo @ 0x14053D978 (PsQuerySystemDllInfo.c)
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
    qword_1403884C0 = *(_QWORD *)(v1 + 24);
    if ( result )
      return ObFastDereferenceObject((signed __int64 *)(v1 - 16), result);
  }
  return result;
}
