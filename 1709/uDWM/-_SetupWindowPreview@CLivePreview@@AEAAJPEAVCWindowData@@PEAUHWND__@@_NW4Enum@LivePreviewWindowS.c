/*
 * XREFs of ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x18006BA74
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x18006A20C (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?_SetupOwneePreview@CLivePreview@@AEAAJPEBVCWindowData@@PEAUHWND__@@W4Enum@LivePreviewWindowState@@@Z @ 0x18006B9B8 (-_SetupOwneePreview@CLivePreview@@AEAAJPEBVCWindowData@@PEAUHWND__@@W4Enum@LivePreviewWindowStat.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@ULivePreviewWindow@@$0A@@@QEAAJPEFBULivePreviewWindow@@I@Z @ 0x1800699AC (-AddMultipleAndSet@-$DynArray@ULivePreviewWindow@@$0A@@@QEAAJPEFBULivePreviewWindow@@I@Z.c)
 *     ?_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z @ 0x18006B264 (-_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z.c)
 *     ?_SetupOwneePreview@CLivePreview@@AEAAJPEBVCWindowData@@PEAUHWND__@@W4Enum@LivePreviewWindowState@@@Z @ 0x18006B9B8 (-_SetupOwneePreview@CLivePreview@@AEAAJPEBVCWindowData@@PEAUHWND__@@W4Enum@LivePreviewWindowStat.c)
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x180078684 (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 */

__int64 __fastcall CLivePreview::_SetupWindowPreview(
        CLivePreview *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        struct CVisual *a6,
        char a7)
{
  unsigned int v7; // ebx
  volatile signed __int32 *LivePreviewWindow; // rax
  struct CVisual **v12; // rdi
  int LivePreviewVisual; // eax
  unsigned int v14; // r8d
  CBaseObject *v15; // r15
  int v16; // eax
  CLivePreview *v17; // rcx
  VisualCollection *v18; // rcx
  int inserted; // eax
  int v20; // eax
  int v21; // eax
  struct CVisual *v23; // [rsp+30h] [rbp-40h] BYREF
  CBaseObject *v24; // [rsp+38h] [rbp-38h] BYREF
  __int128 v25; // [rsp+40h] [rbp-30h] BYREF
  CBaseObject *v26; // [rsp+50h] [rbp-20h]
  __int64 v27; // [rsp+58h] [rbp-18h]
  __int64 v28; // [rsp+60h] [rbp-10h]
  unsigned int v29; // [rsp+68h] [rbp-8h]

  v7 = 0;
  v23 = 0LL;
  v24 = 0LL;
  if ( a4 )
  {
    LivePreviewWindow = (volatile signed __int32 *)CLivePreview::_FindLivePreviewWindow(a1, *(HWND *)(a2 + 40));
    v23 = (struct CVisual *)LivePreviewWindow;
    if ( LivePreviewWindow )
    {
      _InterlockedIncrement(LivePreviewWindow + 2);
      v12 = (struct CVisual **)v23;
      goto LABEL_19;
    }
  }
  LivePreviewVisual = CTopLevelWindow::GetLivePreviewVisual((struct CWindowData *)a2, &v23, &v24);
  v12 = (struct CVisual **)v23;
  v7 = LivePreviewVisual;
  v15 = v24;
  if ( LivePreviewVisual < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, LivePreviewVisual, 0x191u);
    goto LABEL_17;
  }
  v27 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)&v25 = v23;
  *((_QWORD *)&v25 + 1) = a2;
  v26 = v24;
  v28 = a3;
  v29 = a5;
  v16 = DynArray<LivePreviewWindow,0>::AddMultipleAndSet((__int64)a1 + 336, &v25, v14);
  v7 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x19Fu);
    goto LABEL_17;
  }
  v17 = a1;
  if ( *(_DWORD *)(a2 + 112) != 1 )
    v17 = (CLivePreview *)*((_QWORD *)a1 + 63);
  v18 = (CLivePreview *)((char *)v17 + 32);
  if ( a7 )
  {
    inserted = VisualCollection::InsertRelative(v18, v12, a6, 0, 1);
    v7 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x1B1u);
      goto LABEL_17;
    }
  }
  else
  {
    v20 = VisualCollection::InsertRelative(v18, v12, a6, 1u, 1);
    v7 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x1B5u);
      goto LABEL_17;
    }
  }
  v21 = CLivePreview::_SetupOwneePreview((__int64)a1, a2, a3, a5);
  v7 = v21;
  if ( v21 >= 0 )
    goto LABEL_19;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x1B8u);
LABEL_17:
  if ( v15 )
    CBaseObject::Release(v15);
LABEL_19:
  if ( v12 )
    CBaseObject::Release((CBaseObject *)v12);
  return v7;
}
