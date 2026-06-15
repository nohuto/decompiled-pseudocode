/*
 * XREFs of ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x140030C78
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140011570 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x140030BF8 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ??1?$CAutoPtr@VCPipeInstance@@@ATL@@QEAA@XZ @ 0x140030C98 (--1-$CAutoPtr@VCPipeInstance@@@ATL@@QEAA@XZ.c)
 *     ?Reset@CFormatConverterPipe@@QEAAXXZ @ 0x140030CBC (-Reset@CFormatConverterPipe@@QEAAXXZ.c)
 *     ??1CFormatConverterPipe@@QEAA@XZ @ 0x140030CE8 (--1CFormatConverterPipe@@QEAA@XZ.c)
 *     ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14003FA80 (-CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14003FE70 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140044310 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x1400460E8 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 * Callees:
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x1400303C0 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 */

LPVOID *__fastcall ATL::CAutoPtr<CPipeInstance>::Free(LPVOID **a1)
{
  LPVOID *v2; // rcx
  LPVOID *result; // rax

  v2 = *a1;
  if ( v2 )
    result = CPipeInstance::`scalar deleting destructor'(v2);
  *a1 = 0LL;
  return result;
}
