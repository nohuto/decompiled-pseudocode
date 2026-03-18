/*
 * XREFs of SmKmStoreHelperWorker @ 0x14000C8E0
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 *     SmKmStoreHelperCommandCleanup @ 0x140273790 (SmKmStoreHelperCommandCleanup.c)
 *     SmKmStoreHelperCommandProcess @ 0x14027384C (SmKmStoreHelperCommandProcess.c)
 */

LONG __fastcall SmKmStoreHelperWorker(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  LONG result; // eax
  unsigned int v4; // esi
  char v5; // bl
  __int128 v6; // xmm1
  _OWORD v7[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]

  KeSetActualBasePriorityThread(KeGetCurrentThread(), 25LL);
  CurrentThread = KeGetCurrentThread();
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  while ( 1 )
  {
    KeWaitForSingleObject((PVOID)(a1 + 8), Executive, 0, 0, 0LL);
    result = KeResetEvent((PRKEVENT)(a1 + 8));
    v4 = *(unsigned __int16 *)(a1 + 58);
    if ( v4 == 1 )
      break;
    SmKmStoreHelperCommandProcess(a1, *(unsigned __int16 *)(a1 + 58), a1 + 64);
    _m_prefetchw((const void *)(a1 + 56));
    v5 = _InterlockedOr((volatile signed __int32 *)(a1 + 56), 1u);
    if ( (v5 & 2) != 0 )
    {
      v6 = *(_OWORD *)(a1 + 80);
      v7[0] = *(_OWORD *)(a1 + 64);
      v8 = *(_QWORD *)(a1 + 96);
      v7[1] = v6;
      if ( v4 == 4 )
      {
        SmKmStoreHelperCommandCleanup(a1, 4LL, v7);
        v5 &= ~2u;
      }
    }
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    if ( (v5 & 2) != 0 )
      SmKmStoreHelperCommandCleanup(a1, v4, v7);
  }
  return result;
}
