/*
 * XREFs of ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800154B8
 * Callers:
 *     ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800317F0 (-HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18003461C (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x18003E638 (-_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PE.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x180079CA0 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z @ 0x18007A140 (-InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x18007A23C (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 *     ?OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ @ 0x18007A9BC (-OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ.c)
 * Callees:
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x180022830 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180035C98 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x18003E4F0 (-DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z.c)
 *     ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x18003E604 (-RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     Template_qp @ 0x180077E2C (Template_qp.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x18007AB2C (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CIconicBitmapRegistry::RequestBitmap(CIconicBitmapRegistry *this, struct CWindowData *a2, char a3)
{
  char *v3; // r14
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  char v10; // r15
  struct CWindowData **v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  HWND v20; // rbp
  LPARAM v21; // r9
  UINT v22; // edx
  WPARAM v23; // r8
  __int64 WindowDpiAwarenessContext; // rax
  int AwarenessFromDpiAwarenessContext; // eax
  CDesktopManager *v26; // rcx
  int started; // eax
  __int128 v28; // [rsp+30h] [rbp-38h] BYREF
  struct tagSIZE v29; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v30; // [rsp+80h] [rbp+18h]

  v3 = (char *)this + 48;
  v5 = *((_QWORD *)this + 6);
  v6 = 0LL;
  v8 = 0;
  v9 = *((_DWORD *)this + 18);
  v10 = 0;
  if ( v9 )
  {
    v13 = (struct CWindowData **)(v5 + 8);
    do
    {
      if ( *v13 == a2 )
        break;
      v6 = (unsigned int)(v6 + 1);
      v13 += 2;
    }
    while ( (unsigned int)v6 < v9 );
  }
  if ( (unsigned int)v6 < v9 )
  {
    v10 = 1;
    v14 = DynArray<CIconicBitmapPending,0>::RemoveAt(v3, v6);
    v8 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x136u);
  }
  if ( !a3 )
  {
    if ( v10 )
    {
      if ( a2 == (struct CWindowData *)-1LL )
        *((_BYTE *)this + 89) = 0;
      else
        CIconicBitmapRegistry::RegisterBitmapPending(this, a2, 0);
      *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) = *((_DWORD *)this + 18) != 0;
    }
    return v8;
  }
  v15 = *((unsigned int *)v3 + 6);
  v16 = v30;
  *((_QWORD *)&v28 + 1) = a2;
  v17 = v15 + 1;
  if ( (int)v15 + 1 >= (unsigned int)v15 )
    v16 = v15 + 1;
  v8 = v17 < (unsigned int)v15 ? 0x80070216 : 0;
  *(double *)&v28 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 29) + 10.0;
  if ( v17 >= (unsigned int)v15 )
  {
    if ( v16 > *((_DWORD *)v3 + 5) )
    {
      v18 = DynArrayImpl<0>::AddMultipleAndSet(v3, 16LL, 1LL, &v28);
      v8 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC0u);
    }
    else
    {
      *(_OWORD *)(*(_QWORD *)v3 + 16 * v15) = v28;
      *((_DWORD *)v3 + 6) = v16;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB5u);
  }
  if ( (v8 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x13Fu);
    return v8;
  }
  if ( a2 != (struct CWindowData *)-1LL )
  {
    v20 = (HWND)*((_QWORD *)a2 + 5);
    CIconicBitmapRegistry::RegisterBitmapPending(this, a2, 1);
    if ( v10 )
      goto LABEL_34;
    if ( !v20 )
      goto LABEL_34;
    v29 = 0LL;
    WindowDpiAwarenessContext = GetWindowDpiAwarenessContext(v20);
    AwarenessFromDpiAwarenessContext = GetAwarenessFromDpiAwarenessContext(WindowDpiAwarenessContext);
    if ( !(unsigned int)DwmGetIdealIconicThumbnailSize(AwarenessFromDpiAwarenessContext != 0, &v29) )
      goto LABEL_34;
    if ( CWindowData::IsImmersiveWindow(a2) )
      v23 = *((_QWORD *)a2 + 5);
    else
      v23 = 0LL;
    v22 = 803;
    v21 = LOWORD(v29.cy) | (LOWORD(v29.cx) << 16);
    goto LABEL_33;
  }
  v19 = *(_QWORD *)(*((_QWORD *)this + 12) + 72LL);
  v20 = *(HWND *)(v19 + 40);
  *((_BYTE *)this + 89) = 1;
  if ( !v10 )
  {
    v21 = 0LL;
    v22 = 806;
    v23 = 0LL;
LABEL_33:
    PostMessageW(v20, v22, v23, v21);
  }
LABEL_34:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_qp(v19, &UdwmManageIconicThumbnail_Info, 3LL);
  v26 = CDesktopManager::s_pDesktopManagerInstance;
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) )
  {
    *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) = 1;
    started = CDesktopManager::PostStartAnimations(v26);
    v8 = started;
    if ( started < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, started, 0x161u);
  }
  return v8;
}
