/*
 * XREFs of RaidAdapterDeviceBusy @ 0x1C0025D00
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0003730 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0006BF0 (RaidAdapterFindUnit.c)
 *     WPP_SF_ddd @ 0x1C002C0BC (WPP_SF_ddd.c)
 */

void __fastcall RaidAdapterDeviceBusy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  unsigned __int8 v5; // bl
  __int64 Unit; // rax
  __int64 v7; // rsi
  int v8; // edi
  volatile LONG *v9; // rbx
  KIRQL v10; // al
  int v11; // edx
  int v12; // [rsp+48h] [rbp+10h]

  v12 = a2;
  v4 = a3;
  v5 = a2;
  Unit = RaidAdapterFindUnit(a1, a2, a3, a4);
  v7 = Unit;
  if ( Unit )
  {
    v8 = 0x7FFFFFFF;
    v9 = (volatile LONG *)(Unit + 472);
    if ( v4 < 0x7FFFFFFF )
      v8 = v4;
    v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(Unit + 472));
    v11 = *(_DWORD *)(v7 + 476);
    if ( v8 <= v11 )
      v11 = v8;
    *(_DWORD *)(v7 + 432) = v11;
    ExReleaseSpinLockExclusive(v9, v10);
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_ddd(
      WPP_GLOBAL_Control->AttachedDevice,
      54LL,
      &WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids,
      v5,
      BYTE1(v12),
      BYTE2(v12));
  }
}
