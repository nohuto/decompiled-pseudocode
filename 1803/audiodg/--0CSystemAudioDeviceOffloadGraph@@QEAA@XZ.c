/*
 * XREFs of ??0CSystemAudioDeviceOffloadGraph@@QEAA@XZ @ 0x14003C698
 * Callers:
 *     ??0?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z @ 0x14003C544 (--0-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z @ 0x14003C5E0 (--0-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSystemAudioDeviceSharedBase@@QEAA@XZ @ 0x140011DC8 (--0CSystemAudioDeviceSharedBase@@QEAA@XZ.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
CSystemAudioDeviceOffloadGraph *__fastcall CSystemAudioDeviceOffloadGraph::CSystemAudioDeviceOffloadGraph(
        CSystemAudioDeviceOffloadGraph *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 98) = 0;
  v2 = (char *)this + 400;
  memset_0((char *)this + 400, 0, 0x28uLL);
  v2[40] = 0;
  CSystemAudioDeviceSharedBase::CSystemAudioDeviceSharedBase(this);
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  return this;
}
