/*
 * XREFs of ??1CWindowBackgroundTreatment@@UEAA@XZ @ 0x1800B1BE0
 * Callers:
 *     ??_ECWindowBackgroundTreatment@@UEAAPEAXI@Z @ 0x1800B1AF0 (--_ECWindowBackgroundTreatment@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800B23D8 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowBackgroundTreatment::~CWindowBackgroundTreatment(CWindowBackgroundTreatment *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CWindowBackgroundTreatment::`vftable';
  CPtrArrayBase::Remove((CPtrArrayBase *)(*((_QWORD *)this + 7) + 24LL), (unsigned __int64)this);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 8);
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  CResource::~CResource(this);
}
