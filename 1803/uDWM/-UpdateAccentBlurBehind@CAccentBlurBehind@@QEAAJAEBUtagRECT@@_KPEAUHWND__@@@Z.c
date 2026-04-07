/*
 * XREFs of ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x1800808FC
 * Callers:
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180080F44 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x180006C48 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18000F9A0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18000FFF4 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180017D70 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180017F28 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18001FB40 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180020F90 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180025A44 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x1800273A8 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18002BA20 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x18006C3CC (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x180080118 (-EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CAccentBlurBehind::UpdateAccentBlurBehind(
        CAccentBlurBehind *this,
        const struct tagRECT *a2,
        __int64 a3,
        HWND a4)
{
  int inserted; // eax
  int v9; // ebx
  int v10; // r9d
  _QWORD *v11; // r12
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // dl
  struct _LIST_ENTRY *Blink; // rbp
  HWND v17; // rax
  struct CVisual *v18; // r14
  struct _LIST_ENTRY **p_Blink; // r15
  HWND v20; // rcx
  struct _LIST_ENTRY *Flink; // rax
  CTopLevelWindow *v22; // r14
  char v23; // al
  int RectangleGeometry; // eax
  __int64 v25; // rcx
  unsigned int v26; // edx
  unsigned int v27; // eax
  int v28; // eax
  CTopLevelWindow *v29; // rcx
  __int64 v30; // rcx
  unsigned int v31; // edx
  unsigned int v32; // eax
  int v33; // eax
  int v34; // ecx
  __int64 v35; // r9
  int v36; // eax
  __int64 v37; // r8
  int v38; // eax
  CBaseObject *v39; // rbp
  int v40; // eax
  unsigned int v42; // [rsp+20h] [rbp-A8h]
  char v43; // [rsp+30h] [rbp-98h]
  unsigned int v45; // [rsp+40h] [rbp-88h]
  struct CVisual *v46; // [rsp+48h] [rbp-80h] BYREF
  unsigned int v47; // [rsp+50h] [rbp-78h]
  HWND ShellWindowForDesktop; // [rsp+58h] [rbp-70h]
  struct CRenderDataInstruction *v49; // [rsp+60h] [rbp-68h] BYREF
  struct _LIST_ENTRY *v50; // [rsp+68h] [rbp-60h]
  struct tagRECT rcDst; // [rsp+70h] [rbp-58h] BYREF

  v49 = 0LL;
  CVisual::SetInterpolationMode(this, 1);
  inserted = CRenderDataVisual::ClearInstructions(this);
  v9 = inserted;
  if ( inserted < 0 )
  {
    v42 = 1485;
    goto LABEL_3;
  }
  inserted = CAccentBlurBehind::EnsureCVIResource((struct CVisual **)this, a2);
  v9 = inserted;
  if ( inserted < 0 )
  {
    v42 = 1486;
    goto LABEL_3;
  }
  if ( !a4 )
    goto LABEL_89;
  inserted = VisualCollection::RemoveAll((CAccentBlurBehind *)((char *)this + 32));
  v9 = inserted;
  if ( inserted < 0 )
  {
    v42 = 1501;
    goto LABEL_3;
  }
  inserted = VisualCollection::InsertRelative(
               (CAccentBlurBehind *)((char *)this + 32),
               *((struct CVisual ***)this + 47),
               0LL,
               0,
               1);
  v9 = inserted;
  if ( inserted < 0 )
  {
    v42 = 1502;
    goto LABEL_3;
  }
  inserted = CRenderDataVisual::ClearInstructions(*((CRenderDataVisual **)this + 47));
  v9 = inserted;
  if ( inserted < 0 )
  {
    v42 = 1503;
    goto LABEL_3;
  }
  inserted = VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 46) + 32LL));
  v9 = inserted;
  if ( inserted < 0 )
  {
    v42 = 1504;
LABEL_3:
    v10 = inserted;
LABEL_4:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, v42);
    goto LABEL_89;
  }
  v11 = (_QWORD *)((char *)this + 288);
  *((_DWORD *)this + 78) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 288, 8u);
  ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(
                            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
                            a3);
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
                           a3);
  v15 = 0;
  v50 = WindowListForDesktop;
  v43 = 0;
  Blink = WindowListForDesktop->Blink;
  if ( Blink == WindowListForDesktop )
    goto LABEL_89;
  v17 = a4;
  while ( 1 )
  {
    v18 = 0LL;
    p_Blink = &Blink[2].Blink;
    v20 = (HWND)Blink[2].Blink;
    v46 = 0LL;
    if ( v20 != v17 )
      break;
    v15 = 1;
    v43 = 1;
LABEL_64:
    Blink = Blink->Blink;
    if ( Blink == v50 )
      goto LABEL_89;
  }
  if ( !v15 )
    goto LABEL_64;
  if ( v20 != ShellWindowForDesktop )
  {
    Flink = Blink[34].Flink;
    if ( !Flink || (HWND)Flink[2].Blink != ShellWindowForDesktop )
    {
      if ( *((_DWORD *)this + 78) >= 0xAu )
        goto LABEL_63;
      v22 = (CTopLevelWindow *)Blink[24].Blink;
      if ( !v22 )
        goto LABEL_63;
      v23 = (char)Blink[37].Flink;
      if ( (v23 & 1) == 0 )
        goto LABEL_63;
      if ( SBYTE3(Blink[37].Flink) < 0 )
        goto LABEL_63;
      if ( (v23 & 4) != 0 )
        goto LABEL_63;
      if ( (HIDWORD(Blink[6].Flink) & 0x20000000) != 0 )
        goto LABEL_63;
      if ( !v20 )
        goto LABEL_63;
      if ( v20 == *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 79) )
        goto LABEL_63;
      CTopLevelWindow::GetActualWindowRect(v22, &rcDst, 0, 1, 0);
      if ( !IntersectRect(&rcDst, &rcDst, a2) )
        goto LABEL_63;
      RectangleGeometry = CTopLevelWindow::CloneVisualTreeForLivePreview(v22, 0, v13, v14, &v46);
      v9 = RectangleGeometry;
      if ( RectangleGeometry < 0 )
      {
        v42 = 1567;
      }
      else
      {
        v18 = v46;
        RectangleGeometry = VisualCollection::InsertRelative(
                              (VisualCollection *)(*((_QWORD *)this + 46) + 32LL),
                              (struct CVisual **)v46,
                              0LL,
                              1u,
                              1);
        v9 = RectangleGeometry;
        if ( RectangleGeometry >= 0 )
        {
          v25 = *((unsigned int *)this + 78);
          v26 = v47;
          v27 = v25 + 1;
          if ( (int)v25 + 1 >= (unsigned int)v25 )
            v26 = v25 + 1;
          v9 = v27 < (unsigned int)v25 ? 0x80070216 : 0;
          v47 = v26;
          if ( v27 >= (unsigned int)v25 )
          {
            if ( v26 > *((_DWORD *)this + 77) )
            {
              v28 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 288, 8, 1, &Blink[2].Blink);
              v9 = v28;
              if ( v28 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0xC0u);
            }
            else
            {
              *(_QWORD *)(*v11 + 8 * v25) = *p_Blink;
              *((_DWORD *)this + 78) = v26;
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xB5u);
          }
          if ( v9 < 0 )
          {
            v42 = 1570;
LABEL_45:
            v10 = v9;
            goto LABEL_4;
          }
LABEL_61:
          if ( v18 )
            CBaseObject::Release(v18);
LABEL_63:
          v17 = a4;
          v15 = v43;
          goto LABEL_64;
        }
        v42 = 1569;
      }
LABEL_68:
      v10 = RectangleGeometry;
      goto LABEL_4;
    }
  }
  v29 = (CTopLevelWindow *)Blink[24].Blink;
  if ( v29 )
  {
    RectangleGeometry = CTopLevelWindow::CloneVisualTreeForLivePreview(v29, 0, v13, v14, &v46);
    v9 = RectangleGeometry;
    if ( RectangleGeometry < 0 )
    {
      v42 = 1538;
      goto LABEL_68;
    }
    v18 = v46;
    RectangleGeometry = VisualCollection::InsertRelative(
                          (VisualCollection *)(*((_QWORD *)this + 46) + 32LL),
                          (struct CVisual **)v46,
                          0LL,
                          1u,
                          1);
    v9 = RectangleGeometry;
    if ( RectangleGeometry < 0 )
    {
      v42 = 1540;
      goto LABEL_68;
    }
    v30 = *((unsigned int *)this + 78);
    v31 = v45;
    v32 = v30 + 1;
    if ( (int)v30 + 1 >= (unsigned int)v30 )
      v31 = v30 + 1;
    v9 = v32 < (unsigned int)v30 ? 0x80070216 : 0;
    v45 = v31;
    if ( v32 >= (unsigned int)v30 )
    {
      if ( v31 > *((_DWORD *)this + 77) )
      {
        v33 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 288, 8, 1, &Blink[2].Blink);
        v9 = v33;
        if ( v33 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v33, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*v11 + 8 * v30) = *p_Blink;
        *((_DWORD *)this + 78) = v31;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xB5u);
    }
    if ( v9 < 0 )
    {
      v42 = 1541;
      goto LABEL_45;
    }
    if ( v18 )
    {
      CBaseObject::Release(v18);
      v18 = 0LL;
    }
  }
  if ( *p_Blink != (struct _LIST_ENTRY *)ShellWindowForDesktop )
    goto LABEL_61;
  if ( ((__int64)Blink[37].Flink & 1) != 0 && Blink[23].Blink && *((_DWORD *)this + 78) )
  {
    RectangleGeometry = CVisual::RenderRecursive(*((CVisual **)this + 46));
    v9 = RectangleGeometry;
    if ( RectangleGeometry < 0 )
    {
      v42 = 1578;
      goto LABEL_68;
    }
    v34 = a2->right - a2->left;
    v35 = 0LL;
    v36 = a2->bottom - a2->top;
    if ( v36 >= 0 )
      v35 = (unsigned int)v36;
    v37 = 0LL;
    if ( v34 >= 0 )
      v37 = (unsigned int)v34;
    RectangleGeometry = ResourceHelper::CreateRectangleGeometry(0LL, 0LL, v37, v35, (struct CResource **)this + 44);
    v9 = RectangleGeometry;
    if ( RectangleGeometry < 0 )
    {
      v42 = 1586;
      goto LABEL_68;
    }
    v38 = CDrawGeometryInstruction::Create(*((struct CResource **)this + 42), *((struct CResource **)this + 44), &v49);
    v39 = v49;
    v9 = v38;
    if ( v38 >= 0 )
    {
      v40 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 47), v49);
      v9 = v40;
      if ( v40 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v40, 0x63Au);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v38, 0x638u);
    }
    if ( v39 )
      CBaseObject::Release(v39);
  }
LABEL_89:
  if ( v9 < 0 )
  {
    VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 46) + 32LL));
    *((_DWORD *)this + 78) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 288, 8u);
  }
  return (unsigned int)v9;
}
