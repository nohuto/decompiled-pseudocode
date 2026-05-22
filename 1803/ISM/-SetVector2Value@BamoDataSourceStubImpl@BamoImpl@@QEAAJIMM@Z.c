/*
 * XREFs of ?SetVector2Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMM@Z @ 0x18008E3E8
 * Callers:
 *     ?BroadcastSetVector2Value@BamoDataSourcePrincipal@@UEAAJIMM@Z @ 0x18008C3F0 (-BroadcastSetVector2Value@BamoDataSourcePrincipal@@UEAAJIMM@Z.c)
 *     ?SetVector2Value@BamoDataSourceStub@@UEAAJIMM@Z @ 0x18008D0C0 (-SetVector2Value@BamoDataSourceStub@@UEAAJIMM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceStubImpl::SetVector2Value(
        BamoImpl::BamoDataSourceStubImpl *this,
        int a2,
        float a3,
        float a4)
{
  __int64 v4; // r8
  __int64 v5; // r10
  __int64 v7; // rax
  __int16 v8; // [rsp+20h] [rbp-48h]
  _QWORD v9[3]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = *((_QWORD *)this + 5);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL);
  if ( *(_QWORD *)(v5 + 40) )
  {
    if ( *((_BYTE *)this + 32) )
    {
      v7 = *(unsigned int *)(v4 + 36);
      v9[1] = *(unsigned int *)(*((_QWORD *)this + 3) + 24LL);
      v9[0] = v7;
      v8 = 2;
      return CoreUICallSend(*(_QWORD *)(v5 + 48), v9, 2LL, 5LL, v8, &unk_1800FE150, a2);
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
        (void *)0x83B,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
        (const char *)0x87B20805LL);
      return 2276591621LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x834,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
