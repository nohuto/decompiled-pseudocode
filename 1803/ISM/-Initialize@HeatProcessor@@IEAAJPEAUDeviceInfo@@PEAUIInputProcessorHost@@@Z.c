/*
 * XREFs of ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180039208
 * Callers:
 *     ?Create@HeatProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180039480 (-Create@HeatProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A408 (-_Init@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$all.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180019168 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@PEAUIHeatSystemContextClient@@V?$allocator@PEAUIHeatSystemContextClient@@@std@@@std@@@std@@QEAAPEAU?$_List_node@PEAUIHeatSystemContextClient@@PEAX@2@PEAU32@0@Z @ 0x180038708 (-_Buynode0@-$_List_alloc@U-$_List_base_types@PEAUIHeatSystemContextClient@@V-$allocator@PEAUIHea.c)
 *     ?OnDeviceArrival@HeatProcessor@@QEAAJPEAUDeviceInfo@@@Z @ 0x180039640 (-OnDeviceArrival@HeatProcessor@@QEAAJPEAUDeviceInfo@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall HeatProcessor::Initialize(
        HeatProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3)
{
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rsi
  struct InputSystemServerConnection *BamoServerConnection; // rax
  const char *v11; // r9
  void (__fastcall ***v12)(_QWORD, __int64); // rax
  const char *v13; // r9
  void (__fastcall ***v14)(_QWORD, __int64); // rbx
  void (__fastcall ***v15)(_QWORD, __int64); // rcx
  __int64 v16; // rdx
  HMODULE LibraryW; // rax
  HMODULE v18; // rbx
  FARPROC ProcAddress; // rsi
  __int64 v20; // rcx
  signed int v21; // ecx
  signed int LastError; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = *((_QWORD *)this + 9);
  if ( v6 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = malloc(0x80uLL);
  v9 = v7;
  if ( v7 )
    memset_0(v7, 0, 0x80uLL);
  if ( v9 )
  {
    v9[2] = &RefCountedObject::`vftable';
    *((_DWORD *)v9 + 6) = 1;
    *v9 = &ISMHeatFrameworkHost::`vftable'{for `IHeatFrameworkHost'};
    v9[1] = &ISMHeatFrameworkHost::`vftable'{for `ISystemContextObserver'};
    v9[2] = &ISMHeatFrameworkHost::`vftable'{for `RefCountedObject'};
    v9[4] = a3;
    v9[5] = 0LL;
    v9[6] = 0LL;
    *((_DWORD *)v9 + 14) = 0;
    v9[8] = 0LL;
    v9[9] = 0LL;
    v9[8] = std::_List_alloc<std::_List_base_types<IHeatSystemContextClient *>>::_Buynode0(v8, 0LL, 0LL);
    v9[10] = 0LL;
    v9[11] = 0LL;
    v9[12] = 0LL;
    *((_DWORD *)v9 + 14) = 1065353216;
    std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::_Init(
      v9 + 7,
      8LL);
    v9[15] = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    BamoServerConnection = ISMStatics::GetBamoServerConnection();
    if ( !BamoServerConnection )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x13F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
        v11);
      __debugbreak();
    }
    v12 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 19)
                                                                                                 + 8LL)
                                                                                     + 56LL))(*((_QWORD *)BamoServerConnection
                                                                                              + 19) + 8LL);
    v14 = v12;
    v15 = (void (__fastcall ***)(_QWORD, __int64))v9[15];
    if ( v15 != v12 )
    {
      v16 = v9[15];
      if ( v12 )
      {
        (**v12)(v12, v16);
        v16 = v9[15];
      }
      v9[15] = v14;
      v15 = v14;
      if ( v16 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
        v15 = (void (__fastcall ***)(_QWORD, __int64))v9[15];
      }
    }
    if ( v15 )
    {
      if ( v15[7] )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x36,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatgripservicehost.cpp",
          v13);
        __debugbreak();
      }
      v15[7] = (void (__fastcall **)(_QWORD, __int64))v9;
    }
    *((_QWORD *)this + 9) = v9;
    LibraryW = LoadLibraryW(L"HeatCore.dll");
    v18 = LibraryW;
    if ( !LibraryW )
    {
      LastError = GetLastError();
      v21 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v21 = LastError;
      goto LABEL_25;
    }
    ProcAddress = GetProcAddress(LibraryW, "InitializeHeatFramework");
    v20 = *((_QWORD *)this + 8);
    if ( v20 )
    {
      *((_QWORD *)this + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v21 = ((__int64 (__fastcall *)(_QWORD, char *))ProcAddress)(*((_QWORD *)this + 9), (char *)this + 64);
    if ( v21 >= 0 )
    {
      *((_QWORD *)this + 7) = v18;
LABEL_25:
      if ( v21 >= 0 )
      {
        v23 = *((_QWORD *)this + 8);
        v24 = *((_QWORD *)this + 9);
        if ( v23 )
        {
          if ( !*(_QWORD *)(v24 + 40) )
          {
            *(_QWORD *)(v24 + 40) = v23;
            HeatProcessor::OnDeviceArrival(this, a2);
          }
        }
      }
    }
  }
  return 0LL;
}
