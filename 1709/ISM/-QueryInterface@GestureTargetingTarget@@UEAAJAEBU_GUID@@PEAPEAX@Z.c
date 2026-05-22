/*
 * XREFs of ?QueryInterface@GestureTargetingTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180014D70
 * Callers:
 *     ?QueryInterface@GestureTargetingTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180016990 (-QueryInterface@GestureTargetingTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GestureTargetingTarget::QueryInterface(
        GestureTargetingTarget *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // edi
  int v6; // eax
  __int64 v7; // rcx

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      (*(void (__fastcall **)(GestureTargetingTarget *))(*(_QWORD *)this + 8LL))(this);
      *a3 = (char *)this + 8;
    }
    else if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1
           && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data4
           || *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_893a3ef5_5847_4e8c_ac18_49e5cc560a78.Data1
           && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_893a3ef5_5847_4e8c_ac18_49e5cc560a78.Data4
           || *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e87fc714_114e_43a7_a95e_1e76656cf895.Data1
           && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_e87fc714_114e_43a7_a95e_1e76656cf895.Data4 )
    {
      (*(void (__fastcall **)(GestureTargetingTarget *))(*(_QWORD *)this + 8LL))(this);
      *a3 = this;
    }
    else
    {
      v6 = (***((__int64 (__fastcall ****)(_QWORD))this + 4))(*((_QWORD *)this + 4));
      v3 = v6;
      if ( v6 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 4, 136, v6);
    }
  }
  else
  {
    v3 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 4, 107, 87);
  }
  return v3;
}
