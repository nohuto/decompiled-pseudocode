/*
 * XREFs of ?CreateInstance@?$SimpleClassFactory@VPrivilegedOperationsService@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800F5770
 * Callers:
 *     <none>
 * Callees:
 *     ?RuntimeClassInitialize@PrivilegedOperationsService@@QEAAJXZ @ 0x1800F3328 (-RuntimeClassInitialize@PrivilegedOperationsService@@QEAAJXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800F4470 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellCo.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F4530 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersive.c)
 *     ??0PrivilegedOperationsService@@QEAA@XZ @ 0x1800F68D4 (--0PrivilegedOperationsService@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleClassFactory<PrivilegedOperationsService,0>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  void *v7; // rbx
  PrivilegedOperationsService *v8; // rax
  int v9; // edi
  PrivilegedOperationsService *v10; // rsi
  void *v11; // [rsp+48h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    RoOriginateError(2147746064LL, 0LL);
    return 2147746064LL;
  }
  else
  {
    v7 = 0LL;
    v11 = 0LL;
    v8 = (PrivilegedOperationsService *)operator new(0x108uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v8 )
    {
      v10 = PrivilegedOperationsService::PrivilegedOperationsService(v8);
      v9 = PrivilegedOperationsService::RuntimeClassInitialize(v10);
      if ( v9 >= 0 )
      {
        v9 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase>::QueryInterface(
               v10,
               &GUID_00000000_0000_0000_c000_000000000046,
               &v11);
        if ( v10 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase>::Release((__int64)v10);
        v7 = v11;
      }
      else if ( v10 )
      {
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::FtmBase>::Release((__int64)v10);
      }
      if ( v9 >= 0 )
        v9 = (**(__int64 (__fastcall ***)(void *, __int64, _QWORD *))v7)(v7, a3, a4);
    }
    else
    {
      v9 = -2147024882;
    }
    if ( v7 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
    return (unsigned int)v9;
  }
}
