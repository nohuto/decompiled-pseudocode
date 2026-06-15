/*
 * XREFs of ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180018540
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x18001760C (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     ?RemoveHead@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAVCOnDeviceWorkItem@@XZ @ 0x18001887C (-RemoveHead@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@AT.c)
 *     ??_ECOnDevicePropertyChangedWorkItem@@UEAAPEAXI@Z @ 0x1800189D0 (--_ECOnDevicePropertyChangedWorkItem@@UEAAPEAXI@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x18009D970 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 */

void __fastcall CAudioSrv::OnDeviceWorkItem(struct _TP_CALLBACK_INSTANCE *a1, CAudioSrv *a2, struct _TP_WORK *a3)
{
  COnDevicePropertyChangedWorkItem *v4; // rbx
  DWORD v5; // eax
  const unsigned __int16 *v6; // rcx
  void *(__fastcall *v7)(COnDevicePropertyChangedWorkItem *__hidden, unsigned int); // rax
  struct _tagpropertykey lpCriticalSection[2]; // [rsp+20h] [rbp-28h] BYREF

  lpCriticalSection[0].fmtid.Data4[0] = 0;
  *(_QWORD *)&lpCriticalSection[0].fmtid.Data1 = (char *)a2 + 112;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)lpCriticalSection);
  v4 = (COnDevicePropertyChangedWorkItem *)ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::RemoveHead((char *)a2 + 152);
  if ( lpCriticalSection[0].fmtid.Data4[0] )
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)&lpCriticalSection[0].fmtid.Data1);
  if ( *((_DWORD *)v4 + 4) == 1 || *((_DWORD *)v4 + 4) == 2 || *((_DWORD *)v4 + 4) == 3 )
  {
    CAudioSrv::ProcessDeviceInternal(a2, *((const unsigned __int16 **)v4 + 1));
  }
  else if ( *((_DWORD *)v4 + 4) == 4 )
  {
    v5 = *((_DWORD *)v4 + 10);
    v6 = (const unsigned __int16 *)*((_QWORD *)v4 + 1);
    lpCriticalSection[0].fmtid = *(GUID *)((char *)v4 + 24);
    lpCriticalSection[0].pid = v5;
    CPolicyConfig::ProcessPropertyChange(v6, lpCriticalSection);
  }
  v7 = **(void *(__fastcall ***)(COnDevicePropertyChangedWorkItem *__hidden, unsigned int))v4;
  if ( v7 == COnDevicePropertyChangedWorkItem::`vector deleting destructor' )
    COnDevicePropertyChangedWorkItem::`vector deleting destructor'(v4, 1u);
  else
    v7(v4, 1u);
}
