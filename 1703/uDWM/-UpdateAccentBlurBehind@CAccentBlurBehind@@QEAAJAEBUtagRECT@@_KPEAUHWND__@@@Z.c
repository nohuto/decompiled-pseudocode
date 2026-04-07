/*
 * XREFs of ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18000AE30
 * Callers:
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x18001D01C (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 * Callees:
 *     ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x18000B32C (-EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18000B6E8 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x18000BDB0 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180019770 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F120 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001F2C0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180023320 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180023490 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18002C6F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18002EF9C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180032EF4 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18003B27C (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x18003CCD8 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAccentBlurBehind::UpdateAccentBlurBehind(
        struct CResource **this,
        const struct tagRECT *a2,
        unsigned __int64 a3,
        HWND a4)
{
  int inserted; // eax
  int v9; // ebx
  _QWORD *v10; // r12
  bool v11; // r9
  bool v12; // r8
  struct _LIST_ENTRY *Blink; // rbp
  HWND v14; // rax
  struct _LIST_ENTRY *v15; // rcx
  struct CTopLevelWindow *v16; // r14
  struct _LIST_ENTRY **p_Blink; // r15
  HWND v18; // rdx
  struct _LIST_ENTRY *Flink; // rax
  CTopLevelWindow *v20; // r14
  unsigned __int8 v21; // cl
  CTopLevelWindow *v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // edx
  unsigned int v26; // eax
  int RectangleGeometry; // eax
  int v28; // r8d
  int v29; // r9d
  int v30; // eax
  CBaseObject *v31; // rbp
  int v32; // eax
  bool v34; // r8
  __int64 v35; // rcx
  unsigned int v36; // edx
  unsigned int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // r9d
  int v41; // r9d
  unsigned int v42; // [rsp+20h] [rbp-98h]
  unsigned int v43; // [rsp+20h] [rbp-98h]
  char v44; // [rsp+30h] [rbp-88h]
  struct _LIST_ENTRY *WindowListForDesktop; // [rsp+40h] [rbp-78h]
  struct CTopLevelWindow *v47; // [rsp+48h] [rbp-70h] BYREF
  unsigned int v48; // [rsp+50h] [rbp-68h]
  unsigned int v49; // [rsp+54h] [rbp-64h]
  HWND ShellWindowForDesktop; // [rsp+58h] [rbp-60h]
  struct CRenderDataInstruction *v51; // [rsp+60h] [rbp-58h] BYREF
  struct tagRECT rcDst; // [rsp+68h] [rbp-50h] BYREF

  v51 = 0LL;
  CVisual::SetInterpolationMode(this, 1LL);
  inserted = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
  v9 = inserted;
  if ( inserted < 0 )
  {
    v42 = 1478;
LABEL_74:
    v40 = inserted;
LABEL_76:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, v42);
    goto LABEL_49;
  }
  inserted = CAccentBlurBehind::EnsureCVIResource((CAccentBlurBehind *)this, a2);
  v9 = inserted;
  if ( inserted < 0 )
  {
    v42 = 1479;
    goto LABEL_74;
  }
  if ( !a4 )
    goto LABEL_49;
  inserted = VisualCollection::RemoveAll((VisualCollection *)(this + 4));
  v9 = inserted;
  if ( inserted < 0 )
  {
    v42 = 1494;
    goto LABEL_74;
  }
  inserted = VisualCollection::InsertRelative((VisualCollection *)(this + 4), this[47], 0LL, 0, 1);
  v9 = inserted;
  if ( inserted < 0 )
  {
    v42 = 1495;
    goto LABEL_74;
  }
  inserted = CRenderDataVisual::ClearInstructions(this[47]);
  v9 = inserted;
  if ( inserted < 0 )
  {
    v42 = 1496;
    goto LABEL_74;
  }
  inserted = VisualCollection::RemoveAll((struct CResource *)((char *)this[46] + 32));
  v9 = inserted;
  if ( inserted < 0 )
  {
    v42 = 1497;
    goto LABEL_74;
  }
  v10 = this + 36;
  *((_DWORD *)this + 78) = 0;
  DynArrayImpl<0>::ShrinkToSize(this + 36, 8LL);
  ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(
                            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                            a3);
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                           a3);
  v12 = 0;
  v44 = 0;
  Blink = WindowListForDesktop->Blink;
  if ( Blink == WindowListForDesktop )
    goto LABEL_49;
  v14 = a4;
  v15 = WindowListForDesktop;
  while ( 1 )
  {
    v16 = 0LL;
    v47 = 0LL;
    p_Blink = &Blink[2].Blink;
    v18 = (HWND)Blink[2].Blink;
    if ( v18 == v14 )
    {
      v12 = 1;
      v44 = 1;
      goto LABEL_20;
    }
    if ( v12 )
      break;
LABEL_20:
    Blink = Blink->Blink;
    if ( Blink == v15 )
      goto LABEL_49;
  }
  if ( v18 != ShellWindowForDesktop )
  {
    Flink = Blink[34].Flink;
    if ( !Flink || (HWND)Flink[2].Blink != ShellWindowForDesktop )
    {
      if ( *((_DWORD *)this + 78) < 0xAu )
      {
        v20 = (CTopLevelWindow *)Blink[25].Flink;
        if ( v20 )
        {
          v21 = (unsigned __int8)Blink[37].Flink;
          if ( (v21 & 1) != 0
            && ((unsigned __int8)~BYTE4(Blink[37].Flink) & (unsigned __int8)~(v21 >> 2) & 1) != 0
            && (HIDWORD(Blink[6].Flink) & 0x20000000) == 0
            && v18
            && v18 != *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 74) )
          {
            CTopLevelWindow::GetActualWindowRect(v20, &rcDst, 0, 1, 0);
            if ( IntersectRect(&rcDst, &rcDst, a2) )
            {
              v23 = CTopLevelWindow::CloneVisualTreeForLivePreview(v20, 0, v34, v11, &v47);
              v9 = v23;
              if ( v23 < 0 )
              {
                v43 = 1560;
                goto LABEL_86;
              }
              v16 = v47;
              v23 = VisualCollection::InsertRelative((struct CResource *)((char *)this[46] + 32), v47, 0LL, 1, 1);
              v9 = v23;
              if ( v23 < 0 )
              {
                v43 = 1562;
LABEL_86:
                v41 = v23;
LABEL_88:
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, v43);
                goto LABEL_49;
              }
              v35 = *((unsigned int *)this + 78);
              v36 = v48;
              v37 = v35 + 1;
              if ( (int)v35 + 1 >= (unsigned int)v35 )
                v36 = v35 + 1;
              v9 = v37 < (unsigned int)v35 ? 0x80070216 : 0;
              v48 = v36;
              if ( v37 < (unsigned int)v35 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xB5u);
              }
              else if ( v36 > *((_DWORD *)this + 77) )
              {
                v38 = DynArrayImpl<0>::AddMultipleAndSet(this + 36, 8LL, 1LL, &Blink[2].Blink);
                v9 = v38;
                if ( v38 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0xC0u);
              }
              else
              {
                *(_QWORD *)(*v10 + 8 * v35) = *p_Blink;
                *((_DWORD *)this + 78) = v36;
              }
              if ( v9 < 0 )
              {
                v42 = 1563;
                v40 = v9;
                goto LABEL_76;
              }
              goto LABEL_63;
            }
            v12 = v44;
          }
        }
      }
      v15 = WindowListForDesktop;
      v14 = a4;
      goto LABEL_20;
    }
  }
  v22 = (CTopLevelWindow *)Blink[25].Flink;
  if ( v22 )
  {
    v23 = CTopLevelWindow::CloneVisualTreeForLivePreview(v22, 0, v12, v11, &v47);
    v9 = v23;
    if ( v23 < 0 )
    {
      v43 = 1531;
      goto LABEL_86;
    }
    v16 = v47;
    v23 = VisualCollection::InsertRelative((struct CResource *)((char *)this[46] + 32), v47, 0LL, 1, 1);
    v9 = v23;
    if ( v23 < 0 )
    {
      v43 = 1533;
      goto LABEL_86;
    }
    v24 = *((unsigned int *)this + 78);
    v25 = v49;
    v26 = v24 + 1;
    if ( (int)v24 + 1 >= (unsigned int)v24 )
      v25 = v24 + 1;
    v9 = v26 < (unsigned int)v24 ? 0x80070216 : 0;
    v49 = v25;
    if ( v26 < (unsigned int)v24 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xB5u);
    }
    else if ( v25 > *((_DWORD *)this + 77) )
    {
      v39 = DynArrayImpl<0>::AddMultipleAndSet(this + 36, 8LL, 1LL, &Blink[2].Blink);
      v9 = v39;
      if ( v39 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*v10 + 8 * v24) = *p_Blink;
      *((_DWORD *)this + 78) = v25;
    }
    if ( v9 < 0 )
    {
      v43 = 1534;
      v41 = v9;
      goto LABEL_88;
    }
    if ( v16 )
    {
      CBaseObject::Release(v16);
      v16 = 0LL;
    }
  }
  if ( *p_Blink != (struct _LIST_ENTRY *)ShellWindowForDesktop )
  {
LABEL_63:
    if ( v16 )
      CBaseObject::Release(v16);
    v14 = a4;
    v15 = WindowListForDesktop;
    v12 = v44;
    goto LABEL_20;
  }
  if ( ((__int64)Blink[37].Flink & 1) == 0 || !Blink[24].Flink || !*((_DWORD *)this + 78) )
    goto LABEL_49;
  RectangleGeometry = CVisual::RenderRecursive(this[46]);
  v9 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    v42 = 1571;
LABEL_94:
    v40 = RectangleGeometry;
    goto LABEL_76;
  }
  v28 = a2->right - a2->left;
  if ( v28 < 0 )
    v28 = 0;
  v29 = a2->bottom - a2->top;
  if ( v29 < 0 )
    v29 = 0;
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(0, 0, v28, v29, this + 44);
  v9 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    v42 = 1579;
    goto LABEL_94;
  }
  v30 = CDrawGeometryInstruction::Create(this[42], this[44], &v51);
  v31 = v51;
  v9 = v30;
  if ( v30 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x631u);
  }
  else
  {
    v32 = CRenderDataVisual::AddInstruction(this[47], v51);
    v9 = v32;
    if ( v32 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x633u);
  }
  if ( v31 )
    CBaseObject::Release(v31);
LABEL_49:
  if ( v9 < 0 )
  {
    VisualCollection::RemoveAll((struct CResource *)((char *)this[46] + 32));
    *((_DWORD *)this + 78) = 0;
    DynArrayImpl<0>::ShrinkToSize(this + 36, 8LL);
  }
  return (unsigned int)v9;
}
