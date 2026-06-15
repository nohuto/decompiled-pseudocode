/*
 * XREFs of ??1AudioSrvVolumeTelemetryStreamVolume@@QEAA@XZ @ 0x180011868
 * Callers:
 *     ??1CAudioStream@@MEAA@XZ @ 0x18001CE58 (--1CAudioStream@@MEAA@XZ.c)
 *     _CAudioStream::_CAudioStream_::_1_::dtor$11 @ 0x180039402 (_CAudioStream--_CAudioStream_--_1_--dtor$11.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$11 @ 0x18003951C (_CAudioStream--CAudioStream_--_1_--dtor$11.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x180030FA8 (-LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x180031738 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
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
    std::_Deallocate(*((void **)this + 18), v2 + 1, 2uLL);
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 7LL;
  *((_WORD *)this + 72) = 0;
  v3 = *((_QWORD *)this + 16);
  if ( v3 >= 8 )
    std::_Deallocate(*((void **)this + 13), v3 + 1, 2uLL);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 7LL;
  *((_WORD *)this + 52) = 0;
  std::string::_Tidy_deallocate((char *)this + 72);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
}
