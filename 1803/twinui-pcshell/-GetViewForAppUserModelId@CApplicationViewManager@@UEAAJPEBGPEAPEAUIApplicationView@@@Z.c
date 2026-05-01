/*
 * XREFs of ?GetViewForAppUserModelId@CApplicationViewManager@@UEAAJPEBGPEAPEAUIApplicationView@@@Z @ 0x18013B760
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::GetViewForAppUserModelId(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2,
        struct IApplicationView **a3)
{
  struct IApplicationView *v5; // rsi
  unsigned int v6; // r12d
  void *v7; // r14
  const WCHAR *v8; // rbx
  __int64 v9; // rdi
  __int64 *v10; // rdi
  LPCWCH lpString2; // [rsp+38h] [rbp-18h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h]
  __int64 v14; // [rsp+48h] [rbp-8h]
  CWinRTApplicationView *v15; // [rsp+90h] [rbp+40h] BYREF
  LPCWCH lpString1; // [rsp+98h] [rbp+48h]
  PSRWLOCK SRWLock; // [rsp+A0h] [rbp+50h]

  lpString1 = a2;
  SRWLock = this + 48;
  AcquireSRWLockShared(this + 48);
  *a3 = 0LL;
  v5 = 0LL;
  v15 = 0LL;
  v6 = -2147319765;
  v7 = 0LL;
  v8 = lpString1;
  while ( !v5 && v7 < this[50].Ptr )
  {
    lpString2 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    v9 = *((_QWORD *)this[49].Ptr + (_QWORD)v7);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
    v13 = -1LL;
    v14 = -1LL;
    if ( (*(int (__fastcall **)(__int64, LPCWCH *))(*(_QWORD *)v9 + 136LL))(v9, &lpString2) >= 0
      && CompareStringOrdinal(v8, -1, lpString2, -1, 1) == 2 )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v15);
      v10 = (__int64 *)((char *)this[49].Ptr + 8 * (_QWORD)v7);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef(v10);
      v5 = (struct IApplicationView *)*v10;
      v15 = (CWinRTApplicationView *)*v10;
      v6 = 0;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
    v7 = (char *)v7 + 1;
  }
  v15 = 0LL;
  *a3 = v5;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v15);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v6;
}
