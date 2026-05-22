/*
 * XREFs of ?BindDevicesOfTypeToDisplayBinding@DWMInputRouter@@IEAAJII_N@Z @ 0x18001C7BC
 * Callers:
 *     ?BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z @ 0x180018FE0 (-BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z.c)
 *     ?BindDevicesOfTypeToDisplay@DWMInputRouter@@UEAAJII@Z @ 0x18001C7B0 (-BindDevicesOfTypeToDisplay@DWMInputRouter@@UEAAJII@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetDisplayBindingFromId@DWMInputRouter@@IEAAJIPEAPEAVDisplayBinding@@@Z @ 0x18001CB5C (-GetDisplayBindingFromId@DWMInputRouter@@IEAAJIPEAPEAVDisplayBinding@@@Z.c)
 *     ??$emplace@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@?$vector@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@std@@@std@@@1@$$QEAU?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@1@@Z @ 0x18001F7CC (--$emplace@U-$pair@KV-$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@-$vector@U-$pair@KV-$ComP.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DWMInputRouter::BindDevicesOfTypeToDisplayBinding(
        DWMInputRouter *this,
        unsigned int a2,
        unsigned int a3,
        char a4)
{
  char v4; // si
  struct DisplayBinding *v6; // rbx
  __int64 v7; // rdi
  signed int v8; // r14d
  int DisplayBindingFromId; // eax
  __int64 v10; // rcx
  unsigned int v11; // esi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 i; // r15
  __int64 v17; // rsi
  unsigned int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  int v21; // r9d
  void **v22; // rsi
  void *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // esi
  __int64 v28; // rax
  __int64 v29; // r15
  _QWORD *v30; // rdi
  _QWORD *v31; // rsi
  struct DisplayBinding *v33; // [rsp+30h] [rbp-30h] BYREF
  void *Block; // [rsp+38h] [rbp-28h] BYREF
  struct DisplayBinding *v35; // [rsp+40h] [rbp-20h]
  __int64 v36; // [rsp+48h] [rbp-18h]
  unsigned int v37; // [rsp+50h] [rbp-10h]
  __int64 v38; // [rsp+58h] [rbp-8h]
  void **v39; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v40; // [rsp+A8h] [rbp+48h]
  char v41; // [rsp+B8h] [rbp+58h]

  v41 = a4;
  v40 = a2;
  v36 = -2LL;
  v4 = a4;
  v6 = 0LL;
  v33 = 0LL;
  v7 = *((_QWORD *)this + 35);
  if ( !a2 )
  {
    v8 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 2330, 87);
    goto LABEL_62;
  }
  DisplayBindingFromId = DWMInputRouter::GetDisplayBindingFromId(this, a3, &v33);
  v8 = DisplayBindingFromId;
  if ( DisplayBindingFromId < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, 2334, DisplayBindingFromId);
    v6 = v33;
    goto LABEL_62;
  }
  v6 = v33;
  if ( (gdwMitConfig & 1) != 0 && ((1LL << gdwDeviceFamily) & 0x5DB5) != 0 )
  {
    Block = 0LL;
    LODWORD(v39) = 0;
    v11 = (v40 >> 1) & 1 | 8;
    if ( (v40 & 0x20) == 0 )
      v11 = (v40 >> 1) & 1;
    v12 = (*(__int64 (__fastcall **)(struct DisplayBinding *, void **, void ***))(*(_QWORD *)v33 + 56LL))(
            v33,
            &Block,
            &v39);
    v8 = v12;
    if ( v12 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 0, 2355, v12);
      goto LABEL_15;
    }
    if ( !(unsigned int)MITBindInputTypeToMonitors(v11, (unsigned int)v39, Block) )
    {
      v8 = (int)GetLastError() > 0 ? (unsigned __int16)GetLastError() | 0x80070000 : GetLastError();
      if ( v8 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 0, 2359, v8);
LABEL_15:
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
    }
    operator delete(Block);
    v4 = v41;
  }
  v15 = *((_QWORD *)this + 33);
  for ( i = *((_QWORD *)this + 32); i != v15 && v40 != *(_DWORD *)i; i += 16LL )
    ;
  if ( i != v15 )
  {
    if ( v4 )
    {
      v17 = *((_QWORD *)this + 6);
      v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(i + 8) + 24LL))(*(_QWORD *)(i + 8));
      v19 = (*(__int64 (__fastcall **)(char *, _QWORD))(v17 + 48))((char *)this + 48, v18);
      v8 = v19;
      if ( v19 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v21 = 2380;
LABEL_61:
          McTemplateU0qqq(v20, &MinInput_Warning_CheckResult, 0, v21, v19);
        }
        goto LABEL_62;
      }
    }
    v39 = (void **)*((_QWORD *)this + 33);
    if ( (void **)(i + 16) != v39 )
    {
      v22 = (void **)(i + 24);
      do
      {
        *((_DWORD *)v22 - 6) = *((_DWORD *)v22 - 2);
        v23 = 0LL;
        if ( &Block != v22 )
        {
          v23 = *v22;
          *v22 = 0LL;
        }
        v24 = (__int64)*(v22 - 2);
        *(v22 - 2) = v23;
        if ( v24 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        v22 += 2;
      }
      while ( v22 - 1 != v39 );
    }
    v25 = *((_QWORD *)this + 33);
    v26 = *(_QWORD *)(v25 - 8);
    if ( v26 )
    {
      *(_QWORD *)(v25 - 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    *((_QWORD *)this + 33) -= 16LL;
  }
  v27 = v40;
  v37 = v40;
  if ( v6 )
    (*(void (__fastcall **)(struct DisplayBinding *))(*(_QWORD *)v6 + 8LL))(v6);
  LODWORD(Block) = v27;
  v35 = v6;
  v38 = 0LL;
  std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>>>::emplace<std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>>>(
    (char *)this + 256,
    &v39,
    *((_QWORD *)this + 32),
    &Block);
  if ( v35 )
    (*(void (__fastcall **)(struct DisplayBinding *))(*(_QWORD *)v35 + 16LL))(v35);
LABEL_49:
  while ( 1 )
  {
    v28 = *((_QWORD *)this + 36);
    if ( v7 == v28 )
      break;
    v29 = v7;
    do
    {
      if ( (*(_DWORD *)v29 & v40) != 0 )
        break;
      v29 += 32LL;
    }
    while ( v29 != v28 );
    v7 = v29;
    if ( v29 != v28 )
    {
      v30 = *(_QWORD **)(v29 + 8);
      v31 = *(_QWORD **)(v29 + 16);
      while ( 1 )
      {
        if ( v30 == v31 )
        {
          v7 = v29 + 32;
          goto LABEL_49;
        }
        v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct DisplayBinding *))(*(_QWORD *)*v30 + 24LL))(
                *v30,
                v40,
                v6);
        v8 = v19;
        if ( v19 < 0 )
          break;
        ++v30;
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v21 = 2413;
        goto LABEL_61;
      }
      break;
    }
  }
LABEL_62:
  if ( v6 )
    (*(void (__fastcall **)(struct DisplayBinding *))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v8;
}
