/*
 * XREFs of ??0CSpatialAudioDolbyStereo@@QEAA@PEAUHINSTANCE__@@@Z @ 0x1800CDE7C
 * Callers:
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x1800CE1C4 (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002DA54 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0CSpatialAudioTech@@QEAA@XZ @ 0x1800CDFD4 (--0CSpatialAudioTech@@QEAA@XZ.c)
 */

CSpatialAudioDolbyStereo *__fastcall CSpatialAudioDolbyStereo::CSpatialAudioDolbyStereo(
        CSpatialAudioDolbyStereo *this,
        HINSTANCE a2)
{
  CSpatialAudioTech::CSpatialAudioTech(this);
  *(_QWORD *)this = &CSpatialAudioDolbyStereo::`vftable';
  *((_OWORD *)this + 1) = DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER;
  if ( LoadStringW(a2, 0x192u, (LPWSTR)this + 16, 128) <= 0 )
    StringCchCopyW((unsigned __int16 *)this + 16, 0x80uLL, (size_t *)L"Stereo");
  if ( LoadStringW(a2, 0x1B0u, (LPWSTR)this + 144, 256) <= 0 )
    StringCchCopyW(
      (unsigned __int16 *)this + 144,
      0x100uLL,
      (size_t *)L"ms-windows-store://pdp/?productid=9n0866fs04w8");
  return this;
}
