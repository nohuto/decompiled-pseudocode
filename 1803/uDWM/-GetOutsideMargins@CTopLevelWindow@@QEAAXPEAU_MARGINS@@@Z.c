/*
 * XREFs of ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18001FA0C
 * Callers:
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180019A90 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x18002F620 (-s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U-$TMILFlagsEnum@.c)
 *     ?GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18003B0AC (-GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x18006C270 (-SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z @ 0x18007ECE0 (-_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z @ 0x18007F320 (-_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z.c)
 * Callees:
 *     IsOpenThemeDataPresent @ 0x1800494F0 (IsOpenThemeDataPresent.c)
 */

void __fastcall CTopLevelWindow::GetOutsideMargins(CTopLevelWindow *this, struct _MARGINS *a2)
{
  int v2; // esi
  char v5; // al
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // r11d
  int v10; // esi
  int v11; // ebp
  int v12; // r10d
  int v13; // r8d
  int v14; // eax
  int v15; // eax

  v2 = *((_DWORD *)this + 146);
  *a2 = 0uLL;
  v5 = IsOpenThemeDataPresent(this, a2);
  v6 = 0;
  if ( v5 && (v2 & 6) != 0 || (*((_DWORD *)this + 146) & 0x200000) != 0 )
  {
    v7 = *((_BYTE *)this + 240) & 8 | 0x136LL;
    v8 = *((_QWORD *)this + 90);
    v9 = *(_DWORD *)((char *)this + 2 * v7);
    v10 = *(_DWORD *)((char *)this + 2 * v7 + 4);
    v11 = *(_DWORD *)((char *)this + 2 * v7 + 12);
    if ( v8 && (*(_BYTE *)(v8 + 592) & 8) == 0 )
    {
      a2->cyTopHeight = *(_DWORD *)((char *)this + 2 * v7 + 8);
      a2->cxLeftWidth = v9;
      a2->cxRightWidth = v10;
      a2->cyBottomHeight = v11;
    }
    else
    {
      v12 = *((_DWORD *)this + 152) - v10 - *(_DWORD *)(*((_QWORD *)this + 41) + 24LL);
      v13 = *((_DWORD *)this + 154) - v11 - *(_DWORD *)(*((_QWORD *)this + 43) + 28LL);
      v14 = 0;
      if ( *((_DWORD *)this + 151) - v9 - *(_DWORD *)(*((_QWORD *)this + 40) + 24LL) >= 0 )
        v14 = *((_DWORD *)this + 151) - v9 - *(_DWORD *)(*((_QWORD *)this + 40) + 24LL);
      a2->cxLeftWidth = v9 + v14;
      a2->cyTopHeight = *(_DWORD *)((char *)this + 2 * v7 + 8);
      v15 = 0;
      if ( v12 >= 0 )
        v15 = v12;
      a2->cxRightWidth = v10 + v15;
      if ( v13 >= 0 )
        v6 = v13;
      a2->cyBottomHeight = v11 + v6;
    }
  }
}
