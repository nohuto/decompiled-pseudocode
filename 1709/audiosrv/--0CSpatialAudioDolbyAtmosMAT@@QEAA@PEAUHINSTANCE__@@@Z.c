/*
 * XREFs of ??0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z @ 0x1800CDCE4
 * Callers:
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x1800CE1C4 (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002DA54 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0CSpatialAudioTech@@QEAA@XZ @ 0x1800CDFD4 (--0CSpatialAudioTech@@QEAA@XZ.c)
 */

CSpatialAudioDolbyAtmosMAT *__fastcall CSpatialAudioDolbyAtmosMAT::CSpatialAudioDolbyAtmosMAT(
        CSpatialAudioDolbyAtmosMAT *this,
        HINSTANCE a2)
{
  CSpatialAudioTech::CSpatialAudioTech(this);
  *(_QWORD *)this = &CSpatialAudioDolbyAtmosMAT::`vftable';
  *((_OWORD *)this + 1) = DOLBY_ATMOS_MAT_SPATIAL_ENCODER;
  if ( LoadStringW(a2, 0x193u, (LPWSTR)this + 16, 128) <= 0 )
    StringCchCopyW((unsigned __int16 *)this + 16, 0x80uLL, (size_t *)L"MAT 2.x");
  if ( LoadStringW(a2, 0x1B1u, (LPWSTR)this + 144, 256) <= 0 )
    StringCchCopyW(
      (unsigned __int16 *)this + 144,
      0x100uLL,
      (size_t *)L"ms-windows-store://pdp/?productid=9n0866fs04w8");
  return this;
}
