/*
 * XREFs of IoctlFirmwareProcess @ 0x1C000C370
 * Callers:
 *     IoctlToNVMe @ 0x1C000CC18 (IoctlToNVMe.c)
 * Callees:
 *     FirmwareGetInfo @ 0x1C000A5FC (FirmwareGetInfo.c)
 *     FirmwareDownload @ 0x1C000AA74 (FirmwareDownload.c)
 *     FirmwareActivate @ 0x1C000B1A4 (FirmwareActivate.c)
 */

__int64 __fastcall IoctlFirmwareProcess(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbx
  unsigned int *v5; // r14
  unsigned __int64 v6; // rax
  unsigned int v7; // edi
  __int64 v8; // rdx
  unsigned int Info; // eax

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v4 = *(_DWORD **)(a2 + 64);
    v5 = (unsigned int *)(a2 + 60);
  }
  else
  {
    v4 = *(_DWORD **)(a2 + 24);
    v5 = (unsigned int *)(a2 + 16);
  }
  v6 = *v5;
  if ( (unsigned int)v6 < 0x34 )
  {
    *(_BYTE *)(a2 + 3) = 21;
    v7 = -1056964602;
LABEL_22:
    StorPortExtendedFunction(60LL, a1, 0LL, 1LL);
    return v7;
  }
  v8 = (unsigned int)v4[11];
  if ( v6 < v8 + (unsigned __int64)(unsigned int)v4[12] )
    goto LABEL_7;
  if ( v4[7] && (v4[10] & 1) != 0 )
  {
    if ( (unsigned int)v8 < 0x34 || (v8 & 3) != 0 )
    {
LABEL_7:
      v4[5] = 3;
LABEL_8:
      *(_BYTE *)(a2 + 3) = 21;
      v7 = -1056964602;
      goto LABEL_22;
    }
    switch ( v4[9] )
    {
      case 1:
        Info = FirmwareGetInfo(a1, a2);
        break;
      case 2:
        Info = FirmwareDownload(a1, a2);
        break;
      case 3:
        Info = FirmwareActivate(a1, a2);
        break;
      default:
        goto LABEL_8;
    }
    v7 = Info;
  }
  else
  {
    v4[5] = 3;
    v7 = -1056964602;
    *(_BYTE *)(a2 + 3) = 21;
  }
  if ( v7 )
    goto LABEL_22;
  return v7;
}
