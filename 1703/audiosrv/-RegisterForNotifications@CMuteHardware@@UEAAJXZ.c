/*
 * XREFs of ?RegisterForNotifications@CMuteHardware@@UEAAJXZ @ 0x18003A7D0
 * Callers:
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180039FA8 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMuteHardware::RegisterForNotifications(CMuteHardware *this)
{
  int v2; // eax
  unsigned int v3; // edi

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_c071410194bb3e21497a264ebdcc8fa3_Traceguids, this);
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, GUID *, CMuteHardware *))(**((_QWORD **)this + 5) + 112LL))(
         *((_QWORD *)this + 5),
         &GUID_df45aeea_b74a_4b6b_afad_2366b6aa012e,
         this);
  v3 = v2;
  if ( v2 < 0 )
    AudSrvTraceLoggingErrorHelper("CMuteHardware::RegisterForNotifications", 0x1E2u, v2);
  else
    *((_DWORD *)this + 14) = 1;
  return v3;
}
