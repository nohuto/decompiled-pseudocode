/*
 * XREFs of ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001C234
 * Callers:
 *     ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x18000A670 (-OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001FCFC (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 * Callees:
 *     ?Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000CF18 (-Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000FEC0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetParentVisible@CAccent@@QEAAX_N@Z @ 0x1800100C4 (-SetParentVisible@CAccent@@QEAAX_N@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180010178 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18002F918 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x18002F980 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x180081C8C (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 *     ?Find@?$DynArray@PEAUHMONITOR__@@$0A@@@QEAAHAEBQEAUHMONITOR__@@@Z @ 0x180084500 (-Find@-$DynArray@PEAUHMONITOR__@@$0A@@@QEAAHAEBQEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateAccent(CTopLevelWindow *this, char a2)
{
  __int64 v2; // rax
  unsigned int v4; // edi
  int v6; // ecx
  struct CVisual ***v8; // rsi
  struct CVisual **v9; // rdx
  int v10; // eax
  int inserted; // eax
  struct CVisual *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  bool v15; // zf
  int updated; // eax
  int v17; // eax
  CBaseObject *v18; // rcx
  __int64 v19; // r11
  __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 90);
  v4 = 0;
  v6 = *(_DWORD *)(v2 + 152);
  if ( !v6 || v6 == 5 )
  {
    if ( *((_QWORD *)this + 33) )
    {
      v20 = v2;
      DynArray<CWindowData *,0>::Remove(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 56) + 544LL, &v20);
      v17 = VisualCollection::Remove(
              (VisualCollection *)(*((_QWORD *)this + 32) + 32LL),
              *((struct CVisual **)this + 33));
      v4 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xD82u);
      }
      else
      {
        v18 = (CBaseObject *)*((_QWORD *)this + 33);
        if ( v18 )
        {
          CBaseObject::Release(v18);
          *((_QWORD *)this + 33) = 0LL;
        }
      }
    }
  }
  else
  {
    v8 = (struct CVisual ***)((char *)this + 264);
    v9 = (struct CVisual **)*((_QWORD *)this + 33);
    if ( !v9 )
    {
      v10 = CAccent::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), (struct CAccent **)this + 33);
      v4 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xD61u);
        return v4;
      }
      *((_BYTE *)*v8 + 608) = (*(_DWORD *)(*((_QWORD *)this + 90) + 104LL) & 0x400000) != 0;
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 32) + 32LL), *v8, 0LL, 1u, 1);
      v4 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0xD63u);
        return v4;
      }
      v2 = *((_QWORD *)this + 90);
      v9 = *v8;
    }
    v12 = *(struct CVisual **)(v2 + 120);
    v9[47] = *(struct CVisual **)(v2 + 40);
    v9[48] = v12;
    v13 = *((_QWORD *)this + 90);
    v14 = v13;
    if ( !*(_DWORD *)(v13 + 160) && (*(_BYTE *)(v13 + 156) & 2) == 0 && *(_DWORD *)(v13 + 152) == 2 )
    {
      *(_DWORD *)(*((_QWORD *)this + 90) + 160LL) = CTopLevelWindow::GetTransparentGradientColorForAccent(this);
      v14 = *((_QWORD *)this + 90);
    }
    v15 = *(_DWORD *)(v14 + 152) == 3;
    v20 = v14;
    if ( v15 )
    {
      if ( !(unsigned int)DynArray<HMONITOR__ *,0>::Find(
                            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 56) + 544LL,
                            &v20) )
        DynArray<CWindowData *,0>::AddMultipleAndSet(v19 + 544, &v20);
    }
    else
    {
      DynArray<CWindowData *,0>::Remove(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 56) + 544LL, &v20);
    }
    CAccent::SetParentVisible((CAccent *)*v8, a2);
    updated = CAccent::UpdateAccentPolicy(
                (CAccent *)*v8,
                (const struct tagRECT *)(*((_QWORD *)this + 90) + 48LL),
                (__m128i *)(*((_QWORD *)this + 90) + 152LL),
                *(struct CResource **)(*((_QWORD *)this + 90) + 360LL));
    v4 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xD7Bu);
  }
  return v4;
}
