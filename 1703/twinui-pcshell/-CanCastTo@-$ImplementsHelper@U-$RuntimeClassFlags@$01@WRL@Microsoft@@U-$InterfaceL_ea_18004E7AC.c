/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$InterfaceList@VCWRLObjectWithGITSite@@U?$InterfaceList@U?$ChainInterfaces@UIApplicationFrameServiceTestability@@UIApplicationFrameService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@UIApplicationFrameEventHandler@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@@Details@23@$0A@$00@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18004E7AC
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCWRLObjectWithGITSite@@U?$InterfaceList@U?$ChainInterfaces@UIApplicationFrameServiceTestability@@UIApplicationFrameService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@UIApplicationFrameEventHandler@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004DEA0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCWRLObjectWithGITSite@@U-$InterfaceList@U-$Chai.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<CWRLObjectWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IApplicationFrameServiceTestability,IApplicationFrameService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<IApplicationFrameEventHandler,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>,0,1>::CanCastTo(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  char v4; // r9
  int v5; // ecx
  __int64 result; // rax
  void *v7; // rcx
  char v8; // al

  v4 = 1;
  if ( *(_DWORD *)a2 == -62389853
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
  {
    v5 = 1;
    *a3 = (void *)a1;
  }
  else
  {
    v5 = 0;
  }
  result = v5 == 0 ? 0x80004002 : 0;
  if ( !v5 )
  {
    v7 = (void *)(a1 + 32);
    if ( *(_DWORD *)a2 == -686947152
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_d70e04b0_f4dc_4c91_ab02_836e3f6c552c.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_d70e04b0_f4dc_4c91_ab02_836e3f6c552c.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_d70e04b0_f4dc_4c91_ab02_836e3f6c552c.Data4[4] )
    {
      v8 = 1;
      *a3 = v7;
    }
    else
    {
      v8 = 0;
    }
    if ( !v8 )
    {
      if ( *(_DWORD *)a2 == -2001576831
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_88b25c81_171b_48b0_91d6_c75846bcf035.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_88b25c81_171b_48b0_91d6_c75846bcf035.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_88b25c81_171b_48b0_91d6_c75846bcf035.Data4[4] )
      {
        *a3 = v7;
      }
      else
      {
        v4 = 0;
      }
      if ( !v4 )
      {
        if ( *(_DWORD *)a2 != -363000348
          || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79.Data2
          || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79.Data4
          || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79.Data4[4] )
        {
          return Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 48), (const struct _GUID *)a2, a3);
        }
        *a3 = (void *)(a1 + 40);
      }
    }
    return 0LL;
  }
  return result;
}
