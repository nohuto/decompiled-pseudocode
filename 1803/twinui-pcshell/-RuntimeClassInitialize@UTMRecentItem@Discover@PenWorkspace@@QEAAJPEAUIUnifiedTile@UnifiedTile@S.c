/*
 * XREFs of ?RuntimeClassInitialize@UTMRecentItem@Discover@PenWorkspace@@QEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180199A60
 * Callers:
 *     ??$MakeAndInitialize@VUTMRecentItem@Discover@PenWorkspace@@UIDiscoverRecentItem@@PEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Details@WRL@Microsoft@@YAJPEAPEAUIDiscoverRecentItem@@$$QEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180194444 (--$MakeAndInitialize@VUTMRecentItem@Discover@PenWorkspace@@UIDiscoverRecentItem@@PEAUIUnifiedTil.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VUTMIconLoader@Discover@PenWorkspace@@V123@AEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVUTMIconLoader@Discover@PenWorkspace@@AEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1801994D0 (--$MakeAndInitialize@VUTMIconLoader@Discover@PenWorkspace@@V123@AEAPEAUIUnifiedTile@UnifiedTile@.c)
 *     ??4?$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewVisibilityDebouncedNotificationService@@@Z @ 0x18027E86C (--4-$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012.c)
 */

__int64 __fastcall PenWorkspace::Discover::UTMRecentItem::RuntimeClassInitialize(
        PenWorkspace::Discover::UTMRecentItem *this,
        struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  Microsoft::WRL::FtmBase *v5; // rcx
  Microsoft::WRL::FtmBase *v6; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v9; // [rsp+38h] [rbp+10h] BYREF
  Microsoft::WRL::FtmBase *v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = a2;
  if ( a2 )
  {
    Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=((char *)this + 56);
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    v4 = Microsoft::WRL::Details::MakeAndInitialize<PenWorkspace::Discover::UTMIconLoader,PenWorkspace::Discover::UTMIconLoader,WindowsInternal::Shell::UnifiedTile::IUnifiedTile * &>(
           &v10,
           &v9);
    v3 = v4;
    if ( v4 >= 0 )
    {
      v5 = (Microsoft::WRL::FtmBase *)*((_QWORD *)this + 6);
      v6 = v10;
      if ( v5 != v10 )
      {
        if ( v10 )
        {
          (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)v10 + 8LL))(v10);
          v5 = (Microsoft::WRL::FtmBase *)*((_QWORD *)this + 6);
        }
        *((_QWORD *)this + 6) = v6;
        if ( v5 )
          (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)v5 + 16LL))(v5);
      }
      v3 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentitem.cpp",
        (const char *)(unsigned int)v4);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  }
  else
  {
    v3 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentitem.cpp",
      (const char *)0x80004003LL);
  }
  return v3;
}
