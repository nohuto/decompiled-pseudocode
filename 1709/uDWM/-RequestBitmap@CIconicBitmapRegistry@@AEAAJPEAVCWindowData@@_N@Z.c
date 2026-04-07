/*
 * XREFs of ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18002C114
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180026D60 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A690 (-HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x180038358 (-_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PE.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x18007048C (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z @ 0x180070824 (-InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x180070920 (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 *     ?OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ @ 0x180070C30 (-OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180010B70 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x1800174F0 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x180038210 (-DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z.c)
 *     ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x180038324 (-RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 *     McTemplateU0qp @ 0x18006D798 (McTemplateU0qp.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x180070DA0 (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CIconicBitmapRegistry::RequestBitmap(CIconicBitmapRegistry *this, struct CWindowData *a2, char a3)
{
  unsigned int v3; // ebx
  char *v4; // r14
  __int64 v5; // rax
  char v8; // r15
  unsigned int v9; // ecx
  unsigned int v10; // edx
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

  v3 = 0;
  v4 = (char *)this + 48;
  v5 = *((_QWORD *)this + 6);
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
      ++v10;
      v13 += 2;
    }
    while ( v10 < v9 );
    if ( v10 < v9 )
    {
      v8 = 1;
      v14 = DynArray<CIconicBitmapPending,0>::RemoveAt(v4);
      v3 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x136u);
    }
  }
  if ( !a3 )
  {
    if ( v8 )
    {
      if ( a2 == (struct CWindowData *)-1LL )
        *((_BYTE *)this + 89) = 0;
      else
        CIconicBitmapRegistry::RegisterBitmapPending(this, a2, 0);
      *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) = *((_DWORD *)this + 18) != 0;
    }
    return v3;
  }
  v15 = *((unsigned int *)v4 + 6);
  v16 = v30;
  *((_QWORD *)&v28 + 1) = a2;
  v17 = v15 + 1;
  if ( (int)v15 + 1 >= (unsigned int)v15 )
    v16 = v15 + 1;
  v3 = v17 < (unsigned int)v15 ? 0x80070216 : 0;
  *(double *)&v28 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 35) + 10.0;
  if ( v17 >= (unsigned int)v15 )
  {
    if ( v16 > *((_DWORD *)v4 + 5) )
    {
      v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4, 0x10u, 1, &v28);
      v3 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xC0u);
    }
    else
    {
      *(_OWORD *)(*(_QWORD *)v4 + 16 * v15) = v28;
      *((_DWORD *)v4 + 6) = v16;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
  }
  if ( (v3 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x13Fu);
    return v3;
  }
  if ( a2 != (struct CWindowData *)-1LL )
  {
    v20 = (HWND)*((_QWORD *)a2 + 5);
    CIconicBitmapRegistry::RegisterBitmapPending(this, a2, 1);
    if ( v8 )
      goto LABEL_33;
    if ( !v20 )
      goto LABEL_33;
    v29 = 0LL;
    WindowDpiAwarenessContext = GetWindowDpiAwarenessContext(v20);
    AwarenessFromDpiAwarenessContext = GetAwarenessFromDpiAwarenessContext(WindowDpiAwarenessContext);
    if ( !(unsigned int)DwmGetIdealIconicThumbnailSize(AwarenessFromDpiAwarenessContext != 0, &v29) )
      goto LABEL_33;
    if ( CWindowData::IsImmersiveWindow(a2) )
      v23 = *((_QWORD *)a2 + 5);
    else
      v23 = 0LL;
    v22 = 803;
    v21 = LOWORD(v29.cy) | (LOWORD(v29.cx) << 16);
    goto LABEL_32;
  }
  v19 = *(_QWORD *)(*((_QWORD *)this + 12) + 72LL);
  v20 = *(HWND *)(v19 + 40);
  *((_BYTE *)this + 89) = 1;
  if ( !v8 )
  {
    v21 = 0LL;
    v22 = 806;
    v23 = 0LL;
LABEL_32:
    PostMessageW(v20, v22, v23, v21);
  }
LABEL_33:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp(v19, &UdwmManageIconicThumbnail_Info, 3LL);
  v26 = CDesktopManager::s_pDesktopManagerInstance;
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) )
  {
    *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) = 1;
    started = CDesktopManager::PostStartAnimations(v26);
    v3 = started;
    if ( started < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x161u);
  }
  return v3;
}
