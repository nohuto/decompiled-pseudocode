/*
 * XREFs of ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002780C
 * Callers:
 *     ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x180001DDC (-OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800248B0 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18001516C (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?Find@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x1800151C8 (-Find@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x180015288 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180016970 (-Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180019900 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x18001CB3C (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x180080744 (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateAccent(CTopLevelWindow *this, char a2)
{
  unsigned int v2; // edi
  struct CVisual **v6; // rsi
  __int64 v7; // rax
  struct CVisual *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  struct CVisual *v11; // rdi
  int updated; // eax
  int v13; // eax
  int inserted; // eax
  int v15; // eax
  CBaseObject *v16; // rcx
  unsigned int v17; // r8d
  __int64 v18; // r11
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 90) + 152LL) & 0xFFFFFFFB) != 0 )
  {
    v6 = (struct CVisual **)((char *)this + 264);
    if ( *((_QWORD *)this + 33) )
      goto LABEL_5;
    v13 = CAccent::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), (struct CAccent **)this + 33);
    v2 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xD25u);
      return v2;
    }
    *((_BYTE *)*v6 + 600) = (*(_DWORD *)(*((_QWORD *)this + 90) + 104LL) & 0x400000) != 0;
    inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 32) + 32LL), *v6, 0LL, 1u, 1);
    v2 = inserted;
    if ( inserted >= 0 )
    {
LABEL_5:
      v7 = *((_QWORD *)this + 90);
      v8 = *v6;
      v9 = *(_QWORD *)(v7 + 120);
      *((_QWORD *)v8 + 46) = *(_QWORD *)(v7 + 40);
      *((_QWORD *)v8 + 47) = v9;
      v10 = *((_QWORD *)this + 90);
      if ( !*(_DWORD *)(v10 + 160) && (*(_BYTE *)(v10 + 156) & 2) == 0 && *(_DWORD *)(v10 + 152) == 2 )
        *(_DWORD *)(*((_QWORD *)this + 90) + 160LL) = CTopLevelWindow::GetTransparentGradientColorForAccent(this);
      v19 = *((_QWORD *)this + 90);
      if ( *(_DWORD *)(v19 + 152) == 3 )
      {
        if ( !(unsigned int)DynArray<CWindowData *,0>::Find(
                              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 51) + 544LL,
                              &v19) )
          DynArray<CWindowData *,0>::AddMultipleAndSet(v18 + 544, &v19, v17);
      }
      else
      {
        DynArray<CWindowData *,0>::Remove(
          (__int64 *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 51) + 544LL),
          &v19);
      }
      v11 = *v6;
      if ( a2 != *((_BYTE *)*v6 + 366) )
      {
        CVisual::SetDirtyFlags(*v6, 0x10000);
        *((_BYTE *)v11 + 366) = a2;
      }
      updated = CAccent::UpdateAccentPolicy(
                  *v6,
                  (const struct tagRECT *)(*((_QWORD *)this + 90) + 48LL),
                  (__m128i *)(*((_QWORD *)this + 90) + 152LL),
                  *(struct CResource **)(*((_QWORD *)this + 90) + 368LL));
      v2 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0xD3Fu);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0xD27u);
    }
  }
  else if ( *((_QWORD *)this + 33) )
  {
    v19 = *((_QWORD *)this + 90);
    DynArray<CWindowData *,0>::Remove(
      (__int64 *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 51) + 544LL),
      &v19);
    v15 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 32) + 32LL), *((struct CVisual **)this + 33));
    v2 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xD46u);
    }
    else
    {
      v16 = (CBaseObject *)*((_QWORD *)this + 33);
      if ( v16 )
      {
        CBaseObject::Release(v16);
        *((_QWORD *)this + 33) = 0LL;
      }
    }
  }
  return v2;
}
