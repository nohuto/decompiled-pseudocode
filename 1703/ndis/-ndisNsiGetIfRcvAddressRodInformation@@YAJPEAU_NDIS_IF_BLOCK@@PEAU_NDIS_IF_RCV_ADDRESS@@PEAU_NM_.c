/*
 * XREFs of ?ndisNsiGetIfRcvAddressRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00D0C20
 * Callers:
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C00422E0 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0042570 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0028840 (memmove.c)
 *     WPP_SF_qqq @ 0x1C003CB3C (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C004457C (WPP_SF_qqqL.c)
 */

__int64 __fastcall ndisNsiGetIfRcvAddressRodInformation(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_IF_RCV_ADDRESS *a2,
        struct _NM_REQUEST_GET_PARAMETER *a3)
{
  struct _NM_REQUEST_GET_PARAMETER *v3; // rdi
  struct _NDIS_IF_BLOCK *v5; // rbp
  unsigned int v6; // ebx
  char v7; // r12
  int v8; // esi
  int v9; // r15d
  char v10; // bp
  char *v11; // rdi
  int v12; // eax
  unsigned __int16 *p_ifRcvAddressLength; // rdx
  int v14; // r13d
  unsigned int v15; // ecx
  int v16; // esi

  v3 = a3;
  v5 = a1;
  v6 = 0;
  v7 = byte_1C009261D;
  if ( (unsigned __int8)byte_1C009261D >= 4u )
  {
    WPP_SF_qqq(0xA7u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, a1, a2, a3);
    v7 = byte_1C009261D;
  }
  v8 = *((_DWORD *)v3 + 13);
  v9 = *((_DWORD *)v3 + 12);
  if ( !*((_QWORD *)v3 + 5) )
  {
    *((_DWORD *)v3 + 12) = 0;
    goto LABEL_19;
  }
  v10 = 0;
  if ( v9 <= 0 )
    goto LABEL_18;
  v11 = (char *)*((_QWORD *)v3 + 5);
  while ( !v10 )
  {
    if ( v8 )
    {
      if ( v8 != 4 )
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
    if ( v9 < v12 || !p_ifRcvAddressLength )
    {
LABEL_15:
      v10 = 1;
      goto LABEL_16;
    }
    memmove(v11, p_ifRcvAddressLength, (unsigned int)v12);
    v15 = v14 - v8;
    v8 = v14;
    v11 += v15;
    v9 -= v15;
LABEL_16:
    if ( v9 <= 0 )
      break;
  }
  v3 = a3;
LABEL_18:
  v16 = v8 - *((_DWORD *)v3 + 13);
  v5 = a1;
  *((_DWORD *)v3 + 12) = v16;
  v6 = v16 == 0 ? 0xC000000D : 0;
LABEL_19:
  if ( (unsigned __int8)v7 >= 4u )
    WPP_SF_qqqL(0xA8u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, v5, a2, v3, v6);
  return v6;
}
