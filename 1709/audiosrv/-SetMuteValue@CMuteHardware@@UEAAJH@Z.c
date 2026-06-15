/*
 * XREFs of ?SetMuteValue@CMuteHardware@@UEAAJH@Z @ 0x180067930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qd @ 0x180067C30 (WPP_SF_qd.c)
 */

__int64 __fastcall CMuteHardware::SetMuteValue(CMuteHardware *this, unsigned int a2)
{
  __int64 v4; // rcx

  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 19LL, &WPP_c071410194bb3e21497a264ebdcc8fa3_Traceguids, this, a2);
  }
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v4 + 24LL))(v4, a2, (char *)this + 60);
  else
    return 2147500035LL;
}
