/*
 * XREFs of ??$ApplicationViewBackedViewHostItem_get_Size@AEAIAEAMAEAM@HolographicPositionerTelemetry@@SAXAEAIAEAM1@Z @ 0x18010F74C
 * Callers:
 *     ?get_Size@ApplicationViewBackedViewHostItem@@UEAAJPEAUSize@Foundation@Windows@@@Z @ 0x18010E0A0 (-get_Size@ApplicationViewBackedViewHostItem@@UEAAJPEAUSize@Foundation@Windows@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@HolographicPositionerProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800F8A60 (-Provider@HolographicPositionerProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_get_Size<unsigned int &,float &,float &>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  const struct _TlgProvider_t *v6; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  __int64 v9; // [rsp+50h] [rbp-48h]
  __int64 v10; // [rsp+58h] [rbp-40h]
  __int64 v11; // [rsp+60h] [rbp-38h]
  __int64 v12; // [rsp+68h] [rbp-30h]
  __int64 v13; // [rsp+70h] [rbp-28h]
  __int64 v14; // [rsp+78h] [rbp-20h]

  v6 = HolographicPositionerProvider::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    v9 = a1;
    v10 = 4LL;
    v11 = a2;
    v12 = 4LL;
    v13 = a3;
    v14 = 4LL;
    LODWORD(v6) = TlgWrite(v6, &unk_18025F9C2, 0LL, 0LL, 5u, &pData);
  }
  return (int)v6;
}
