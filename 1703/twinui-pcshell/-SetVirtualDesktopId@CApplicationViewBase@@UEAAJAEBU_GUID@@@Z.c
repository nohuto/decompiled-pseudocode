/*
 * XREFs of ?SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z @ 0x180081D10
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800759F0 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z @ 0x1800815CC (-_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewBase::SetVirtualDesktopId(RTL_SRWLOCK *this, const struct _GUID *a2)
{
  volatile signed __int32 *v4; // rbx
  LPVOID pv; // [rsp+30h] [rbp-50h] BYREF
  __int64 v7; // [rsp+38h] [rbp-48h]
  __int64 v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int8 v11[4]; // [rsp+60h] [rbp-20h] BYREF
  int v12; // [rsp+64h] [rbp-1Ch]
  __int128 v13; // [rsp+68h] [rbp-18h]

  SRWLock[1] = (PSRWLOCK)-2LL;
  wil::srwlock::lock_exclusive(this + 4, SRWLock);
  *(struct _GUID *)&this[12].Ptr = *a2;
  pv = 0LL;
  v7 = -1LL;
  v8 = -1LL;
  if ( (*((int (__fastcall **)(RTL_SRWLOCK *, LPVOID *))this[1].Ptr + 3))(this + 1, &pv) >= 0 )
  {
    GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v9);
    v4 = (volatile signed __int32 *)v9;
    if ( v9 )
    {
      v13 = *(_OWORD *)&this[12].Ptr;
      *(_DWORD *)v11 = 16;
      v12 = 1447309360;
      ApplicationViewManagement::CPersistence::_PersistData(
        (HKEY *)(v9 + 32),
        (const unsigned __int16 *)pv,
        L"VirtualDesktop",
        v11,
        0x18u);
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v4);
    }
  }
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v7 = 0LL;
  v8 = 0LL;
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  return 0LL;
}
