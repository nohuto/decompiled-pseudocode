/*
 * XREFs of ?RegisterForNotifications@CMuteHardware@@UEAAJXZ @ 0x18004AE50
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18004A190 (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

__int64 __fastcall CMuteHardware::RegisterForNotifications(CMuteHardware *this)
{
  int v2; // eax
  unsigned int v3; // edi

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_40bfd4cf2cfa346b35fe64d0f0db2afc_Traceguids, this);
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, GUID *, CMuteHardware *))(**((_QWORD **)this + 6) + 112LL))(
         *((_QWORD *)this + 6),
         &GUID_df45aeea_b74a_4b6b_afad_2366b6aa012e,
         this);
  v3 = v2;
  if ( v2 < 0 )
    AudSrvTraceLoggingErrorHelper("CMuteHardware::RegisterForNotifications", 470, v2);
  else
    *((_DWORD *)this + 16) = 1;
  return v3;
}
