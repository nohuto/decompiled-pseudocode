/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIRemoteLauncherForegroundHandler@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DDD50
 * Callers:
 *     ??$MakeAndInitialize@VRemoteLauncherForegroundHandler@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800DDFD4 (--$MakeAndInitialize@VRemoteLauncherForegroundHandler@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIRemoteLauncherForegroundHandler@@VFtmBase@23@@Details@WRL@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE280 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800DE280.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIRemoteLauncherForegroundHandler@@VFtmBase@23@@Details@WRL@Microsoft@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE290 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800DE290.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIRemoteLauncherForegroundHandler@@VFtmBase@23@@Details@WRL@Microsoft@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE2B0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800DE2B0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIRemoteLauncherForegroundHandler@@VFtmBase@23@@Details@WRL@Microsoft@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE2C0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800DE2C0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIRemoteLauncherForegroundHandler@@VFtmBase@23@@Details@WRL@Microsoft@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE300 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800DE300.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800025E8 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CanCastTo@?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithGITSite@@VCImmersiveShellComponent@@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001B504 (-CanCastTo@-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithGITSite@@VCImmers.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IRemoteLauncherForegroundHandler,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  void **v5; // r8
  __int64 v6; // r9
  int v7; // edi
  __int64 v8; // r9

  v3 = 0;
  *a3 = 0LL;
  if ( *a2
    || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( (int)Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithGITSite,CImmersiveShellComponent>::CanCastTo(
                a1,
                a2,
                a3) >= 0 )
    {
      v7 = 0;
      goto LABEL_22;
    }
    v8 = v6 + 104;
    if ( *(_DWORD *)v4 == -1211751484
      && *(_DWORD *)(v4 + 4) == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data2
      && *(_DWORD *)(v4 + 8) == *(_DWORD *)GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4
      && *(_DWORD *)(v4 + 12) == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4[4] )
    {
      *v5 = (void *)v8;
    }
    else
    {
      if ( *(_DWORD *)v4 != 1523180079
        || *(_DWORD *)(v4 + 4) != *(_DWORD *)&GUID_5ac9e22f_8a57_43c0_bf9a_1e1f5f366e55.Data2
        || *(_DWORD *)(v4 + 8) != *(_DWORD *)GUID_5ac9e22f_8a57_43c0_bf9a_1e1f5f366e55.Data4
        || *(_DWORD *)(v4 + 12) != *(_DWORD *)&GUID_5ac9e22f_8a57_43c0_bf9a_1e1f5f366e55.Data4[4] )
      {
        v7 = -2147467262;
        if ( (int)Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v8 + 16), (const struct _GUID *)v4, v5) >= 0 )
          v7 = 0;
LABEL_21:
        if ( v7 < 0 )
          return (unsigned int)v7;
LABEL_22:
        (*(void (__fastcall **)(void *))(*(_QWORD *)*v5 + 8LL))(*v5);
        return (unsigned int)v7;
      }
      *v5 = (void *)(v8 + 8);
    }
    v7 = 0;
    goto LABEL_21;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64, _DWORD *, __int64 *, __int64))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, a1);
  return v3;
}
