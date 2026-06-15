/*
 * XREFs of ??1?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAA@XZ @ 0x1800B4834
 * Callers:
 *     ??_E?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAPEAXI@Z @ 0x1800B4940 (--_E-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?FinalRelease@CAudioSessionManagerProvider@@QEAAXXZ @ 0x1800B49F8 (-FinalRelease@CAudioSessionManagerProvider@@QEAAXXZ.c)
 */

void __fastcall ATL::CComObject<CAudioSessionManagerProvider>::~CComObject<CAudioSessionManagerProvider>(
        CAudioSessionManagerProvider *this)
{
  *(_QWORD *)this = &ATL::CComObject<CAudioSessionManagerProvider>::`vftable';
  *((_DWORD *)this + 2) = -1073741823;
  CAudioSessionManagerProvider::FinalRelease(this);
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CAudioSessionManagerProvider::~CAudioSessionManagerProvider(this);
}
