/*
 * XREFs of ??1AudioSrvVolumeTelemetryStreamVolume@@QEAA@XZ @ 0x18007B7C0
 * Callers:
 *     _CAudioStream::_CAudioStream_::_1_::dtor$11 @ 0x18005A882 (_CAudioStream--_CAudioStream_--_1_--dtor$11.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$11 @ 0x18005A9D2 (_CAudioStream--CAudioStream_--_1_--dtor$11.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x18002E934 (-LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ.c)
 *     ?_Tidy_deallocate_only@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x18007AEF8 (-_Tidy_deallocate_only@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall AudioSrvVolumeTelemetryStreamVolume::~AudioSrvVolumeTelemetryStreamVolume(
        AudioSrvVolumeTelemetryStreamVolume *this)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rdx

  *(_QWORD *)this = &AudioSrvVolumeTelemetryStreamVolume::`vftable';
  AudioSrvVolumeTelemetry::LogTelemetry(this);
  v2 = *((_QWORD *)this + 21);
  if ( v2 >= 8 )
    std::_Deallocate(*((_QWORD **)this + 18), v2 + 1, 2uLL);
  v3 = *((_QWORD *)this + 16);
  if ( v3 >= 8 )
    std::_Deallocate(*((_QWORD **)this + 13), v3 + 1, 2uLL);
  std::string::_Tidy_deallocate_only((__int64)this + 72);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
}
