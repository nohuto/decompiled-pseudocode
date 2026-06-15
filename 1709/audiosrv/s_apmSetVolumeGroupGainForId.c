/*
 * XREFs of s_apmSetVolumeGroupGainForId @ 0x1800A20F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ConvertDbToEngineVolume @ 0x1800A1E5C (ConvertDbToEngineVolume.c)
 *     s_apmSetVolumeGroupGainScalarForId @ 0x1800A2150 (s_apmSetVolumeGroupGainScalarForId.c)
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
      (void *)0x2D5,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\onecore\\playbackmanagerrpc.cpp",
      (const char *)(unsigned int)v5);
  return v6;
}
