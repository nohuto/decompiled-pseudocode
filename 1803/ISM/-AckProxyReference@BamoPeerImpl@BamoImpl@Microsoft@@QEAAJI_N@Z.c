/*
 * XREFs of ?AckProxyReference@BamoPeerImpl@BamoImpl@Microsoft@@QEAAJI_N@Z @ 0x18001B72C
 * Callers:
 *     ?Thunk_AckProxyReference_8@?$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180020060 (-Thunk_AckProxyReference_8@-$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl@@.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoPeerImpl::AckProxyReference(
        Microsoft::BamoImpl::BamoPeerImpl *this,
        unsigned int a2,
        char a3)
{
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  const char *v9; // r9
  __int64 v10; // rcx
  __int64 *i; // rbx
  __int64 v12; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v5 = a2;
  v6 = *((unsigned int *)this + 9);
  v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 40LL);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v7 + 56LL))(v7, v6, v5, &v15);
  if ( v8 != -2018375675 )
  {
    if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x33C,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
    v10 = v15;
    for ( i = *(__int64 **)(v15 + 32); i && *(_DWORD *)(i[5] + 36) != *((_DWORD *)this + 9); i = (__int64 *)i[6] )
      ;
    if ( !*((_DWORD *)i + 4) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xBA,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamostub.inl",
        v9);
      JUMPOUT(0x18001B80ELL);
    }
    _InterlockedDecrement((volatile signed __int32 *)i + 4);
    if ( !a3 && *((int *)i + 4) <= 0 )
    {
      (*(void (__fastcall **)(Microsoft::BamoImpl::BamoPeerImpl *, _QWORD))(*(_QWORD *)this + 72LL))(
        this,
        *(unsigned int *)(v10 + 24));
      v12 = *i;
      *((_BYTE *)i + 32) = 0;
      (*(void (__fastcall **)(__int64 *))(v12 + 48))(i);
    }
  }
  return 0LL;
}
