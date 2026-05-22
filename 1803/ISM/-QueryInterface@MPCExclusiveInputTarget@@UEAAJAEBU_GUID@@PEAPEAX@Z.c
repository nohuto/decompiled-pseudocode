/*
 * XREFs of ?QueryInterface@MPCExclusiveInputTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800875E0
 * Callers:
 *     ?QueryInterface@MPCExclusiveInputTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180088330 (-QueryInterface@MPCExclusiveInputTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCExclusiveInputTarget@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180088350 (-QueryInterface@MPCExclusiveInputTarget@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCExclusiveInputTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180088370 (-QueryInterface@MPCExclusiveInputTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCExclusiveInputTarget::QueryInterface(
        MPCExclusiveInputTarget *this,
        const struct _GUID *a2,
        void **a3,
        const char *a4)
{
  unsigned int v6; // edi
  char *v7; // rax
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0;
  if ( !a3 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x80,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
      a4);
    JUMPOUT(0x180087783LL);
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    (*(void (__fastcall **)(MPCExclusiveInputTarget *))(*(_QWORD *)this + 8LL))(this);
    v7 = (char *)this + 24;
LABEL_12:
    *a3 = v7;
    return v6;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data4
    || *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_893a3ef5_5847_4e8c_ac18_49e5cc560a78.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_893a3ef5_5847_4e8c_ac18_49e5cc560a78.Data4 )
  {
LABEL_23:
    (*(void (__fastcall **)(MPCExclusiveInputTarget *))(*(_QWORD *)this + 8LL))(this);
    *a3 = this;
    return v6;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data4 )
  {
    (*(void (__fastcall **)(MPCExclusiveInputTarget *))(*(_QWORD *)this + 8LL))(this);
    v7 = (char *)this + 8;
    goto LABEL_12;
  }
  if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1
    || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data4 )
  {
    if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_0ffb2569_1e11_4fce_b7f2_9d15d794e042.Data1
      || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_0ffb2569_1e11_4fce_b7f2_9d15d794e042.Data4 )
    {
      return (unsigned int)-2147467262;
    }
    goto LABEL_23;
  }
  v12 = 0LL;
  v8 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 6);
  if ( v8 && (**v8)(v8, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v12) >= 0 )
  {
    (*(void (__fastcall **)(MPCExclusiveInputTarget *))(*(_QWORD *)this + 8LL))(this);
    *a3 = (char *)this + 16;
  }
  else
  {
    v6 = -2147467262;
  }
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v6;
}
