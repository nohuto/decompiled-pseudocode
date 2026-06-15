/*
 * XREFs of ??$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z @ 0x18002DA28
 * Callers:
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180018810 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18002D9E4 (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ?Allocate@?$CHeapPtr@U_GUID@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18005C878 (-Allocate@-$CHeapPtr@U_GUID@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ?Reallocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180074F74 (-Reallocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ?Allocate@?$CHeapPtr@UAUDIO_METER_DATA@@VCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18007C588 (-Allocate@-$CHeapPtr@UAUDIO_METER_DATA@@VCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::AtlMultiply<unsigned __int64>(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  if ( !a2 )
  {
    *a1 = 0LL;
    return 0LL;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / a2 >= a3 )
  {
    *a1 = a3 * a2;
    return 0LL;
  }
  return 2147942487LL;
}
