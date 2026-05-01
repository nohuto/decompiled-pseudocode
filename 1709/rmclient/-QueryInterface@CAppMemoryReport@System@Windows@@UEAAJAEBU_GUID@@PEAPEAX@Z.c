/*
 * XREFs of ?QueryInterface@CAppMemoryReport@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180002CF0
 * Callers:
 *     ?QueryInterface@CAppMemoryReport@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800087C0 (-QueryInterface@CAppMemoryReport@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAppMemoryReport@System@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800087D0 (-QueryInterface@CAppMemoryReport@System@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAppMemoryReport@System@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800087E0 (-QueryInterface@CAppMemoryReport@System@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180003690 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::System::CAppMemoryReport::QueryInterface(
        Windows::System::CAppMemoryReport *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  unsigned int Data1; // edx
  __int64 v6; // rdx
  unsigned int (__fastcall *v7)(Windows::System::CAppMemoryReport *__hidden); // rax
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  const struct _GUID *v11; // rcx
  void *v12; // r10
  int v13; // eax
  const struct _GUID *v14; // rcx
  void *v15; // r10
  __int64 v16; // r10

  v3 = 0;
  *a3 = 0LL;
  Data1 = a2->Data1;
  if ( __PAIR64__(*(_DWORD *)&a2->Data2, Data1) == __PAIR64__(
                                                     *(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2,
                                                     0)
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || Data1 == -1350114592
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
  {
    *a3 = this;
    v7 = *(unsigned int (__fastcall **)(Windows::System::CAppMemoryReport *__hidden))(*(_QWORD *)this + 8LL);
    goto LABEL_22;
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
    if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000038_0000_0000_c000_000000000046) )
    {
      *a3 = v12;
      v13 = 0;
    }
    else if ( (unsigned int)InlineIsEqualGUID(v11, &GUID_5f7f3738_51b7_42dc_b7ed_79ba46d28857) )
    {
      *a3 = v15;
      v13 = 0;
    }
    else if ( (unsigned int)InlineIsEqualGUID(v14, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *a3 = (void *)(v16 + 8);
      v13 = 0;
    }
    else
    {
      v13 = -2147467262;
    }
    v3 = v13;
    if ( v13 < 0 )
      return v3;
  }
  v6 = (__int64)*a3;
  v7 = *(unsigned int (__fastcall **)(Windows::System::CAppMemoryReport *__hidden))(*(_QWORD *)*a3 + 8LL);
  if ( v7 != Windows::System::CAppMemoryReport::AddRef )
  {
    this = (Windows::System::CAppMemoryReport *)*a3;
LABEL_22:
    v7(this);
    return v3;
  }
  v8 = *(_QWORD *)(v6 + 40);
  while ( v8 >= 0 )
  {
    v9 = v8;
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 40), v8 + 1, v8);
    if ( v9 == v8 )
      return v3;
  }
  _InterlockedIncrement((volatile signed __int32 *)(2 * v8 + 16));
  return v3;
}
