/*
 * XREFs of RaidAdapterDeviceReady @ 0x1C0025DC8
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0003730 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0006BF0 (RaidAdapterFindUnit.c)
 *     RaidRestartIoQueue @ 0x1C000C8F8 (RaidRestartIoQueue.c)
 *     WPP_SF_ddd @ 0x1C002C0BC (WPP_SF_ddd.c)
 */

void __fastcall RaidAdapterDeviceReady(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // bl
  __int64 Unit; // rax
  __int64 v6; // rdi
  volatile LONG *v7; // rbx
  KIRQL v8; // al
  int v9; // [rsp+48h] [rbp+10h]

  v9 = a2;
  v4 = a2;
  Unit = RaidAdapterFindUnit(a1, a2, a3, a4);
  v6 = Unit;
  if ( Unit )
  {
    v7 = (volatile LONG *)(Unit + 472);
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(Unit + 472));
    *(_DWORD *)(v6 + 432) = 0;
    ExReleaseSpinLockExclusive(v7, v8);
    RaidRestartIoQueue(v6);
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_ddd(
      WPP_GLOBAL_Control->AttachedDevice,
      55LL,
      &WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids,
      v4,
      BYTE1(v9),
      BYTE2(v9));
  }
}
