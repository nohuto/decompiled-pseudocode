/*
 * XREFs of ?IsScalingTransformationSupported@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C00068E8
 * Callers:
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0006688 (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 * Callees:
 *     ?IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00BF290 (-IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsScalingTransformationSupported(
        DMMVIDPNPRESENTPATH *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a2)
{
  __int64 v2; // rdi
  int v4; // eax
  __int64 v6; // rax
  unsigned __int8 v7; // al
  char v8; // cl
  int v9; // ecx
  unsigned __int8 IsDriverAspectRatioCenteredMaxSupported; // al

  v2 = a2;
  switch ( a2 )
  {
    case D3DKMDT_VPPS_IDENTITY:
      LOBYTE(v4) = *((_BYTE *)this + 120);
      return v4 & 1;
    case D3DKMDT_VPPS_CENTERED:
      v4 = *((_DWORD *)this + 30) >> 1;
      return v4 & 1;
    case D3DKMDT_VPPS_STRETCHED:
      v4 = *((_DWORD *)this + 30) >> 2;
      return v4 & 1;
    case D3DKMDT_VPPS_ASPECTRATIOCENTEREDMAX:
      IsDriverAspectRatioCenteredMaxSupported = DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported(this);
      v8 = 0;
      if ( IsDriverAspectRatioCenteredMaxSupported )
      {
        v9 = *((_DWORD *)this + 30) >> 3;
        return v9 & 1;
      }
      return v8;
    case D3DKMDT_VPPS_CUSTOM:
      v7 = DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported(this);
      v8 = 0;
      if ( v7 )
      {
        v9 = *((_DWORD *)this + 30) >> 4;
        return v9 & 1;
      }
      return v8;
    case D3DKMDT_VPPS_NOTSPECIFIED:
      return 1;
  }
  v6 = WdLogNewEntry5_WdError(this);
  *(_QWORD *)(v6 + 24) = v2;
  WdLogEvent5_WdError(v6);
  return 0;
}
