/*
 * XREFs of ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x1800389A0
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z @ 0x180039F90 (-EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z.c)
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x18003A200 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x18003B0C4 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ @ 0x18007F31C (-EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020D90 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z @ 0x180038C14 (-GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180045628 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180045688 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
        void *const a1,
        int iPartId,
        unsigned int a3,
        struct _MARGINS *a4,
        struct tagRECT **a5)
{
  HRESULT ThemeRect; // ebp
  LONG top; // ecx
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int v14; // ebx
  int v15; // r14d
  struct CBitmapSource *AtlasImageFromTheme; // rbp
  void *(__fastcall *v17)(WPF::ProcessHeapImpl *, size_t); // rax
  struct tagRECT *v18; // rax
  __int64 v19; // rcx
  int v20; // ecx
  int v21; // ecx
  struct tagRECT rc; // [rsp+40h] [rbp-78h] BYREF
  struct tagRECT pRect; // [rsp+50h] [rbp-68h] BYREF

  if ( dword_1800C1A70 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800C1A70);
    if ( dword_1800C1A70 == -1 )
    {
      dword_1800C19DC = -2147023728;
      Init_thread_footer(&dword_1800C1A70);
    }
  }
  ThemeRect = GetThemeRect(a1, iPartId, 0, 8002, &pRect);
  if ( ThemeRect < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C19DC, 1u, ThemeRect, 0x31Bu);
    return (unsigned int)ThemeRect;
  }
  if ( a4 )
  {
    ThemeRect = GetThemeMargins(a1, 0LL, iPartId, 0, 3601, 0LL, a4);
    if ( ThemeRect < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C19DC, 1u, ThemeRect, 0x31Fu);
      return (unsigned int)ThemeRect;
    }
  }
  top = pRect.top;
  v12 = pRect.bottom - pRect.top;
  if ( pRect.bottom - pRect.top < 0 )
    v12 = 0;
  if ( a3 == 4 )
    v13 = v12 >> 2;
  else
    v13 = v12 / a3;
  v14 = 0;
  v15 = 0;
  while ( 1 )
  {
    rc.left = pRect.left;
    rc.right = pRect.right;
    rc.top = v15 + top;
    rc.bottom = v13 + v15 + top;
    InflateRect(&rc, -1, -1);
    AtlasImageFromTheme = CTopLevelWindow::GetAtlasImageFromTheme(a1);
    v17 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
    v18 = v17 == WPF::ProcessHeapImpl::AllocClear
        ? (struct tagRECT *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x68uLL)
        : (struct tagRECT *)v17(WPF::g_pProcessHeap, 104LL);
    if ( !v18 )
      break;
    *(_QWORD *)&v18[1].left = 0LL;
    *(_QWORD *)&v18->left = &CBitmapSource::`vftable';
    v18->right = 1;
    *(_QWORD *)&v18[6].left = 0LL;
    v18[5].left = 0x80000000;
    v18[5].right = 0x80000000;
    v18[5].top = 0x80000000;
    v18[5].bottom = 0x80000000;
    *(_QWORD *)&v18[1].left = *((_QWORD *)AtlasImageFromTheme + 2);
    v19 = *((_QWORD *)AtlasImageFromTheme + 2);
    if ( v19 )
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
    v18[5] = rc;
    v20 = v18[5].right - v18[5].left;
    if ( v20 < 0 )
      v20 = 0;
    v18[1].right = v20;
    v21 = v18[5].bottom - v18[5].top;
    if ( v21 < 0 )
      v21 = 0;
    v18[1].bottom = v21;
    if ( a4 )
      v18[2] = *(struct tagRECT *)a4;
    *a5 = v18;
    ++v14;
    ++a5;
    v15 += v13;
    if ( v14 >= a3 )
      return 0LL;
    top = pRect.top;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xDAu);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C19DC, 1u, -2147024882, 0x336u);
  return 2147942414LL;
}
