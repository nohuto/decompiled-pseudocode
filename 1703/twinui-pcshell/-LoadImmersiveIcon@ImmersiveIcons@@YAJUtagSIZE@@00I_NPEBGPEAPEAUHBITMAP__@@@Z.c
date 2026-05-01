/*
 * XREFs of ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x18017EA78
 * Callers:
 *     ?SetDefaultIconForProxyWindowThumbnail@CortanaDesktopExperienceView@@CAJPEAUHWND__@@@Z @ 0x1800C87C0 (-SetDefaultIconForProxyWindowThumbnail@CortanaDesktopExperienceView@@CAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z @ 0x18017D61C (-StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z.c)
 *     ??1?$ActivityBase@VImmersiveIconsLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18017D7C0 (--1-$ActivityBase@VImmersiveIconsLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?GetTile@ImmersiveIcons@@YAJPEBGPEAPEAUITileInfo@@@Z @ 0x18017D97C (-GetTile@ImmersiveIcons@@YAJPEBGPEAPEAUITileInfo@@@Z.c)
 *     ?GetMrtContrast@ImmersiveIcons@@YA?AW4RESOURCE_CONTRAST@@XZ @ 0x18017DAA4 (-GetMrtContrast@ImmersiveIcons@@YA-AW4RESOURCE_CONTRAST@@XZ.c)
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGPEAUITileInfo@@UIconLoadingInputs@1@PEAUIconData@1@@Z @ 0x18017DB2C (-GetIconData@ImmersiveIcons@@YAJPEBGPEAUITileInfo@@UIconLoadingInputs@1@PEAUIconData@1@@Z.c)
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00_NPEAUITileInfo@@AEBUIconData@1@1PEAPEAUHBITMAP__@@@Z @ 0x18017E5F0 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00_NPEAUITileInfo@@AEBUIconData@1@1PEAPEAUHBITMAP.c)
 *     ?Destroy@?$ActivityBase@VImmersiveIconsLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18017EC30 (-Destroy@-$ActivityBase@VImmersiveIconsLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??0?$ActivityBase@VImmersiveIconsLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18017F004 (--0-$ActivityBase@VImmersiveIconsLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ImmersiveIcons::LoadImmersiveIcon(
        ImmersiveIcons *this,
        struct tagSIZE a2,
        struct tagSIZE a3,
        struct tagSIZE a4,
        unsigned int a5,
        bool a6,
        GDIHelpers *ho)
{
  LONG cx; // r12d
  struct ITileInfo **v11; // r8
  int Tile; // eax
  unsigned int v13; // r14d
  __int64 v14; // rdx
  struct tagSIZE v15; // r9
  int IconBitmap; // eax
  __int64 (__fastcall ***v17)(__int64, GUID *, __int64 *); // rcx
  const struct ImmersiveIcons::IconData *v19; // [rsp+30h] [rbp-D0h]
  bool v20[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v21; // [rsp+48h] [rbp-B8h]
  __int64 v22; // [rsp+58h] [rbp-A8h]
  __int128 v23; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+70h] [rbp-90h]
  _QWORD v25[40]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v26[528]; // [rsp+1C0h] [rbp+C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+418h] [rbp+318h]

  cx = a4.cx;
  *(_QWORD *)ho = 0LL;
  wil::ActivityBase<ImmersiveIconsLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ImmersiveIconsLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(v25);
  v25[0] = &ImmersiveIconsLoggingTelemetry::LoadIconW::`vftable';
  ImmersiveIconsLoggingTelemetry::LoadIconW::StartActivity(
    (ImmersiveIconsLoggingTelemetry::LoadIconW *)v25,
    (WCHAR *)L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI");
  *(_QWORD *)v20 = 0LL;
  Tile = ImmersiveIcons::GetTile(
           (ImmersiveIcons *)L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI",
           (const unsigned __int16 *)v20,
           v11);
  v13 = Tile;
  if ( Tile < 0 )
  {
    v14 = 309LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v14,
      (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
      (const char *)(unsigned int)Tile);
    goto LABEL_8;
  }
  *(struct tagSIZE *)&v21 = a2;
  *((struct tagSIZE *)&v21 + 1) = a3;
  LODWORD(v22) = cx;
  HIDWORD(v22) = ImmersiveIcons::GetMrtContrast();
  memset(v26, 0, 0x20AuLL);
  v23 = v21;
  v24 = v22;
  Tile = ImmersiveIcons::GetIconData(
           (CallerIdentity *)L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI",
           *(__int64 (__fastcall ****)(__int64, GUID *, __int64 *))v20,
           (unsigned __int16 *)&v23,
           (__int64)v26);
  v13 = Tile;
  if ( Tile < 0 )
  {
    v14 = 318LL;
    goto LABEL_5;
  }
  IconBitmap = ImmersiveIcons::CreateIconBitmap(this, a2, a3, v15, *(__int64 *)v20, (struct ITileInfo *)v26, v19, ho);
  v13 = IconBitmap;
  if ( IconBitmap < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x140,
      (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
      (const char *)(unsigned int)IconBitmap);
LABEL_8:
  v17 = *(__int64 (__fastcall ****)(__int64, GUID *, __int64 *))v20;
  if ( *(_QWORD *)v20 )
  {
    *(_QWORD *)v20 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v17)[2])(v17);
  }
  v25[0] = &ImmersiveIconsLoggingTelemetry::LoadIconW::`vftable';
  wil::ActivityBase<ImmersiveIconsLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy((ImmersiveIconsLoggingTelemetry::LoadIconW *)v25);
  wil::ActivityBase<ImmersiveIconsLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ImmersiveIconsLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v25);
  return v13;
}
