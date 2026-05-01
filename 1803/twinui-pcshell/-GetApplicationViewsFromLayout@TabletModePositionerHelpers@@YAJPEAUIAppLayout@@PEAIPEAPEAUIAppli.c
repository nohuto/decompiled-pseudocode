/*
 * XREFs of ?GetApplicationViewsFromLayout@TabletModePositionerHelpers@@YAJPEAUIAppLayout@@PEAIPEAPEAUIApplicationView@@2@Z @ 0x180283C34
 * Callers:
 *     ?GetAppViewCloseOverrideOperation@ScreenManager@@UEAAJPEAUIAppLayout@@PEAUIApplicationView@@_NPEAPEAUIAppLayoutOperation@@@Z @ 0x1802D2FC0 (-GetAppViewCloseOverrideOperation@ScreenManager@@UEAAJPEAUIAppLayout@@PEAUIApplicationView@@_NPE.c)
 *     ?IsRelatedWin32ViewPresentInLayout@ScreenManagerHelpers@@YAJPEAUIAppLayout@@PEAUIApplicationView@@PEAPEAU3@@Z @ 0x1802D35C8 (-IsRelatedWin32ViewPresentInLayout@ScreenManagerHelpers@@YAJPEAUIAppLayout@@PEAUIApplicationView.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModePositionerHelpers::GetApplicationViewsFromLayout(
        TabletModePositionerHelpers *this,
        struct IAppLayout *a2,
        unsigned int *a3,
        struct IApplicationView **a4)
{
  __int64 v5; // rax
  int v9; // esi
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rbx
  CWinRTApplicationView *v16; // rax
  struct IApplicationView *v17; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  __int64 v19; // [rsp+70h] [rbp+40h] BYREF
  CWinRTApplicationView *v20; // [rsp+78h] [rbp+48h] BYREF
  CWinRTApplicationView *v21; // [rsp+80h] [rbp+50h] BYREF

  *(_QWORD *)a3 = 0LL;
  *a4 = 0LL;
  v5 = *(_QWORD *)this;
  *(_DWORD *)a2 = 0;
  v9 = (*(__int64 (__fastcall **)(TabletModePositionerHelpers *, __int64))(v5 + 80))(this, 1LL);
  if ( v9 )
  {
    v21 = 0LL;
    v20 = 0LL;
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v10 = (*(__int64 (__fastcall **)(TabletModePositionerHelpers *, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)this + 104LL))(
            this,
            0LL,
            1LL,
            &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
            &v19);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 38LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"internal\\shell\\private\\inc\\TabletModePositionerHelpers.h",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v20);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v21);
      return v11;
    }
    v13 = v19;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v21);
    v10 = (*(__int64 (__fastcall **)(__int64, GUID *, CWinRTApplicationView **))(*(_QWORD *)v13 + 48LL))(
            v13,
            &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
            &v21);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 39LL;
      goto LABEL_11;
    }
    if ( v9 == 2 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      v10 = (*(__int64 (__fastcall **)(TabletModePositionerHelpers *, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)this + 104LL))(
              this,
              1LL,
              1LL,
              &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
              &v19);
      v11 = v10;
      if ( v10 < 0 )
      {
        v12 = 43LL;
        goto LABEL_11;
      }
      v14 = v19;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v20);
      v10 = (*(__int64 (__fastcall **)(__int64, GUID *, CWinRTApplicationView **))(*(_QWORD *)v14 + 48LL))(
              v14,
              &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
              &v20);
      v11 = v10;
      if ( v10 < 0 )
      {
        v12 = 44LL;
        goto LABEL_11;
      }
    }
    v16 = v21;
    v21 = 0LL;
    *(_QWORD *)a3 = v16;
    v17 = v20;
    v20 = 0LL;
    *a4 = v17;
    *(_DWORD *)a2 = v9;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v20);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v21);
  }
  return 0LL;
}
