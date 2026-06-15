/*
 * XREFs of memmove_s_0 @ 0x1400395F8
 * Callers:
 *     ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHH@Z @ 0x140001D44 (-RemoveAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSyste.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140005840 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x140031954 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?RemoveAt@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAHH@Z @ 0x140044C18 (-RemoveAt@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x14001DBE8 (_invalid_parameter_noinfo.c)
 */

errno_t __cdecl memmove_s_0(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t *v4; // rax
  errno_t v5; // ebx

  if ( SourceSize )
  {
    if ( !Destination || !Source )
    {
      v4 = (errno_t *)_o__errno(Destination, DestinationSize, Source);
      v5 = 22;
LABEL_4:
      *v4 = v5;
      invalid_parameter_noinfo();
      return v5;
    }
    if ( DestinationSize < SourceSize )
    {
      v4 = (errno_t *)_o__errno(Destination, DestinationSize, Source);
      v5 = 34;
      goto LABEL_4;
    }
    memmove(Destination, Source, SourceSize);
  }
  return 0;
}
