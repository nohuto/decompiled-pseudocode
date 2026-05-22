/*
 * XREFs of GetHeadToPose @ 0x1800A83D0
 * Callers:
 *     ?UpdateRigTransforms@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAXPEAUIPerceptionTimestamp@Perception@4@PEA_J@Z @ 0x1800A8760 (-UpdateRigTransforms@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
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
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v12; // rdx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, _QWORD *); // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD v19[2]; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v20[4]; // [rsp+30h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  __int64 v22; // [rsp+90h] [rbp+20h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // [rsp+A8h] [rbp+38h] BYREF

  v19[1] = -2LL;
  *a4 = _xmm;
  a4[1] = _xmm;
  a4[2] = _xmm;
  a4[3] = _xmm;
  v22 = 0LL;
  if ( a1 )
  {
    v7 = (**a1)(a1, &GUID_1dc46154_efc9_4d3c_b5ce_29877f3734a9, &v22);
    if ( v7 < 0 )
      goto LABEL_22;
LABEL_16:
    v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 104LL))(v22, a3);
    v7 = v15;
    if ( v15 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v22 + 56LL))(v22, v20);
      v7 = v15;
      if ( v15 >= 0 )
      {
        *a4 = v20[0];
        a4[1] = v20[1];
        a4[2] = v20[2];
        a4[3] = v20[3];
        v7 = 0;
        goto LABEL_22;
      }
      v16 = 1079LL;
    }
    else
    {
      v16 = 1078LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_22;
  }
  v19[0] = 0LL;
  GetSystemTimePreciseAsFileTime(v19);
  v23 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)a2 + 48LL))(a2, v19[0], &v23);
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = (unsigned int)v8;
    v10 = 1071LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)v9);
    goto LABEL_12;
  }
  v11 = v23;
  if ( !v23 )
  {
    v7 = -2147418113;
    v9 = 2147549183LL;
    v10 = 1072LL;
    goto LABEL_8;
  }
  v12 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v11 = v23;
  }
  v7 = (**v11)(v11, &GUID_1dc46154_efc9_4d3c_b5ce_29877f3734a9, &v22);
  if ( v7 >= 0 )
  {
    v14 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v14)[2])(v14);
    }
    goto LABEL_16;
  }
LABEL_12:
  v13 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v13)[2])(v13);
  }
LABEL_22:
  v17 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return (unsigned int)v7;
}
