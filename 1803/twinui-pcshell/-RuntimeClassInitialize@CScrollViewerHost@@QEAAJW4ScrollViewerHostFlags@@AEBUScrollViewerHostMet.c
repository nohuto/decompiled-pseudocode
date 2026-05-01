/*
 * XREFs of ?RuntimeClassInitialize@CScrollViewerHost@@QEAAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@IPEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@@Z @ 0x180290E28
 * Callers:
 *     ??$MakeAndInitialize@VCScrollViewerHost@@V1@AEAW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@AEAIAEAPEAUIMultitaskingViewElement@@AEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVCScrollViewerHost@@AEAW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@AEAIAEAPEAUIMultitaskingViewElement@@AEAPEAUISwitchThumbnailFactory@@@Z @ 0x180290A0C (--$MakeAndInitialize@VCScrollViewerHost@@V1@AEAW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetr.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18007DE0C (-IsBiDiLocale@@YAHK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GetThreadUILanguage_0 @ 0x180099777 (GetThreadUILanguage_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?LoadDWriteTextFormat@DWriteUtil@@YAJPEAUIDWriteFactory@@PEBGW4DWRITE_FONT_WEIGHT@@MW4DWRITE_TEXT_ALIGNMENT@@W4DWRITE_PARAGRAPH_ALIGNMENT@@W4DWRITE_READING_DIRECTION@@PEAPEAUIDWriteTextFormat@@@Z @ 0x18027DE20 (-LoadDWriteTextFormat@DWriteUtil@@YAJPEAUIDWriteFactory@@PEBGW4DWRITE_FONT_WEIGHT@@MW4DWRITE_TEX.c)
 *     ??$As@UIScrollViewer@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@@Details@12@@Z @ 0x18028DECC (--$As@UIScrollViewer@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ??B?$HighContrastAwareOpacity@N@@QEBANXZ @ 0x180290B94 (--B-$HighContrastAwareOpacity@N@@QEBANXZ.c)
 *     ?Initialize@?$CWeakRefSource@VSwitchItemThumbnailElement@@@WeakReference@@QEAAJPEAVSwitchItemThumbnailElement@@@Z @ 0x18029D530 (-Initialize@-$CWeakRefSource@VSwitchItemThumbnailElement@@@WeakReference@@QEAAJPEAVSwitchItemThu.c)
 *     ?CScrollButtonContainer_CreateInstance@@YAJAEBUScrollViewerHostMetrics@@W4ScrollButtonContainerFlags@@PEAUIWeakReference@WeakReference@@PEAUIDWriteTextFormat@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x1802A166C (-CScrollButtonContainer_CreateInstance@@YAJAEBUScrollViewerHostMetrics@@W4ScrollButtonContainerF.c)
 *     ?CScrollViewer_CreateInstance@@YAJAEBU_MARGINS@@NIW4ScrollViewerFlags@@PEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x1802A233C (-CScrollViewer_CreateInstance@@YAJAEBU_MARGINS@@NIW4ScrollViewerFlags@@PEAUIMultitaskingViewElem.c)
 */

