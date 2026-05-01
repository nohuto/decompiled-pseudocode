/*
 * XREFs of ?LoadDWriteTextFormat@DWriteUtil@@YAJPEAUIDWriteFactory@@PEBGW4DWRITE_FONT_WEIGHT@@MW4DWRITE_TEXT_ALIGNMENT@@W4DWRITE_PARAGRAPH_ALIGNMENT@@W4DWRITE_READING_DIRECTION@@PEAPEAUIDWriteTextFormat@@@Z @ 0x18027DE20
 * Callers:
 *     ?LoadDWriteTextFormat@MultitaskingViewUtils@@YAJPEAUIDWriteFactory@@IIIIW4DWRITE_TEXT_ALIGNMENT@@W4DWRITE_PARAGRAPH_ALIGNMENT@@W4DWRITE_READING_DIRECTION@@PEAPEAUIDWriteTextFormat@@@Z @ 0x18027DF88 (-LoadDWriteTextFormat@MultitaskingViewUtils@@YAJPEAUIDWriteFactory@@IIIIW4DWRITE_TEXT_ALIGNMENT@.c)
 *     ?SetConfig@CSwitchItemElementFactory@@UEAAJAEBUMultitaskingViewConfig@@@Z @ 0x18027E2D0 (-SetConfig@CSwitchItemElementFactory@@UEAAJAEBUMultitaskingViewConfig@@@Z.c)
 *     ?RuntimeClassInitialize@CScrollViewerHost@@QEAAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@IPEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@@Z @ 0x180290E28 (-RuntimeClassInitialize@CScrollViewerHost@@QEAAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMet.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWriteUtil::LoadDWriteTextFormat(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        float a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        _QWORD *a8)
{
  _QWORD *v8; // r14
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v8 = a8;
  a8 = 0LL;
  *v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a8);
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, int, _DWORD, const WCHAR *, _QWORD **))(*(_QWORD *)a1 + 120LL))(
          a1,
          a2,
          0LL,
          a3,
          0,
          5,
          LODWORD(a4),
          &word_18035ABCC,
          &a8);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a8 + 24LL))(a8, a5);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a8 + 32LL))(a8, a6);
      v13 = v12;
      if ( v12 >= 0 )
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a8 + 48LL))(a8, a7);
        v13 = v12;
        if ( v12 >= 0 )
        {
          Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&a8);
          v13 = 0;
          *v8 = a8;
          goto LABEL_11;
        }
        v14 = 35LL;
      }
      else
      {
        v14 = 34LL;
      }
    }
    else
    {
      v14 = 33LL;
    }
  }
  else
  {
    v14 = 32LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"internal\\shell\\private\\inc\\dwriteutil.h",
    (const char *)(unsigned int)v12);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a8);
  return v13;
}
