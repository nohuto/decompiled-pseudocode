/*
 * XREFs of ?QueryInterface@DWMInputTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800183D0
 * Callers:
 *     ?QueryInterface@DWMInputTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180018F00 (-QueryInterface@DWMInputTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputTarget@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180018F10 (-QueryInterface@DWMInputTarget@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputTarget@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180018F70 (-QueryInterface@DWMInputTarget@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputTarget@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180018F80 (-QueryInterface@DWMInputTarget@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputTarget@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180018FD0 (-QueryInterface@DWMInputTarget@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180019020 (-QueryInterface@DWMInputTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputTarget@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180019030 (-QueryInterface@DWMInputTarget@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputTarget::QueryInterface(DWMInputTarget *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  char *v6; // rax

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data4 )
    {
      (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)this + 8LL))(this);
      v6 = (char *)this + 8;
    }
    else if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ce017166_b885_4259_a1c9_31032455b8b4.Data1
           && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_ce017166_b885_4259_a1c9_31032455b8b4.Data4 )
    {
      (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)this + 8LL))(this);
      v6 = (char *)this + 16;
    }
    else if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data1
           && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data4 )
    {
      (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)this + 8LL))(this);
      v6 = (char *)this + 24;
    }
    else
    {
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1
        && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data4 )
      {
        (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)this + 8LL))(this);
        *a3 = this;
        return v3;
      }
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_893a3ef5_5847_4e8c_ac18_49e5cc560a78.Data1
        && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_893a3ef5_5847_4e8c_ac18_49e5cc560a78.Data4 )
      {
        (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)this + 8LL))(this);
        v6 = (char *)this + 32;
      }
      else if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f.Data1
             && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f.Data4 )
      {
        (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)this + 8LL))(this);
        v6 = (char *)this + 40;
      }
      else if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea.Data1
             && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea.Data4 )
      {
        (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)this + 8LL))(this);
        v6 = (char *)this + 48;
      }
      else
      {
        if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
          || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
        {
          return (unsigned int)-2147467262;
        }
        (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)this + 8LL))(this);
        v6 = (char *)this + 56;
      }
    }
    *a3 = v6;
    return v3;
  }
  return (unsigned int)-2147024809;
}
