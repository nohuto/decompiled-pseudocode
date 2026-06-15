/*
 * XREFs of ServicePowerEvent @ 0x180035224
 * Callers:
 *     ServiceCtrl @ 0x180025A80 (ServiceCtrl.c)
 * Callees:
 *     ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x1800352E0 (-PowerSettingChanged@CAudioSrv@@UEAAK_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?EventTypeNameFromEventType@@YAPEBG_K@Z @ 0x1800B8B94 (-EventTypeNameFromEventType@@YAPEBG_K@Z.c)
 *     WPP_SF_PSq @ 0x1800B9730 (WPP_SF_PSq.c)
 */

unsigned int __fastcall ServicePowerEvent(unsigned __int64 a1, UUID *a2)
{
  unsigned int result; // eax
  CAudioSrv *v5; // rcx
  unsigned int (__fastcall *v6)(CAudioSrv *__hidden, UUID *); // rax
  UUID *v7; // rdx
  const unsigned __int16 *v8; // rax
  __int64 v9; // r8
  int v10; // edx

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v8 = EventTypeNameFromEventType(a1);
    WPP_SF_PSq(*(_QWORD *)(v9 + 16), v10, v9, a1, (__int64)v8, (char)a2);
  }
  result = 0;
  if ( a1 <= 0x8013 )
  {
    if ( (unsigned int)a1 > 9 )
    {
      if ( (_DWORD)a1 != 32787 )
        return result;
      v5 = g_AudioService;
      v6 = *(unsigned int (__fastcall **)(CAudioSrv *__hidden, UUID *))(*(_QWORD *)g_AudioService + 88LL);
      v7 = a2;
      if ( v6 == CAudioSrv::PowerSettingChanged )
        return CAudioSrv::PowerSettingChanged(g_AudioService, a2);
      return v6(v5, v7);
    }
    if ( (_DWORD)a1 == 7 )
    {
      v5 = g_AudioService;
      v7 = a2;
      v6 = *(unsigned int (__fastcall **)(CAudioSrv *__hidden, UUID *))(*(_QWORD *)g_AudioService + 80LL);
      return v6(v5, v7);
    }
  }
  return result;
}
