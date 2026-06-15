/*
 * XREFs of ?ProviderFinalRelease@CVolumeHardware@@UEAAXXZ @ 0x180086210
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVolumeHardware::ProviderFinalRelease(CVolumeHardware *this)
{
  Microsoft::WRL::WeakRef *v1; // rdi

  v1 = (CVolumeHardware *)((char *)this + 240);
  if ( *((_QWORD *)this + 30) && *((_DWORD *)this + 68) )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Bu,
        (__int64)&WPP_14242717b50d32756585d53851505e56_Traceguids,
        this);
    }
    (*(void (__fastcall **)(_QWORD, CVolumeHardware *))(**(_QWORD **)v1 + 120LL))(*(_QWORD *)v1, this);
    *((_DWORD *)this + 68) = 0;
  }
  Microsoft::WRL::WeakRef::~WeakRef(v1);
}
