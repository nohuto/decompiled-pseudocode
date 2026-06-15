/*
 * XREFs of ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18002EFF0
 * Callers:
 *     ?OnDestroyStream@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z @ 0x18002EC50 (-OnDestroyStream@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?OnCreateStream@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x18002ED40 (-OnCreateStream@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSP.c)
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x1800BFD4C (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 *     ?HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800C08EC (-HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?HandleRedistributeObjects@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800C0998 (-HandleRedistributeObjects@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x1800C0A34 (-HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z.c)
 *     ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x1800C1CCC (-RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z.c)
 *     ?SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCEndpointResourcePool@2@@Z @ 0x1800C236C (-SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCE.c)
 *     std::_Func_impl__lambda_c4f40eb4128b796d78dc595c2797cc70__std::allocator_int__void_::_Do_call @ 0x1800C2B40 (std--_Func_impl__lambda_c4f40eb4128b796d78dc595c2797cc70__std--allocator_int__void_--_Do_call.c)
 *     ?CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ @ 0x1800C46D4 (-CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ.c)
 *     ?Initialize@CStreamResource@Sarm@@QEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEAU__POSITION@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x1800C4934 (-Initialize@CStreamResource@Sarm@@QEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEAU__POSITION@@PEBUSPA.c)
 *     ?ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z @ 0x1800C4FBC (-ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z.c)
 *     ?SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z @ 0x1800C526C (-SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z.c)
 * Callees:
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 */

void __fastcall SarmTraceLoggingTracer(LPCSTR psz, int a2)
{
  _DWORD v2[2]; // [rsp+30h] [rbp-9h] BYREF
  __int64 v3; // [rsp+38h] [rbp-1h]
  void *v4; // [rsp+40h] [rbp+7h] BYREF
  int v5; // [rsp+48h] [rbp+Fh]
  int v6; // [rsp+4Ch] [rbp+13h]
  void *v7; // [rsp+50h] [rbp+17h]
  int v8; // [rsp+58h] [rbp+1Fh]
  int v9; // [rsp+5Ch] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+27h] BYREF
  int *v11; // [rsp+70h] [rbp+37h]
  int v12; // [rsp+78h] [rbp+3Fh]
  int v13; // [rsp+7Ch] [rbp+43h]
  int v14; // [rsp+A8h] [rbp+6Fh] BYREF

  v14 = a2;
  if ( (unsigned int)dword_18014A370 > 5 )
  {
    TlgCreateSz(&pDesc, psz);
    v13 = 0;
    v11 = &v14;
    v12 = 4;
    v3 = 0LL;
    v2[1] = 5;
    v4 = off_18014A378;
    v2[0] = ((unsigned int)&unk_180110FC2 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v5 = *(unsigned __int16 *)off_18014A378;
    v7 = &unk_180110FCD;
    v6 = 2;
    v8 = 21;
    v9 = 1;
    EtwEventWriteTransfer(qword_18014A390, v2, 0LL, 0LL, 4, &v4);
  }
}
