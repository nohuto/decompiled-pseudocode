/*
 * XREFs of ?PreRender@CHwndRenderTarget@@UEAAJXZ @ 0x180019650
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180029EC0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18003458C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureDirtyRegion@CHwndRenderTarget@@IEAAJXZ @ 0x180135DAC (-EnsureDirtyRegion@CHwndRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::PreRender(CHwndRenderTarget *this)
{
  unsigned int v1; // edi
  CHwndRenderTarget *v4; // rsi
  int v5; // eax
  int v6; // eax
  CDirtyRegion *v7; // rcx

  v1 = 0;
  *((_BYTE *)this + 744) = 0;
  if ( !*((_QWORD *)this + 9) )
  {
    v4 = (CHwndRenderTarget *)((char *)this - 64);
    v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 8) + 304LL))((char *)this - 64);
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x235u);
    }
    else
    {
      v6 = CHwndRenderTarget::EnsureDirtyRegion(v4);
      v1 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x237u);
      }
      else
      {
        v7 = (CDirtyRegion *)*((_QWORD *)this + 10);
        if ( v7 && *((_BYTE *)this + 738) )
        {
          CDirtyRegion::SetFullDirty(v7);
          *((_BYTE *)this + 738) = 0;
        }
      }
    }
  }
  return v1;
}
