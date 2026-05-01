/*
 * XREFs of ??$GetLastActiveItem@AEAY06$$CBGH@HolographicPositionerTelemetry@@SAXAEAY06$$CBG$$QEAH@Z @ 0x1801031DC
 * Callers:
 *     ?GetLastActiveItem@HolographicPositioner@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1800FCAD0 (-GetLastActiveItem@HolographicPositioner@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@Internal@W.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@HolographicPositionerProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800F8A60 (-Provider@HolographicPositionerProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall HolographicPositionerTelemetry::GetLastActiveItem<unsigned short const (&)[7],int>(__int64 a1, int *a2)
{
  const struct _TlgProvider_t *v3; // rax
  const struct _TlgProvider_t *v4; // r10
  int v6; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  const wchar_t *v8; // [rsp+60h] [rbp-38h]
  int v9; // [rsp+68h] [rbp-30h]
  int v10; // [rsp+6Ch] [rbp-2Ch]
  int *v11; // [rsp+70h] [rbp-28h]
  int v12; // [rsp+78h] [rbp-20h]
  int v13; // [rsp+7Ch] [rbp-1Ch]

  v3 = HolographicPositionerProvider::Provider();
  v4 = v3;
  if ( *(_DWORD *)v3 > 4u )
  {
    LODWORD(v3) = 0;
    if ( (*((_QWORD *)v4 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v4 + 3) & 0x400000000000LL) == *((_QWORD *)v4 + 3) )
    {
      v10 = 0;
      v13 = 0;
      v8 = L"<none>";
      v6 = *a2;
      v11 = &v6;
      v9 = 14;
      v12 = 4;
      LODWORD(v3) = TlgWrite(v4, &unk_18025F049, 0LL, 0LL, 4u, &pData);
    }
  }
  return (int)v3;
}
