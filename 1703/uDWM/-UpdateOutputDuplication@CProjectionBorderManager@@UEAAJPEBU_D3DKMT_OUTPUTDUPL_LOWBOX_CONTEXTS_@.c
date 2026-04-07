/*
 * XREFs of ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x18007E770
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180019900 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180023490 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x180032F40 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x180035950 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18007E4F0 (-Create@CProjectionBorderVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x18007E5F0 (-ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ @ 0x18007E6E8 (-ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?_FindProjectionVisualByAdapter@CProjectionBorderManager@@AEAAHAEBU_LUID@@I@Z @ 0x18007EACC (-_FindProjectionVisualByAdapter@CProjectionBorderManager@@AEAAHAEBU_LUID@@I@Z.c)
 *     ?_FindProjectionVisualByRect@CProjectionBorderManager@@AEAAHAEBUtagRECT@@@Z @ 0x18007EB2C (-_FindProjectionVisualByRect@CProjectionBorderManager@@AEAAHAEBUtagRECT@@@Z.c)
 *     ?_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z @ 0x18007EBAC (-_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z.c)
 *     ?_RemoveInactiveVisuals@CProjectionBorderManager@@AEAAXXZ @ 0x18007EDB8 (-_RemoveInactiveVisuals@CProjectionBorderManager@@AEAAXXZ.c)
 *     ?_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z @ 0x18007EE90 (-_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z.c)
 *     ?_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ @ 0x18007EF24 (-_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ.c)
 *     ?UpdateRect@CProjectionBorderVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18007EFE0 (-UpdateRect@CProjectionBorderVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJPEFBUVisualInfo@CProjectionBorderManager@@I@Z @ 0x180091DF8 (-AddMultipleAndSet@-$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJPEFBUVisualInfo@C.c)
 */

