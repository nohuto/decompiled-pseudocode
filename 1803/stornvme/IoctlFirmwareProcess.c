/*
 * XREFs of IoctlFirmwareProcess @ 0x1C000C78C
 * Callers:
 *     IoctlToNVMe @ 0x1C000D04C (IoctlToNVMe.c)
 * Callees:
 *     FirmwareGetInfo @ 0x1C000A9DC (FirmwareGetInfo.c)
 *     FirmwareDownload @ 0x1C000AE68 (FirmwareDownload.c)
 *     FirmwareActivate @ 0x1C000B59C (FirmwareActivate.c)
 */

__int64 __fastcall IoctlFirmwareProcess(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbx
  __int64 v5; // r15
  unsigned __int64 v6; // rax
  unsigned int v7; // edi
  __int64 v8; // rdx
  unsigned int Info; // eax

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v4 = *(_DWORD **)(a2 + 64);
    v5 = 60LL;
  }
  else
  {
    v4 = *(_DWORD **)(a2 + 24);
    v5 = 16LL;
  }
  v6 = *(unsigned int *)(v5 + a2);
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
      v7 = -1056964602;
      *(_BYTE *)(a2 + 3) = 21;
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
    *(_BYTE *)(a2 + 3) = 21;
    v7 = -1056964602;
  }
  if ( v7 )
    goto LABEL_22;
  return v7;
}
