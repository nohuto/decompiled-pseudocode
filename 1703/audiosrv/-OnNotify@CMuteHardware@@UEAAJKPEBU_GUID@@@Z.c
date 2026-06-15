/*
 * XREFs of ?OnNotify@CMuteHardware@@UEAAJKPEBU_GUID@@@Z @ 0x180084410
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMuteValue@CMuteHardware@@QEAAJPEAH@Z @ 0x18003A7AC (-GetMuteValue@CMuteHardware@@QEAAJPEAH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q_guid_ @ 0x180084B40 (WPP_SF_q_guid_.c)
 */

__int64 __fastcall CMuteHardware::OnNotify(CMuteHardware *this, unsigned int a2, const struct _GUID *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  int v8; // eax

  v6 = 0;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q_guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      20,
      (unsigned int)&WPP_c071410194bb3e21497a264ebdcc8fa3_Traceguids,
      (_DWORD)this,
      (__int64)a3);
  }
  v7 = *(_QWORD *)&a3->Data1 - *(_QWORD *)((char *)this + 60);
  if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)((char *)this + 60) )
    v7 = *(_QWORD *)a3->Data4 - *(_QWORD *)((char *)this + 68);
  if ( v7 )
  {
    CMuteHardware::GetMuteValue(this, (int *)this + 6);
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 2) + 48LL))(
           *((_QWORD *)this + 2),
           a2,
           a3);
    v6 = v8;
    if ( v8 < 0 )
      AudSrvTraceLoggingErrorHelper("CMuteHardware::OnNotify", 583, v8);
  }
  return v6;
}
