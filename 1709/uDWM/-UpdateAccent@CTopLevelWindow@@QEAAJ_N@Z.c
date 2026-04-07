/*
 * XREFs of ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001C3DC
 * Callers:
 *     ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x18000152C (-OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180019690 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 * Callees:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180012054 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180013020 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18002C1F4 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x18002C250 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x1800359D4 (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 *     ?Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180036358 (-Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x18007887C (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 *     ?Find@?$DynArray@PEAUHMONITOR__@@$0A@@@QEAAHAEBQEAUHMONITOR__@@@Z @ 0x180092F44 (-Find@-$DynArray@PEAUHMONITOR__@@$0A@@@QEAAHAEBQEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateAccent(CTopLevelWindow *this, char a2)
{
  unsigned int v4; // edi
  __int64 v5; // r8
  struct CVisual ***v7; // rsi
  int v8; // eax
  int inserted; // eax
  __int64 v10; // rax
  struct CVisual **v11; // rcx
  struct CVisual *v12; // rdx
  __int64 v13; // rax
  struct CVisual **v14; // rdi
  int updated; // eax
  int v16; // eax
  CBaseObject *v17; // rcx
  __int64 v18; // r11
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( CAccent::s_IsPolicyActive((const struct ACCENT_POLICY *)(*((_QWORD *)this + 90) + 152LL)) )
  {
    v7 = (struct CVisual ***)((char *)this + 264);
    if ( !*((_QWORD *)this + 33) )
    {
      v8 = CAccent::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), (struct CAccent **)this + 33);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xD1Du);
        return v4;
      }
      *((_BYTE *)*v7 + 608) = (*(_DWORD *)(*((_QWORD *)this + 90) + 104LL) & 0x400000) != 0;
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 32) + 32LL), *v7, 0LL, 1u, 1);
      v4 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0xD1Fu);
        return v4;
      }
    }
    v10 = *((_QWORD *)this + 90);
    v11 = *v7;
    v12 = *(struct CVisual **)(v10 + 120);
    v11[47] = *(struct CVisual **)(v10 + 40);
    v11[48] = v12;
    v13 = *((_QWORD *)this + 90);
    if ( !*(_DWORD *)(v13 + 160) && (*(_BYTE *)(v13 + 156) & 2) == 0 && *(_DWORD *)(v13 + 152) == 2 )
      *(_DWORD *)(*((_QWORD *)this + 90) + 160LL) = CTopLevelWindow::GetTransparentGradientColorForAccent(this);
    v19 = *((_QWORD *)this + 90);
    if ( *(_DWORD *)(v19 + 152) == 3 )
    {
      if ( !(unsigned int)DynArray<HMONITOR__ *,0>::Find(
                            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57) + 544LL,
                            &v19) )
        DynArray<CWindowData *,0>::AddMultipleAndSet(v18 + 544, &v19);
    }
    else
    {
      DynArray<CWindowData *,0>::Remove(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57) + 544LL, &v19);
    }
    v14 = *v7;
    if ( a2 != *((_BYTE *)*v7 + 374) )
    {
      CVisual::SetDirtyFlags((CVisual *)*v7, 0x10000);
      *((_BYTE *)v14 + 374) = a2;
    }
    updated = CAccent::UpdateAccentPolicy(
                (CAccent *)*v7,
                (const struct tagRECT *)(*((_QWORD *)this + 90) + 48LL),
                (__m128i *)(*((_QWORD *)this + 90) + 152LL),
                *(struct CResource **)(*((_QWORD *)this + 90) + 368LL));
    v4 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xD37u);
  }
  else if ( *((_QWORD *)this + 33) )
  {
    v19 = v5;
    DynArray<CWindowData *,0>::Remove(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57) + 544LL, &v19);
    v16 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 32) + 32LL), *((struct CVisual **)this + 33));
    v4 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xD3Eu);
    }
    else
    {
      v17 = (CBaseObject *)*((_QWORD *)this + 33);
      if ( v17 )
      {
        CBaseObject::Release(v17);
        *((_QWORD *)this + 33) = 0LL;
      }
    }
  }
  return v4;
}
