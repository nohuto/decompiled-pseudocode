/*
 * XREFs of ?EngageSpatialAudioStreamProcessorAPO@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x14000D6A0
 * Callers:
 *     ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14000D5F4 (-CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_S.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?GetSpatialAudioStreamProcessor@CPipeInstance@@QEBAJPEAPEAUISpatialAudioStreamProcessor@@@Z @ 0x140030C50 (-GetSpatialAudioStreamProcessor@CPipeInstance@@QEBAJPEAPEAUISpatialAudioStreamProcessor@@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPipeInstance::EngageSpatialAudioStreamProcessorAPO(
        CPipeInstance *this,
        struct CProcessNode *a2,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a3)
{
  int v4; // edi
  __int64 *v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  struct ISpatialAudioStreamProcessor *v9; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  if ( (*((_DWORD *)a3 + 22) & 0x800000) != 0 )
  {
    v9 = 0LL;
    if ( (int)CPipeInstance::GetSpatialAudioStreamProcessor(this, &v9) >= 0 )
    {
      v6 = (__int64 *)*((_QWORD *)a2 + 4);
      if ( v6 )
      {
        v7 = *v6;
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        v4 = 0;
        if ( v7 )
        {
          v8 = 0LL;
          v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v7)(
                 v7,
                 &GUID_b307a9fd_ddc2_45d8_87e5_48eb6002d4a3,
                 &v8);
          if ( v4 >= 0 )
            v4 = (*(__int64 (__fastcall **)(struct ISpatialAudioStreamProcessor *, __int64))(*(_QWORD *)v9 + 32LL))(
                   v9,
                   v8);
          if ( v8 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
    if ( v9 )
      (*(void (__fastcall **)(struct ISpatialAudioStreamProcessor *))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v4 < 0 )
      AudDGTraceLoggingErrorHelper("CPipeInstance::EngageSpatialAudioStreamProcessorAPO", 0x3B9u, v4);
  }
  return (unsigned int)v4;
}
