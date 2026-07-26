/*
 * XREFs of ndisValidate60Protocol @ 0x1C00C1FB4
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1C00C18B0 (NdisRegisterProtocolDriver.c)
 * Callees:
 *     WPP_SF_Z @ 0x1C0041C64 (WPP_SF_Z.c)
 *     McTemplateK0zq @ 0x1C00586C4 (McTemplateK0zq.c)
 *     WPP_SF_ZL @ 0x1C005C7F0 (WPP_SF_ZL.c)
 */

__int64 __fastcall ndisValidate60Protocol(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi

  v4 = -1073676283;
  if ( (unsigned __int8)byte_1C009960C >= 4u )
    WPP_SF_Z(0x46u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, (const wchar_t *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 40)
    && *(_QWORD *)(a1 + 48)
    && *(_QWORD *)(a1 + 56)
    && *(_QWORD *)(a1 + 64)
    && *(_QWORD *)(a1 + 72) )
  {
    if ( *(_QWORD *)(a1 + 112) )
    {
      if ( *(_QWORD *)(a1 + 104) )
      {
        if ( *(_QWORD *)(a1 + 88) )
        {
          v4 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C009960C >= 2u )
            WPP_SF_Z(0x49u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, (const wchar_t *)(a1 + 16));
          if ( (dword_1C009AF04 & 0x10) != 0 )
            McTemplateK0zq(a1, &Validate60ProtocolFailed, a3, *(const wchar_t **)(a1 + 24), 2);
        }
      }
      else
      {
        if ( (unsigned __int8)byte_1C009960C >= 2u )
          WPP_SF_Z(0x48u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, (const wchar_t *)(a1 + 16));
        if ( (dword_1C009AF04 & 0x10) != 0 )
          McTemplateK0zq(a1, &Validate60ProtocolFailed, a3, *(const wchar_t **)(a1 + 24), 1);
      }
    }
    else
    {
      if ( (unsigned __int8)byte_1C009960C >= 2u )
        WPP_SF_Z(0x47u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, (const wchar_t *)(a1 + 16));
      if ( (dword_1C009AF04 & 0x10) != 0 )
        McTemplateK0zq(a1, &Validate60ProtocolFailed, a3, *(const wchar_t **)(a1 + 24), 0);
    }
  }
  if ( (unsigned __int8)byte_1C009960C >= 4u )
    WPP_SF_ZL(0x4Au, a2, (const wchar_t *)(a1 + 16), v4);
  return v4;
}