__int64 __fastcall CScrollViewerHost::RuntimeClassInitialize(
        _QWORD *a1,
        int a2,
        __int64 a3,
        __int128 *a4,
        _OWORD *a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  double *v8; // r13
  char v9; // si
  _QWORD *v10; // rbx
  __int128 v12; // xmm0
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  __int64 v15; // r12
  int v16; // eax
  unsigned int v17; // ebx
  int DWriteTextFormat; // eax
  __int64 v19; // rdx
  LANGID ThreadUILanguage_0; // ax
  unsigned int v21; // ebx
  __int64 v22; // rbx
  int v23; // esi
  int Instance; // eax
  __int64 v25; // rdx
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v31; // [rsp+70h] [rbp+30h] BYREF

  v8 = (double *)(a1 + 28);
  v9 = a2;
  v10 = a1 + 11;
  *((_OWORD *)a1 + 14) = *(_OWORD *)a3;
  *((_OWORD *)a1 + 15) = *(_OWORD *)(a3 + 16);
  *((_OWORD *)a1 + 16) = *(_OWORD *)(a3 + 32);
  *((_OWORD *)a1 + 17) = *(_OWORD *)(a3 + 48);
  *((_OWORD *)a1 + 18) = *(_OWORD *)(a3 + 64);
  *((_OWORD *)a1 + 19) = *(_OWORD *)(a3 + 80);
  *((_OWORD *)a1 + 20) = *(_OWORD *)(a3 + 96);
  *((_OWORD *)a1 + 21) = *(_OWORD *)(a3 + 112);
  *((_OWORD *)a1 + 22) = *(_OWORD *)(a3 + 128);
  *((_OWORD *)a1 + 23) = *(_OWORD *)(a3 + 144);
  a1[48] = *(_QWORD *)(a3 + 160);
  v12 = *a4;
  v13 = a5;
  LODWORD(a5) = 1;
  *(_OWORD *)((char *)a1 + 396) = v12;
  HIDWORD(a5) = 1;
  *((_OWORD *)a1 + 26) = *v13;
  v14 = v13[1];
  *((_DWORD *)a1 + 98) = a2;
  *((_OWORD *)a1 + 27) = v14;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 11);
  v15 = a8;
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _OWORD *, GUID *, _QWORD *))(*(_QWORD *)a8 + 104LL))(
          a8,
          0LL,
          a5,
          &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
          v10);
  v17 = v16;
  if ( v16 >= 0 )
  {
    if ( (v9 & 1) != 0 )
    {
      a5 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
      DWriteTextFormat = DWriteCreateFactory(0LL, &GUID_0439fc60_ca44_4994_8dee_3a9af7b732ec, &a5);
      v17 = DWriteTextFormat;
      if ( DWriteTextFormat < 0 )
      {
        v19 = 76LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\scrollviewerhostelement.cpp",
          (const char *)(unsigned int)DWriteTextFormat);
LABEL_16:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
        return v17;
      }
      ThreadUILanguage_0 = GetThreadUILanguage_0();
      v21 = IsBiDiLocale(ThreadUILanguage_0) != 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 58);
      DWriteTextFormat = DWriteUtil::LoadDWriteTextFormat(
                           (__int64)a5,
                           (__int64)L"Segoe MDL2 Assets",
                           0x190u,
                           COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)*((int *)a1 + 69) * (float)a6) / -72.0) ^ _xmm),
                           2u,
                           2u,
                           v21,
                           a1 + 58);
      v17 = DWriteTextFormat;
      if ( DWriteTextFormat < 0 )
      {
        v19 = 86LL;
        goto LABEL_10;
      }
      DWriteTextFormat = WeakReference::CWeakRefSource<SwitchItemThumbnailElement>::Initialize(a1 + 59, a1);
      v17 = DWriteTextFormat;
      if ( DWriteTextFormat < 0 )
      {
        v19 = 88LL;
        goto LABEL_10;
      }
      a8 = a1[59];
      v22 = a8;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&a8);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 57);
      v23 = v9 & 2;
      Instance = CScrollButtonContainer_CreateInstance(v8, v23 != 0, v22, a1[58], v15);
      v17 = Instance;
      if ( Instance < 0 )
      {
        v25 = 98LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v25,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\scrollviewerhostelement.cpp",
          (const char *)(unsigned int)Instance);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&a8);
        goto LABEL_16;
      }
      Instance = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 64LL))(a1, a1[57]);
      v17 = Instance;
      if ( Instance < 0 )
      {
        v25 = 100LL;
        goto LABEL_15;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&a8);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
    }
    else
    {
      v23 = v9 & 2;
    }
    v31 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
    HighContrastAwareOpacity<double>::operator double(v8);
    v27 = CScrollViewer_CreateInstance((char *)a1 + 396, v26, *((unsigned int *)a1 + 60), v23 != 0, a7, v15);
    v17 = v27;
    if ( v27 >= 0 )
    {
      v27 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, v31);
      v17 = v27;
      if ( v27 >= 0 )
      {
        v27 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IScrollViewer>(&v31, a1 + 56);
        v17 = v27;
        if ( v27 >= 0 )
        {
          (*(void (__fastcall **)(_QWORD *))(a1[26] + 40LL))(a1 + 26);
          v17 = 0;
          goto LABEL_27;
        }
        v28 = 108LL;
      }
      else
      {
        v28 = 107LL;
      }
    }
    else
    {
      v28 = 106LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\scrollviewerhostelement.cpp",
      (const char *)(unsigned int)v27);
LABEL_27:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
    return v17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x46,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\scrollviewerhostelement.cpp",
    (const char *)(unsigned int)v16);
  return v17;
}
