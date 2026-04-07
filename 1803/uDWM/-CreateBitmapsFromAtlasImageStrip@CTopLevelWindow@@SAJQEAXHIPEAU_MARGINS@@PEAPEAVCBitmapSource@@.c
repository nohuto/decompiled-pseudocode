/*
 * XREFs of ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18003C020
 * Callers:
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x18003BF48 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z @ 0x1800402BC (-EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z.c)
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180040658 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 *     ?EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ @ 0x18008841C (-EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180021080 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z @ 0x18003C280 (-GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180049178 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800491E4 (_Init_thread_header.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
        void *const a1,
        int iPartId,
        unsigned int a3,
        struct _MARGINS *a4,
        struct tagRECT **a5)
{
  HRESULT ThemeRect; // esi
  LONG top; // ecx
  unsigned int v12; // eax
  unsigned int v13; // ebx
  int v14; // ebp
  int v15; // r14d
  struct CBitmapSource *AtlasImageFromTheme; // rsi
  void *(__fastcall *v17)(WPF::ProcessHeapImpl *, size_t); // rax
  struct tagRECT *v18; // rax
  __int64 v19; // rcx
  int v20; // ecx
  int v21; // ecx
  struct tagRECT rc; // [rsp+40h] [rbp-78h] BYREF
  struct tagRECT pRect; // [rsp+50h] [rbp-68h] BYREF

  if ( dword_1800CA278 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800CA278);
    if ( dword_1800CA278 == -1 )
    {
      dword_1800CA234 = -2147023728;
      Init_thread_footer(&dword_1800CA278);
    }
  }
  ThemeRect = GetThemeRect(a1, iPartId, 0, 8002, &pRect);
  if ( ThemeRect < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CA234, 1u, ThemeRect, 0x35Au);
    return (unsigned int)ThemeRect;
  }
  if ( a4 )
  {
    ThemeRect = GetThemeMargins(a1, 0LL, iPartId, 0, 3601, 0LL, a4);
    if ( ThemeRect < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CA234, 1u, ThemeRect, 0x35Eu);
      return (unsigned int)ThemeRect;
    }
  }
  top = pRect.top;
  v12 = pRect.bottom - pRect.top;
  if ( pRect.bottom - pRect.top < 0 )
    v12 = 0;
  v13 = 0;
  v14 = v12 / a3;
  v15 = 0;
  while ( 1 )
  {
    rc.left = pRect.left;
    rc.right = pRect.right;
    rc.top = v15 + top;
    rc.bottom = v14 + v15 + top;
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
    ++v13;
    ++a5;
    v15 += v14;
    if ( v13 >= a3 )
      return 0LL;
    top = pRect.top;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xB1u);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CA234, 1u, -2147024882, 0x375u);
  return 2147942414LL;
}
