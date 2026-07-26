/*
 * XREFs of ?ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B9D20
 * Callers:
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000D6B0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000E3F0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     ?ndisIfQueryProvider@@YAHPEAU_NDIS_IF_BLOCK@@IKPEAX@Z @ 0x1C00DAE10 (-ndisIfQueryProvider@@YAHPEAU_NDIS_IF_BLOCK@@IKPEAX@Z.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRosInformation(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_IF_BLOCK *a2,
        struct _NM_REQUEST_GET_PARAMETER *a3)
{
  unsigned int v3; // esi
  struct _NDIS_IF_BLOCK *v5; // r12
  struct _NDIS_IF_BLOCK *v6; // r8
  char *v7; // r14
  unsigned int v8; // edi
  int v9; // ebx
  char v10; // r15
  const void *p_ifType; // rdx
  unsigned int v12; // r10d
  unsigned int v13; // eax
  int v14; // ebp
  unsigned int v15; // ecx
  unsigned int v16; // edi

  v3 = 0;
  v5 = a2;
  if ( !a2 )
    v5 = a1;
  v6 = a1;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
  {
    WPP_SF_qq(0x50u, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, a3);
    v6 = a1;
  }
  v7 = (char *)*((_QWORD *)a3 + 5);
  v8 = *((_DWORD *)a3 + 13);
  v9 = *((_DWORD *)a3 + 12);
  if ( v7 )
  {
    v10 = 0;
    while ( v9 > 0 )
    {
      if ( v10 )
        break;
      p_ifType = 0LL;
      v12 = 0;
      if ( v8 <= 0x208 )
      {
        if ( v8 == 520 )
        {
          v13 = 2;
          p_ifType = &v6->ifType;
          v14 = 524;
        }
        else if ( v8 )
        {
          if ( v8 != 4 )
          {
LABEL_42:
            v10 = 1;
            continue;
          }
          v13 = 516;
          p_ifType = &v6->ifDescr;
          v14 = 520;
        }
        else
        {
          v13 = 4;
          p_ifType = &v6->_NDIS_NSI_INTERFACE_ENUM_ROS;
          v14 = 4;
        }
      }
      else
      {
        switch ( v8 )
        {
          case 0x20Cu:
            p_ifType = &v5->AccessType;
            v14 = 528;
            break;
          case 0x210u:
            p_ifType = &v6->DirectionType;
            v14 = 532;
            break;
          case 0x214u:
            p_ifType = &v5->ConnectionType;
            v14 = 536;
            break;
          case 0x218u:
            v13 = 16;
            p_ifType = &v6->InterfaceGuid;
            v14 = 552;
            goto LABEL_16;
          case 0x228u:
            v13 = 1;
            p_ifType = &v6->ifConnectorPresent;
            v14 = 554;
            goto LABEL_16;
          case 0x22Au:
            v13 = 34;
            if ( v6->bNdisIsProvider )
              p_ifType = &v5->PermanentPhysAddress;
            else
              v12 = 16843009;
            v14 = 588;
            goto LABEL_16;
          case 0x24Cu:
            p_ifType = &v6->ifFlags;
            v14 = 592;
            break;
          case 0x250u:
            p_ifType = &v5->MediaType;
            v14 = 596;
            break;
          case 0x254u:
            p_ifType = &v5->PhysicalMediumType;
            v10 = 1;
            v14 = v8 + 4;
            break;
          default:
            goto LABEL_42;
        }
        v13 = 4;
      }
LABEL_16:
      if ( v9 < (int)v13 )
        goto LABEL_42;
      if ( v12 )
      {
        ndisIfQueryProvider(v5, v12, v13, v7);
      }
      else
      {
        if ( !p_ifType )
          goto LABEL_42;
        memmove(v7, p_ifType, v13);
      }
      v6 = a1;
      v15 = v14 - v8;
      v8 = v14;
      v7 += v15;
      v9 -= v15;
    }
    v16 = v8 - *((_DWORD *)a3 + 13);
    *((_DWORD *)a3 + 12) = v16;
    if ( !v16 )
      v3 = -1073741811;
  }
  else
  {
    *((_DWORD *)a3 + 12) = 0;
  }
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qqd(0x51u, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, v6, a3, v3);
  return v3;
}
