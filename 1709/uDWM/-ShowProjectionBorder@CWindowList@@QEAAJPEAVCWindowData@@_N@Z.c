/*
 * XREFs of ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18007CB7C
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180026880 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800256E8 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180073DF0 (-Create@CProjectionBorderVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x180074D90 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowList::ShowProjectionBorder(CWindowList *this, struct CWindowData *a2)
{
  CProjectionBorderVisual **v4; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  struct CVisual *v7; // rbx
  CProjectionBorderVisual *v8; // rdi
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  int inserted; // eax
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = (CProjectionBorderVisual **)((char *)a2 + 416);
  if ( *((_QWORD *)a2 + 52)
    || (v5 = CProjectionBorderVisual::Create(
               *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
               (struct CProjectionBorderVisual **)a2 + 52),
        v6 = v5,
        v5 >= 0) )
  {
    v7 = (struct CVisual *)*((_QWORD *)a2 + 50);
    v8 = *v4;
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    inserted = VisualCollection::InsertRelative(
                 (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                 (struct CVisual **)v8,
                 v7,
                 1u,
                 1);
    v6 = inserted;
    if ( inserted >= 0 )
      CProjectionBorderVisual::UpdateRectFromWindow(*v4, a2);
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x176Au);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1767u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v6;
}
