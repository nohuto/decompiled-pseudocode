/*
 * XREFs of ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z @ 0x1800427F0
 * Callers:
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x1800424F4 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180023490 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003B34C (-Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003B404 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CMagnifierControl@@SAJPEAUIDwmChannel@@PEAVCResource@@PEAVCVisual@@2PEAPEAV1@@Z @ 0x1800420D8 (-Create@CMagnifierControl@@SAJPEAUIDwmChannel@@PEAVCResource@@PEAVCVisual@@2PEAPEAV1@@Z.c)
 *     ?Create@CDesktopWindowReplacement@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180042C6C (-Create@CDesktopWindowReplacement@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::CreateRootVisualForDesktop(
        CWindowList *this,
        struct CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY *a2)
{
  volatile signed __int32 *v3; // rdi
  struct IDwmChannel *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  volatile signed __int32 *v7; // rsi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int inserted; // eax
  int v12; // eax
  int v13; // eax
  CBaseObject *v14; // rax
  CBaseObject *v15; // rcx
  CBaseObject *v17; // [rsp+30h] [rbp-10h] BYREF
  CBaseObject *v18; // [rsp+70h] [rbp+30h] BYREF
  CBaseObject *v19; // [rsp+80h] [rbp+40h] BYREF
  CBaseObject *v20; // [rsp+88h] [rbp+48h] BYREF

  v18 = this;
  v19 = 0LL;
  v20 = 0LL;
  v3 = 0LL;
  v17 = 0LL;
  v4 = (struct IDwmChannel *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
  v18 = 0LL;
  v5 = CVisual::Create(v4, &v19);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x43Du);
LABEL_12:
    v7 = (volatile signed __int32 *)v19;
    goto LABEL_13;
  }
  v7 = (volatile signed __int32 *)v19;
  (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v19 + 88LL))(v19);
  v8 = CRenderDataVisual::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), &v18);
  v6 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x443u);
LABEL_25:
    v3 = (volatile signed __int32 *)v18;
    goto LABEL_13;
  }
  v9 = CDesktopWindowReplacement::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), &v17);
  v6 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x447u);
    goto LABEL_25;
  }
  v3 = (volatile signed __int32 *)v18;
  v10 = CMagnifierControl::Create(
          *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
          *((struct CResource **)CDesktopManager::s_pDesktopManagerInstance + 8),
          (struct CVisual *)v7,
          v18,
          &v20);
  v6 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x44Eu);
  }
  else
  {
    inserted = VisualCollection::InsertRelative((VisualCollection *)(v7 + 8), *((struct CVisual **)v20 + 5), 0LL, 0, 1);
    v6 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x453u);
    }
    else
    {
      v12 = CVisual::RenderRecursive((CVisual *)v7);
      v6 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x456u);
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
        v6 = v13;
        if ( v13 >= 0 )
        {
          *((_QWORD *)a2 + 1) = v7;
          _InterlockedIncrement(v7 + 2);
          v14 = v20;
          *((_QWORD *)a2 + 2) = v20;
          _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
          v3 = (volatile signed __int32 *)v18;
          *((_QWORD *)a2 + 3) = v18;
          if ( v3 )
          {
            _InterlockedIncrement(v3 + 2);
            v3 = (volatile signed __int32 *)v18;
          }
          v15 = v17;
          *((_QWORD *)a2 + 4) = v17;
          if ( v15 )
          {
            _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
            v3 = (volatile signed __int32 *)v18;
          }
          goto LABEL_12;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x458u);
      }
    }
  }
LABEL_13:
  if ( v7 )
    CBaseObject::Release((CBaseObject *)v7);
  if ( v20 )
    CBaseObject::Release(v20);
  if ( v3 )
    CBaseObject::Release((CBaseObject *)v3);
  if ( v17 )
    CBaseObject::Release(v17);
  return v6;
}
