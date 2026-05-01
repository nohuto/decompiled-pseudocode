/*
 * XREFs of ?GetViewsByZOrder@CApplicationViewManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x18013BA60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18010618C (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RefreshCollection@CApplicationViewManager@@UEAAJXZ @ 0x18013C1F0 (-RefreshCollection@CApplicationViewManager@@UEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::GetViewsByZOrder(RTL_SRWLOCK *this, struct IObjectArray **a2)
{
  const struct _GUID *v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // edi
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  LPARAM lParam[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v14; // [rsp+78h] [rbp+38h] BYREF
  void *v15; // [rsp+80h] [rbp+40h] BYREF
  RTL_SRWLOCK *v16; // [rsp+88h] [rbp+48h]

  *a2 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  v6 = CEnumerableObjectCollection::CreateInstance(v5, v4, &v15);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA0,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_10;
  }
  v16 = this + 48;
  AcquireSRWLockShared(this + 48);
  v14 = 0;
  lParam[0] = (LPARAM)&v14;
  lParam[1] = (LPARAM)&this[-17];
  lParam[2] = (LPARAM)&v15;
  EnumWindows(
    (WNDENUMPROC)EnumWindowsHelpers::LambdaEnumWindowsProc<_lambda_4281b3b7333dc662731df65e111aa1a6_>,
    (LPARAM)lParam);
  v7 = v14;
  if ( v14 >= 0 )
  {
    CApplicationViewManager::RefreshCollection((CApplicationViewManager *)this);
    v10 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v15)(
            v15,
            &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
            a2);
    v7 = v10;
    if ( v10 >= 0 )
      goto LABEL_8;
    v8 = (unsigned int)v10;
    v9 = 198LL;
  }
  else
  {
    v8 = (unsigned int)v14;
    v9 = 192LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
    (const char *)v8);
LABEL_8:
  if ( this != (RTL_SRWLOCK *)-384LL )
    ReleaseSRWLockShared(this + 48);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  return v7;
}
