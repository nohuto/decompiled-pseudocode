/*
 * XREFs of ServicePowerEvent @ 0x1800AD2C4
 * Callers:
 *     ServiceCtrl @ 0x1800ABE90 (ServiceCtrl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?EventTypeNameFromEventType@@YAPEBG_K@Z @ 0x1800AC504 (-EventTypeNameFromEventType@@YAPEBG_K@Z.c)
 *     WPP_SF_PSq @ 0x1800AD63C (WPP_SF_PSq.c)
 */

__int64 __fastcall ServicePowerEvent(unsigned __int64 a1, __int64 a2)
{
  const unsigned __int16 *v4; // rax
  __int64 v5; // r8
  int v6; // edx
  int v7; // ecx
  __int64 result; // rax

  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v4 = EventTypeNameFromEventType(a1);
    WPP_SF_PSq(*(_QWORD *)(v5 + 16), v6, v5, v7, (__int64)v4, v6);
  }
  result = 0LL;
  if ( a1 <= 0x8013 )
  {
    if ( (unsigned int)a1 > 9 )
    {
      if ( (_DWORD)a1 == 32787 )
        return (*(__int64 (__fastcall **)(struct IAudioService *, __int64))(*(_QWORD *)g_AudioService + 88LL))(
                 g_AudioService,
                 a2);
    }
    else if ( (_DWORD)a1 == 7 )
    {
      return (*(__int64 (__fastcall **)(struct IAudioService *, __int64))(*(_QWORD *)g_AudioService + 80LL))(
               g_AudioService,
               a2);
    }
  }
  return result;
}
