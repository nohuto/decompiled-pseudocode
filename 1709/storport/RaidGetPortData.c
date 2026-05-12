/*
 * XREFs of RaidGetPortData @ 0x1C000292C
 * Callers:
 *     StorpLogStatistics @ 0x1C0004218 (StorpLogStatistics.c)
 *     StorPortInitialize @ 0x1C0010820 (StorPortInitialize.c)
 *     McGenControlCallbackV2 @ 0x1C001B5D0 (McGenControlCallbackV2.c)
 *     RaSqmLogAdapterStatistics @ 0x1C00313CC (RaSqmLogAdapterStatistics.c)
 * Callees:
 *     <none>
 */

KSPIN_LOCK *RaidGetPortData()
{
  KSPIN_LOCK *result; // rax
  KSPIN_LOCK *v1; // rbx
  _QWORD *v2; // rax

  if ( *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount )
  {
    _InterlockedIncrement(*(volatile signed __int32 **)&WPP_MAIN_CB.ActiveThreadCount);
    return *(KSPIN_LOCK **)&WPP_MAIN_CB.ActiveThreadCount;
  }
  result = (KSPIN_LOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x44506152u);
  v1 = result;
  if ( result )
  {
    v2 = result + 1;
    v2[1] = v2;
    *v2 = v2;
    KeInitializeSpinLock(v1 + 3);
    *((_DWORD *)v1 + 8) = 0;
    *(_DWORD *)v1 = 1;
    *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount = v1;
    return *(KSPIN_LOCK **)&WPP_MAIN_CB.ActiveThreadCount;
  }
  return result;
}
