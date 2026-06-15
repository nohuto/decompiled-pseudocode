/*
 * XREFs of ?GetFreeNode@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@AEAAXXZ @ 0x140003D90
 * Callers:
 *     ?OnLeftSubmixConnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140006ED0 (-OnLeftSubmixConnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140007580 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x14000B350 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000FE20 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?AddHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCStreamInstance@@@Z @ 0x1400312AC (-AddHead@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140032784 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetFreeNode(
        __int64 a1)
{
  unsigned __int64 v2; // rcx
  _QWORD *v3; // rax
  int v4; // r8d
  _QWORD *v5; // rax
  int i; // r8d

  if ( *(_QWORD *)(a1 + 32) )
    return;
  v2 = *(unsigned int *)(a1 + 40);
  if ( v2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v2 < 0x18 )
      goto LABEL_11;
    v2 *= 24LL;
  }
  if ( ~v2 < 8 || (v3 = malloc(v2 + 8)) == 0LL )
LABEL_11:
    ATL::AtlThrowImpl(-2147024882);
  *v3 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v3;
  v4 = *(_DWORD *)(a1 + 40);
  v5 = &v3[3 * (unsigned int)(v4 - 1) + 1];
  for ( i = v4 - 1; i >= 0; --i )
  {
    *v5 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = v5;
    v5 -= 3;
  }
}
