/*
 * XREFs of UsbhGetDeviceInformation @ 0x1C0022A08
 * Callers:
 *     UsbhSetupDevice @ 0x1C0022C90 (UsbhSetupDevice.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0043E08 (UsbhGetAlternateUsbDescriptors.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001DAF0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhGetUsbDeviceFlags @ 0x1C00227D0 (UsbhGetUsbDeviceFlags.c)
 *     UsbhValidateConfigurationDescriptor @ 0x1C0022C40 (UsbhValidateConfigurationDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     UsbhParseConfigurationDescriptorEx @ 0x1C003F844 (UsbhParseConfigurationDescriptorEx.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

__int64 __fastcall UsbhGetDeviceInformation(__int64 a1, __int64 a2)
{
  int v2; // r12d
  _DWORD *v4; // rbx
  unsigned __int16 v5; // r15
  unsigned int v6; // eax
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v8; // rdi
  __int64 v9; // rsi
  _DWORD *v10; // rax
  __int64 (__fastcall *v11)(_QWORD, __int64, _DWORD *, int *); // r10
  int v12; // esi
  int UsbDeviceFlags; // r12d
  int v14; // eax
  __int64 v15; // r9
  __int64 v16; // rsi
  unsigned __int8 *v17; // rcx
  unsigned __int8 *v18; // r15
  char *v19; // rdx
  unsigned __int8 v21; // al
  char *v22; // r8
  char v23; // cl
  char v24; // al
  unsigned __int8 *v25; // rcx
  _BYTE *v26; // r8
  char v27; // al
  __int64 v28; // rax
  int v29; // [rsp+20h] [rbp-40h]
  int v30; // [rsp+48h] [rbp-18h]
  int v31[4]; // [rsp+50h] [rbp-10h] BYREF
  unsigned int Size; // [rsp+B0h] [rbp+50h]
  int v34; // [rsp+B8h] [rbp+58h] BYREF

  v2 = 0;
  v4 = PdoExt(a2);
  v34 = 18;
  v5 = 255;
  v6 = 255;
  Size = 255;
  while ( 1 )
  {
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v6, 0x42554855u);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, Size);
    v9 = *((_QWORD *)v4 + 144);
    v10 = FdoExt(a1);
    v11 = (__int64 (__fastcall *)(_QWORD, __int64, _DWORD *, int *))*((_QWORD *)v10 + 534);
    if ( !v11 )
      break;
    v29 = (int)v8;
    v12 = v11(*((_QWORD *)v10 + 529), v9, v4 + 348, &v34);
    if ( v12 < 0 || Size >= v8[1] || v2 )
      goto LABEL_6;
    Size = v8[1];
    v5 = v8[1];
    ExFreePoolWithTag(v8, 0);
    v6 = Size;
    v2 = 1;
  }
  v12 = -1073741822;
LABEL_6:
  if ( (v12 & 0xC0000000) == 0xC0000000 )
  {
    v4[703] = 1073807367;
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_GET_DESCRIPTORS_FAILURE);
    LOBYTE(v30) = 0;
    UsbhException(a1, *((unsigned __int16 *)v4 + 710), 36, (int)v8, Size, v12, -1, usbfile_bus_c, 3767, v30);
  }
  else
  {
    UsbDeviceFlags = UsbhGetUsbDeviceFlags(a1, a2);
    if ( (UsbDeviceFlags & 0xC0000000) == 0xC0000000 )
    {
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_REGISTRY_FAILURE);
      return (unsigned int)UsbDeviceFlags;
    }
    if ( (unsigned __int8)UsbhValidateConfigurationDescriptor(v8, Size, v31, dword_1C006A630 != 0) )
    {
      if ( UsbDeviceFlags >= 0 && v5 < v8[1] )
        v8[1] = v5;
      if ( *((_BYTE *)v4 + 1409) > 1u )
      {
        v4[699] |= 0x80u;
        if ( *((_BYTE *)v4 + 1409) > 1u && *((_BYTE *)v8 + 4) > 1u )
        {
          v24 = *((_BYTE *)v4 + 1396);
          if ( !v24 || v24 == -17 && *((_BYTE *)v4 + 1397) == 2 && *((_BYTE *)v4 + 1398) == 1 )
          {
            v25 = (unsigned __int8 *)v8 + 9;
            while ( v25 < (unsigned __int8 *)v8 + v8[1] )
            {
              v26 = v25;
              v25 += *v25;
              v27 = v26[1];
              if ( v27 == 11 && v26[4] == 1 || v27 == 4 && v26[5] == 1 )
              {
                v4[353] |= 0x20u;
                break;
              }
            }
          }
        }
      }
      v14 = v4[353];
      if ( (v14 & 0x20) == 0
        && *((_BYTE *)v4 + 1409) == 1
        && *((_BYTE *)v8 + 4) > 1u
        && ((v23 = *((_BYTE *)v4 + 1396)) == 0 || v23 == -17 && *((_BYTE *)v4 + 1397) == 2 && *((_BYTE *)v4 + 1398) == 1) )
      {
        v4[353] = v14 | 0x20;
      }
      else
      {
        v15 = v8[1];
        v16 = 0LL;
        v17 = (unsigned __int8 *)v8;
        v18 = 0LL;
        v19 = (char *)v8 + v15;
        if ( v8 < (unsigned __int16 *)((char *)v8 + v15) )
        {
          while ( 1 )
          {
            if ( (unsigned __int64)(v19 - (char *)v17) < 2 )
              goto LABEL_22;
            if ( v17[1] == 4 )
              break;
            v21 = *v17;
            if ( !*v17 )
            {
              LOBYTE(v30) = 0;
              UsbhException(a1, 0, 83, (int)v8, v15, -1, -1, usbfile_usbd_c, 105, v30);
LABEL_20:
              if ( v18 )
                v16 = (__int64)v18;
              goto LABEL_22;
            }
            v22 = (char *)&v17[v21];
            if ( v17 <= (unsigned __int8 *)v22 )
            {
              v17 += v21;
              if ( v22 < v19 )
                continue;
            }
            goto LABEL_22;
          }
          v18 = v17;
          goto LABEL_20;
        }
LABEL_22:
        if ( v16 )
        {
          if ( *(_BYTE *)(v16 + 5) == 9 )
          {
            v4[353] |= 4u;
          }
          else if ( *((_WORD *)v4 + 697) > 0x200u && (v4[356] & 0x10000) == 0 )
          {
            v28 = UsbhParseConfigurationDescriptorEx(a1, (_DWORD)v8, v29, 8, 6, 98);
            if ( v28 )
            {
              if ( v4[290] == 2 )
              {
                v4[353] |= 0x200000u;
                v16 = v28;
              }
            }
          }
          *(_QWORD *)((char *)v4 + 2425) = *(_QWORD *)v16;
          *((_BYTE *)v4 + 2433) = *(_BYTE *)(v16 + 8);
        }
      }
      if ( (*((_BYTE *)v8 + 7) & 0x20) != 0 )
        v4[353] |= 0x100u;
      *((_QWORD *)v4 + 298) = v8;
      return (unsigned int)UsbDeviceFlags;
    }
    v12 = -1073741811;
    v4[703] = 1073807364;
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_CONFIG_DESC_VALIDATION_FAILURE);
    LOBYTE(v30) = 0;
    UsbhException(a1, *((unsigned __int16 *)v4 + 710), 36, (int)v8, Size, -1073741811, v31[0], usbfile_bus_c, 3801, v30);
  }
  ExFreePoolWithTag(v8, 0);
  return (unsigned int)v12;
}
