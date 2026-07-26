/*
 * XREFs of ?ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C007B854
 * Callers:
 *     ?ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C007B6BC (-ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C007B9F4 (-ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     McTemplateK0jqxqqq @ 0x1C0042478 (McTemplateK0jqxqqq.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisSetMiniportRSSv2ParametersHelper(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  UINT InformationBufferLength; // r8d
  UINT v5; // edx
  unsigned int v6; // ebx
  unsigned __int16 v7; // cx
  _DWORD *InformationBuffer; // r10
  unsigned int v9; // ecx
  int v10; // r11d
  int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-38h]

  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x15u, &WPP_f2ba63df2d4e3a1d5681283389008951_Traceguids, a1, a2);
  InformationBufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
  v5 = 28;
  if ( InformationBufferLength < 0x1C )
  {
    a2->DATA.QUERY_INFORMATION.BytesNeeded = 28;
    v6 = -1073676268;
    if ( (unsigned __int8)byte_1C0098752 < 2u )
      goto LABEL_21;
    v7 = 22;
    goto LABEL_20;
  }
  InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
  v9 = InformationBuffer[4];
  v10 = InformationBuffer[3];
  if ( v10 + v9 >= v9 )
  {
    v11 = InformationBuffer[1];
    if ( v10 + v9 > 0x1C )
      v5 = v10 + v9;
    if ( (v11 & 1) != 0 && (v11 & 4) != 0 && v10 != 40 )
    {
      if ( (unsigned __int8)byte_1C0098752 >= 2u )
        WPP_SF_qqd(0x18u, &WPP_f2ba63df2d4e3a1d5681283389008951_Traceguids, a1, a2, 0);
      v6 = -1073676267;
    }
    else
    {
      v6 = 0;
      if ( InformationBufferLength < v5 )
      {
        a2->DATA.QUERY_INFORMATION.BytesNeeded = v5;
        v6 = -1073676268;
        if ( (unsigned __int8)byte_1C0098752 >= 2u )
        {
          v7 = 25;
LABEL_20:
          WPP_SF_qqd(v7, &WPP_f2ba63df2d4e3a1d5681283389008951_Traceguids, a1, a2, -1073676268);
        }
      }
    }
  }
  else
  {
    v6 = -1073676267;
    if ( (unsigned __int8)byte_1C0098752 >= 2u )
      WPP_SF_qqd(0x17u, &WPP_f2ba63df2d4e3a1d5681283389008951_Traceguids, a1, a2, -1073676267);
  }
LABEL_21:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    LODWORD(v13) = v6;
    WPP_SF_qqd(0x1Au, &WPP_f2ba63df2d4e3a1d5681283389008951_Traceguids, a1, a2, v13);
  }
  if ( v6 && (dword_1C0099FC4 & 4) != 0 )
    McTemplateK0jqxqqq(
      a1->IfIndex,
      &SetMiniportRSSCapsFailed,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      a1->IfIndex,
      a1->NetLuid.Value,
      v6,
      88,
      (char)a2);
  return v6;
}
