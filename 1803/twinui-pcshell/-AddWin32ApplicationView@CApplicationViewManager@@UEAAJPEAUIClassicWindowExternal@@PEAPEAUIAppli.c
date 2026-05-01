/*
 * XREFs of ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x18002E290
 * Callers:
 *     _lambda_2dd20bac4e5d2f5df658143d4108a795_::operator() @ 0x180005090 (_lambda_2dd20bac4e5d2f5df658143d4108a795_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B7C8 (-InternalRelease@-$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x1800250F4 (-RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ.c)
 *     ?QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002A0C0 (-QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0CWin32ApplicationView@@QEAA@PEAUIClassicWindowExternal@@@Z @ 0x18002A358 (--0CWin32ApplicationView@@QEAA@PEAUIClassicWindowExternal@@@Z.c)
 *     ?QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ @ 0x18002A6D0 (-QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ.c)
 *     ?InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z @ 0x18002B1C8 (-InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z.c)
 *     ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18002DE18 (-_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppSizeConstraintsCache@@@WRL@Microsoft@@IEAAKXZ @ 0x180072F04 (-InternalRelease@-$ComPtr@UIAppSizeConstraintsCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AppSizeConstraintsCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800739B4 (-AppSizeConstraintsCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::AddWin32ApplicationView(
        RTL_SRWLOCK *this,
        struct IClassicWindowExternal *a2,
        struct IApplicationView **a3)
{
  CWin32ApplicationView *v6; // rdi
  CWin32ApplicationView *v7; // rax
  void **v8; // rbp
  int Instance; // eax
  int v10; // esi
  const struct _GUID *v11; // rcx
  int v12; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CWin32ApplicationView *v18; // [rsp+68h] [rbp+20h] BYREF

  v16 = -2;
  v6 = 0LL;
  v18 = 0LL;
  v7 = (CWin32ApplicationView *)operator new(0x108uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = 0LL;
  if ( v7 )
  {
    v6 = CWin32ApplicationView::CWin32ApplicationView(v7, a2);
    v18 = v6;
    v8 = (void **)v6;
  }
  if ( !v8 )
  {
    v10 = -2147024882;
    v14 = 476LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v10,
      v16);
    goto LABEL_13;
  }
  Instance = CApplicationViewBase::RuntimeClassInitialize((CApplicationViewBase *)v8);
  v10 = Instance;
  if ( Instance < 0 )
  {
    v15 = 32LL;
  }
  else
  {
    Microsoft::WRL::ComPtr<IAppSizeConstraintsCache>::InternalRelease(v8 + 27);
    Instance = AppSizeConstraintsCache_CreateInstance(v11, v8 + 27);
    v10 = Instance;
    if ( Instance < 0 )
    {
      v15 = 33LL;
    }
    else
    {
      Instance = CWin32ApplicationView::InitializeCloakType((__int64)v8, 0);
      v10 = Instance;
      if ( Instance >= 0 )
      {
        CWin32ApplicationView::QuerySizeConstraintsFromApp((CWin32ApplicationView *)v8);
        v10 = 0;
        goto LABEL_8;
      }
      v15 = 34LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
    (const char *)(unsigned int)Instance,
    -2);
LABEL_8:
  if ( v10 < 0 )
  {
    v14 = 477LL;
    goto LABEL_20;
  }
  AcquireSRWLockExclusive(this + 48);
  v12 = CApplicationViewManager::_AddApplicationView((CApplicationViewManager *)&this[-17], v6, 0LL);
  v10 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E1,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v12,
      v16);
    if ( this != (RTL_SRWLOCK *)-384LL )
      ReleaseSRWLockExclusive(this + 48);
  }
  else
  {
    if ( this != (RTL_SRWLOCK *)-384LL )
      ReleaseSRWLockExclusive(this + 48);
    CWin32ApplicationView::QueryInterface(v6, &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f, (void **)a3);
    v10 = 0;
  }
LABEL_13:
  Microsoft::WRL::ComPtr<CWin32ApplicationView>::InternalRelease(&v18);
  return (unsigned int)v10;
}
