/*
 * XREFs of ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x140007DC0
 * Callers:
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140006B20 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?NewNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCProcessNode@@PEAV312@1@Z @ 0x140007E68 (-NewNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAPEAVCN.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000B540 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000C180 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140010960 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x1400115D0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140033DE8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(__int64 a1)
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
      goto LABEL_12;
    v2 *= 24LL;
  }
  if ( ~v2 < 8 || (v3 = malloc(v2 + 8)) == 0LL )
LABEL_12:
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
