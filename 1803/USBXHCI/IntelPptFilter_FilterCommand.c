/*
 * XREFs of IntelPptFilter_FilterCommand @ 0x1C005F0E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     IntelPptFilter_CheckAndIncreaseEndpointCount @ 0x1C005F01C (IntelPptFilter_CheckAndIncreaseEndpointCount.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C005F27C (IntelPptFilter_FilterEndpointConfigureCommand.c)
 */

__int64 __fastcall IntelPptFilter_FilterCommand(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  KIRQL v5; // r14
  int v6; // r8d

  v4 = 4;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 40));
  v6 = (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2;
  if ( v6 == 9 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      0x10u,
      0x11u,
      (__int64)&WPP_f8c97ca0289731c416fcfd765f0cb280_Traceguids);
    if ( !IntelPptFilter_CheckAndIncreaseEndpointCount(a1, 1) )
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        3u,
        0x10u,
        0x12u,
        (__int64)&WPP_f8c97ca0289731c416fcfd765f0cb280_Traceguids);
      *(_BYTE *)(a2 + 60) = 9;
      v4 = 1;
    }
  }
  else if ( v6 == 12 )
  {
    v4 = IntelPptFilter_FilterEndpointConfigureCommand(a1, a2, 0LL);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 40), v5);
  return v4;
}
