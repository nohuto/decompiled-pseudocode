/*
 * XREFs of ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C01CFEA0
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00AD874 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C01916F8 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00AA3F4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00AA410 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 */

unsigned __int8 __fastcall SESSION_VIEW::IsCrossAdapterView(SESSION_VIEW *this)
{
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  SESSION_VIEW *v2; // r10
  const struct DISPLAY_SOURCE *i; // rdx
  struct DISPLAY_SOURCE *NextDisplaySource; // rax
  __int64 v5; // r9

  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(this);
  if ( PrimaryDisplaySource )
  {
    for ( i = PrimaryDisplaySource; ; i = NextDisplaySource )
    {
      NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v2, i);
      if ( !NextDisplaySource )
        break;
      if ( *(_QWORD *)(*((_QWORD *)NextDisplaySource + 1) + 16LL) != *(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL) )
        return 1;
    }
  }
  return 0;
}
