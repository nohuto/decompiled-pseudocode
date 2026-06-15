/*
 * XREFs of s_apmSetVolumeGroupGainForId @ 0x1800DCF60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ConvertDbToEngineVolume @ 0x1800DC944 (ConvertDbToEngineVolume.c)
 *     s_apmSetVolumeGroupGainScalarForId @ 0x1800DCFC0 (s_apmSetVolumeGroupGainScalarForId.c)
 */

__int64 __fastcall s_apmSetVolumeGroupGainForId(__int64 a1, __int64 a2, float a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ConvertDbToEngineVolume(a3);
  v5 = s_apmSetVolumeGroupGainScalarForId(a1, 0LL, a2);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31C,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\onecore\\playbackmanagerrpc.cpp",
      (const char *)(unsigned int)v5);
  return v6;
}
