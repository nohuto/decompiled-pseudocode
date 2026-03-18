/*
 * XREFs of SmKmStoreHelperWorker @ 0x140120F30
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     SmKmStoreHelperCommandProcess @ 0x140120FFC (SmKmStoreHelperCommandProcess.c)
 *     SmKmStoreHelperCommandCleanup @ 0x14024DFB0 (SmKmStoreHelperCommandCleanup.c)
 */

LONG __fastcall SmKmStoreHelperWorker(__int64 a1, __int64 a2, _SINGLE_LIST_ENTRY *a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  LONG result; // eax
  unsigned int v7; // esi
  char v8; // bl
  __int128 v9; // xmm1
  _OWORD v10[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 25, a3, a4);
  CurrentThread = KeGetCurrentThread();
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  while ( 1 )
  {
    KeWaitForSingleObject((PVOID)(a1 + 8), Executive, 0, 0, 0LL);
    result = KeResetEvent((PRKEVENT)(a1 + 8));
    v7 = *(unsigned __int16 *)(a1 + 58);
    if ( v7 == 1 )
      break;
    SmKmStoreHelperCommandProcess(a1, *(unsigned __int16 *)(a1 + 58), a1 + 64);
    _m_prefetchw((const void *)(a1 + 56));
    v8 = _InterlockedOr((volatile signed __int32 *)(a1 + 56), 1u);
    if ( (v8 & 2) != 0 )
    {
      v9 = *(_OWORD *)(a1 + 80);
      v10[0] = *(_OWORD *)(a1 + 64);
      v11 = *(_QWORD *)(a1 + 96);
      v10[1] = v9;
      if ( v7 == 4 )
      {
        SmKmStoreHelperCommandCleanup(a1, 4LL, v10);
        v8 &= ~2u;
      }
    }
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    if ( (v8 & 2) != 0 )
      SmKmStoreHelperCommandCleanup(a1, v7, v10);
  }
  return result;
}
