/*
 * XREFs of ?SetBootstrapProxy@MPCManagerClientConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x18002B520
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCManagerClientConnection::SetBootstrapProxy(
        MPCManagerClientConnection *this,
        struct Microsoft::Bamo::BamoProxy *a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 160);
  v4 = *((_QWORD *)this + 20);
  *v2 = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = (*(__int64 (__fastcall **)(struct Microsoft::Bamo::BamoProxy *, GUID *, _QWORD *))(*(_QWORD *)a2 + 16LL))(
         a2,
         &GUID_1fbad477_0ab7_f306_475a_43048e4c6e18,
         v2);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x29,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclientconnection.cpp",
      (const char *)(unsigned int)v5);
    JUMPOUT(0x18002B591LL);
  }
  return 0LL;
}
