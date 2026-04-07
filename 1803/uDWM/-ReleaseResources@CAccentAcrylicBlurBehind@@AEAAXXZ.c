/*
 * XREFs of ?ReleaseResources@CAccentAcrylicBlurBehind@@AEAAXXZ @ 0x18003B540
 * Callers:
 *     ??1CAccentAcrylicBlurBehind@@EEAA@XZ @ 0x18003BA08 (--1CAccentAcrylicBlurBehind@@EEAA@XZ.c)
 *     ?ValidateDevice@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180047C10 (-ValidateDevice@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180038664 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180038F2C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIDCompositionVisualPartnerWinRTInterop@@@?$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionVisualPartnerWinRTInterop@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003BA78 (--$As@UIDCompositionVisualPartnerWinRTInterop@@@-$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@.c)
 *     ??$?9UIDCompositionVisual2@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UIDCompositionVisual2@@@01@$$T@Z @ 0x18004B198 (--$-9UIDCompositionVisual2@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UIDCompositionVisual2@@@01@$$T@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAccentAcrylicBlurBehind::ReleaseResources(CAccentAcrylicBlurBehind *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 40);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 39);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 41);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 36);
  *((_DWORD *)this + 92) = 0;
  v6 = 0LL;
  if ( (unsigned __int8)Microsoft::WRL::operator!=<IDCompositionVisual2>((char *)this + 304)
    && (int)Microsoft::WRL::ComPtr<IDCompositionVisual2>::As<IDCompositionVisualPartnerWinRTInterop>(v2, &v6) >= 0 )
  {
    v5 = 0LL;
    v3 = v6;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v5);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 384LL))(v3, &v5);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v5);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 38);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 37);
  CloseHandle(*((HANDLE *)this + 43));
  v4 = *((_QWORD *)this + 35);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v4)(v4, 1LL);
    *((_QWORD *)this + 35) = 0LL;
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v6);
}
