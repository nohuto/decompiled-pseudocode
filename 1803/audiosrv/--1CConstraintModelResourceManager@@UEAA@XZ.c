/*
 * XREFs of ??1CConstraintModelResourceManager@@UEAA@XZ @ 0x1800D808C
 * Callers:
 *     ??_GCConstraintModelResourceManager@@UEAAPEAXI@Z @ 0x1800D8150 (--_GCConstraintModelResourceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXXZ @ 0x180097FD0 (-RemoveAll@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCa.c)
 *     ?RemoveAll@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@QEAAXXZ @ 0x1800DA628 (-RemoveAll@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VRe.c)
 *     ?Shutdown@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800DA9D0 (-Shutdown@CConstraintModelResourceManager@@AEAAXXZ.c)
 */

void __fastcall CConstraintModelResourceManager::~CConstraintModelResourceManager(
        CConstraintModelResourceManager *this)
{
  __int64 v2; // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  *(_QWORD *)this = &CConstraintModelResourceManager::`vftable';
  CConstraintModelResourceManager::Shutdown(this);
  ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::RemoveAll((char *)this + 272);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  v2 = *((_QWORD *)this + 26);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAll((__int64)this + 160);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 3);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 2);
  if ( v3 )
    (**v3)(v3, 1LL);
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &CUnknown::`vftable';
}
