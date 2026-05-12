/*
 * XREFs of RaidGetPortData @ 0x1C0001D0C
 * Callers:
 *     StorpLogStatistics @ 0x1C0002FDC (StorpLogStatistics.c)
 *     StorPortInitialize @ 0x1C001A380 (StorPortInitialize.c)
 *     McGenControlCallbackV2 @ 0x1C001B890 (McGenControlCallbackV2.c)
 *     RaSqmLogAdapterStatistics @ 0x1C0030CD4 (RaSqmLogAdapterStatistics.c)
 * Callees:
 *     <none>
 */

KSPIN_LOCK *RaidGetPortData()
{
  KSPIN_LOCK *v0; // rbx
  KSPIN_LOCK *result; // rax
  _QWORD *v2; // rax

  if ( *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount )
  {
    _InterlockedIncrement(*(volatile signed __int32 **)&WPP_MAIN_CB.ActiveThreadCount);
    return *(KSPIN_LOCK **)&WPP_MAIN_CB.ActiveThreadCount;
  }
  result = (KSPIN_LOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x44506152u);
  v0 = result;
  if ( result )
  {
    v2 = result + 1;
    v2[1] = v2;
    *v2 = v2;
    KeInitializeSpinLock(v0 + 3);
    *((_DWORD *)v0 + 8) = 0;
    *(_DWORD *)v0 = 1;
    *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount = v0;
    return v0;
  }
  return result;
}
