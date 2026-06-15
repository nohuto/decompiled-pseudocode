/*
 * XREFs of ?Reallocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180074F74
 * Callers:
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18002D140 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ??$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z @ 0x18002DA28 (--$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z.c)
 */

char __fastcall ATL::CHeapPtr<float,ATL::CCRTAllocator>::Reallocate(__int64 *a1, unsigned __int64 a2)
{
  char v2; // bl
  __int64 v5; // rax
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v6 = 0LL;
  if ( (int)ATL::AtlMultiply<unsigned __int64>(&v6, a2, 4uLL) < 0 )
    return 0;
  v5 = _o_realloc(*a1, v6);
  if ( v5 )
  {
    *a1 = v5;
    return 1;
  }
  return v2;
}
