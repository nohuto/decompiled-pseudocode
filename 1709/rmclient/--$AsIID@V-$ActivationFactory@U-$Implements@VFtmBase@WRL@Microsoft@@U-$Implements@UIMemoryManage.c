/*
 * XREFs of ??$AsIID@V?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@@?$RuntimeClassBaseT@$0N@@Details@WRL@Microsoft@@KAJPEAV?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@23@AEBU_GUID@@PEAPEAX@Z @ 0x18000A388
 * Callers:
 *     ?QueryInterface@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000A080 (-QueryInterface@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Implem_ea_18000A080.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180003690 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 *     ??$CanCastToHelper@$0A@@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@56@UIMemoryManagerStatics3@56@UIMemoryManagerStatics4@56@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18000A088 (--$CanCastToHelper@$0A@@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIMemoryMa.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000A120 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<13>::AsIID<Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Implements<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>>(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  const struct _GUID *v6; // rcx
  void **v7; // r8
  __int64 v8; // r9
  const struct _GUID *v9; // r11
  int v10; // ebx
  __int64 v11; // rbx
  const struct _GUID *v12; // r11
  int CanCastTo; // eax

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    && !InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    if ( InlineIsEqualGUID(v6, &GUID_00000035_0000_0000_c000_000000000046) )
    {
      *v7 = (void *)v8;
      v10 = 0;
    }
    else
    {
      v11 = v8 + 8;
      if ( (int)Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v8 + 8), v9, v7) < 0 )
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>::CanCastToHelper<0>(
                      v11 + 40,
                      v12);
        v10 = -2147467262;
        if ( CanCastTo >= 0 )
          v10 = 0;
      }
      else
      {
        v10 = 0;
      }
      if ( v10 < 0 )
        return (unsigned int)v10;
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)*v7 + 8LL))(*v7);
    return (unsigned int)v10;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
