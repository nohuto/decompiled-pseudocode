/*
 * XREFs of ??_ERegistryWatcher@@MEAAPEAXI@Z @ 0x1800094A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
RegistryWatcher *__fastcall RegistryWatcher::`vector deleting destructor'(RegistryWatcher *this, char a2)
{
  __int64 v4; // rcx
  HKEY v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &RegistryWatcher::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  if ( *((_QWORD *)this + 4) )
  {
    v4 = *((_QWORD *)this + 2);
    if ( v4 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 288LL))(v4, 1LL);
    CloseHandle(*((HANDLE *)this + 4));
    *((_QWORD *)this + 4) = 0LL;
  }
  v5 = (HKEY)*((_QWORD *)this + 3);
  if ( v5 )
  {
    RegCloseKey(v5);
    *((_QWORD *)this + 3) = 0LL;
  }
  v6 = *((_QWORD *)this + 2);
  if ( v6 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 2);
  if ( v7 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
