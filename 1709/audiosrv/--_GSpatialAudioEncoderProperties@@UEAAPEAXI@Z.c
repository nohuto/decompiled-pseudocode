/*
 * XREFs of ??_GSpatialAudioEncoderProperties@@UEAAPEAXI@Z @ 0x1800D6470
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180031604 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

SpatialAudioEncoderProperties *__fastcall SpatialAudioEncoderProperties::`scalar deleting destructor'(
        SpatialAudioEncoderProperties *this,
        char a2)
{
  void *v4; // rcx

  *(_QWORD *)this = &SpatialAudioEncoderProperties::`vftable'{for `ISpatialAudioEncoderProperties'};
  *((_QWORD *)this + 1) = &SpatialAudioEncoderProperties::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
  v4 = (void *)*((_QWORD *)this + 7);
  if ( v4 )
  {
    _aligned_free(v4);
    *((_QWORD *)this + 7) = 0LL;
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 68);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  *((_DWORD *)this + 13) = -1073741823;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 5);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
