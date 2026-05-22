/*
 * XREFs of EnumerateDevices @ 0x180090968
 * Callers:
 *     ?OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@Windows@@_N@Z @ 0x180094A70 (-OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wra.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18004CAF4 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?_Tidy@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180097930 (-_Tidy@-$vector@VHString@Wrappers@WRL@Microsoft@@V-$allocator@VHString@Wrappers@WRL@Microsoft@@@.c)
 *     ??$emplace_back@VHString@Wrappers@WRL@Microsoft@@@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180098528 (--$emplace_back@VHString@Wrappers@WRL@Microsoft@@@-$vector@VHString@Wrappers@WRL@Microsoft@@V-$a.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB5C4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EnumerateDevices(LPGUID InterfaceClassGuid, __int64 a2)
{
  HSTRING *v4; // rsi
  HSTRING *i; // rbx
  __int64 v6; // rdx
  unsigned int v7; // esi
  unsigned __int64 v8; // rax
  WCHAR *v9; // rax
  WCHAR *v10; // rbx
  CONFIGRET Device_Interface_ListW; // eax
  DWORD v12; // eax
  const WCHAR *j; // r15
  unsigned __int64 v14; // rax
  UINT32 v15; // r12d
  __int64 v16; // rax
  ULONG pulLen; // [rsp+30h] [rbp-68h] BYREF
  HSTRING string; // [rsp+38h] [rbp-60h] BYREF
  __int128 v20; // [rsp+40h] [rbp-58h] BYREF
  __int64 v21; // [rsp+50h] [rbp-48h]
  void *Block; // [rsp+58h] [rbp-40h]
  __int64 v23; // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v23 = -2LL;
  v4 = *(HSTRING **)(a2 + 8);
  for ( i = *(HSTRING **)a2; i != v4; ++i )
  {
    WindowsDeleteString(*i);
    *i = 0LL;
  }
  *(_QWORD *)(a2 + 8) = *(_QWORD *)a2;
  v20 = 0LL;
  v21 = 0LL;
  while ( 1 )
  {
    pulLen = 0;
    if ( CM_Get_Device_Interface_List_SizeW(&pulLen, InterfaceClassGuid, 0LL, 0) )
    {
      v6 = 138LL;
LABEL_9:
      v7 = -2147023728;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)0x80070490LL);
      goto LABEL_40;
    }
    if ( pulLen <= 1 )
    {
      v6 = 139LL;
      goto LABEL_9;
    }
    v8 = 2LL * pulLen;
    if ( !is_mul_ok(pulLen, 2uLL) )
      v8 = -1LL;
    v9 = (WCHAR *)operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    Block = v9;
    if ( !v9 )
    {
      v7 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_40;
    }
    memset(v9, 0, 2LL * pulLen);
    Device_Interface_ListW = CM_Get_Device_Interface_ListW(InterfaceClassGuid, 0LL, v10, pulLen, 0);
    if ( Device_Interface_ListW != 26 )
      break;
    operator delete(v10);
  }
  v12 = CM_MapCrToWin32Err(Device_Interface_ListW, 0x507u);
  if ( v12 )
  {
    v7 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0x9D,
           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
           (const char *)v12);
  }
  else
  {
    for ( j = v10; ; j += v16 + 1 )
    {
      if ( !*j )
      {
        if ( (__int128 *)a2 != &v20 )
        {
          std::vector<Microsoft::WRL::Wrappers::HString>::_Tidy(a2);
          *(_OWORD *)a2 = v20;
          *(_QWORD *)(a2 + 16) = v21;
          v20 = 0LL;
          v21 = 0LL;
        }
        if ( v10 )
          operator delete(v10);
        v7 = 0;
        goto LABEL_40;
      }
      string = 0LL;
      v14 = -1LL;
      do
        ++v14;
      while ( j[v14] );
      v15 = -1;
      if ( v14 <= 0xFFFFFFFF )
        v15 = v14;
      v7 = v14 > 0xFFFFFFFF ? 0x80070216 : 0;
      if ( v14 <= 0xFFFFFFFF )
      {
        WindowsDeleteString(0LL);
        string = 0LL;
        v7 = WindowsCreateString(j, v15, &string);
      }
      if ( (v7 & 0x80000000) != 0 )
        break;
      try
      {
        std::vector<Microsoft::WRL::Wrappers::HString>::emplace_back<Microsoft::WRL::Wrappers::HString>(&v20, &string);
      }
      catch ( std::bad_alloc )
      {
        WindowsDeleteString(string);
        string = 0LL;
        if ( Block )
          operator delete(Block);
        v7 = -2147024882;
        goto LABEL_40;
      }
      WindowsDeleteString(string);
      v16 = -1LL;
      do
        ++v16;
      while ( j[v16] );
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xA4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)v7);
    WindowsDeleteString(string);
    string = 0LL;
    if ( !v10 )
      goto LABEL_40;
  }
  operator delete(v10);
LABEL_40:
  std::vector<Microsoft::WRL::Wrappers::HString>::_Tidy(&v20);
  return v7;
}
