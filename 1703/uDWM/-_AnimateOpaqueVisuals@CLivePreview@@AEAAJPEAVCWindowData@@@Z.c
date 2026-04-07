/*
 * XREFs of ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x180075534
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x1800382A0 (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x180015288 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002C4C0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z @ 0x18006E87C (-OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z.c)
 *     ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x180075A48 (-_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV-$DynArray@PEAVCWindowData@@$0A@@@@Z.c)
 *     ?_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z @ 0x180075FF0 (-_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z.c)
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x180076774 (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x180076A3C (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 *     ?_UpdateAddedImmersiveBackground@CLivePreview@@AEAAJXZ @ 0x180076BF8 (-_UpdateAddedImmersiveBackground@CLivePreview@@AEAAJXZ.c)
 *     ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z @ 0x180081468 (-UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180083B6C (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall CLivePreview::_AnimateOpaqueVisuals(CLivePreview *this, struct CWindowData *a2, unsigned int a3)
{
  unsigned int v3; // r15d
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  int v8; // eax
  int updated; // eax
  __int64 v10; // r13
  char v11; // r12
  __int64 v12; // r14
  __int64 v13; // rdx
  CTopLevelWindow *v14; // rbx
  __int64 v15; // r9
  struct CWindowData *MDIOwner; // r13
  int v17; // eax
  CTopLevelWindow *LivePreviewWindow; // rax
  int v19; // eax
  int started; // eax
  int v22; // [rsp+30h] [rbp-48h]
  int v23; // [rsp+40h] [rbp-38h]
  __int128 v24; // [rsp+48h] [rbp-30h] BYREF
  int v25; // [rsp+58h] [rbp-20h]
  int v26; // [rsp+5Ch] [rbp-1Ch]
  unsigned int v27; // [rsp+60h] [rbp-18h]
  char v28; // [rsp+C0h] [rbp+48h]
  struct CWindowData *v29; // [rsp+C8h] [rbp+50h] BYREF
  int v30; // [rsp+D0h] [rbp+58h]
  BOOL v31; // [rsp+D8h] [rbp+60h]

  v29 = a2;
  v25 = 0;
  v3 = 0;
  v26 = 0;
  v28 = 1;
  v23 = *((_DWORD *)this + 90);
  v27 = 0;
  v24 = 0LL;
  if ( a2 )
  {
    v5 = DynArray<CWindowData *,0>::AddMultipleAndSet((__int64)&v24, &v29, a3);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x2D9u);
      goto LABEL_37;
    }
    v3 = v27;
  }
  v7 = *((_QWORD *)this + 67);
  if ( (!v7 || *(_DWORD *)(v7 + 112) == 1) && *((_DWORD *)this + 140) != 4 )
  {
    v8 = CLivePreview::_CollectExcludedImmersiveWindows(this, &v24);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x2DEu);
      goto LABEL_37;
    }
    v3 = v27;
  }
  updated = CLivePreview::_UpdateAddedImmersiveBackground(this);
  v6 = updated;
  if ( updated >= 0 )
  {
    v10 = 0LL;
    v30 = 0;
    if ( v3 )
    {
      while ( 1 )
      {
        v11 = 0;
        v12 = *(_QWORD *)(v24 + 8 * v10);
        v31 = v23
           || (*(_BYTE *)(v12 + 596) & 1) != 0
           || *(_DWORD *)(v12 + 112) != 1 && *(_BYTE *)(*((_QWORD *)this + 69) + 56LL);
        v13 = (unsigned int)(*((_DWORD *)this + 90) - 1);
        if ( (int)v13 >= 0 )
        {
          while ( *(_QWORD *)(*((_QWORD *)this + 42) + 48 * v13 + 24) != *(_QWORD *)(v12 + 40) )
          {
            v13 = (unsigned int)(v13 - 1);
            if ( (int)v13 < 0 )
              goto LABEL_25;
          }
          v11 = 1;
        }
LABEL_25:
        v14 = 0LL;
        v28 = v11 != 0 ? v28 : 0;
        if ( (*(_BYTE *)(v12 + 593) & 1) != 0 )
        {
          MDIOwner = CWindowData::GetMDIOwner((CWindowData *)v12);
          if ( MDIOwner )
          {
            if ( !v11 )
            {
              LOBYTE(v15) = 1;
              LOBYTE(v22) = 1;
              v17 = CLivePreview::_SetupWindowPreview(this, MDIOwner, *((_QWORD *)MDIOwner + 5), v15, v31, 0LL, v22);
              v6 = v17;
              if ( v17 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0x307u);
                goto LABEL_37;
              }
            }
            LivePreviewWindow = CLivePreview::_FindLivePreviewWindow(this, *((HWND *)MDIOwner + 5));
            v14 = LivePreviewWindow;
            if ( LivePreviewWindow )
              CTopLevelWindow::UpdateTitle(LivePreviewWindow, *(unsigned __int16 **)(v12 + 16));
          }
          LODWORD(v10) = v30;
        }
        if ( !v11 )
        {
          LOBYTE(v22) = v14 == 0LL;
          v19 = CLivePreview::_SetupWindowPreview(this, v12, *(_QWORD *)(v12 + 40), 0LL, v31, v14, v22);
          v6 = v19;
          if ( v19 < 0 )
            break;
        }
        CLivePreview::OnWindowTitleChange(this, (unsigned __int16 **)v12);
        v10 = (unsigned int)(v10 + 1);
        v30 = v10;
        if ( (unsigned int)v10 >= v3 )
          goto LABEL_35;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0x315u);
    }
    else
    {
LABEL_35:
      started = CLivePreview::_StartAnimateOpaqueVisuals(this);
      v6 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, started, 0x31Bu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x2E1u);
  }
LABEL_37:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v24);
  return v6;
}
