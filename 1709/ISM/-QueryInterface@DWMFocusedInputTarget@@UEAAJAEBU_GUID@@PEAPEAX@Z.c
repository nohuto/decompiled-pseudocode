/*
 * XREFs of ?QueryInterface@DWMFocusedInputTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180024170
 * Callers:
 *     ?QueryInterface@DWMFocusedInputTarget@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180024AA0 (-QueryInterface@DWMFocusedInputTarget@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMFocusedInputTarget@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180024AC0 (-QueryInterface@DWMFocusedInputTarget@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMFocusedInputTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180024AF0 (-QueryInterface@DWMFocusedInputTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMFocusedInputTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180024B00 (-QueryInterface@DWMFocusedInputTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMFocusedInputTarget::QueryInterface(
        DWMFocusedInputTarget *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // edi
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
      v7 = 87;
LABEL_22:
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v7, v6);
      return v3;
    }
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data4 )
  {
    (*(void (__fastcall **)(DWMFocusedInputTarget *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)this + 16;
LABEL_19:
    *a3 = v8;
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data4 )
  {
    (*(void (__fastcall **)(DWMFocusedInputTarget *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)this + 24;
    goto LABEL_19;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data4 )
  {
    (*(void (__fastcall **)(DWMFocusedInputTarget *))(*(_QWORD *)this + 8LL))(this);
    *a3 = this;
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_893a3ef5_5847_4e8c_ac18_49e5cc560a78.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_893a3ef5_5847_4e8c_ac18_49e5cc560a78.Data4 )
  {
    (*(void (__fastcall **)(DWMFocusedInputTarget *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)this + 8;
    goto LABEL_19;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    (*(void (__fastcall **)(DWMFocusedInputTarget *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)this + 32;
    goto LABEL_19;
  }
  v6 = 2;
  v3 = -2147467262;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 121;
    goto LABEL_22;
  }
  return v3;
}
