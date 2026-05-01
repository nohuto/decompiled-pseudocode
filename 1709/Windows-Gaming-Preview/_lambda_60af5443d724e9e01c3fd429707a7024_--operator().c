/*
 * XREFs of _lambda_60af5443d724e9e01c3fd429707a7024_::operator() @ 0x180011304
 * Callers:
 *     ?GetLogo@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUSize@Foundation@5@PEAPEAUIRandomAccessStreamReference@Streams@Storage@5@@Z @ 0x180011280 (-GetLogo@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUSize@Foun.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000FA10 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_GetFileProperties@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV?$ComPtr@UIStorageItemProperties@Storage@Windows@@@WRL@Microsoft@@@Z @ 0x180011494 (-_GetFileProperties@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIRandomAccessStreamReference@Streams@Storage@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180011D30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIRandomAccessStre.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIRandomAccessStreamReference@Streams@Storage@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180011DA0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIRandomAcc.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041970 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_60af5443d724e9e01c3fd429707a7024_::operator()(__int64 a1)
{
  int FileProperties; // eax
  int Interface; // esi
  __int64 v4; // rdi
  _QWORD *v5; // rsi
  int v6; // ebp
  char *v7; // rax
  char *v8; // rbx
  _QWORD *v9; // rdi
  bool v10; // zf
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = 0LL;
  FileProperties = Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileProperties(
                     *(_QWORD *)a1,
                     &v14);
  Interface = FileProperties;
  if ( FileProperties < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x113,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)FileProperties);
    v4 = v14;
    goto LABEL_12;
  }
  v5 = **(_QWORD ***)(a1 + 16);
  v6 = (int)fmaxf(**(float **)(a1 + 8), *(float *)(*(_QWORD *)(a1 + 8) + 4LL));
  *v5 = 0LL;
  v7 = (char *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( !v7 )
  {
    v4 = v14;
    Interface = -2147024882;
LABEL_10:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x117,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)Interface);
    goto LABEL_12;
  }
  v9 = v7 + 16;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v7 + 16));
  v10 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
  *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Windows::Storage::Streams::IRandomAccessStreamReference,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)v8 + 1) = &Microsoft::WRL::RuntimeClass<Windows::Storage::Streams::IRandomAccessStreamReference,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v9 = &Microsoft::WRL::RuntimeClass<Windows::Storage::Streams::IRandomAccessStreamReference,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v8 + 8) = 1LL;
  if ( !v10 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  *(_QWORD *)v8 = &off_180046830;
  *((_QWORD *)v8 + 1) = &Microsoft::WRL::RuntimeClass<Windows::Storage::Streams::IRandomAccessStreamReference,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v9 = &Microsoft::WRL::RuntimeClass<Windows::Storage::Streams::IRandomAccessStreamReference,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
  v4 = 0LL;
  *((_QWORD *)v8 + 9) = 0LL;
  *((_DWORD *)v8 + 20) = 0;
  v11 = *((_QWORD *)v8 + 9);
  *((_QWORD *)v8 + 9) = v14;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  *((_DWORD *)v8 + 20) = v6;
  Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Storage::Streams::IRandomAccessStreamReference,Microsoft::WRL::FtmBase>::QueryInterface(
                v8,
                &GUID_33ee3134_1dd6_4e3a_8067_d1c162e8642b,
                v5);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Storage::Streams::IRandomAccessStreamReference,Microsoft::WRL::FtmBase>::Release(v8);
  if ( Interface < 0 )
    goto LABEL_10;
  Interface = 0;
LABEL_12:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)Interface;
}
