/*
 * XREFs of ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x18006A720
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x18006A20C (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18000ACFC (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x1800256C4 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x18002C250 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x18006B2A0 (-_GetCoverageStateOfWindow@CLivePreview@@AEAA-AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CLivePreview::_CollectExcludedImmersiveWindows(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v5; // edi
  struct _LIST_ENTRY *WindowListForDesktop; // r14
  struct _LIST_ENTRY *Flink; // rbx
  int *v8; // rsi
  int v9; // r15d
  struct _LIST_ENTRY *v10; // rdx
  unsigned int v11; // ebp
  char ShouldCloneWindow; // al
  unsigned int v13; // r8d
  int v14; // eax
  struct _LIST_ENTRY *v16; // [rsp+70h] [rbp+8h] BYREF
  int v17; // [rsp+80h] [rbp+18h] BYREF
  int v18; // [rsp+84h] [rbp+1Ch]

  v17 = 10;
  v3 = *(_QWORD *)(a1 + 288);
  v18 = 8;
  v5 = 0;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 57),
                           v3);
  Flink = WindowListForDesktop->Flink;
  if ( WindowListForDesktop->Flink != WindowListForDesktop )
  {
    while ( 2 )
    {
      v16 = Flink;
      v8 = &v17;
      v9 = (int)Flink[7].Flink;
      v10 = Flink;
      v11 = 0;
      while ( 1 )
      {
        if ( v9 == *v8 )
        {
          ShouldCloneWindow = CTransitionVisualController::ShouldCloneWindow((HWND)v10[2].Blink);
          v10 = v16;
          if ( ShouldCloneWindow )
          {
            if ( (BYTE4(v16[37].Flink) & 1) == 0 && ((__int64)v16[37].Flink & 1) != 0 )
              break;
          }
        }
        ++v11;
        ++v8;
        if ( v11 >= 2 )
          goto LABEL_11;
      }
      if ( !(unsigned int)CLivePreview::_GetCoverageStateOfWindow(a1, v16) )
      {
        v14 = DynArray<CWindowData *,0>::AddMultipleAndSet(a2, &v16, v13);
        v5 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x2C5u);
          return v5;
        }
      }
LABEL_11:
      Flink = Flink->Flink;
      if ( Flink != WindowListForDesktop )
        continue;
      break;
    }
  }
  return v5;
}
