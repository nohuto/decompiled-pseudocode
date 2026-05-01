/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180003F10
 * Callers:
 *     ??$CreateGitHelper@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@VGitPtr@Internal@3@@Details@Internal@Windows@@YAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@2@PEAPEAU342@@Z @ 0x1800022F0 (--$CreateGitHelper@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Fo.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800083E0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$IEventHandler@PEAVAppMemoryUsage_ea_1800083E0.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800014D0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  int CanCastTo; // ebx
  void (*v4)(void); // rax

  CanCastTo = 0;
  *a3 = 0LL;
  if ( *(_QWORD *)a2 == __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = (void *)a1;
    v4 = *(void (**)(void))(*(_QWORD *)a1 + 8LL);
  }
  else
  {
    if ( *(_DWORD *)a2 == 1613817795
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_6030e7c3_f93f_5e9c_9ba2_9a018d2b09c0.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_6030e7c3_f93f_5e9c_9ba2_9a018d2b09c0.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_6030e7c3_f93f_5e9c_9ba2_9a018d2b09c0.Data4[4] )
    {
      *a3 = (void *)a1;
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 8), (const struct _GUID *)a2, a3);
      if ( CanCastTo < 0 )
        return (unsigned int)CanCastTo;
    }
    v4 = *(void (**)(void))(*(_QWORD *)*a3 + 8LL);
  }
  v4();
  return (unsigned int)CanCastTo;
}
