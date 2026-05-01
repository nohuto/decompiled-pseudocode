/*
 * XREFs of ??$MakeAndInitialize@VStartExperienceWallpaperBackground@@V1@AEAPEAUHWND__@@PEAUIDCompositionDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVStartExperienceWallpaperBackground@@AEAPEAUHWND__@@$$QEAPEAUIDCompositionDevice@@@Z @ 0x180172CA4
 * Callers:
 *     ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x180174424 (-SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x180095D2C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDevice@@@Z @ 0x180184508 (-RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDe.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<StartExperienceWallpaperBackground,StartExperienceWallpaperBackground,HWND__ * &,IDCompositionDevice *>(
        __int64 *a1,
        HWND *a2,
        struct IDCompositionDevice **a3)
{
  void *v6; // rax
  __int64 v7; // rbx
  int v8; // edi
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h]

  *a1 = 0LL;
  v6 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = (__int64)v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>((__int64)v6);
    *(_QWORD *)v7 = &StartExperienceWallpaperBackground::`vftable';
    *(_BYTE *)(v7 + 16) = 0;
    *(_QWORD *)(v7 + 24) = 0LL;
    *(_QWORD *)(v7 + 32) = 0LL;
    *(_QWORD *)(v7 + 40) = 0LL;
    *(_QWORD *)(v7 + 48) = 0LL;
    v10 = v7;
    v11 = 0LL;
    v8 = StartExperienceWallpaperBackground::RuntimeClassInitialize((StartExperienceWallpaperBackground *)v7, *a2, *a3);
    if ( v8 >= 0 )
    {
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      *a1 = v7;
      v8 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
