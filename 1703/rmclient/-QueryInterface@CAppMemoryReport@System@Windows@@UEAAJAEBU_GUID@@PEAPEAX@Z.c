/*
 * XREFs of ?QueryInterface@CAppMemoryReport@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180002D70
 * Callers:
 *     ?QueryInterface@CAppMemoryReport@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180008440 (-QueryInterface@CAppMemoryReport@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAppMemoryReport@System@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180008450 (-QueryInterface@CAppMemoryReport@System@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@U?$InterfaceList@UIWeakReferenceSource@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180007CE4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@U-$InterfaceList@UIWeakRef.c)
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::System::CAppMemoryReport::QueryInterface(
        Windows::System::CAppMemoryReport *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int CanCastTo; // ebx
  unsigned int Data1; // r9d
  __int64 v5; // rdx
  unsigned int (__fastcall *v6)(Windows::System::CAppMemoryReport *__hidden); // rax
  signed __int64 v7; // rax
  signed __int64 v8; // rtt

  CanCastTo = 0;
  *a3 = 0LL;
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
    v6 = *(unsigned int (__fastcall **)(Windows::System::CAppMemoryReport *__hidden))(*(_QWORD *)this + 8LL);
    goto LABEL_24;
  }
  if ( Data1 == 1835348891
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_6d65339b_4d6f_45bc_9c5e_e49b3ff2758d.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_6d65339b_4d6f_45bc_9c5e_e49b3ff2758d.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_6d65339b_4d6f_45bc_9c5e_e49b3ff2758d.Data4[4] )
  {
    *a3 = this;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,1,0>::CanCastTo((char *)this + 8);
    if ( (CanCastTo & 0x80000000) != 0 )
      return CanCastTo;
  }
  v5 = (__int64)*a3;
  v6 = *(unsigned int (__fastcall **)(Windows::System::CAppMemoryReport *__hidden))(*(_QWORD *)*a3 + 8LL);
  if ( v6 != Windows::System::CAppMemoryReport::AddRef )
  {
    this = (Windows::System::CAppMemoryReport *)*a3;
LABEL_24:
    v6(this);
    return CanCastTo;
  }
  v7 = *(_QWORD *)(v5 + 32);
  while ( v7 >= 0 )
  {
    v8 = v7;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 32), v7 + 1, v7);
    if ( v8 == v7 )
      return CanCastTo;
  }
  _InterlockedIncrement((volatile signed __int32 *)(2 * v7 + 16));
  return CanCastTo;
}
