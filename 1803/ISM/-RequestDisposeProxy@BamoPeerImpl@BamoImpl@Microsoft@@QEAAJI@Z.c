/*
 * XREFs of ?RequestDisposeProxy@BamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z @ 0x18001B810
 * Callers:
 *     ?Thunk_RequestDisposeProxy_0@?$IBamoPeer_ISMBamos_Receive@VISMBamosBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180020080 (-Thunk_RequestDisposeProxy_0@-$IBamoPeer_ISMBamos_Receive@VISMBamosBamoPeerImpl@BamoImpl@@@@SAJP.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoPeerImpl::RequestDisposeProxy(
        Microsoft::BamoImpl::BamoPeerImpl *this,
        unsigned int a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 *i; // rbx
  __int64 v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 40LL);
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v3 + 56LL))(
         v3,
         *((unsigned int *)this + 9),
         a2,
         &v9);
  if ( v4 != -2018375675 )
  {
    if ( v4 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x365,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
    for ( i = *(__int64 **)(v9 + 32); i && *(_DWORD *)(i[5] + 36) != *((_DWORD *)this + 9); i = (__int64 *)i[6] )
      ;
    if ( *((int *)i + 4) <= 0 )
    {
      (*(void (__fastcall **)(Microsoft::BamoImpl::BamoPeerImpl *, _QWORD))(*(_QWORD *)this + 72LL))(
        this,
        *(unsigned int *)(v9 + 24));
      v6 = *i;
      *((_BYTE *)i + 32) = 0;
      (*(void (__fastcall **)(__int64 *))(v6 + 48))(i);
    }
  }
  return 0LL;
}
