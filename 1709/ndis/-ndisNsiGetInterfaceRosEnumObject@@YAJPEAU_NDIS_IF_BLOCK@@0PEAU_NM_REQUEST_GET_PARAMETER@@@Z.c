/*
 * XREFs of ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B9600
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000A970 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000D6B0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000E3F0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRosEnumObject(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_IF_BLOCK *a2,
        struct _NM_REQUEST_GET_PARAMETER *a3)
{
  unsigned int v3; // esi
  struct _NDIS_IF_BLOCK *v5; // r13
  char *v7; // r14
  unsigned int v8; // edi
  int v9; // ebx
  char v10; // bp
  int v11; // eax
  const void *p_InterfaceGuid; // rdx
  int v13; // esi
  unsigned int v14; // ecx
  unsigned int v15; // edi

  v3 = 0;
  v5 = a2;
  if ( !a2 )
    v5 = a1;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qq(0x5Au, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, a3);
  v7 = (char *)*((_QWORD *)a3 + 5);
  v8 = *((_DWORD *)a3 + 13);
  v9 = *((_DWORD *)a3 + 12);
  if ( v7 )
  {
    v10 = 0;
    if ( v9 > 0 )
    {
      while ( 1 )
      {
        if ( v10 )
        {
LABEL_26:
          v3 = 0;
          break;
        }
        if ( v8 > 0x214 )
        {
          switch ( v8 )
          {
            case 0x218u:
              v11 = 16;
              p_InterfaceGuid = &a1->InterfaceGuid;
              v13 = 552;
              break;
            case 0x228u:
              v11 = 1;
              p_InterfaceGuid = &a1->ifConnectorPresent;
              v13 = 556;
              break;
            case 0x22Cu:
              v11 = 4;
              p_InterfaceGuid = &a1->ifFlags;
              v13 = 560;
              break;
            default:
              v11 = v8 - 560;
              if ( v8 == 560 )
              {
                v11 = 4;
                p_InterfaceGuid = &v5->MediaType;
                v13 = 564;
              }
              else
              {
                if ( v8 != 564 )
                  goto LABEL_42;
                p_InterfaceGuid = &v5->PhysicalMediumType;
                v13 = 568;
                v10 = 1;
              }
              break;
          }
        }
        else if ( v8 == 532 )
        {
          v11 = 4;
          p_InterfaceGuid = &v5->ConnectionType;
          v13 = 536;
        }
        else if ( v8 )
        {
          if ( v8 == 4 )
          {
            v11 = 516;
            p_InterfaceGuid = &a1->ifDescr;
            v13 = 520;
          }
          else if ( v8 == 520 )
          {
            v11 = 2;
            p_InterfaceGuid = &a1->ifType;
            v13 = 524;
          }
          else
          {
            v11 = v8 - 524;
            if ( v8 == 524 )
            {
              v11 = 4;
              p_InterfaceGuid = &v5->AccessType;
              v13 = 528;
            }
            else
            {
              if ( v8 != 528 )
                goto LABEL_42;
              p_InterfaceGuid = &a1->DirectionType;
              v13 = 532;
            }
          }
        }
        else
        {
          v11 = 4;
          p_InterfaceGuid = &a1->_NDIS_NSI_INTERFACE_ENUM_ROS;
          v13 = 4;
        }
        if ( v9 < v11 || !p_InterfaceGuid )
        {
LABEL_42:
          v10 = 1;
          goto LABEL_25;
        }
        memmove(v7, p_InterfaceGuid, (unsigned int)v11);
        v14 = v13 - v8;
        v8 = v13;
        v7 += v14;
        v9 -= v14;
LABEL_25:
        if ( v9 <= 0 )
          goto LABEL_26;
      }
    }
    v15 = v8 - *((_DWORD *)a3 + 13);
    *((_DWORD *)a3 + 12) = v15;
    if ( !v15 )
      v3 = -1073741811;
  }
  else
  {
    *((_DWORD *)a3 + 12) = 0;
  }
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qqd(0x5Bu, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, a3, v3);
  return v3;
}
