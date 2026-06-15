/*
 * XREFs of ??1CDeviceProcessNode@@UEAA@XZ @ 0x140019C80
 * Callers:
 *     ??_ECDeviceProcessNode@@UEAAPEAXI@Z @ 0x140019DA0 (--_ECDeviceProcessNode@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000AF50 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ @ 0x14000EC10 (-Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CDeviceProcessNode::~CDeviceProcessNode(CDeviceProcessNode *this)
{
  _QWORD *v2; // rdi
  void (__fastcall ***v3)(_QWORD, __int64); // rcx
  Windows::Media::Devices::AudioDeviceModulesManager *v4; // rcx
  __int64 (__fastcall *v5)(Windows::Media::Devices::AudioDeviceModulesManager *, __int64); // rax
  CAudioMediaType *v6; // rcx
  __int64 (__fastcall *v7)(CAudioMediaType *); // rax
  CAudioMediaType *v8; // rcx
  __int64 (__fastcall *v9)(CAudioMediaType *); // rax
  CAudioMediaType *v10; // rcx
  __int64 (__fastcall *v11)(CAudioMediaType *); // rax

  *(_QWORD *)this = &CDeviceProcessNode::`vftable';
  v2 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    v3 = (void (__fastcall ***)(_QWORD, __int64))v2[2];
    if ( v3 )
      (**v3)(v3, 1LL);
    v2[2] = 0LL;
    v4 = (Windows::Media::Devices::AudioDeviceModulesManager *)v2[3];
    if ( v4 )
    {
      v5 = *(__int64 (__fastcall **)(Windows::Media::Devices::AudioDeviceModulesManager *, __int64))(*(_QWORD *)v4 + 16LL);
      if ( v5 == Windows::Media::Devices::AudioDeviceModulesManager::Release )
        Windows::Media::Devices::AudioDeviceModulesManager::Release(
          v4,
          (__int64)Windows::Media::Devices::AudioDeviceModulesManager::Release);
      else
        ((void (__fastcall *)(Windows::Media::Devices::AudioDeviceModulesManager *))v5)(v4);
    }
    if ( *v2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 16LL))(*v2);
    operator delete(v2);
  }
  *((_QWORD *)this + 4) = 0LL;
  v6 = (CAudioMediaType *)*((_QWORD *)this + 6);
  if ( v6 )
  {
    v7 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v6 + 16LL);
    if ( v7 == CAudioMediaType::Release )
      CAudioMediaType::Release(v6);
    else
      v7(v6);
  }
  *(_QWORD *)this = &CProcessNode::`vftable';
  v8 = (CAudioMediaType *)*((_QWORD *)this + 2);
  if ( v8 )
  {
    v9 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v8 + 16LL);
    if ( v9 == CAudioMediaType::Release )
      CAudioMediaType::Release(v8);
    else
      v9(v8);
  }
  v10 = (CAudioMediaType *)*((_QWORD *)this + 1);
  if ( v10 )
  {
    v11 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v10 + 16LL);
    if ( v11 == CAudioMediaType::Release )
      CAudioMediaType::Release(v10);
    else
      v11(v10);
  }
}
