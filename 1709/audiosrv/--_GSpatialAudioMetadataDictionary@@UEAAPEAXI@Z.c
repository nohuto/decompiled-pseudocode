/*
 * XREFs of ??_GSpatialAudioMetadataDictionary@@UEAAPEAXI@Z @ 0x1800D8400
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180031604 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

SpatialAudioMetadataDictionary *__fastcall SpatialAudioMetadataDictionary::`scalar deleting destructor'(
        SpatialAudioMetadataDictionary *this,
        char a2)
{
  *(_QWORD *)this = &SpatialAudioMetadataDictionary::`vftable';
  *((_QWORD *)this + 1) = &SpatialAudioMetadataDictionary::`vftable'{for `ISpatialAudioMetadataDictionaryData'};
  *((_QWORD *)this + 2) = &SpatialAudioMetadataDictionary::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
  operator delete(*((void **)this + 17));
  *((_QWORD *)this + 17) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  *((_DWORD *)this + 15) = -1073741823;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 6);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
