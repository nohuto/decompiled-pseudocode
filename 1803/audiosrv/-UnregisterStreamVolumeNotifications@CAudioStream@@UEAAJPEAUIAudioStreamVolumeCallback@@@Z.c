/*
 * XREFs of ?UnregisterStreamVolumeNotifications@CAudioStream@@UEAAJPEAUIAudioStreamVolumeCallback@@@Z @ 0x1800B6530
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?Find@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAUIAudioStreamVolumeCallback@@PEAU3@@Z @ 0x1800B54FC (-Find@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCallbac.c)
 *     ?RemoveAt@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800DA688 (-RemoveAt@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCal.c)
 */

__int64 __fastcall CAudioStream::UnregisterStreamVolumeNotifications(
        CAudioStream *this,
        struct IAudioStreamVolumeCallback *a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]
  struct IAudioStreamVolumeCallback *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 416);
  v8 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = 0;
  if ( a2 )
  {
    v5 = ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::Find(
           (_QWORD *)this + 57,
           &v9);
    if ( v5 )
    {
      ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAt(
        (char *)this + 456,
        v5);
      (*(void (__fastcall **)(struct IAudioStreamVolumeCallback *))(*(_QWORD *)a2 + 16LL))(a2);
    }
  }
  else
  {
    v4 = -2147467261;
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
