/*
 * XREFs of ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x18003D960
 * Callers:
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x18003E4E0 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x18003F0E0 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000FEC0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180025D68 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18002FDD8 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CTransitionWindowSnapshot@@SAJPEAUIDwmChannel@@PEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18003D230 (-Create@CTransitionWindowSnapshot@@SAJPEAUIDwmChannel@@PEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z @ 0x18003D3A8 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18003D66C (-StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18003DB50 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18003DBA0 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CContactManager::ForceAtlasInitialize(CContactManager *this, unsigned __int64 a2)
{
  struct CVisual *v2; // rsi
  int v3; // eax
  struct tagPOINT v4; // rbx
  int v5; // eax
  CContactManager *v6; // rcx
  struct CVisual **v7; // rdi
  int v8; // eax
  struct CVisual **v9; // rdx
  CContactManager *v10; // rcx
  struct CVisual *v11; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v12; // [rsp+38h] [rbp-20h] BYREF
  struct CVisual *v13; // [rsp+90h] [rbp+38h] BYREF
  unsigned __int64 v14; // [rsp+98h] [rbp+40h] BYREF
  struct tagPOINT v15; // [rsp+A0h] [rbp+48h] BYREF
  CVisual *v16; // [rsp+A8h] [rbp+50h] BYREF

  v14 = a2;
  v13 = this;
  if ( a2 == -1LL )
    GetDesktopID(1LL, &v14);
  v15 = 0LL;
  v16 = 0LL;
  v13 = 0LL;
  v2 = 0LL;
  *(_QWORD *)&v12.left = 0LL;
  v12.right = 50;
  v12.bottom = 50;
  v11 = 0LL;
  v3 = CVisual::Create(
         *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
         (struct CVisual **)&v15);
  v4 = v15;
  if ( v3 >= 0 )
  {
    v5 = CVisual::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), &v16);
    v7 = (struct CVisual **)v16;
    if ( v5 >= 0 && CContactManager::AddToTouchNode(v6, v14, *(struct CVisual **)&v4) >= 0 )
    {
      VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)&v4 + 32LL), v7, 0LL, 0, 1);
      v15.x = -32000;
      v15.y = -32000;
      CVisual::SetOffset((struct tagPOINT *)v7, &v15);
      if ( (int)CreateTouchVisual<CDirectTouchVisual>(
                  *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                  v14,
                  &v13) >= 0 )
      {
        VisualCollection::InsertRelative((VisualCollection *)(v7 + 4), (struct CVisual **)v13, 0LL, 0, 1);
        CDirectTouchVisual::StartHold((__int64)v13, &v15, &v12);
        v8 = CTransitionWindowSnapshot::Create(
               *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
               &v12,
               (struct CVisual *)v7,
               &v11);
        v2 = v11;
        if ( v8 >= 0 )
        {
          v9 = (struct CVisual **)v11;
          *((_OWORD *)v11 + 21) = _xmm;
          VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)&v4 + 32LL), v9, 0LL, 0, 1);
          CVisual::RenderRecursive(*(CVisual **)&v4);
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
        }
        VisualCollection::Remove((VisualCollection *)(v7 + 4), v13);
      }
      VisualCollection::Remove((VisualCollection *)(*(_QWORD *)&v4 + 32LL), (struct CVisual *)v7);
      CContactManager::RemoveFromTouchNode(v10, v14, *(struct CVisual **)&v4);
      if ( v13 )
        CBaseObject::Release(v13);
      if ( v2 )
        CBaseObject::Release(v2);
    }
    if ( v7 )
      CBaseObject::Release((CBaseObject *)v7);
  }
  if ( v4 )
    CBaseObject::Release(*(CBaseObject **)&v4);
}
