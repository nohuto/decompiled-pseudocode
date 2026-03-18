/*
 * XREFs of ?PreRender@CHwndRenderTarget@@UEAAJXZ @ 0x180061B70
 * Callers:
 *     ?PreRender@CRenderTargetManager@@QEAAJXZ @ 0x18005F194 (-PreRender@CRenderTargetManager@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18009DF20 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?EnsureDirtyRegion@CHwndRenderTarget@@IEAAJXZ @ 0x180158678 (-EnsureDirtyRegion@CHwndRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::PreRender(CHwndRenderTarget *this)
{
  unsigned int v1; // edi
  CHwndRenderTarget *v4; // rsi
  int v5; // eax
  int v6; // eax
  CDirtyRegion *v7; // rcx

  v1 = 0;
  *((_BYTE *)this + 789) = 0;
  if ( !*((_QWORD *)this + 16) )
  {
    v4 = (CHwndRenderTarget *)((char *)this - 64);
    v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 8) + 232LL))((char *)this - 64);
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277AC0, 2u, v5, 0x296u);
    }
    else
    {
      v6 = CHwndRenderTarget::EnsureDirtyRegion(v4);
      v1 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277AC0, 2u, v6, 0x298u);
      }
      else
      {
        v7 = (CDirtyRegion *)*((_QWORD *)this + 17);
        if ( v7 && *((_BYTE *)this + 97) )
        {
          CDirtyRegion::SetFullDirty(v7);
          *((_BYTE *)this + 97) = 0;
        }
      }
    }
  }
  return v1;
}
