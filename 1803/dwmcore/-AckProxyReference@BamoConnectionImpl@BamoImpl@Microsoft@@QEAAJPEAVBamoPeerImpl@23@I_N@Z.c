/*
 * XREFs of ?AckProxyReference@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBamoPeerImpl@23@I_N@Z @ 0x180153240
 * Callers:
 *     ?Thunk_AckProxyReference_8@?$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180154B20 (-Thunk_AckProxyReference_8@-$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801430F8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?RequestDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoPeerImpl@23@PEAVBamoStubImpl@23@@Z @ 0x180154754 (-RequestDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoPeerImpl@23@PEAVBamoStub.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154E44 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoConnectionImpl::AckProxyReference(
        Microsoft::BamoImpl::BamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BamoPeerImpl *a2,
        __int64 a3,
        char a4)
{
  int v6; // eax
  const char *v7; // r9
  Microsoft::BamoImpl::BamoPrincipalImpl *v8; // rcx
  __int64 i; // r8
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::BamoImpl::BamoPrincipalImpl *v13; // [rsp+40h] [rbp+8h] BYREF

  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, Microsoft::BamoImpl::BamoPrincipalImpl **))(**((_QWORD **)this + 5) + 56LL))(
         *((_QWORD *)this + 5),
         *((unsigned int *)a2 + 9),
         a3,
         &v13);
  if ( v6 != -2018375675 )
  {
    if ( v6 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x33C,
        (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
        (const char *)(unsigned int)v6,
        v11);
      __debugbreak();
    }
    v8 = v13;
    for ( i = *((_QWORD *)v13 + 4);
          i && *(_DWORD *)(*(_QWORD *)(i + 40) + 36LL) != *((_DWORD *)a2 + 9);
          i = *(_QWORD *)(i + 48) )
    {
      ;
    }
    if ( !*(_DWORD *)(i + 16) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xBA,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\BamoStub.inl",
        v7);
      __debugbreak();
    }
    _InterlockedDecrement((volatile signed __int32 *)(i + 16));
    if ( !a4 )
      Microsoft::BamoImpl::BamoPrincipalImpl::RequestDisposeProxy(v8, a2, (struct Microsoft::BamoImpl::BamoStubImpl *)i);
  }
  return 0LL;
}
