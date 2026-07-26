/*
 * XREFs of ?ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00DB4B0
 * Callers:
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C003EE20 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C003F0B0 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C0042F34 (WPP_SF_qqqL.c)
 */

__int64 __fastcall ndisNsiGetIfRcvAddressRodInformation(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_IF_RCV_ADDRESS *a2,
        struct _NM_REQUEST_GET_PARAMETER *a3)
{
  struct _NDIS_IF_BLOCK *v5; // r13
  unsigned int v6; // ebx
  int v7; // esi
  int v8; // r15d
  char v9; // bp
  char *v10; // r13
  int v11; // eax
  unsigned __int16 *p_ifRcvAddressLength; // rdx
  int v13; // r12d
  unsigned int v14; // ecx
  int v15; // esi

  v5 = a1;
  v6 = 0;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qqq(0xA7u, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, a2, a3);
  v7 = *((_DWORD *)a3 + 13);
  v8 = *((_DWORD *)a3 + 12);
  if ( !*((_QWORD *)a3 + 5) )
  {
    *((_DWORD *)a3 + 12) = 0;
    goto LABEL_19;
  }
  v9 = 0;
  if ( v8 <= 0 )
    goto LABEL_18;
  v10 = (char *)*((_QWORD *)a3 + 5);
  while ( !v9 )
  {
    if ( v7 )
    {
      if ( v7 != 4 )
        goto LABEL_15;
      v11 = 2;
      v9 = 1;
      p_ifRcvAddressLength = &a2->ifRcvAddressLength;
      v13 = 6;
    }
    else
    {
      v11 = 4;
      p_ifRcvAddressLength = (unsigned __int16 *)a2;
      v13 = 4;
    }
    if ( v8 < v11 || !p_ifRcvAddressLength )
    {
LABEL_15:
      v9 = 1;
      goto LABEL_16;
    }
    memmove(v10, p_ifRcvAddressLength, (unsigned int)v11);
    v14 = v13 - v7;
    v7 = v13;
    v10 += v14;
    v8 -= v14;
LABEL_16:
    if ( v8 <= 0 )
      break;
  }
  v5 = a1;
LABEL_18:
  v15 = v7 - *((_DWORD *)a3 + 13);
  *((_DWORD *)a3 + 12) = v15;
  v6 = v15 == 0 ? 0xC000000D : 0;
LABEL_19:
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qqqL(0xA8u, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, v5, a2, a3, v6);
  return v6;
}
