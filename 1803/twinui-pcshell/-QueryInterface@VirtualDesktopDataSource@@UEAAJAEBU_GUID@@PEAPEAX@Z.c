/*
 * XREFs of ?QueryInterface@VirtualDesktopDataSource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008C310
 * Callers:
 *     ?QueryInterface@VirtualDesktopDataSource@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AD870 (-QueryInterface@VirtualDesktopDataSource@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktopDataSource@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AD880 (-QueryInterface@VirtualDesktopDataSource@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktopDataSource@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AD890 (-QueryInterface@VirtualDesktopDataSource@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktopDataSource@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AD8A0 (-QueryInterface@VirtualDesktopDataSource@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktopDataSource@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AD8B0 (-QueryInterface@VirtualDesktopDataSource@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BF10 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualDesktopDataSource::QueryInterface(
        VirtualDesktopDataSource *this,
        struct _GUID *a2,
        void **a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r10
  _DWORD *v6; // rcx
  _DWORD *v7; // rcx
  void **v8; // r8
  void *v9; // r10
  _DWORD *v10; // rcx
  _DWORD *v11; // rcx
  __int64 v12; // r10
  __int64 v13; // r9
  int CanCastTo; // ebx

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( InlineIsEqualGUID(v6, &GUID_d695e3e4_4996_4604_85d7_84f7ca94029f)
    || InlineIsEqualGUID(v7, &GUID_00000038_0000_0000_c000_000000000046) )
  {
    *v8 = v9;
    CanCastTo = 0;
    goto LABEL_14;
  }
  if ( InlineIsEqualGUID(v10, &GUID_7f331592_08ca_41ff_a77d_f2138806e857)
    || InlineIsEqualGUID(v11, &GUID_6a44b01b_d9f2_4ed1_afbc_430477598dfc) )
  {
    *v8 = (void *)v12;
    goto LABEL_12;
  }
  if ( *(_DWORD *)v13 == -1049021620
    && *(_DWORD *)(v13 + 4) == *(_DWORD *)&GUID_c179334c_4295_40d3_bea1_c654d965605a.Data2
    && *(_DWORD *)(v13 + 8) == *(_DWORD *)GUID_c179334c_4295_40d3_bea1_c654d965605a.Data4
    && *(_DWORD *)(v13 + 12) == *(_DWORD *)&GUID_c179334c_4295_40d3_bea1_c654d965605a.Data4[4] )
  {
    *v8 = (void *)(v12 + 8);
LABEL_12:
    CanCastTo = 0;
    goto LABEL_13;
  }
  CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v12 + 16), (const struct _GUID *)v13, v8);
  if ( CanCastTo == -2147467262 )
    CanCastTo = -2147467262;
LABEL_13:
  if ( CanCastTo >= 0 )
LABEL_14:
    (*(void (__fastcall **)(void *))(*(_QWORD *)*v8 + 8LL))(*v8);
  return (unsigned int)CanCastTo;
}
