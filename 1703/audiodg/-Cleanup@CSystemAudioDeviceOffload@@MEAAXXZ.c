/*
 * XREFs of ?Cleanup@CSystemAudioDeviceOffload@@MEAAXXZ @ 0x14003C480
 * Callers:
 *     ??1CSystemAudioDeviceOffload@@UEAA@XZ @ 0x14003C198 (--1CSystemAudioDeviceOffload@@UEAA@XZ.c)
 * Callees:
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x140003AC0 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     ?Release@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ @ 0x14003077C (-Release@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ.c)
 *     ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x1400394F0 (-Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSystemAudioDeviceOffload::Cleanup(CSystemAudioDeviceOffload *this)
{
  char *v2; // rcx
  __int128 v3; // [rsp+38h] [rbp-20h] BYREF

  v3 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v3);
  if ( *((_DWORD *)this + 101) )
    CSystemAudioDeviceCollection::Remove(this);
  CSystemAudioDeviceBase::Cleanup(this);
  ATL::CComPtrBase<IAudioProcessingObject>::Release((_QWORD *)this + 29);
  v2 = (char *)*((_QWORD *)this + 47);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 47) = 0LL;
  }
  EtwEventActivityIdControl(4LL, &v3);
}
