/*
 * XREFs of ?BroadcastOnRegisterError@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x18016868C
 * Callers:
 *     ?BroadcastOnRegisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z @ 0x180168640 (-BroadcastOnRegisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CallOnRegisterErrorOnStub@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@I@Z @ 0x180168814 (-CallOnRegisterErrorOnStub@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderRegistrarPrincipalImpl::BroadcastOnRegisterError(
        BamoImpl::BamoDataProviderRegistrarPrincipalImpl *this,
        unsigned int a2)
{
  __int64 i; // rbx
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 40LL) )
  {
    for ( i = *((_QWORD *)this + 4); ; i = *(_QWORD *)(i + 48) )
    {
      if ( !i )
        return 0;
      if ( *(_BYTE *)(i + 32) )
      {
        v5 = BamoImpl::BamoDataProviderRegistrarPrincipalImpl::CallOnRegisterErrorOnStub(
               (struct Microsoft::BamoImpl::BamoStubImpl *)i,
               a2);
        v6 = v5;
        if ( v5 < 0 )
          break;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BC,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
      (const char *)(unsigned int)v5);
    return v6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x351,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
