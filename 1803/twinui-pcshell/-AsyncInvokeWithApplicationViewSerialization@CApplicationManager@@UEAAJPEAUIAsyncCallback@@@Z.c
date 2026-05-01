/*
 * XREFs of ?AsyncInvokeWithApplicationViewSerialization@CApplicationManager@@UEAAJPEAUIAsyncCallback@@@Z @ 0x180105890
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CDelayIAMOperations::AddOperation__lambda_a3dacda60d197dca336493a83fab45ae___ @ 0x180101C28 (CDelayIAMOperations--AddOperation__lambda_a3dacda60d197dca336493a83fab45ae___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::AsyncInvokeWithApplicationViewSerialization(
        int **this,
        struct IAsyncCallback *a2)
{
  struct IAsyncCallback *v2; // rbx
  unsigned int v4; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IAsyncCallback *v7; // [rsp+40h] [rbp+8h] BYREF
  void *v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2;
  v8 = a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v8);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v7 = v2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v7);
  LODWORD(v2) = CDelayIAMOperations::AddOperation__lambda_a3dacda60d197dca336493a83fab45ae___(this[60], (HWND)&v7);
  Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease((void **)&v7);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = 0;
  if ( !(_DWORD)v2 )
  {
    v4 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11D1,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)0x8007000ELL);
  }
  Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(&v8);
  return v4;
}
