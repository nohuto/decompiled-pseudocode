/*
 * XREFs of ??1AudioSrvVolumeTelemetryStreamVolume@@QEAA@XZ @ 0x180097DF4
 * Callers:
 *     _CAudioStream::CAudioStream_::_1_::dtor$13 @ 0x18006A128 (_CAudioStream--CAudioStream_--_1_--dtor$13.c)
 * Callees:
 *     ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x180043D40 (-LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x180096F5C (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 */

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
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 7LL;
  *((_WORD *)this + 72) = 0;
  v3 = *((_QWORD *)this + 16);
  if ( v3 >= 8 )
    std::_Deallocate(*((_QWORD **)this + 13), v3 + 1, 2uLL);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 7LL;
  *((_WORD *)this + 52) = 0;
  std::string::_Tidy_deallocate((__int64)this + 72);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
}
