/*
 * XREFs of ?SetColorValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x18008E7F8
 * Callers:
 *     ?SetColorValue@BamoDataSourceStub@@UEAAJIMMMM@Z @ 0x18008D450 (-SetColorValue@BamoDataSourceStub@@UEAAJIMMMM@Z.c)
 *     ?CallSetColorValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IMMMM@Z @ 0x18008E150 (-CallSetColorValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@I.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceStubImpl::SetColorValue(
        BamoImpl::BamoDataSourceStubImpl *this,
        int a2,
        float a3,
        float a4)
{
  __int64 v4; // r8
  __int64 v5; // r10
  __int64 v7; // rax
  __int16 v8; // [rsp+20h] [rbp-58h]
  _QWORD v9[3]; // [rsp+60h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v4 = *((_QWORD *)this + 5);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL);
  if ( *(_QWORD *)(v5 + 40) )
  {
    if ( *((_BYTE *)this + 32) )
    {
      v7 = *(unsigned int *)(v4 + 36);
      v9[1] = *(unsigned int *)(*((_QWORD *)this + 3) + 24LL);
      v9[0] = v7;
      v8 = 6;
      return CoreUICallSend(*(_QWORD *)(v5 + 48), v9, 2LL, 5LL, v8, &unk_1800FE15B, a2);
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
        (void *)0x89E,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
        (const char *)0x87B20805LL);
      return 2276591621LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x897,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
