/*
 * XREFs of IoSetIoCompletionEx2 @ 0x1400863C0
 * Callers:
 *     AlpcpSignalAndWait @ 0x1400601C0 (AlpcpSignalAndWait.c)
 *     AlpcpQueueIoCompletionPort @ 0x1400845E0 (AlpcpQueueIoCompletionPort.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140086160 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx @ 0x140086380 (IoSetIoCompletionEx.c)
 *     ExpShutdownWorkerFactory @ 0x140087284 (ExpShutdownWorkerFactory.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140089390 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1400F3D30 (AlpcpLookasidePacketCallbackRoutine.c)
 *     NtLockFile @ 0x1404E39A0 (NtLockFile.c)
 *     IoSetIoCompletion @ 0x14052DD60 (IoSetIoCompletion.c)
 *     NtSetIoCompletion @ 0x14052E9FC (NtSetIoCompletion.c)
 *     IopXxxControlFile @ 0x1405A1A20 (IopXxxControlFile.c)
 * Callees:
 *     KeInsertQueueEx @ 0x140086460 (KeInsertQueueEx.c)
 *     IopAllocateMiniCompletionPacket @ 0x14052EBDC (IopAllocateMiniCompletionPacket.c)
 */

__int64 __fastcall IoSetIoCompletionEx2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        unsigned __int8 a8)
{
  __int64 v10; // rdx
  __int64 v12; // rbp
  __int64 MiniCompletionPacket; // rax

  v10 = a7;
  v12 = a1;
  if ( a7 )
  {
    *(_QWORD *)(a7 + 48) = a5;
    *(_QWORD *)(a7 + 24) = a2;
    *(_QWORD *)(a7 + 32) = a3;
    *(_DWORD *)(a7 + 40) = a4;
LABEL_3:
    KeInsertQueueEx(a1, v10, 0LL, a8);
    return 0LL;
  }
  LOBYTE(a1) = 1;
  MiniCompletionPacket = IopAllocateMiniCompletionPacket(a1, a6);
  if ( MiniCompletionPacket )
  {
    v10 = MiniCompletionPacket;
    *(_QWORD *)(MiniCompletionPacket + 48) = a5;
    a1 = v12;
    *(_QWORD *)(MiniCompletionPacket + 24) = a2;
    *(_QWORD *)(MiniCompletionPacket + 32) = a3;
    *(_DWORD *)(MiniCompletionPacket + 40) = a4;
    goto LABEL_3;
  }
  return 3221225626LL;
}
