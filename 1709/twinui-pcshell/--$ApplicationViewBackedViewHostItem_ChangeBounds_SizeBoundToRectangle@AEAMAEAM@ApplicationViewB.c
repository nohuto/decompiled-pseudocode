/*
 * XREFs of ??$ApplicationViewBackedViewHostItem_ChangeBounds_SizeBoundToRectangle@AEAMAEAM@ApplicationViewBackedViewHostItem_ChangeBounds@HolographicPositionerTelemetry@@QEAAXAEAM0@Z @ 0x18010F6AC
 * Callers:
 *     ?ChangeBounds@ApplicationViewBackedViewHostItem@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18010DCD0 (-ChangeBounds@ApplicationViewBackedViewHostItem@@UEAAJUViewBounds@ViewManagerInterop@Shell@Inter.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@HolographicPositionerProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800F8A60 (-Provider@HolographicPositionerProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_ChangeBounds::ApplicationViewBackedViewHostItem_ChangeBounds_SizeBoundToRectangle<float &,float &>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  const struct _TlgProvider_t *v6; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  __int64 v9; // [rsp+50h] [rbp-38h]
  int v10; // [rsp+58h] [rbp-30h]
  int v11; // [rsp+5Ch] [rbp-2Ch]
  __int64 v12; // [rsp+60h] [rbp-28h]
  int v13; // [rsp+68h] [rbp-20h]
  int v14; // [rsp+6Ch] [rbp-1Ch]

  v6 = HolographicPositionerProvider::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    v11 = 0;
    v14 = 0;
    v10 = 4;
    v13 = 4;
    v9 = a2;
    v12 = a3;
    LODWORD(v6) = TlgWrite(v6, &unk_18025F95A, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
  }
  return (int)v6;
}
