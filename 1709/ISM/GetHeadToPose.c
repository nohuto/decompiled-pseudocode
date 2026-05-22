/*
 * XREFs of GetHeadToPose @ 0x180091098
 * Callers:
 *     ?UpdateRigTransforms@SpatialInputControllerCollection@@AEAAXPEAUIPerceptionTimestamp@Perception@Windows@@PEA_J@Z @ 0x180091444 (-UpdateRigTransforms@SpatialInputControllerCollection@@AEAAXPEAUIPerceptionTimestamp@Perception@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetHeadToPose(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        __int64 a2,
        __int64 a3,
        _OWORD *a4)
{
  int v7; // ebx
  int v8; // eax
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v10; // rdx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, _QWORD *); // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD v17[2]; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v18[4]; // [rsp+30h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  __int64 v20; // [rsp+90h] [rbp+20h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+A8h] [rbp+38h] BYREF

  v17[1] = -2LL;
  *a4 = _xmm;
  a4[1] = _xmm;
  a4[2] = _xmm;
  a4[3] = _xmm;
  v20 = 0LL;
  if ( a1 )
  {
    v7 = (**a1)(a1, &GUID_1dc46154_efc9_4d3c_b5ce_29877f3734a9, &v20);
    if ( v7 < 0 )
      goto LABEL_21;
LABEL_15:
    v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 104LL))(v20, a3);
    v7 = v13;
    if ( v13 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v20 + 56LL))(v20, v18);
      v7 = v13;
      if ( v13 >= 0 )
      {
        *a4 = v18[0];
        a4[1] = v18[1];
        a4[2] = v18[2];
        a4[3] = v18[3];
        v7 = 0;
        goto LABEL_21;
      }
      v14 = 422LL;
    }
    else
    {
      v14 = 421LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v14,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_21;
  }
  v17[0] = 0LL;
  GetSystemTimePreciseAsFileTime(v17);
  v21 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)a2 + 48LL))(a2, v17[0], &v21);
  v7 = v8;
  if ( v8 >= 0 )
  {
    v9 = v21;
    if ( v21 )
    {
      v10 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        v9 = v21;
      }
      v7 = (**v9)(v9, &GUID_1dc46154_efc9_4d3c_b5ce_29877f3734a9, &v20);
      if ( v7 >= 0 )
      {
        v12 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v12)[2])(v12);
        }
        goto LABEL_15;
      }
    }
    else
    {
      v7 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)0x8000FFFFLL);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x19E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v8);
  }
  v11 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v11)[2])(v11);
  }
LABEL_21:
  v15 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return (unsigned int)v7;
}
