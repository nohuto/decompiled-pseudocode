/*
 * XREFs of ?QueryInterface@DWMInputTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800215C0
 * Callers:
 *     ?QueryInterface@DWMInputTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180022510 (-QueryInterface@DWMInputTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputTarget@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180022520 (-QueryInterface@DWMInputTarget@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputTarget@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180022560 (-QueryInterface@DWMInputTarget@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputTarget@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800225B0 (-QueryInterface@DWMInputTarget@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180022600 (-QueryInterface@DWMInputTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputTarget@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180022610 (-QueryInterface@DWMInputTarget@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputTarget::QueryInterface(DWMInputTarget *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // esi
  char v6; // al
  int v7; // r9d
  char *v8; // rax

  v3 = 0;
  if ( !a3 )
  {
    v6 = 87;
    v3 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 262;
LABEL_28:
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 3, v7, v6);
      return v3;
    }
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data4 )
  {
    (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)this + 8;
LABEL_25:
    *a3 = v8;
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ce017166_b885_4259_a1c9_31032455b8b4.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_ce017166_b885_4259_a1c9_31032455b8b4.Data4 )
  {
    (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)this + 16;
    goto LABEL_25;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data4 )
  {
    (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)this + 24;
    goto LABEL_25;
  }
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
    v8 = (char *)this + 32;
    goto LABEL_25;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f.Data4 )
  {
    (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)this + 40;
    goto LABEL_25;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)this + 48;
    goto LABEL_25;
  }
  v6 = 2;
  v3 = -2147467262;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 309;
    goto LABEL_28;
  }
  return v3;
}
