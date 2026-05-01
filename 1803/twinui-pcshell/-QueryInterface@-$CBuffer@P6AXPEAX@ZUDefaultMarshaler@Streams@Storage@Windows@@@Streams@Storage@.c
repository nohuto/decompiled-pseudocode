/*
 * XREFs of ?QueryInterface@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002EEC0
 * Callers:
 *     ?QueryInterface@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A8A80 (-QueryInterface@-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Str_ea_1800A8A80.c)
 *     ?QueryInterface@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A8A90 (-QueryInterface@-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Str_ea_1800A8A90.c)
 *     ?QueryInterface@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A8AA0 (-QueryInterface@-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Str_ea_1800A8AA0.c)
 *     ?QueryInterface@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A8AB0 (-QueryInterface@-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Str_ea_1800A8AB0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BF10 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::Storage::Streams::CBuffer<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  _DWORD *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r10
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  void **v9; // r8
  void *v10; // r10
  _DWORD *v11; // rcx
  void *v12; // r10
  _DWORD *v13; // rcx
  void *v14; // r10
  int CanCastTo; // eax
  const struct _GUID *v16; // r9
  __int64 v17; // r10
  _QWORD *v18; // rdx
  __int64 (__fastcall *v19)(); // rax
  signed __int64 v20; // rax
  signed __int64 v21; // rtt

  v3 = 0;
  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v5 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    return v3;
  }
  if ( InlineIsEqualGUID(v7, &GUID_905a0fe0_bc53_11df_8c49_001e4fc686da) )
  {
    *v9 = v10;
    goto LABEL_14;
  }
  if ( InlineIsEqualGUID(v8, &GUID_00000038_0000_0000_c000_000000000046) )
  {
    *v9 = v12;
    goto LABEL_14;
  }
  if ( InlineIsEqualGUID(v11, &GUID_905a0fef_bc53_11df_8c49_001e4fc686da) )
  {
    *v9 = v14;
    CanCastTo = 0;
  }
  else if ( InlineIsEqualGUID(v13, &GUID_00000003_0000_0000_c000_000000000046) )
  {
    *v9 = (void *)v17;
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v17 + 8), v16, v9);
    if ( CanCastTo == -2147467262 )
      CanCastTo = -2147467262;
  }
  v3 = CanCastTo;
  if ( CanCastTo < 0 )
    return v3;
LABEL_14:
  v18 = *v9;
  v19 = *(__int64 (__fastcall **)())(*(_QWORD *)*v9 + 8LL);
  if ( v19 == Windows::Storage::Streams::CBuffer<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::AddRef )
  {
    v20 = v18[9];
    while ( v20 >= 0 )
    {
      if ( (_DWORD)v20 == 0x7FFFFFFF )
        return v3;
      v21 = v20;
      v20 = _InterlockedCompareExchange64(v18 + 9, v20 + 1, v20);
      if ( v21 == v20 )
        return v3;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v20 + 16));
    return v3;
  }
  else
  {
    ((void (__fastcall *)(void *))v19)(*v9);
    return v3;
  }
}
