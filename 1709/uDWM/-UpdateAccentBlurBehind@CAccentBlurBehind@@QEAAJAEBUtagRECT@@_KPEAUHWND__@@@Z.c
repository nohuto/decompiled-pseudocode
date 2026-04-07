/*
 * XREFs of ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18007728C
 * Callers:
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180077A68 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 * Callees:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x1800096A0 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x18000C1A0 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180012C50 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180012E90 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180015080 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180015220 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180018160 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180019424 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180020C30 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x1800256C4 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180027F6C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x180065940 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x180075E18 (-EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CAccentBlurBehind::UpdateAccentBlurBehind(
        CAccentBlurBehind *this,
        struct tagRECT *a2,
        __int64 a3,
        HWND a4)
{
  int inserted; // eax
  int v9; // ebx
  int v10; // r9d
  _QWORD *v11; // r12
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  __int64 v13; // r9
  struct _LIST_ENTRY *Blink; // rbp
  unsigned int v15; // eax
  unsigned int v16; // ecx
  HWND v17; // r8
  struct CTopLevelWindow *v18; // r14
  struct _LIST_ENTRY **p_Blink; // r13
  HWND v20; // rdx
  unsigned int v21; // r15d
  struct _LIST_ENTRY *Flink; // rax
  CTopLevelWindow *v23; // r14
  unsigned __int8 v24; // cl
  __int64 v25; // r8
  int RectangleGeometry; // eax
  __int64 v27; // rcx
  unsigned int v28; // eax
  unsigned int v29; // edx
  int v30; // eax
  CTopLevelWindow *v31; // rcx
  __int64 v32; // rcx
  unsigned int v33; // eax
  unsigned int v34; // edx
  int v35; // eax
  __int64 v36; // r9
  int v37; // ecx
  int v38; // eax
  __int64 v39; // r8
  int v40; // eax
  CBaseObject *v41; // rbp
  int v42; // eax
  unsigned int v44; // [rsp+20h] [rbp-A8h]
  char v45; // [rsp+30h] [rbp-98h]
  unsigned int v46; // [rsp+34h] [rbp-94h]
  unsigned int v47; // [rsp+38h] [rbp-90h]
  struct CTopLevelWindow *v49; // [rsp+48h] [rbp-80h] BYREF
  unsigned int v50; // [rsp+50h] [rbp-78h]
  bool v51[8]; // [rsp+58h] [rbp-70h]
  RECT *lprcSrc2; // [rsp+60h] [rbp-68h]
  struct CRenderDataInstruction *v53; // [rsp+68h] [rbp-60h] BYREF
  struct _LIST_ENTRY *v54; // [rsp+70h] [rbp-58h]
  struct tagRECT rcDst; // [rsp+78h] [rbp-50h] BYREF

  v53 = 0LL;
  lprcSrc2 = a2;
  CVisual::SetInterpolationMode(this, 1);
  inserted = CRenderDataVisual::ClearInstructions(this);
  v9 = inserted;
  if ( inserted < 0 )
  {
    v44 = 1513;
    goto LABEL_3;
  }
  inserted = CAccentBlurBehind::EnsureCVIResource((struct CVisual **)this, a2);
  v9 = inserted;
  if ( inserted < 0 )
  {
    v44 = 1514;
    goto LABEL_3;
  }
  if ( !a4 )
    goto LABEL_90;
  inserted = VisualCollection::RemoveAll((CAccentBlurBehind *)((char *)this + 32));
  v9 = inserted;
  if ( inserted < 0 )
  {
    v44 = 1529;
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
    v44 = 1530;
    goto LABEL_3;
  }
  inserted = CRenderDataVisual::ClearInstructions(*((CRenderDataVisual **)this + 47));
  v9 = inserted;
  if ( inserted < 0 )
  {
    v44 = 1531;
    goto LABEL_3;
  }
  inserted = VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 46) + 32LL));
  v9 = inserted;
  if ( inserted < 0 )
  {
    v44 = 1532;
LABEL_3:
    v10 = inserted;
LABEL_4:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v44);
    goto LABEL_90;
  }
  v11 = (_QWORD *)((char *)this + 288);
  *((_DWORD *)this + 78) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 288, 8u);
  *(_QWORD *)v51 = CWindowList::GetShellWindowForDesktop(
                     *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 57),
                     a3);
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 57),
                           a3);
  LOBYTE(v13) = 0;
  v54 = WindowListForDesktop;
  v45 = 0;
  Blink = WindowListForDesktop->Blink;
  if ( Blink == WindowListForDesktop )
    goto LABEL_90;
  v15 = v46;
  v16 = v47;
  v17 = a4;
  while ( 1 )
  {
    v18 = 0LL;
    v50 = v16;
    p_Blink = &Blink[2].Blink;
    v49 = 0LL;
    v20 = (HWND)Blink[2].Blink;
    v21 = v15;
    if ( v20 != v17 )
      break;
    LOBYTE(v13) = 1;
    v45 = 1;
LABEL_65:
    Blink = Blink->Blink;
    if ( Blink == v54 )
      goto LABEL_90;
  }
  if ( !(_BYTE)v13 )
    goto LABEL_65;
  if ( v20 != *(HWND *)v51 )
  {
    Flink = Blink[34].Flink;
    if ( !Flink || Flink[2].Blink != *(struct _LIST_ENTRY **)v51 )
    {
      if ( *((_DWORD *)this + 78) >= 0xAu )
        goto LABEL_64;
      v23 = (CTopLevelWindow *)Blink[25].Flink;
      if ( !v23 )
        goto LABEL_64;
      v24 = (unsigned __int8)Blink[37].Flink;
      if ( (v24 & 1) == 0
        || ((unsigned __int8)~BYTE4(Blink[37].Flink) & (unsigned __int8)~(v24 >> 2) & 1) == 0
        || (HIDWORD(Blink[6].Flink) & 0x20000000) != 0
        || !v20
        || v20 == *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 80) )
      {
        goto LABEL_63;
      }
      CTopLevelWindow::GetActualWindowRect(v23, &rcDst, 0, 1, 0);
      if ( !IntersectRect(&rcDst, &rcDst, lprcSrc2) )
        goto LABEL_62;
      RectangleGeometry = CTopLevelWindow::CloneVisualTreeForLivePreview(v23, 0, v25, v13, &v49);
      v9 = RectangleGeometry;
      if ( RectangleGeometry < 0 )
      {
        v44 = 1595;
      }
      else
      {
        v18 = v49;
        RectangleGeometry = VisualCollection::InsertRelative(
                              (VisualCollection *)(*((_QWORD *)this + 46) + 32LL),
                              (struct CVisual **)v49,
                              0LL,
                              1u,
                              1);
        v9 = RectangleGeometry;
        if ( RectangleGeometry >= 0 )
        {
          v27 = *((unsigned int *)this + 78);
          v28 = v27 + 1;
          v29 = v27 + 1;
          if ( (int)v27 + 1 < (unsigned int)v27 )
            v29 = v50;
          v9 = v28 < (unsigned int)v27 ? 0x80070216 : 0;
          v47 = v29;
          if ( v28 >= (unsigned int)v27 )
          {
            if ( v29 > *((_DWORD *)this + 77) )
            {
              v30 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 288, 8u, 1, &Blink[2].Blink);
              v9 = v30;
              if ( v30 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0xC0u);
            }
            else
            {
              *(_QWORD *)(*v11 + 8 * v27) = *p_Blink;
              *((_DWORD *)this + 78) = v29;
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB5u);
          }
          if ( v9 < 0 )
          {
            v44 = 1598;
LABEL_44:
            v10 = v9;
            goto LABEL_4;
          }
LABEL_60:
          if ( v18 )
            CBaseObject::Release(v18);
LABEL_62:
          LOBYTE(v13) = v45;
LABEL_63:
          v16 = v47;
LABEL_64:
          v17 = a4;
          v15 = v46;
          goto LABEL_65;
        }
        v44 = 1597;
      }
LABEL_69:
      v10 = RectangleGeometry;
      goto LABEL_4;
    }
  }
  v31 = (CTopLevelWindow *)Blink[25].Flink;
  if ( v31 )
  {
    RectangleGeometry = CTopLevelWindow::CloneVisualTreeForLivePreview(v31, 0, *(__int64 *)v51, v13, &v49);
    v9 = RectangleGeometry;
    if ( RectangleGeometry < 0 )
    {
      v44 = 1566;
      goto LABEL_69;
    }
    v18 = v49;
    RectangleGeometry = VisualCollection::InsertRelative(
                          (VisualCollection *)(*((_QWORD *)this + 46) + 32LL),
                          (struct CVisual **)v49,
                          0LL,
                          1u,
                          1);
    v9 = RectangleGeometry;
    if ( RectangleGeometry < 0 )
    {
      v44 = 1568;
      goto LABEL_69;
    }
    v32 = *((unsigned int *)this + 78);
    v33 = v32 + 1;
    v34 = v32 + 1;
    if ( (int)v32 + 1 < (unsigned int)v32 )
      v34 = v21;
    v9 = v33 < (unsigned int)v32 ? 0x80070216 : 0;
    v46 = v34;
    if ( v33 >= (unsigned int)v32 )
    {
      if ( v34 > *((_DWORD *)this + 77) )
      {
        v35 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 288, 8u, 1, &Blink[2].Blink);
        v9 = v35;
        if ( v35 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*v11 + 8 * v32) = *p_Blink;
        *((_DWORD *)this + 78) = v34;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB5u);
    }
    if ( v9 < 0 )
    {
      v44 = 1569;
      goto LABEL_44;
    }
    if ( v18 )
    {
      CBaseObject::Release(v18);
      v18 = 0LL;
    }
  }
  if ( *p_Blink != *(struct _LIST_ENTRY **)v51 )
    goto LABEL_60;
  if ( ((__int64)Blink[37].Flink & 1) != 0 && Blink[24].Flink && *((_DWORD *)this + 78) )
  {
    RectangleGeometry = CVisual::RenderRecursive(*((CVisual **)this + 46));
    v9 = RectangleGeometry;
    if ( RectangleGeometry < 0 )
    {
      v44 = 1606;
      goto LABEL_69;
    }
    v36 = 0LL;
    v37 = lprcSrc2->right - lprcSrc2->left;
    v38 = lprcSrc2->bottom - lprcSrc2->top;
    if ( v38 >= 0 )
      v36 = (unsigned int)v38;
    v39 = 0LL;
    if ( v37 >= 0 )
      v39 = (unsigned int)v37;
    RectangleGeometry = ResourceHelper::CreateRectangleGeometry(0LL, 0LL, v39, v36, (struct CResource **)this + 44);
    v9 = RectangleGeometry;
    if ( RectangleGeometry < 0 )
    {
      v44 = 1614;
      goto LABEL_69;
    }
    v40 = CDrawGeometryInstruction::Create(*((struct CResource **)this + 42), *((struct CResource **)this + 44), &v53);
    v41 = v53;
    v9 = v40;
    if ( v40 >= 0 )
    {
      v42 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 47), v53);
      v9 = v42;
      if ( v42 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0x656u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x654u);
    }
    if ( v41 )
      CBaseObject::Release(v41);
  }
LABEL_90:
  if ( v9 < 0 )
  {
    VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 46) + 32LL));
    *((_DWORD *)this + 78) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 288, 8u);
  }
  return (unsigned int)v9;
}
