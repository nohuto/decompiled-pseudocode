/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@56@UIInspectable@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@56@UIInspectable@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18000B06C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@56@UIInspectable@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180009EF0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_180009EF0.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180003690 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>>(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  const struct _GUID *v6; // rcx
  const struct _GUID *v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  const struct _GUID *v11; // rcx
  __int64 v12; // r9
  const struct _GUID *v13; // rcx
  __int64 v14; // r9

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    && !InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    if ( InlineIsEqualGUID(v6, &GUID_6d65339b_4d6f_45bc_9c5e_e49b3ff2758d) )
    {
      *v8 = v9;
      v10 = 0;
      goto LABEL_13;
    }
    if ( InlineIsEqualGUID(v7, &GUID_00000038_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v11, &GUID_5f7f3738_51b7_42dc_b7ed_79ba46d28857) )
    {
      *v8 = v12;
    }
    else
    {
      if ( !InlineIsEqualGUID(v13, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
      {
        v10 = -2147467262;
LABEL_12:
        if ( v10 < 0 )
          return (unsigned int)v10;
LABEL_13:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
        return (unsigned int)v10;
      }
      *v8 = v14 + 8;
    }
    v10 = 0;
    goto LABEL_12;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
