/*
 * XREFs of UsbhGetDeviceInformation @ 0x1C001FAE0
 * Callers:
 *     UsbhSetupDevice @ 0x1C0021D38 (UsbhSetupDevice.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0042FC8 (UsbhGetAlternateUsbDescriptors.c)
 * Callees:
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhParseConfigurationDescriptorEx @ 0x1C001B090 (UsbhParseConfigurationDescriptorEx.c)
 *     UsbhGetUsbDeviceFlags @ 0x1C001F8A8 (UsbhGetUsbDeviceFlags.c)
 *     UsbhValidateConfigurationDescriptor @ 0x1C001FCE0 (UsbhValidateConfigurationDescriptor.c)
 *     Usbh_HubGetUsbDescriptors @ 0x1C001FD28 (Usbh_HubGetUsbDescriptors.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0024BE0 (UsbhEtwLogHubIrpEvent.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhGetDeviceInformation(__int64 a1, __int64 a2)
{
  int v2; // r15d
  int v3; // r12d
  _DWORD *v5; // rbx
  unsigned __int16 v6; // si
  unsigned int v7; // eax
  PVOID PoolWithTag; // rax
  unsigned __int64 v9; // rdi
  int UsbDescriptors; // r15d
  int UsbDeviceFlags; // r12d
  int v12; // eax
  __int64 v13; // r9
  unsigned __int8 *v14; // rsi
  unsigned __int8 *v15; // rcx
  unsigned __int8 *v16; // r15
  unsigned __int64 v17; // rdx
  unsigned __int8 v19; // al
  unsigned __int8 *v20; // r8
  int v21; // eax
  unsigned __int8 *v22; // rcx
  _BYTE *v23; // rdx
  char v24; // cl
  unsigned __int8 *v25; // rax
  int v26; // [rsp+20h] [rbp-40h]
  int v27; // [rsp+20h] [rbp-40h]
  int v28; // [rsp+48h] [rbp-18h]
  int v29[4]; // [rsp+50h] [rbp-10h] BYREF
  size_t Size; // [rsp+B0h] [rbp+50h] BYREF
  int v32; // [rsp+B8h] [rbp+58h] BYREF

  v2 = a1;
  v3 = 0;
  v5 = PdoExt(a2);
  v32 = 18;
  v6 = 255;
  v7 = 255;
  LODWORD(Size) = 255;
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v7, 0x42554855u);
    v9 = (unsigned __int64)PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, (unsigned int)Size);
    UsbDescriptors = Usbh_HubGetUsbDescriptors(
                       v2,
                       *((_QWORD *)v5 + 144),
                       (int)v5 + 1392,
                       (unsigned int)&v32,
                       v9,
                       (__int64)&Size);
    if ( UsbDescriptors < 0 || (unsigned int)Size >= *(unsigned __int16 *)(v9 + 2) || v3 )
      break;
    v6 = *(_WORD *)(v9 + 2);
    LODWORD(Size) = v6;
    ExFreePoolWithTag((PVOID)v9, 0);
    v7 = Size;
    v3 = 1;
    v2 = a1;
  }
  if ( (UsbDescriptors & 0xC0000000) == 0xC0000000 )
  {
    v27 = *((unsigned __int16 *)v5 + 710);
    v5[699] = 1073807367;
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_GET_DESCRIPTORS_FAILURE, v27, UsbDescriptors);
    LOBYTE(v28) = 0;
    UsbhException(a1, *((unsigned __int16 *)v5 + 710), 36, v9, Size, UsbDescriptors, -1, usbfile_bus_c, 3767, v28);
    ExFreePoolWithTag((PVOID)v9, 0);
    return (unsigned int)UsbDescriptors;
  }
  else
  {
    UsbDeviceFlags = UsbhGetUsbDeviceFlags(a1, a2);
    if ( (UsbDeviceFlags & 0xC0000000) == 0xC0000000 )
    {
      UsbhEtwLogHubIrpEvent(
        a1,
        0LL,
        0LL,
        &USBHUB_ETW_EVENT_HUB_ENUM_REGISTRY_FAILURE,
        *((unsigned __int16 *)v5 + 710),
        UsbDeviceFlags);
      return (unsigned int)UsbDeviceFlags;
    }
    if ( (unsigned __int8)UsbhValidateConfigurationDescriptor(v9, (unsigned int)Size, v29, dword_1C0069630 != 0) )
    {
      if ( UsbDeviceFlags >= 0 && v6 < *(_WORD *)(v9 + 2) )
        *(_WORD *)(v9 + 2) = v6;
      if ( *((_BYTE *)v5 + 1409) > 1u )
      {
        v5[695] |= 0x80u;
        if ( *((_BYTE *)v5 + 1409) > 1u
          && *(_BYTE *)(v9 + 4) > 1u
          && *((_BYTE *)v5 + 1396) == 0xEF
          && *((_BYTE *)v5 + 1397) == 2
          && *((_BYTE *)v5 + 1398) == 1 )
        {
          v22 = (unsigned __int8 *)(v9 + 9);
          while ( (unsigned __int64)v22 < v9 + *(unsigned __int16 *)(v9 + 2) )
          {
            v23 = v22;
            v22 += *v22;
            if ( v23[1] == 11 && v23[4] == 1 && !v23[5] && v23[6] == 32 )
            {
              v5[353] |= 0x20u;
              break;
            }
          }
        }
      }
      v12 = v5[353];
      if ( (v12 & 0x20) == 0
        && *((_BYTE *)v5 + 1409) == 1
        && *(_BYTE *)(v9 + 4) > 1u
        && ((v24 = *((_BYTE *)v5 + 1396)) == 0 || v24 == -17 && *((_BYTE *)v5 + 1397) == 2 && *((_BYTE *)v5 + 1398) == 1) )
      {
        v5[353] = v12 | 0x20;
      }
      else
      {
        v13 = *(unsigned __int16 *)(v9 + 2);
        v14 = 0LL;
        v15 = (unsigned __int8 *)v9;
        v16 = 0LL;
        v17 = v9 + v13;
        if ( v9 < v9 + v13 )
        {
          while ( 1 )
          {
            if ( v17 - (unsigned __int64)v15 < 2 )
              goto LABEL_21;
            if ( v15[1] == 4 )
              break;
            v19 = *v15;
            if ( !*v15 )
            {
              LOBYTE(v28) = 0;
              UsbhException(a1, 0, 83, v9, v13, -1, -1, usbfile_usbd_c, 105, v28);
LABEL_19:
              if ( v16 )
                v14 = v16;
              goto LABEL_21;
            }
            v20 = &v15[v19];
            if ( v15 <= v20 )
            {
              v15 += v19;
              if ( (unsigned __int64)v20 < v17 )
                continue;
            }
            goto LABEL_21;
          }
          v16 = v15;
          goto LABEL_19;
        }
LABEL_21:
        if ( v14 )
        {
          if ( v14[5] == 9 )
          {
            v5[353] |= 4u;
          }
          else if ( *((_WORD *)v5 + 697) > 0x200u && (v5[356] & 0x10000) == 0 )
          {
            v25 = UsbhParseConfigurationDescriptorEx(a1, v9, v14, v14[2], v26, 8, 6, 98);
            if ( v25 )
            {
              if ( v5[290] == 2 )
              {
                v5[353] |= 0x200000u;
                v14 = v25;
              }
            }
          }
          *((_QWORD *)v5 + 301) = *(_QWORD *)v14;
          *((_BYTE *)v5 + 2416) = v14[8];
        }
      }
      if ( (*(_BYTE *)(v9 + 7) & 0x20) != 0 )
        v5[353] |= 0x100u;
      *((_QWORD *)v5 + 298) = v9;
      return (unsigned int)UsbDeviceFlags;
    }
    v21 = *((unsigned __int16 *)v5 + 710);
    v5[699] = 1073807364;
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_CONFIG_DESC_VALIDATION_FAILURE, v21, -1073741811);
    LOBYTE(v28) = 0;
    UsbhException(a1, *((unsigned __int16 *)v5 + 710), 36, v9, Size, -1073741811, v29[0], usbfile_bus_c, 3801, v28);
    ExFreePoolWithTag((PVOID)v9, 0);
    return 3221225485LL;
  }
}
