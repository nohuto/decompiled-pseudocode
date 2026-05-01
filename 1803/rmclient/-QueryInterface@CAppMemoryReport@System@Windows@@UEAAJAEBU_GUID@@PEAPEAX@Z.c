/*
 * XREFs of ?QueryInterface@CAppMemoryReport@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180003630
 * Callers:
 *     ?QueryInterface@CAppMemoryReport@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800080A0 (-QueryInterface@CAppMemoryReport@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAppMemoryReport@System@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800080B0 (-QueryInterface@CAppMemoryReport@System@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAppMemoryReport@System@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800080C0 (-QueryInterface@CAppMemoryReport@System@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180003360 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180007B90 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIInspectable@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18000AE1C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIInspectable@@@Details.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x18000B450 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::System::CAppMemoryReport::QueryInterface(
        Windows::System::CAppMemoryReport *this,
        const struct _GUID *a2,
        Windows::System::CAppMemoryReport **a3)
{
  unsigned int v4; // ebx
  Windows::System::CAppMemoryReport *v5; // rdx
  unsigned int Data1; // r10d
  unsigned int (__fastcall *v7)(Windows::System::CAppMemoryReport *__hidden); // rax
  const struct _GUID *v9; // rcx
  Windows::System::CAppMemoryReport *v10; // r10
  __int64 v11; // r9
  Windows::System::CAppMemoryReport *v12; // r10
  int CanCastTo; // eax
  signed __int64 v14; // rax
  signed __int64 v15; // rtt

  v4 = 0;
  *a3 = 0LL;
  v5 = this;
  Data1 = a2->Data1;
  if ( *(_QWORD *)&a2->Data1 == __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || Data1 == -1350114592
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
  {
    *a3 = this;
    v7 = *(unsigned int (__fastcall **)(Windows::System::CAppMemoryReport *__hidden))(*(_QWORD *)this + 8LL);
    goto LABEL_9;
  }
  if ( Data1 == 1835348891
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_6d65339b_4d6f_45bc_9c5e_e49b3ff2758d.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_6d65339b_4d6f_45bc_9c5e_e49b3ff2758d.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_6d65339b_4d6f_45bc_9c5e_e49b3ff2758d.Data4[4] )
  {
    *a3 = this;
  }
  else if ( InlineIsEqualGUID(a2, &GUID_00000038_0000_0000_c000_000000000046) )
  {
    *a3 = v10;
  }
  else
  {
    if ( InlineIsEqualGUID(v9, &GUID_5f7f3738_51b7_42dc_b7ed_79ba46d28857) )
    {
      *a3 = v12;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>::CanCastTo(
                    (char *)v12 + 8,
                    v11);
    }
    v4 = CanCastTo;
    if ( CanCastTo < 0 )
      return v4;
  }
  v5 = *a3;
  v7 = *(unsigned int (__fastcall **)(Windows::System::CAppMemoryReport *__hidden))(*(_QWORD *)*a3 + 8LL);
  if ( v7 != Windows::System::CAppMemoryReport::AddRef )
  {
LABEL_9:
    v7(v5);
    return v4;
  }
  v14 = *((_QWORD *)v5 + 5);
  while ( v14 >= 0 )
  {
    if ( (_DWORD)v14 == 0x7FFFFFFF )
      return v4;
    v15 = v14;
    v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v5 + 5, v14 + 1, v14);
    if ( v15 == v14 )
      return v4;
  }
  Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v14 + 16));
  return v4;
}
