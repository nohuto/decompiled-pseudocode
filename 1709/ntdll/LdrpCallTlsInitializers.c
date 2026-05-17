/*
 * XREFs of LdrpCallTlsInitializers @ 0x180031350
 * Callers:
 *     LdrpProcessDetachNode @ 0x180012198 (LdrpProcessDetachNode.c)
 *     LdrShutdownThread @ 0x18002E930 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x18002EC08 (LdrpInitializeThread.c)
 *     LdrpInitializeNode @ 0x180072C90 (LdrpInitializeNode.c)
 *     LdrShutdownProcess @ 0x180076200 (LdrShutdownProcess.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpCallInitRoutine @ 0x180031254 (LdrpCallInitRoutine.c)
 *     LdrpFindTlsEntry @ 0x18003143C (LdrpFindTlsEntry.c)
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 *     RtlReportException @ 0x1800DC780 (RtlReportException.c)
 */

char __fastcall LdrpCallTlsInitializers(int a1, __int64 a2)
{
  __int64 TlsEntry; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  char result; // al
  __int64 *v8; // rbx
  __int64 v9; // rdi

  RtlAcquireSRWLockShared(&LdrpTlsLock);
  TlsEntry = LdrpFindTlsEntry(a2);
  result = RtlReleaseSRWLockShared(&LdrpTlsLock, v5, v6);
  if ( TlsEntry )
  {
    v8 = *(__int64 **)(TlsEntry + 40);
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = *v8;
        if ( !*v8 )
          break;
        ++v8;
        if ( (LdrpDebugFlags & 5) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrtls.c",
            1061,
            (unsigned int)"LdrpCallTlsInitializers",
            2,
            "Calling TLS callback %p for DLL \"%wZ\" at %p\n",
            v9,
            a2 + 72,
            *(_QWORD *)(a2 + 48));
        result = LdrpCallInitRoutine(v9, *(_QWORD *)(a2 + 48), a1);
      }
    }
  }
  return result;
}
