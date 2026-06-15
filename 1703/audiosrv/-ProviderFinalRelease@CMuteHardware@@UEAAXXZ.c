/*
 * XREFs of ?ProviderFinalRelease@CMuteHardware@@UEAAXXZ @ 0x1800846C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMuteHardware::ProviderFinalRelease(CMuteHardware *this)
{
  Microsoft::WRL::WeakRef *v1; // rdi

  v1 = (CMuteHardware *)((char *)this + 40);
  if ( *((_QWORD *)this + 5) && *((_DWORD *)this + 14) )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xDu,
        (__int64)&WPP_c071410194bb3e21497a264ebdcc8fa3_Traceguids,
        this);
    }
    (*(void (__fastcall **)(_QWORD, CMuteHardware *))(**(_QWORD **)v1 + 120LL))(*(_QWORD *)v1, this);
    *((_DWORD *)this + 14) = 0;
  }
  Microsoft::WRL::WeakRef::~WeakRef(v1);
}
