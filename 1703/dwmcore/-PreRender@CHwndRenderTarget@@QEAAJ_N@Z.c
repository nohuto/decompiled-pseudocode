/*
 * XREFs of ?PreRender@CHwndRenderTarget@@QEAAJ_N@Z @ 0x18006E120
 * Callers:
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180069700 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x18006C500 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180092D70 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180092DA8 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B7040 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?SetRedrawRects@CDirtyRegion@@AEAAXXZ @ 0x180154664 (-SetRedrawRects@CDirtyRegion@@AEAAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::PreRender(CVisualTree **this, __int64 a2, __int64 a3)
{
  char v4; // si
  __int64 (*v5)(void); // rax
  int v6; // eax
  unsigned int v7; // edi
  CVisualTree *v8; // rcx
  CVisualTree *v9; // rcx
  __int64 v10; // rdx
  char v11; // si
  __int64 v12; // rdx
  CDirtyRegion *v14; // r11
  CDirtyRegion *v15; // r11
  _QWORD v16[2]; // [rsp+30h] [rbp-38h] BYREF

  v4 = a2;
  v5 = (__int64 (*)(void))*((_QWORD *)*this + 36);
  if ( (char *)v5 == (char *)CHwndRenderTarget::EnsureRenderTarget )
    v6 = CHwndRenderTarget::EnsureRenderTarget((CHwndRenderTarget *)this, a2, a3);
  else
    v6 = v5();
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x272u);
  }
  else
  {
    v8 = this[15];
    if ( !v8 || *((_BYTE *)this + 791) || *((_BYTE *)this + 789) || *((_BYTE *)this + 792) && !v4 )
      goto LABEL_20;
    if ( !this[17] && this[10] )
    {
      (*(void (__fastcall **)(CVisualTree *, _QWORD *))(*(_QWORD *)v8 + 64LL))(v8, v16);
      CVisualTree::PreCompute(this[10]);
    }
    if ( !this[18] )
    {
LABEL_20:
      *((_BYTE *)this + 785) = 0;
    }
    else
    {
      v9 = this[15];
      *((_BYTE *)this + 785) = 1;
      if ( (*(int (__fastcall **)(CVisualTree *, _QWORD *, _QWORD, _QWORD))(*(_QWORD *)v9 + 104LL))(v9, v16, 0LL, 0LL) >= 0 )
      {
        v11 = 0;
        if ( !CD3DDeviceManager::s_bHwProtectionTempDisabled && !CD3DDeviceManager::s_bHwProtectionTeardown )
        {
          v10 = 0LL;
          if ( HIDWORD(qword_18023E874) )
          {
            while ( *(_QWORD *)(qword_18023E860 + 12LL * (unsigned int)v10) != v16[0] )
            {
              v10 = (unsigned int)(v10 + 1);
              if ( (unsigned int)v10 >= HIDWORD(qword_18023E874) )
                goto LABEL_14;
            }
            v11 = *(_DWORD *)(qword_18023E860 + 12LL * (unsigned int)v10 + 8) != 0;
          }
        }
LABEL_14:
        if ( v11 != (*(unsigned __int8 (__fastcall **)(CVisualTree *, __int64))(*(_QWORD *)this[15] + 168LL))(
                      this[15],
                      v10) )
        {
          LOBYTE(v12) = v11;
          (*(void (__fastcall **)(CVisualTree *, __int64))(*(_QWORD *)this[15] + 160LL))(this[15], v12);
          CDirtyRegion::SetFullDirty(this[18]);
        }
      }
      if ( *(_BYTE *)(*((_QWORD *)this[2] + 4) + 151LL) )
        CDirtyRegion::SetFullDirty(this[18]);
      if ( *((_DWORD *)this[2] + 336) && !CDirtyRegion::IsEmpty(this[18]) )
      {
        CDirtyRegion::SetRedrawRects(v14);
        CDirtyRegion::SetFullDirty(v15);
      }
    }
  }
  return v7;
}
