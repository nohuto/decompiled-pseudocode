/*
 * XREFs of ?RegisterStreamVolumeNotifications@CAudioStream@@UEAAJPEAUIAudioStreamVolumeCallback@@@Z @ 0x180096470
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?NewNode@?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAGPEAV312@1@Z @ 0x180082D2C (-NewNode@-$CAtlList@PEAGV-$CElementTraits@PEAG@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAGPEAV312@1@Z.c)
 *     ?Find@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAUIAudioStreamVolumeCallback@@PEAU3@@Z @ 0x18009598C (-Find@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCallbac.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::RegisterStreamVolumeNotifications(
        CAudioStream *this,
        struct IAudioStreamVolumeCallback *a2)
{
  struct IAudioStreamVolumeCallback *v2; // rsi
  unsigned int v4; // ebx
  __int64 **v5; // rdi
  __int64 *v6; // rax
  __int64 **v7; // rcx
  ATL::CAtlException *v9; // rbx
  ATL::CAtlException *v10; // [rsp+28h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v12; // [rsp+38h] [rbp-10h]
  struct IAudioStreamVolumeCallback *v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a2;
  v2 = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 400);
  v12 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = 0;
  if ( v2 )
  {
    v5 = (__int64 **)((char *)this + 440);
    if ( !ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::Find(v5, &v13) )
    {
      try
      {
        v6 = ATL::CAtlList<unsigned short *,ATL::CElementTraits<unsigned short *>>::NewNode(
               (__int64)v5,
               (__int64 *)&v13,
               (__int64)v5[1]);
        v7 = (__int64 **)v5[1];
        if ( v7 )
          *v7 = v6;
        else
          *v5 = v6;
        v5[1] = v6;
      }
      catch ( ATL::CAtlException *v10 )
      {
        v9 = v10;
        if ( *(_DWORD *)v10 == -1073741571 )
          _o__resetstkoflw();
        v2 = v13;
        v4 = *(_DWORD *)v9;
      }
      (*(void (__fastcall **)(struct IAudioStreamVolumeCallback *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  else
  {
    v4 = -2147467261;
  }
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
