/*
 * XREFs of RaidResumeIoQueue @ 0x1C000D2E4
 * Callers:
 *     RaidResumeUnitQueue @ 0x1C000D1B0 (RaidResumeUnitQueue.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C003C384 (RaidResumeAndRestartUnitQueue.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0030340 (WPP_SF_.c)
 */

__int64 __fastcall RaidResumeIoQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  unsigned int v6; // ecx

  v5 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 44));
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 10LL, &WPP_853dacc0765f33640d40b8b391c2a4b7_Traceguids, a4);
    }
    _InterlockedAdd((volatile signed __int32 *)(a1 + 44), 1u);
    return 0;
  }
  else
  {
    v6 = 0;
    if ( !v5 )
    {
      v6 = 1;
      _InterlockedExchange((volatile __int32 *)(a1 + 152), 1);
    }
  }
  return v6;
}
