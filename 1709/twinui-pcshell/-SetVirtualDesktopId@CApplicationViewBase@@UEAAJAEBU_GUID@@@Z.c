/*
 * XREFs of ?SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z @ 0x180084BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18007888C (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z @ 0x180084534 (-_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewBase::SetVirtualDesktopId(CApplicationViewBase *this, const struct _GUID *a2)
{
  RTL_SRWLOCK *v4; // rdi
  HKEY *v5; // rbx
  HKEY *v7; // [rsp+38h] [rbp-9h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-1h] BYREF
  __int64 v9; // [rsp+48h] [rbp+7h]
  __int64 v10; // [rsp+50h] [rbp+Fh]
  __int64 v11; // [rsp+60h] [rbp+1Fh]
  RTL_SRWLOCK *v12; // [rsp+68h] [rbp+27h]
  unsigned __int8 v13[4]; // [rsp+70h] [rbp+2Fh] BYREF
  int v14; // [rsp+74h] [rbp+33h]
  __int128 v15; // [rsp+78h] [rbp+37h]

  v11 = -2LL;
  v4 = (RTL_SRWLOCK *)((char *)this + 40);
  AcquireSRWLockExclusive((PSRWLOCK)this + 5);
  v12 = v4;
  *(struct _GUID *)((char *)this + 104) = *a2;
  pv = 0LL;
  v9 = -1LL;
  v10 = -1LL;
  if ( (*(int (__fastcall **)(char *, LPVOID *))(*((_QWORD *)this + 1) + 24LL))((char *)this + 8, &pv) >= 0 )
  {
    GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v7);
    v5 = v7;
    if ( v7 )
    {
      v15 = *(_OWORD *)((char *)this + 104);
      *(_DWORD *)v13 = 16;
      v14 = 1447309360;
      ApplicationViewManagement::CPersistence::_PersistData(
        v7 + 6,
        (const unsigned __int16 *)pv,
        L"VirtualDesktop",
        v13,
        0x18u);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 11, 0xFFFFFFFF) == 1 )
      {
        (*((void (__fastcall **)(HKEY *, __int64))*v7 + 9))(v7, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v9 = 0LL;
  v10 = 0LL;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
