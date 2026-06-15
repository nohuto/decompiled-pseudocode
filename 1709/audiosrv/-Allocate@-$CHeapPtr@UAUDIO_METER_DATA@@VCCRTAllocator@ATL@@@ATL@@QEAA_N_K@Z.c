/*
 * XREFs of ?Allocate@?$CHeapPtr@UAUDIO_METER_DATA@@VCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18007C588
 * Callers:
 *     ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x180072040 (-GetPeakValue@CAudioSession@@UEAAJPEAM@Z.c)
 *     ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x18007C608 (-GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z.c)
 * Callees:
 *     ??$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z @ 0x18002DA28 (--$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z.c)
 */

bool __fastcall ATL::CHeapPtr<AUDIO_METER_DATA,ATL::CCRTAllocator>::Allocate(_QWORD *a1, unsigned __int64 a2)
{
  void *v4; // rax
  size_t Size; // [rsp+40h] [rbp+18h] BYREF

  Size = 0LL;
  if ( (int)ATL::AtlMultiply<unsigned __int64>(&Size, a2, 0xCuLL) < 0 )
    return 0;
  v4 = malloc(Size);
  *a1 = v4;
  return v4 != 0LL;
}
