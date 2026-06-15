/*
 * XREFs of ??0CSpatialAudioTech@@QEAA@XZ @ 0x180040860
 * Callers:
 *     ??0CSpatialAudioDolbyStereo@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18003CAA0 (--0CSpatialAudioDolbyStereo@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18003D880 (--0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18003DBB0 (--0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180040B80 (--0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ?GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ @ 0x180045DB4 (-GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ.c)
 *     memset @ 0x180049B8A (memset.c)
 */

CSpatialAudioTech *__fastcall CSpatialAudioTech::CSpatialAudioTech(CSpatialAudioTech *this)
{
  *(_QWORD *)this = &CSpatialAudioTech::`vftable';
  *((GUID *)this + 1) = GUID_00000000_0000_0000_0000_000000000000;
  memset((char *)this + 32, 0, 0x300uLL);
  *((_QWORD *)this + 1) = CSpatialAudioTech::GetAtmosCheck();
  return this;
}
