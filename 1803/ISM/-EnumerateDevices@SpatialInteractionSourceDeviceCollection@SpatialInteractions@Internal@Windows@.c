/*
 * XREFs of ?EnumerateDevices@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@CAJU_GUID@@PEAV?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800A50D4
 * Callers:
 *     ?OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800A7080 (-OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180044E10 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??$Set@PEB_W@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEB_WUDummy@Details@23@@Z @ 0x1800A2194 (--$Set@PEB_W@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEB_WUDummy@Details@23@@Z.c)
 *     ??$emplace_back@VHString@Wrappers@WRL@Microsoft@@@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1800A9BEC (--$emplace_back@VHString@Wrappers@WRL@Microsoft@@@-$vector@VHString@Wrappers@WRL@Microsoft@@V-$a.c)
 *     ?_Tidy@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1800AA3C4 (-_Tidy@-$vector@VHString@Wrappers@WRL@Microsoft@@V-$allocator@VHString@Wrappers@WRL@Microsoft@@@.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E2134 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnumerateDevices(
        LPGUID InterfaceClassGuid,
        __int64 a2)
{
  HSTRING *v4; // rsi
  HSTRING *v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdx
  unsigned int v8; // esi
  unsigned __int64 v9; // rax
  WCHAR *v10; // rax
  WCHAR *v11; // rbx
  CONFIGRET Device_Interface_ListW; // eax
  DWORD v13; // eax
  const WCHAR *v14; // r14
  int v15; // eax
  __int64 v16; // rax
  ULONG pulLen; // [rsp+30h] [rbp-58h] BYREF
  HSTRING string; // [rsp+38h] [rbp-50h] BYREF
  __int128 v20; // [rsp+40h] [rbp-48h] BYREF
  __int64 v21; // [rsp+50h] [rbp-38h]
  const WCHAR *v22; // [rsp+58h] [rbp-30h] BYREF
  void *Block; // [rsp+60h] [rbp-28h]
  __int64 v24; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v24 = -2LL;
  v4 = *(HSTRING **)(a2 + 8);
  v5 = *(HSTRING **)a2;
  if ( *(HSTRING **)a2 != v4 )
  {
    do
    {
      WindowsDeleteString(*v5);
      *v5++ = 0LL;
    }
    while ( v5 != v4 );
    v5 = *(HSTRING **)a2;
  }
  *(_QWORD *)(a2 + 8) = v5;
  v20 = 0LL;
  v6 = 0LL;
  v21 = 0LL;
  while ( 1 )
  {
    pulLen = 0;
    if ( CM_Get_Device_Interface_List_SizeW(&pulLen, InterfaceClassGuid, 0LL, 0) )
    {
      v7 = 46LL;
LABEL_9:
      v8 = -2147023728;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
        (const char *)0x80070490LL);
      goto LABEL_34;
    }
    if ( pulLen <= 1 )
    {
      v7 = 47LL;
      goto LABEL_9;
    }
    v9 = 2LL * pulLen;
    if ( !is_mul_ok(pulLen, 2uLL) )
      v9 = -1LL;
    v10 = (WCHAR *)operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10;
    Block = v10;
    if ( !v10 )
    {
      v8 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_34;
    }
    memset_0(v10, 0, 2LL * pulLen);
    Device_Interface_ListW = CM_Get_Device_Interface_ListW(InterfaceClassGuid, 0LL, v11, pulLen, 0);
    if ( Device_Interface_ListW != 26 )
      break;
    operator delete(v11);
  }
  v13 = CM_MapCrToWin32Err(Device_Interface_ListW, 0x507u);
  if ( v13 )
  {
    v8 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0x41,
           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
           (const char *)v13);
  }
  else
  {
    v14 = v11;
    v22 = v11;
    while ( 1 )
    {
      if ( !*v14 )
      {
        if ( (__int128 *)a2 != &v20 )
        {
          std::vector<Microsoft::WRL::Wrappers::HString>::_Tidy(a2);
          *(_OWORD *)a2 = v20;
          *(_QWORD *)(a2 + 16) = v6;
          v20 = 0LL;
          v21 = 0LL;
        }
        if ( v11 )
          operator delete(v11);
        v8 = 0;
        goto LABEL_34;
      }
      string = 0LL;
      v15 = Microsoft::WRL::Wrappers::HString::Set<wchar_t const *>(&string, &v22);
      v8 = v15;
      if ( v15 < 0 )
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
        v8 = -2147024882;
        goto LABEL_34;
      }
      WindowsDeleteString(string);
      v16 = -1LL;
      do
        ++v16;
      while ( v14[v16] );
      v14 += v16 + 1;
      v22 = v14;
      v6 = v21;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v15);
    WindowsDeleteString(string);
    string = 0LL;
    if ( !v11 )
      goto LABEL_34;
  }
  operator delete(v11);
LABEL_34:
  std::vector<Microsoft::WRL::Wrappers::HString>::_Tidy(&v20);
  return v8;
}
