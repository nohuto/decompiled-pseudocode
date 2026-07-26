/*
 * XREFs of ?ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00DD060
 * Callers:
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C003FF00 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0040190 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     WPP_SF_qqq @ 0x1C003A95C (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C0043FB4 (WPP_SF_qqqL.c)
 */

__int64 __fastcall ndisNsiGetIfRcvAddressRodInformation(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_IF_RCV_ADDRESS *a2,
        struct _NM_REQUEST_GET_PARAMETER *a3)
{
  struct _NDIS_IF_BLOCK *v5; // r13
  unsigned int v6; // ebx
  int v7; // edi
  int v8; // r15d
  int v9; // edi
  char v10; // bp
  char *v11; // r13
  int v12; // eax
  unsigned __int16 *p_ifRcvAddressLength; // rdx
  int v14; // r12d
  unsigned int v15; // ecx

  v5 = a1;
  v6 = 0;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qqq(0xA7u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, a2, a3);
  v7 = *((_DWORD *)a3 + 13);
  v8 = *((_DWORD *)a3 + 12);
  if ( !*((_QWORD *)a3 + 5) )
  {
    v9 = 0;
    goto LABEL_19;
  }
  v10 = 0;
  if ( v8 <= 0 )
    goto LABEL_18;
  v11 = (char *)*((_QWORD *)a3 + 5);
  while ( !v10 )
  {
    if ( v7 )
    {
      if ( v7 != 4 )
        goto LABEL_15;
      v12 = 2;
      v10 = 1;
      p_ifRcvAddressLength = &a2->ifRcvAddressLength;
      v14 = 6;
    }
    else
    {
      v12 = 4;
      p_ifRcvAddressLength = (unsigned __int16 *)a2;
      v14 = 4;
    }
    if ( v8 < v12 || !p_ifRcvAddressLength )
    {
LABEL_15:
      v10 = 1;
      goto LABEL_16;
    }
    memmove(v11, p_ifRcvAddressLength, (unsigned int)v12);
    v15 = v14 - v7;
    v7 = v14;
    v11 += v15;
    v8 -= v15;
LABEL_16:
    if ( v8 <= 0 )
      break;
  }
  v5 = a1;
LABEL_18:
  v9 = v7 - *((_DWORD *)a3 + 13);
  v6 = v9 == 0 ? 0xC000000D : 0;
LABEL_19:
  *((_DWORD *)a3 + 12) = v9;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qqqL(0xA8u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, v5, a2, a3, v6);
  return v6;
}
