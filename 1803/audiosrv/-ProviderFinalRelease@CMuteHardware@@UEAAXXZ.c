/*
 * XREFs of ?ProviderFinalRelease@CMuteHardware@@UEAAXXZ @ 0x1800A1550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

void __fastcall CMuteHardware::ProviderFinalRelease(CMuteHardware *this)
{
  Microsoft::WRL::WeakRef *v1; // rdi
  __int64 v3; // rcx

  v1 = (CMuteHardware *)((char *)this + 48);
  if ( *((_QWORD *)this + 6) && *((_DWORD *)this + 16) )
  {
    v3 = *(_QWORD *)v1;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_40bfd4cf2cfa346b35fe64d0f0db2afc_Traceguids, this);
      v3 = *(_QWORD *)v1;
    }
    (*(void (__fastcall **)(__int64, CMuteHardware *))(*(_QWORD *)v3 + 120LL))(v3, this);
    *((_DWORD *)this + 16) = 0;
  }
  Microsoft::WRL::WeakRef::~WeakRef(v1);
}
