/*
 * XREFs of ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800242A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x180002F50 (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??_ECOnDevicePropertyChangedWorkItem@@UEAAPEAXI@Z @ 0x180023C80 (--_ECOnDevicePropertyChangedWorkItem@@UEAAPEAXI@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ @ 0x1800240B8 (-RemoveAll@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x18008135C (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 */

void __fastcall CAudioSrv::OnDeviceWorkItem(struct _TP_CALLBACK_INSTANCE *a1, __int64 *a2, struct _TP_WORK *a3)
{
  __int64 *v4; // rcx
  __int64 *v5; // rdx
  __int64 v6; // rax
  COnDevicePropertyChangedWorkItem *v7; // rbx
  bool v8; // zf
  DWORD v9; // eax
  const unsigned __int16 *v10; // rcx
  COnDevicePropertyChangedWorkItem *(__fastcall *v11)(COnDevicePropertyChangedWorkItem *, char); // rax
  struct _tagpropertykey lpCriticalSection[2]; // [rsp+20h] [rbp-28h] BYREF

  lpCriticalSection[0].fmtid.Data4[0] = 0;
  *(_QWORD *)&lpCriticalSection[0].fmtid.Data1 = a2 + 14;
  ATL::CCritSecLock::Lock((LPCRITICAL_SECTION *)lpCriticalSection);
  v4 = a2 + 19;
  v5 = (__int64 *)a2[19];
  if ( !v5 )
    ATL::AtlThrowImpl(-2147467259);
  v6 = *v5;
  v7 = (COnDevicePropertyChangedWorkItem *)v5[2];
  *v4 = *v5;
  if ( v6 )
    *(_QWORD *)(v6 + 8) = 0LL;
  else
    a2[20] = 0LL;
  *v5 = a2[23];
  v8 = a2[21]-- == 1;
  a2[23] = (__int64)v5;
  if ( v8 )
    ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll((__int64)v4);
  if ( lpCriticalSection[0].fmtid.Data4[0] )
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)&lpCriticalSection[0].fmtid.Data1);
  if ( *((_DWORD *)v7 + 4) == 1 || *((_DWORD *)v7 + 4) == 2 || *((_DWORD *)v7 + 4) == 3 )
  {
    CAudioSrv::ProcessDeviceInternal((CAudioSrv *)a2, *((const unsigned __int16 **)v7 + 1));
  }
  else if ( *((_DWORD *)v7 + 4) == 4 )
  {
    v9 = *((_DWORD *)v7 + 10);
    v10 = (const unsigned __int16 *)*((_QWORD *)v7 + 1);
    lpCriticalSection[0].fmtid = *(GUID *)((char *)v7 + 24);
    lpCriticalSection[0].pid = v9;
    CPolicyConfig::ProcessPropertyChange(v10, lpCriticalSection);
  }
  v11 = **(COnDevicePropertyChangedWorkItem *(__fastcall ***)(COnDevicePropertyChangedWorkItem *, char))v7;
  if ( v11 == COnDevicePropertyChangedWorkItem::`vector deleting destructor' )
    COnDevicePropertyChangedWorkItem::`vector deleting destructor'(v7, 1);
  else
    v11(v7, 1);
}
