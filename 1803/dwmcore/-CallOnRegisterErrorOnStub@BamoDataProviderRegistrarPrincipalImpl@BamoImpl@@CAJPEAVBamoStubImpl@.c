/*
 * XREFs of ?CallOnRegisterErrorOnStub@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@I@Z @ 0x180168814
 * Callers:
 *     ?BroadcastOnRegisterError@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x18016868C (-BroadcastOnRegisterError@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180168884 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnRegisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z @ 0x180168AD0 (-OnRegisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderRegistrarPrincipalImpl::CallOnRegisterErrorOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = BamoImpl::BamoDataProviderRegistrarStubImpl::OnRegisterError(a1, a2);
  if ( (int)(v2 + 0x80000000) >= 0 && v2 != -2018375675 )
  {
    wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0x43A, v3, (const char *)v2, v5);
    __debugbreak();
  }
  return 0LL;
}
