/*
 * XREFs of ?QueryInterface@DWMInputRouter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007D210
 * Callers:
 *     ?QueryInterface@DWMInputRouter@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180082290 (-QueryInterface@DWMInputRouter@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800822B0 (-QueryInterface@DWMInputRouter@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800822C0 (-QueryInterface@DWMInputRouter@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180082320 (-QueryInterface@DWMInputRouter@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180082330 (-QueryInterface@DWMInputRouter@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180082390 (-QueryInterface@DWMInputRouter@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800823A0 (-QueryInterface@DWMInputRouter@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180082410 (-QueryInterface@DWMInputRouter@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180082420 (-QueryInterface@DWMInputRouter@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180084C90 (-QueryInterface@MPCInputRouter@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::QueryInterface(DWMInputRouter *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // edi
  char *v6; // rax

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f61d2579_c998_4734_9f88_0b4bc8bcf062.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_f61d2579_c998_4734_9f88_0b4bc8bcf062.Data4 )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
      v6 = (char *)this + 24;
    }
    else if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_adcbf490_e8c4_4bfa_8754_f40fc58292fc.Data1
           && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_adcbf490_e8c4_4bfa_8754_f40fc58292fc.Data4 )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
      v6 = (char *)this + 32;
    }
    else if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data1
           && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data4 )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
      v6 = (char *)this + 40;
    }
    else if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2c69163a_7c54_4b7e_9bb0_9205dcbdf300.Data1
           && (*(_QWORD *)a2->Data4 == *(_QWORD *)GUID_2c69163a_7c54_4b7e_9bb0_9205dcbdf300.Data4
            || *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2c69163a_7c54_4b7e_9bb0_9205dcbdf300.Data1
            && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_2c69163a_7c54_4b7e_9bb0_9205dcbdf300.Data4) )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
      v6 = (char *)this + 16;
    }
    else if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f8f53ba5_0c4b_4f50_b518_3a16eb36ec00.Data1
           && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_f8f53ba5_0c4b_4f50_b518_3a16eb36ec00.Data4 )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
      v6 = (char *)this + 56;
    }
    else if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b694737b_3300_4bb1_8b67_44715c8db610.Data1
           && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_b694737b_3300_4bb1_8b67_44715c8db610.Data4 )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
      v6 = (char *)this + 8;
    }
    else if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b9402cea_5976_45e1_baa3_22754843b1af.Data1
           && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_b9402cea_5976_45e1_baa3_22754843b1af.Data4 )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
      v6 = (char *)this + 48;
    }
    else if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f8a5030e_f489_4cf1_9395_60d6eaf4b21f.Data1
           && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_f8a5030e_f489_4cf1_9395_60d6eaf4b21f.Data4 )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
      v6 = (char *)this + 64;
    }
    else
    {
      if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
        || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
      {
        return (unsigned int)-2147467262;
      }
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
      v6 = (char *)this + 72;
    }
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
