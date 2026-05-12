/*
 * XREFs of RaidAdapterDeviceBusy @ 0x1C002CF00
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0001AA0 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C00061C8 (RaidAdapterFindUnit.c)
 *     WPP_SF_ddd @ 0x1C00309E8 (WPP_SF_ddd.c)
 */

void __fastcall RaidAdapterDeviceBusy(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int8 v4; // bl
  __int64 Unit; // rax
  __int64 v6; // rsi
  int v7; // edi
  volatile LONG *v8; // rbx
  KIRQL v9; // al

  v4 = a2;
  Unit = RaidAdapterFindUnit(a1, a2);
  v6 = Unit;
  if ( Unit )
  {
    v7 = 0x7FFFFFFF;
    v8 = (volatile LONG *)(Unit + 472);
    if ( a3 < 0x7FFFFFFF )
      v7 = a3;
    v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(Unit + 472));
    if ( v7 > *(_DWORD *)(v6 + 476) )
      v7 = *(_DWORD *)(v6 + 476);
    *(_DWORD *)(v6 + 432) = v7;
    ExReleaseSpinLockExclusive(v8, v9);
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_ddd(
      WPP_GLOBAL_Control->AttachedDevice,
      54LL,
      &WPP_d17971f34b7c3fdc440c591ea55cafdf_Traceguids,
      v4,
      BYTE1(a2),
      BYTE2(a2));
  }
}
