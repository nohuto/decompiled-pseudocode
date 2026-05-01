/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@VCWRLObjectWithGITSite@@U?$ChainInterfaces@UIApplicationFrameServiceTestability@@UIApplicationFrameService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationFrameEventHandler@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180050EEC
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithGITSite@@U?$ChainInterfaces@UIApplicationFrameServiceTestability@@UIApplicationFrameService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationFrameEventHandler@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180050570 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180050570.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800025E8 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,CWRLObjectWithGITSite,Microsoft::WRL::ChainInterfaces<IApplicationFrameServiceTestability,IApplicationFrameService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationFrameEventHandler,Microsoft::WRL::FtmBase>::CanCastTo(
        char *a1,
        __int64 a2,
        void **a3)
{
  unsigned int v3; // r9d
  char *v4; // r10
  char v5; // cl
  char v6; // al
  int CanCastTo; // eax
  unsigned int v8; // r9d
  unsigned int v9; // ecx

  if ( *(_DWORD *)a2 == -62389853
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
  {
    *a3 = a1;
    return 0;
  }
  else
  {
    v3 = 0;
    v4 = a1 + 40;
    v5 = 1;
    if ( *(_DWORD *)a2 == -686947152
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_d70e04b0_f4dc_4c91_ab02_836e3f6c552c.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_d70e04b0_f4dc_4c91_ab02_836e3f6c552c.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_d70e04b0_f4dc_4c91_ab02_836e3f6c552c.Data4[4] )
    {
      *a3 = v4;
      v6 = 1;
    }
    else
    {
      v6 = 0;
    }
    if ( !v6 )
    {
      if ( *(_DWORD *)a2 == -2001576831
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_88b25c81_171b_48b0_91d6_c75846bcf035.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_88b25c81_171b_48b0_91d6_c75846bcf035.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_88b25c81_171b_48b0_91d6_c75846bcf035.Data4[4] )
      {
        *a3 = v4;
      }
      else
      {
        v5 = 0;
      }
      if ( !v5 )
      {
        if ( *(_DWORD *)a2 == -363000348
          && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79.Data2
          && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79.Data4
          && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79.Data4[4] )
        {
          *a3 = v4 + 8;
        }
        else
        {
          CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(
                        (Microsoft::WRL::FtmBase *)(v4 + 16),
                        (const struct _GUID *)a2,
                        a3);
          v9 = -2147467262;
          if ( CanCastTo >= 0 )
            return v8;
          return v9;
        }
      }
    }
  }
  return v3;
}
