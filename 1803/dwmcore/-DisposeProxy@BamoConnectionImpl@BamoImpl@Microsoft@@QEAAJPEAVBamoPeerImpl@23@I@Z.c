/*
 * XREFs of ?DisposeProxy@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBamoPeerImpl@23@I@Z @ 0x180153720
 * Callers:
 *     ?Thunk_DisposeProxy_5@?$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180154BA0 (-Thunk_DisposeProxy_5@-$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl@@@@SAJ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801430F8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x180153664 (-Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154E44 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoConnectionImpl::DisposeProxy(
        Microsoft::BamoImpl::BamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BamoPeerImpl *a2,
        __int64 a3)
{
  unsigned int v3; // esi
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  const char *v8; // r9
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::BamoImpl::BamoProxyImpl *v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_DWORD *)a2 + 9);
  v5 = a3;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, Microsoft::BamoImpl::BamoProxyImpl **))(**((_QWORD **)this + 5)
                                                                                                 + 56LL))(
         *((_QWORD *)this + 5),
         v3,
         a3,
         &v12);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x389,
      (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v6,
      v10);
    __debugbreak();
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 5) + 40LL))(
         *((_QWORD *)this + 5),
         v3,
         v5,
         0LL);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x38B,
      (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v7,
      v10);
    __debugbreak();
  }
  if ( *((int *)v12 + 2) > 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x394,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      v8);
    __debugbreak();
  }
  Microsoft::BamoImpl::BamoProxyImpl::Disconnect(v12, 0);
  return 0LL;
}
