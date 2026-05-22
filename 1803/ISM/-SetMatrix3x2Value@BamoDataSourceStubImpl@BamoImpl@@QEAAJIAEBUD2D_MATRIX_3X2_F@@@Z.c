/*
 * XREFs of ?SetMatrix3x2Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18008E910
 * Callers:
 *     ?BroadcastSetMatrix3x2Value@BamoDataSourcePrincipal@@UEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18008CA60 (-BroadcastSetMatrix3x2Value@BamoDataSourcePrincipal@@UEAAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetMatrix3x2Value@BamoDataSourceStub@@UEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18008D540 (-SetMatrix3x2Value@BamoDataSourceStub@@UEAAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceStubImpl::SetMatrix3x2Value(
        BamoImpl::BamoDataSourceStubImpl *this,
        int a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  __int64 v3; // r9
  __int64 v5; // r10
  __int128 v7; // xmm0
  __int64 v8; // xmm1_8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int16 v11; // [rsp+20h] [rbp-58h]
  _QWORD v12[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v13; // [rsp+50h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = *((_QWORD *)this + 5);
  v5 = *(_QWORD *)(*(_QWORD *)(v3 + 24) + 24LL);
  if ( *(_QWORD *)(v5 + 40) )
  {
    if ( *((_BYTE *)this + 32) )
    {
      v7 = *(_OWORD *)&a3->m11;
      v8 = *(_QWORD *)&a3->m[2][0];
      v9 = *(unsigned int *)(*((_QWORD *)this + 3) + 24LL);
      v12[0] = *(unsigned int *)(v3 + 36);
      v12[1] = v9;
      v11 = 7;
      v10 = *(_QWORD *)(v5 + 48);
      v13 = v7;
      v14 = v8;
      return CoreUICallSend(v10, v12, 2LL, 5LL, v11, &unk_1800FE162, a2);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x122,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamostub.inl",
        (const char *)0x87B20805LL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8B4,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
        (const char *)0x87B20805LL);
      return 2276591621LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8AD,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
