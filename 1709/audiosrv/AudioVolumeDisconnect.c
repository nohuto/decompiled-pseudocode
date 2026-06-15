/*
 * XREFs of AudioVolumeDisconnect @ 0x180030EF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

__int64 __fastcall AudioVolumeDisconnect(__int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_d150c8ede9573e33824fdb490ef726ad_Traceguids, v1);
  }
  *a1 = 0LL;
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return 0LL;
}
