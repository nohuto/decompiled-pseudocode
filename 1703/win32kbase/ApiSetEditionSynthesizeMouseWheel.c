/*
 * XREFs of ApiSetEditionSynthesizeMouseWheel @ 0x1C013C944
 * Callers:
 *     NtMITSynthesizeMouseWheel @ 0x1C00E0170 (NtMITSynthesizeMouseWheel.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionSynthesizeMouseWheel(_OWORD *a1, unsigned int a2)
{
  unsigned int v2; // esi
  unsigned int v4; // ebx
  int v5; // edx
  __int128 v6; // xmm1
  _OWORD v8[2]; // [rsp+30h] [rbp-28h] BYREF

  v2 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      194,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  v4 = 0;
  if ( (int)IsEditionSynthesizeMouseWheelSupported() >= 0 )
  {
    v6 = a1[1];
    v8[0] = *a1;
    v8[1] = v6;
    v4 = EditionSynthesizeMouseWheel(v8, v2);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      14,
      195,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return v4;
}
