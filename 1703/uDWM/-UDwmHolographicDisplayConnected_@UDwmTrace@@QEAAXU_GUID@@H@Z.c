/*
 * XREFs of ?UDwmHolographicDisplayConnected_@UDwmTrace@@QEAAXU_GUID@@H@Z @ 0x1800746C8
 * Callers:
 *     ??$UDwmHolographicDisplayConnected@AEAU_GUID@@_N@UDwmTrace@@SAXAEAU_GUID@@$$QEA_N@Z @ 0x180072BF8 (--$UDwmHolographicDisplayConnected@AEAU_GUID@@_N@UDwmTrace@@SAXAEAU_GUID@@$$QEA_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180016430 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x180074B68 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 */

void __fastcall UDwmTrace::UDwmHolographicDisplayConnected_(UDwmTrace *this, struct _GUID *a2, int a3)
{
  _DWORD *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  struct _GUID *v7; // [rsp+50h] [rbp-48h]
  int v8; // [rsp+58h] [rbp-40h]
  int v9; // [rsp+5Ch] [rbp-3Ch]
  int *v10; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]
  int v13; // [rsp+B0h] [rbp+18h] BYREF

  v13 = a3;
  v4 = *(_DWORD **)(wil::details::static_lazy<UDwmTrace>::get(
                      this,
                      lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_)
                  + 8);
  if ( v4 )
  {
    if ( *v4 )
    {
      v5 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<UDwmTrace>::get(
                                               v4,
                                               lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_)
                                           + 8);
      if ( *(_DWORD *)v5 > 4u
        && (*((_QWORD *)v5 + 2) & 0x400000000000LL) != 0
        && (*((_QWORD *)v5 + 3) & 0x400000000000LL) == *((_QWORD *)v5 + 3) )
      {
        v9 = 0;
        v12 = 0;
        v10 = &v13;
        v7 = a2;
        v8 = 16;
        v11 = 4;
        TlgWrite(v5, &unk_1800AEE71, 0LL, 0LL, 4u, &pData);
      }
    }
  }
}
