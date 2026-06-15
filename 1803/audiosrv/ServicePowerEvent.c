/*
 * XREFs of ServicePowerEvent @ 0x180049BB4
 * Callers:
 *     ?ServiceCtrl@@YAKKKPEAX0@Z @ 0x180008910 (-ServiceCtrl@@YAKKKPEAX0@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x18005BF90 (-PowerSettingChanged@CAudioSrv@@UEAAK_J@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?EventTypeNameFromEventType@@YAPEBG_K@Z @ 0x1800E6764 (-EventTypeNameFromEventType@@YAPEBG_K@Z.c)
 */

__int64 __fastcall ServicePowerEvent(unsigned __int64 a1, UUID *a2)
{
  unsigned int v2; // ebx
  CAudioSrv *v5; // rcx
  unsigned int (__fastcall *v6)(CAudioSrv *__hidden, UUID *); // rax
  UUID *v7; // rdx
  const WCHAR *v10; // rax
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF

  v2 = 0;
  if ( (unsigned int)dword_1801884D0 > 4 )
  {
    v10 = EventTypeNameFromEventType(a1);
    TlgCreateWsz(&pDesc, v10);
    TlgWrite((TraceLoggingHProvider)&dword_1801884D0, &unk_1801474B4, v11, v12, 3u, &pData);
  }
  if ( a1 <= 0x8013 )
  {
    if ( (unsigned int)a1 <= 9 )
    {
      if ( (_DWORD)a1 != 7 )
        return v2;
      v5 = g_AudioService;
      v7 = a2;
      v6 = *(unsigned int (__fastcall **)(CAudioSrv *__hidden, UUID *))(*(_QWORD *)g_AudioService + 80LL);
      return v6(v5, v7);
    }
    if ( (_DWORD)a1 == 32787 )
    {
      v5 = g_AudioService;
      v6 = *(unsigned int (__fastcall **)(CAudioSrv *__hidden, UUID *))(*(_QWORD *)g_AudioService + 88LL);
      v7 = a2;
      if ( v6 == CAudioSrv::PowerSettingChanged )
        return CAudioSrv::PowerSettingChanged(g_AudioService, a2);
      return v6(v5, v7);
    }
  }
  return v2;
}
