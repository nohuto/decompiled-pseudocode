/*
 * XREFs of USBType1SurpriseRemove @ 0x1C0025700
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00011A8 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall USBType1SurpriseRemove(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 152LL);
  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    a2,
    8u,
    0x1Eu,
    (__int64)&WPP_3782699cdfb7314fc0fa753a1da472e6_Traceguids,
    a1);
  if ( *(_BYTE *)(v2 + 96) )
    *(_BYTE *)(v2 + 100) = 0;
  return 0LL;
}
