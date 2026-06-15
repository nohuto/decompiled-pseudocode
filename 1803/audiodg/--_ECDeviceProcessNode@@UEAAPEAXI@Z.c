/*
 * XREFs of ??_ECDeviceProcessNode@@UEAAPEAXI@Z @ 0x140016E90
 * Callers:
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x140008010 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000CE10 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ @ 0x140016480 (-Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

CDeviceProcessNode *__fastcall CDeviceProcessNode::`vector deleting destructor'(CDeviceProcessNode *this, char a2)
{
  _QWORD *v4; // rdi
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  Windows::Media::Devices::AudioDeviceModulesManager *v6; // rcx
  __int64 (__fastcall *v7)(Windows::Media::Devices::AudioDeviceModulesManager *); // rax
  CAudioMediaType *v8; // rcx
  __int64 (__fastcall *v9)(CAudioMediaType *); // rax
  CAudioMediaType *v10; // rcx
  __int64 (__fastcall *v11)(CAudioMediaType *); // rax
  CAudioMediaType *v12; // rcx
  __int64 (__fastcall *v13)(CAudioMediaType *); // rax

  *(_QWORD *)this = &CDeviceProcessNode::`vftable';
  v4 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    v5 = (void (__fastcall ***)(_QWORD, __int64))v4[2];
    if ( v5 )
      (**v5)(v5, 1LL);
    v4[2] = 0LL;
    v6 = (Windows::Media::Devices::AudioDeviceModulesManager *)v4[3];
    if ( v6 )
    {
      v7 = *(__int64 (__fastcall **)(Windows::Media::Devices::AudioDeviceModulesManager *))(*(_QWORD *)v6 + 16LL);
      if ( v7 == Windows::Media::Devices::AudioDeviceModulesManager::Release )
        Windows::Media::Devices::AudioDeviceModulesManager::Release(v6);
      else
        v7(v6);
    }
    if ( *v4 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 16LL))(*v4);
    operator delete(v4);
  }
  *((_QWORD *)this + 4) = 0LL;
  v8 = (CAudioMediaType *)*((_QWORD *)this + 6);
  if ( v8 )
  {
    v9 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v8 + 16LL);
    if ( v9 == CAudioMediaType::Release )
      CAudioMediaType::Release(v8);
    else
      v9(v8);
  }
  *(_QWORD *)this = &CProcessNode::`vftable';
  v10 = (CAudioMediaType *)*((_QWORD *)this + 2);
  if ( v10 )
  {
    v11 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v10 + 16LL);
    if ( v11 == CAudioMediaType::Release )
      CAudioMediaType::Release(v10);
    else
      v11(v10);
  }
  v12 = (CAudioMediaType *)*((_QWORD *)this + 1);
  if ( v12 )
  {
    v13 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v12 + 16LL);
    if ( v13 == CAudioMediaType::Release )
      CAudioMediaType::Release(v12);
    else
      v13(v12);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