__int64 __fastcall CProjectionBorderManager::UpdateOutputDuplication(
        CProjectionBorderManager *this,
        const struct _D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_ *a2)
{
  CProjectionBorderManager *v5; // rcx
  unsigned int v6; // edx
  unsigned int i; // edi
  __int64 v8; // rax
  __int64 v9; // r13
  const struct _LUID *v10; // r15
  __int64 v11; // rcx
  unsigned int ProjectionVisualByAdapter; // esi
  struct IDwmChannel *v13; // rcx
  int v14; // eax
  _QWORD *v15; // r15
  int v16; // eax
  __int64 v17; // r14
  unsigned __int64 v18; // rcx
  struct CVisual *OverlayRootVisualForDesktop; // rdi
  struct CVisual *v20; // rdx
  __int64 v21; // rcx
  int inserted; // eax
  char v23; // [rsp+30h] [rbp-49h]
  unsigned __int64 v24; // [rsp+38h] [rbp-41h] BYREF
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+40h] [rbp-39h] BYREF
  RECT rc1; // [rsp+48h] [rbp-31h] BYREF
  struct CProjectionBorderVisual *v27; // [rsp+58h] [rbp-21h] BYREF
  RECT v28; // [rsp+60h] [rbp-19h]
  struct _LUID v29; // [rsp+70h] [rbp-9h]
  int v30; // [rsp+78h] [rbp-1h]
  unsigned __int64 v31; // [rsp+80h] [rbp+7h]
  char v32; // [rsp+88h] [rbp+Fh]

  if ( *(_DWORD *)a2 > 0x10u )
    return 2147942487LL;
  v25 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  for ( i = 0; v6 < *((_DWORD *)this + 106); *(_BYTE *)(56 * v8 + *((_QWORD *)this + 50) + 48) = 0 )
  {
    v8 = v6++;
    v5 = (CProjectionBorderManager *)(56 * v8);
  }
  v9 = 0LL;
  if ( !*(_DWORD *)a2 )
  {
LABEL_28:
    CProjectionBorderManager::_RemoveInactiveVisuals(this);
    CProjectionBorderManager::_UpdateFilteredVisualList(this);
    ProjectionVisualByAdapter = -1;
    goto LABEL_29;
  }
  while ( 1 )
  {
    *(_QWORD *)&rc1.left = 0LL;
    *(_QWORD *)&rc1.right = 0LL;
    v10 = (const struct _LUID *)((char *)a2 + 24 * v9);
    if ( (int)CProjectionBorderManager::_GetAdapterDisplayRect(v5, v10 + 2, v10[3].LowPart, &rc1) >= 0 )
      break;
    WindowFrameLoggingTelemetry::ScreenDuplicationInvalidMonitor(v11);
LABEL_27:
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= *(_DWORD *)a2 )
      goto LABEL_28;
  }
  ProjectionVisualByAdapter = CProjectionBorderManager::_FindProjectionVisualByAdapter(
                                this,
                                v10 + 2,
                                *((_DWORD *)a2 + 6 * v9 + 6));
  if ( ProjectionVisualByAdapter == -1 )
    ProjectionVisualByAdapter = CProjectionBorderManager::_FindProjectionVisualByRect(this, &rc1);
  if ( !(unsigned int)GetDesktopID(1LL, &v24) )
    goto LABEL_27;
  v23 = 0;
  if ( ProjectionVisualByAdapter == -1 )
  {
    memset_0(&v27, 0, 0x20uLL);
    v13 = (struct IDwmChannel *)*((_QWORD *)this + 54);
    v29 = v10[2];
    v30 = *((_DWORD *)a2 + 6 * v9 + 6);
    v31 = v24;
    v32 = 1;
    v28 = rc1;
    v14 = CProjectionBorderVisual::Create(v13, &v27);
    i = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x82u);
      goto LABEL_31;
    }
    v15 = (_QWORD *)((char *)this + 400);
    v16 = DynArray<CProjectionBorderManager::VisualInfo,0>::AddMultipleAndSet((char *)this + 400, &v27);
    i = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x84u);
      goto LABEL_31;
    }
    ProjectionVisualByAdapter = *((_DWORD *)this + 106) - 1;
    v23 = 1;
  }
  else
  {
    v15 = (_QWORD *)((char *)this + 400);
    v17 = 56LL * ProjectionVisualByAdapter;
    *(_BYTE *)(v17 + *((_QWORD *)this + 50) + 48) = 1;
    if ( !EqualRect(&rc1, (const RECT *)(v17 + *((_QWORD *)this + 50) + 8LL)) )
    {
      v23 = 1;
      *(RECT *)(v17 + *v15 + 8) = rc1;
    }
    v18 = v24;
    if ( v24 == *(_QWORD *)(v17 + *v15 + 40) )
    {
LABEL_24:
      if ( v23 )
      {
        CProjectionBorderVisual::UpdateRect(
          *(CProjectionBorderVisual **)(v17 + *v15),
          (const struct tagRECT *)(v17 + *v15 + 8LL));
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v17 + *v15) + 88LL))(*(_QWORD *)(v17 + *v15));
        CVisual::RenderRecursive(*(CVisual **)(*(_QWORD *)(v17 + *v15) + 24LL));
      }
      WindowFrameLoggingTelemetry::ScreenDuplicationEnabled(v18);
      goto LABEL_27;
    }
    *(_QWORD *)(v17 + *v15 + 40) = v24;
  }
  OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(
                                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                                  v24,
                                  1);
  if ( !OverlayRootVisualForDesktop )
  {
    OverlayRootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                                    v24);
    if ( !OverlayRootVisualForDesktop )
    {
      i = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0xA6u);
      goto LABEL_29;
    }
  }
  v17 = 56LL * ProjectionVisualByAdapter;
  v20 = *(struct CVisual **)(v17 + *v15);
  v21 = *((_QWORD *)v20 + 3);
  if ( v21 )
    VisualCollection::Remove((VisualCollection *)(v21 + 32), v20);
  inserted = VisualCollection::InsertRelative(
               (struct CVisual *)((char *)OverlayRootVisualForDesktop + 32),
               *(struct CVisual **)(v17 + *v15),
               0LL,
               0,
               1);
  i = inserted;
  if ( inserted >= 0 )
    goto LABEL_24;
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0xAEu);
LABEL_29:
  if ( ProjectionVisualByAdapter != -1 )
    CProjectionBorderManager::_RemoveVisualByIndex(this, ProjectionVisualByAdapter);
LABEL_31:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v25);
  return i;
}
