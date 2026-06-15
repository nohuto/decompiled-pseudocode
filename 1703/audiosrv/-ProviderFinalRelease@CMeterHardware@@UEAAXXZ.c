/*
 * XREFs of ?ProviderFinalRelease@CMeterHardware@@UEAAXXZ @ 0x180083C60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18007B17C (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CMeterHardware::ProviderFinalRelease(CMeterHardware *this)
{
  __int64 v2; // rcx

  Microsoft::WRL::WeakRef::~WeakRef((CMeterHardware *)((char *)this + 40));
  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
