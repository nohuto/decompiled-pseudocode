/*
 * XREFs of ?NotifyAudioDGTerminated@CVolumeStrip@@UEAAXXZ @ 0x180005840
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyAudioDGTerminated@CMeterSoftware@@UEAAXXZ @ 0x1800058E0 (-NotifyAudioDGTerminated@CMeterSoftware@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 */

void __fastcall CVolumeStrip::NotifyAudioDGTerminated(CVolumeStrip *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  CMeterSoftware *v4; // rcx
  void (*v5)(void); // rax

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_507d7cb4b14a35034dcca2f146935df3_Traceguids);
  }
  v2 = *((_QWORD *)this + 30);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 72LL))(v2);
  v3 = *((_QWORD *)this + 31);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 104LL))(v3);
  v4 = (CMeterSoftware *)*((_QWORD *)this + 32);
  if ( v4 )
  {
    v5 = *(void (**)(void))(*(_QWORD *)v4 + 104LL);
    if ( (char *)v5 == (char *)CMeterSoftware::NotifyAudioDGTerminated )
      CMeterSoftware::NotifyAudioDGTerminated(v4);
    else
      v5();
  }
}
