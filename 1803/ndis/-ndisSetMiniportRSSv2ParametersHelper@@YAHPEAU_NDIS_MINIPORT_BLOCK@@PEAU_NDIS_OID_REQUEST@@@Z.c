/*
 * XREFs of ?ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C007C748
 * Callers:
 *     ?ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C007C5B0 (-ndisSetMiniportRSSv2Parameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C007C8EC (-ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     McTemplateK0jqxqqq @ 0x1C00434E4 (McTemplateK0jqxqqq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisSetMiniportRSSv2ParametersHelper(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  UINT InformationBufferLength; // edx
  unsigned int v5; // ebx
  unsigned __int16 v6; // cx
  _DWORD *InformationBuffer; // r9
  unsigned int v8; // ecx
  int v9; // r10d
  unsigned int v10; // r8d
  int v11; // ecx
  UINT v12; // eax
  __int64 v14; // [rsp+20h] [rbp-38h]
  int v15; // [rsp+20h] [rbp-38h]
  int v16; // [rsp+20h] [rbp-38h]

  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0x18u, &WPP_4fecf6d36e163aabb9bd41260a763457_Traceguids, a1, a2);
  InformationBufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
  if ( InformationBufferLength < 0x1C )
  {
    a2->DATA.QUERY_INFORMATION.BytesNeeded = 28;
    v5 = -1073676268;
    if ( (unsigned __int8)byte_1C0099612 < 2u )
      goto LABEL_23;
    v6 = 25;
    goto LABEL_21;
  }
  InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
  v8 = InformationBuffer[4];
  v9 = InformationBuffer[3];
  if ( v9 + v8 < v8 )
  {
    v5 = -1073676267;
    if ( (unsigned __int8)byte_1C0099612 < 2u )
      goto LABEL_23;
    v6 = 26;
    v15 = -1073676267;
    goto LABEL_22;
  }
  v10 = v9 + v8;
  v11 = InformationBuffer[1];
  v12 = 28;
  if ( v10 > 0x1C )
    v12 = v10;
  if ( (v11 & 1) != 0 && (v11 & 4) != 0 && v9 != 40 )
  {
    if ( (unsigned __int8)byte_1C0099612 >= 2u )
    {
      v16 = 0;
      WPP_SF_qqd(0x1Bu, &WPP_4fecf6d36e163aabb9bd41260a763457_Traceguids, a1, a2, v16);
    }
    v5 = -1073676267;
  }
  else
  {
    v5 = 0;
    if ( InformationBufferLength < v12 )
    {
      a2->DATA.QUERY_INFORMATION.BytesNeeded = v12;
      v5 = -1073676268;
      if ( (unsigned __int8)byte_1C0099612 >= 2u )
      {
        v6 = 28;
LABEL_21:
        v15 = -1073676268;
LABEL_22:
        WPP_SF_qqd(v6, &WPP_4fecf6d36e163aabb9bd41260a763457_Traceguids, a1, a2, v15);
      }
    }
  }
LABEL_23:
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    LODWORD(v14) = v5;
    WPP_SF_qqd(0x1Du, &WPP_4fecf6d36e163aabb9bd41260a763457_Traceguids, a1, a2, v14);
  }
  if ( v5 && (dword_1C009AF04 & 4) != 0 )
    McTemplateK0jqxqqq(
      a1->IfIndex,
      &SetMiniportRSSCapsFailed,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      a1->IfIndex,
      a1->NetLuid.Value,
      v5,
      118,
      (char)a2);
  return v5;
}
