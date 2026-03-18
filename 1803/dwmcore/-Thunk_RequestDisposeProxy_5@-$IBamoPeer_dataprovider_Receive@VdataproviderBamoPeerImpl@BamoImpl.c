/*
 * XREFs of ?Thunk_RequestDisposeProxy_5@?$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180154CC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?RequestDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoPeerImpl@23@PEAVBamoStubImpl@23@@Z @ 0x180154754 (-RequestDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoPeerImpl@23@PEAVBamoStub.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154E44 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall IBamoPeer_dataprovider_Receive<BamoImpl::dataproviderBamoPeerImpl>::Thunk_RequestDisposeProxy_5(
        struct Microsoft::BamoImpl::BamoPeerImpl *a1,
        unsigned int **a2)
{
  __int64 v3; // rcx
  int v4; // eax
  struct Microsoft::BamoImpl::BamoStubImpl *i; // r8
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::BamoImpl::BamoPrincipalImpl *v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 24LL) + 40LL);
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, Microsoft::BamoImpl::BamoPrincipalImpl **))(*(_QWORD *)v3 + 56LL))(
         v3,
         *((unsigned int *)a1 + 9),
         **a2,
         &v9);
  if ( v4 != -2018375675 )
  {
    if ( v4 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x365,
        (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
        (const char *)(unsigned int)v4,
        v7);
      __debugbreak();
    }
    for ( i = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)v9 + 4);
          i && *(_DWORD *)(*((_QWORD *)i + 5) + 36LL) != *((_DWORD *)a1 + 9);
          i = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)i + 6) )
    {
      ;
    }
    Microsoft::BamoImpl::BamoPrincipalImpl::RequestDisposeProxy(v9, a1, i);
  }
  return 0LL;
}
