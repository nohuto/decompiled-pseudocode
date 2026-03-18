/*
 * XREFs of ?SignalSEB@CHwndRenderTarget@@AEAAX_NI0@Z @ 0x180119EAC
 * Callers:
 *     ?NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ @ 0x180017508 (-NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ.c)
 * Callees:
 *     McTemplateU0zqq @ 0x180136D08 (McTemplateU0zqq.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x1801CCB28 (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 */

void __fastcall CHwndRenderTarget::SignalSEB(CHwndRenderTarget *this, char a2, unsigned int a3, char a4)
{
  char v5; // cl
  char v7; // si
  char updated; // al
  struct _SEB_RPC_PUBLISH_DATA *v11; // rcx
  struct _SEB_RPC_PUBLISH_DATA *v12; // rcx
  const wchar_t *v13; // r8

  v5 = *((_BYTE *)this + 810);
  v7 = a3 > 0xC8;
  if ( v5 != a2 || *((_BYTE *)this + 811) != v7 )
  {
    if ( *((_QWORD *)this + 103) )
    {
      updated = 0;
      if ( v5 )
      {
        if ( *((_BYTE *)this + 811) )
        {
          v11 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 104);
          if ( v11 )
            PubSebiUpdateLevelEventRpc(v11, 0);
        }
        updated = PubSebiUpdateLevelEventRpc(*((struct _SEB_RPC_PUBLISH_DATA **)this + 103), 0);
      }
      if ( a2 )
      {
        if ( a3 > 0xC8 )
        {
          v12 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 104);
          if ( v12 )
            PubSebiUpdateLevelEventRpc(v12, 1u);
        }
        updated = PubSebiUpdateLevelEventRpc(*((struct _SEB_RPC_PUBLISH_DATA **)this + 103), 1u);
      }
      *((_BYTE *)this + 812) = a4;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v13 = L"P2PRenderer";
        if ( !a4 )
          v13 = L"FSVP";
        McTemplateU0zqq((unsigned int)L"FSVP", a2, (_DWORD)v13, a3, updated);
      }
    }
    *((_BYTE *)this + 810) = a2;
    *((_BYTE *)this + 811) = v7;
  }
}
