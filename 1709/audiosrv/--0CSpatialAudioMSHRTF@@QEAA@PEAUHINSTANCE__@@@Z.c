/*
 * XREFs of ??0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z @ 0x1800CDF28
 * Callers:
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x1800CE1C4 (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002DA54 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0CSpatialAudioTech@@QEAA@XZ @ 0x1800CDFD4 (--0CSpatialAudioTech@@QEAA@XZ.c)
 */

CSpatialAudioMSHRTF *__fastcall CSpatialAudioMSHRTF::CSpatialAudioMSHRTF(CSpatialAudioMSHRTF *this, HINSTANCE a2)
{
  CSpatialAudioTech::CSpatialAudioTech(this);
  *(_QWORD *)this = &CSpatialAudioMSHRTF::`vftable';
  *((_OWORD *)this + 1) = MICROSOFT_HRTF_SPATIAL_ENCODER;
  if ( LoadStringW(a2, 0x190u, (LPWSTR)this + 16, 128) <= 0 )
    StringCchCopyW((unsigned __int16 *)this + 16, 0x80uLL, (size_t *)L"Microsoft HRTF");
  if ( LoadStringW(a2, 0x1AEu, (LPWSTR)this + 144, 256) <= 0 )
    StringCchCopyW((unsigned __int16 *)this + 144, 0x100uLL, (size_t *)&word_180104218);
  return this;
}
