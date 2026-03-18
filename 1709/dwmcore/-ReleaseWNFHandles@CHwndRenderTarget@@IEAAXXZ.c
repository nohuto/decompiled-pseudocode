/*
 * XREFs of ?ReleaseWNFHandles@CHwndRenderTarget@@IEAAXXZ @ 0x1801362FC
 * Callers:
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x180135A60 (--1CHwndRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     McTemplateU0zqq @ 0x180136D08 (McTemplateU0zqq.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x1801CCB28 (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 *     PubSebUnregisterRpc @ 0x1801CCF28 (PubSebUnregisterRpc.c)
 */

void __fastcall CHwndRenderTarget::ReleaseWNFHandles(CHwndRenderTarget *this)
{
  struct _SEB_RPC_PUBLISH_DATA *v2; // rcx
  char updated; // al
  int v4; // edx
  const wchar_t *v5; // r8
  struct _SEB_RPC_PUBLISH_DATA *v6; // rcx

  if ( *((_QWORD *)this + 103) )
  {
    if ( *((_BYTE *)this + 810) )
    {
      if ( *((_BYTE *)this + 811) )
      {
        v2 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 104);
        if ( v2 )
          PubSebiUpdateLevelEventRpc(v2, 0);
      }
      updated = PubSebiUpdateLevelEventRpc(*((struct _SEB_RPC_PUBLISH_DATA **)this + 103), 0);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v5 = L"P2PRenderer";
        if ( !*((_BYTE *)this + 812) )
          v5 = L"FSVP";
        McTemplateU0zqq((unsigned int)L"FSVP", v4, (_DWORD)v5, 0, updated);
      }
      *((_BYTE *)this + 810) = 0;
    }
    PubSebUnregisterRpc(*((struct _SEB_RPC_PUBLISH_DATA **)this + 103));
    *((_QWORD *)this + 103) = 0LL;
  }
  v6 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 104);
  if ( v6 )
  {
    PubSebUnregisterRpc(v6);
    *((_QWORD *)this + 104) = 0LL;
  }
}
