/*
 * XREFs of ?Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ @ 0x140037E90
 * Callers:
 *     ??1CSystemAudioDeviceExclusive@@UEAA@XZ @ 0x140037C98 (--1CSystemAudioDeviceExclusive@@UEAA@XZ.c)
 * Callees:
 *     ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x140002D2C (-Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x140003420 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     ?Release@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ @ 0x14002F2FC (-Release@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSystemAudioDeviceExclusive::Cleanup(CSystemAudioDeviceExclusive *this)
{
  char *v2; // rcx
  __int128 v3; // [rsp+38h] [rbp-20h] BYREF

  v3 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v3);
  if ( *((_DWORD *)this + 95) )
    CSystemAudioDeviceCollection::Remove(this);
  CSystemAudioDeviceBase::Cleanup(this);
  ATL::CComPtrBase<IAudioProcessingObject>::Release((_QWORD *)this + 29);
  v2 = (char *)*((_QWORD *)this + 44);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 44) = 0LL;
  }
  EtwEventActivityIdControl(4LL, &v3);
}
