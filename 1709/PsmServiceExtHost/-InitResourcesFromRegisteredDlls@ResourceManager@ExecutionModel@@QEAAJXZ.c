/*
 * XREFs of ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180022114
 * Callers:
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180022744 (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x180010490 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 *     ?Attach@?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVBaseResourceSet@ExecutionModel@@@Z @ 0x1800231E4 (-Attach@-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVBaseResourceSet@ExecutionM.c)
 *     ??2@YAPEAX_K@Z @ 0x180025A8C (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::InitResourcesFromRegisteredDlls(
        ExecutionModel::ResourceManager *this)
{
  unsigned int v2; // edi
  DWORD v3; // esi
  ExecutionModel::BaseResourceSet *v4; // rax
  __int64 v5; // rbx
  LSTATUS i; // eax
  HMODULE LibraryW; // rax
  HMODULE v9; // rbx
  FARPROC ProcAddress; // rax
  DWORD cbData; // [rsp+40h] [rbp-C0h] BYREF
  DWORD Type; // [rsp+44h] [rbp-BCh] BYREF
  DWORD cchValueName; // [rsp+48h] [rbp-B8h] BYREF
  HKEY hKey; // [rsp+50h] [rbp-B0h] BYREF
  HKEY phkResult; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR ValueName[264]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR Data[1024]; // [rsp+270h] [rbp+170h] BYREF

  cchValueName = 259;
  v2 = 0;
  cbData = 2046;
  phkResult = 0LL;
  hKey = 0LL;
  v3 = 0;
  Type = 0;
  memset_0(ValueName, 0, 0x208uLL);
  memset_0(Data, 0, sizeof(Data));
  v4 = (ExecutionModel::BaseResourceSet *)operator new(0x588uLL);
  if ( v4 )
    v4 = ExecutionModel::BaseResourceSet::BaseResourceSet(v4);
  ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::Attach((char *)this + 96, v4);
  v5 = *((_QWORD *)this + 12);
  if ( v5 )
  {
    phkResult = 0LL;
    if ( RegOpenKeyW(HKEY_LOCAL_MACHINE, L"System\\ResourceManager", &phkResult)
      || (hKey = 0LL, RegOpenKeyW(phkResult, L"Registrars\\", &hKey)) )
    {
      v2 = -2147467259;
    }
    else
    {
      *(_DWORD *)(v5 + 16) = 0;
      *(_DWORD *)(v5 + 1400) = 2;
      *(_QWORD *)(v5 + 24) = this;
      for ( i = RegEnumValueW(hKey, 0, ValueName, &cchValueName, 0LL, &Type, (LPBYTE)Data, &cbData);
            !i;
            i = RegEnumValueW(hKey, v3, ValueName, &cchValueName, 0LL, &Type, (LPBYTE)Data, &cbData) )
      {
        ++v3;
        if ( Type == 1 && cbData > 2 )
        {
          LibraryW = LoadLibraryW(Data);
          v9 = LibraryW;
          if ( LibraryW )
          {
            ProcAddress = GetProcAddress(LibraryW, "Register");
            if ( ProcAddress )
              ((void (__fastcall *)(ExecutionModel::ResourceManager *))ProcAddress)(this);
            FreeLibrary(v9);
          }
        }
        memset_0(ValueName, 0, 0x208uLL);
        memset_0(Data, 0, sizeof(Data));
        cchValueName = 259;
        cbData = 2046;
      }
    }
  }
  else
  {
    v2 = -2147024882;
  }
  if ( hKey )
    RegCloseKey(hKey);
  if ( phkResult )
    RegCloseKey(phkResult);
  return v2;
}
