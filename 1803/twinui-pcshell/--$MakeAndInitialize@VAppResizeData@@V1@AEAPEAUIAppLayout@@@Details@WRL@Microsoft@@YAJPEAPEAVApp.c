/*
 * XREFs of ??$MakeAndInitialize@VAppResizeData@@V1@AEAPEAUIAppLayout@@@Details@WRL@Microsoft@@YAJPEAPEAVAppResizeData@@AEAPEAUIAppLayout@@@Z @ 0x1802E65D4
 * Callers:
 *     ?AppResizeData_CreateInstance@@YAJPEAUIAppLayout@@AEBU_GUID@@PEAPEAX@Z @ 0x1802E6838 (-AppResizeData_CreateInstance@@YAJPEAUIAppLayout@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ @ 0x1802E34D8 (-InternalRelease@-$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0AppResizeData@@QEAA@XZ @ 0x1802E6680 (--0AppResizeData@@QEAA@XZ.c)
 *     ?ComputeDropTargets@AppResizeData@@AEAAJXZ @ 0x1802E6988 (-ComputeDropTargets@AppResizeData@@AEAAJXZ.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802E787C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802E787C.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppResizeData,AppResizeData,IAppLayout * &>(
        AppResizeData **a1,
        __int64 *a2)
{
  AppResizeData *v4; // rax
  unsigned int v5; // ebx
  AppResizeData *v6; // rax
  __int64 v7; // rdx
  AppResizeData *v8; // rdi
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  AppResizeData *v12; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (AppResizeData *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = AppResizeData::AppResizeData(v4);
    v7 = *a2;
    v8 = v6;
    v12 = v6;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v6 + 5, v7);
    v9 = AppResizeData::ComputeDropTargets(v8);
    v5 = v9;
    if ( v9 >= 0 )
    {
      if ( v8 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(v8);
      *a1 = v8;
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizedata.cpp",
        (const char *)(unsigned int)v9);
    }
    Microsoft::WRL::ComPtr<AppResizeData>::InternalRelease((__int64 *)&v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
