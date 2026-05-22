/*
 * XREFs of ?SetBooleanValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJI_N@Z @ 0x18008E244
 * Callers:
 *     ?BroadcastSetBooleanValue@BamoDataSourcePrincipal@@UEAAJI_N@Z @ 0x18008C170 (-BroadcastSetBooleanValue@BamoDataSourcePrincipal@@UEAAJI_N@Z.c)
 *     ?SetBooleanValue@BamoDataSourceStub@@UEAAJI_N@Z @ 0x18008CF40 (-SetBooleanValue@BamoDataSourceStub@@UEAAJI_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceStubImpl::SetBooleanValue(BamoImpl::BamoDataSourceStubImpl *this, int a2)
{
  __int64 v2; // r9
  __int64 v4; // r10
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v8; // rdx
  __int16 v9; // [rsp+20h] [rbp-38h]
  _QWORD v10[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *((_QWORD *)this + 5);
  v4 = *(_QWORD *)(*(_QWORD *)(v2 + 24) + 24LL);
  if ( !*(_QWORD *)(v4 + 40) )
  {
    v5 = -2018375660;
    v6 = 2055LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
      (const char *)v5);
    return v5;
  }
  if ( !*((_BYTE *)this + 32) )
  {
    v5 = -2018375675;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x122,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamostub.inl",
      (const char *)0x87B20805LL);
    v6 = 2062LL;
    goto LABEL_3;
  }
  v8 = *(unsigned int *)(*((_QWORD *)this + 3) + 24LL);
  v10[0] = *(unsigned int *)(v2 + 36);
  v10[1] = v8;
  v9 = 0;
  return CoreUICallSend(*(_QWORD *)(v4 + 48), v10, 2LL, 5LL, v9, &unk_1800FE148, a2);
}
