/*
 * XREFs of ?SetMatrix4x4Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIAEBU_D3DMATRIX@@@Z @ 0x18008EA04
 * Callers:
 *     ?BroadcastSetMatrix4x4Value@BamoDataSourcePrincipal@@UEAAJIAEBU_D3DMATRIX@@@Z @ 0x18008CBA0 (-BroadcastSetMatrix4x4Value@BamoDataSourcePrincipal@@UEAAJIAEBU_D3DMATRIX@@@Z.c)
 *     ?SetMatrix4x4Value@BamoDataSourceStub@@UEAAJIAEBU_D3DMATRIX@@@Z @ 0x18008D600 (-SetMatrix4x4Value@BamoDataSourceStub@@UEAAJIAEBU_D3DMATRIX@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceStubImpl::SetMatrix4x4Value(
        BamoImpl::BamoDataSourceStubImpl *this,
        int a2,
        const struct _D3DMATRIX *a3)
{
  __int64 v3; // r9
  __int64 v5; // r10
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // rdx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // rcx
  __int16 v13; // [rsp+20h] [rbp-78h]
  _QWORD v14[2]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v15; // [rsp+50h] [rbp-48h]
  __int128 v16; // [rsp+60h] [rbp-38h]
  __int128 v17; // [rsp+70h] [rbp-28h]
  __int128 v18; // [rsp+80h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v3 = *((_QWORD *)this + 5);
  v5 = *(_QWORD *)(*(_QWORD *)(v3 + 24) + 24LL);
  if ( *(_QWORD *)(v5 + 40) )
  {
    if ( *((_BYTE *)this + 32) )
    {
      v7 = *(_OWORD *)&a3->_11;
      v8 = *(_OWORD *)&a3->_21;
      v9 = *(unsigned int *)(*((_QWORD *)this + 3) + 24LL);
      v14[0] = *(unsigned int *)(v3 + 36);
      v14[1] = v9;
      v15 = v7;
      v10 = *(_OWORD *)&a3->_31;
      v16 = v8;
      v11 = *(_OWORD *)&a3->_41;
      v13 = 8;
      v12 = *(_QWORD *)(v5 + 48);
      v17 = v10;
      v18 = v11;
      return CoreUICallSend(v12, v14, 2LL, 5LL, v13, &unk_1800FE168, a2);
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
        (void *)0x8CA,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
        (const char *)0x87B20805LL);
      return 2276591621LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8C3,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
