/*
 * XREFs of GetRigToHead @ 0x1800912BC
 * Callers:
 *     ?UpdateRigTransforms@SpatialInputControllerCollection@@AEAAXPEAUIPerceptionTimestamp@Perception@Windows@@PEA_J@Z @ 0x180091444 (-UpdateRigTransforms@SpatialInputControllerCollection@@AEAAXPEAUIPerceptionTimestamp@Perception@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180049870 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetRigToHead(__int64 a1, _OWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v7; // r8
  __int64 v8; // rcx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // rcx
  _OWORD v11[4]; // [rsp+38h] [rbp-29h] BYREF
  _BYTE v12[64]; // [rsp+78h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  __int64 v14; // [rsp+C8h] [rbp+67h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+D0h] [rbp+6Fh] BYREF

  *a2 = _xmm;
  a2[1] = _xmm;
  a2[2] = _xmm;
  a2[3] = _xmm;
  v15 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)a1 + 88LL))(
         a1,
         &v15);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1B3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_13;
  }
  v14 = 0LL;
  v5 = (**v15)(v15, &GUID_fef1006c_39a7_4201_957f_a8a060e4170e, &v14);
  v4 = v5;
  if ( v5 < 0 )
  {
    v6 = 438LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_11;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v14 + 48LL))(v14, v12);
  v4 = v5;
  if ( v5 < 0 )
  {
    v6 = 441LL;
    goto LABEL_7;
  }
  if ( Windows::Foundation::Numerics::invert(
         (Windows::Foundation::Numerics *)v12,
         (const struct Windows::Foundation::Numerics::float4x4 *)v11,
         v7) )
  {
    *a2 = v11[0];
    a2[1] = v11[1];
    a2[2] = v11[2];
    a2[3] = v11[3];
    v4 = 0;
  }
  else
  {
    v4 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BC,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)0x8000FFFFLL);
  }
LABEL_11:
  v8 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
LABEL_13:
  v9 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v9)[2])(v9);
  }
  return v4;
}
