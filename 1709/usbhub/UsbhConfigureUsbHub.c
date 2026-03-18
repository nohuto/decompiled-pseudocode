/*
 * XREFs of UsbhConfigureUsbHub @ 0x1C0023AC0
 * Callers:
 *     UsbhInitialize @ 0x1C0015CC0 (UsbhInitialize.c)
 *     UsbhReinitialize @ 0x1C003C894 (UsbhReinitialize.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x1C0017C0C (UsbhGetHubConfigurationDescriptor.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C0023F60 (UsbhSyncSendInternalIoctl.c)
 *     UsbhCreateConfigurationRequestEx @ 0x1C0024050 (UsbhCreateConfigurationRequestEx.c)
 *     UsbhGetMaxPowerPerPort @ 0x1C0024148 (UsbhGetMaxPowerPerPort.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     UsbhParseConfigurationDescriptorEx @ 0x1C003F844 (UsbhParseConfigurationDescriptorEx.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

__int64 __fastcall UsbhConfigureUsbHub(__int64 a1)
{
  _DWORD *v2; // rbp
  int HubConfigurationDescriptor; // eax
  __int64 v4; // rbx
  char *v5; // rdi
  char v6; // al
  int v7; // ecx
  int MaxPowerPerPort; // eax
  int v9; // eax
  unsigned __int8 *v10; // rdx
  char *v11; // r10
  __int64 v12; // r9
  unsigned __int8 *v13; // rcx
  unsigned __int8 *v14; // r8
  unsigned __int8 v15; // al
  unsigned __int8 *v16; // rdx
  char *v17; // r9
  __int64 v18; // r10
  unsigned __int8 *v19; // rax
  unsigned __int8 *v20; // rdx
  unsigned __int8 v21; // cl
  int v22; // eax
  unsigned __int8 *v23; // rdx
  __int64 v24; // rbx
  char *v25; // r9
  __int64 v26; // r10
  __int64 v27; // rax
  unsigned __int8 v28; // al
  __int64 ConfigurationRequest; // rax
  __int64 v30; // rbx
  int v31; // esi
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int8 v35; // al
  unsigned __int8 *v36; // rdx
  unsigned int v37; // r9d
  int v38; // eax
  __int64 v39; // r9
  int v40; // r8d
  int v41; // [rsp+20h] [rbp-58h]
  int v42; // [rsp+48h] [rbp-30h]
  PVOID P; // [rsp+88h] [rbp+10h] BYREF

  P = 0LL;
  v2 = FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      26,
      (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids);
  HubConfigurationDescriptor = UsbhGetHubConfigurationDescriptor(a1, (unsigned __int16 **)&P);
  v4 = HubConfigurationDescriptor;
  if ( (HubConfigurationDescriptor & 0xC0000000) == 0xC0000000 )
  {
    Log(a1, 8, 1667655729, HubConfigurationDescriptor, 0LL);
    return (unsigned int)v4;
  }
  v5 = (char *)P;
  if ( !P )
  {
    Log(a1, 8, 1667655730, -1073741670LL, 0LL);
    return v37;
  }
  v6 = 1;
  if ( *((_BYTE *)P + 1) == 2 )
  {
    v7 = (int)P;
  }
  else
  {
    v6 = 0;
    v7 = -1073737984;
  }
  if ( *(_BYTE *)P < 9u )
  {
    v7 = -1073737984;
    goto LABEL_88;
  }
  if ( !v6 )
  {
LABEL_88:
    LOBYTE(v42) = 0;
    UsbhException(a1, 0, 34, (int)P, *((unsigned __int16 *)P + 1), -1073741823, v7, usbfile_hub_c, 4345, v42);
    Log(a1, 8, 1667655731, v4, 0LL);
    ExFreePoolWithTag(v5, 0);
    return 3221225473LL;
  }
  if ( (*((_BYTE *)P + 7) & 0x40) != 0 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        27,
        (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids);
    v2[760] = 500;
  }
  else
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        28,
        (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids);
    v2[760] = 100;
  }
  MaxPowerPerPort = UsbhGetMaxPowerPerPort(a1);
  v2[758] = MaxPowerPerPort;
  if ( MaxPowerPerPort == 100 )
    v5[8] = -6;
  v9 = v2[640];
  v10 = (unsigned __int8 *)v5;
  if ( (v9 & 0x40) != 0 )
  {
    v2[640] = v9 & 0xFFFEFFFF;
    v11 = &v5[*((unsigned __int16 *)v5 + 1)];
LABEL_17:
    v12 = *((unsigned __int16 *)v5 + 1);
    v13 = v10;
    v14 = (unsigned __int8 *)&v5[v12];
    if ( v10 < (unsigned __int8 *)&v5[v12] )
    {
      while ( (unsigned __int64)(v14 - v13) >= 2 )
      {
        if ( v13[1] == 4 )
        {
          if ( !v13 )
            break;
          v24 = (__int64)v13;
          if ( v11 < (char *)v13
            || v11 - (char *)v13 > 0xFFFF
            || (unsigned __int64)(v11 - (char *)v13) < 6
            || v13[5] != 9 )
          {
            v24 = 0LL;
          }
          if ( v11 < (char *)v13
            || v11 - (char *)v13 > 0xFFFF
            || (unsigned __int64)(v11 - (char *)v13) < 8
            || v13[7] != 2 )
          {
            v24 = 0LL;
          }
          v33 = *v13;
          v10 = &v13[v33];
          if ( v24 )
          {
            v2[640] |= 0x10000u;
            v38 = v2[640];
            if ( (v38 & 0x200000) == 0 )
            {
              v2[640] = v38 | 0x80;
              goto LABEL_103;
            }
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                0,
                1,
                29,
                (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids);
          }
          else if ( (_BYTE)v33 )
          {
            goto LABEL_17;
          }
          break;
        }
        v15 = *v13;
        if ( !*v13 )
        {
          LOBYTE(v42) = 0;
          UsbhException(a1, 0, 83, (int)v5, v12, -1, -1, usbfile_usbd_c, 105, v42);
          break;
        }
        v16 = &v13[v15];
        if ( v13 <= v16 )
        {
          v13 += v15;
          if ( v16 < v14 )
            continue;
        }
        break;
      }
    }
    v2[640] &= ~0x80u;
    v13 = (unsigned __int8 *)v5;
    v17 = &v5[*((unsigned __int16 *)v5 + 1)];
LABEL_24:
    v18 = *((unsigned __int16 *)v5 + 1);
    v19 = v13;
    v20 = (unsigned __int8 *)&v5[v18];
    if ( v13 < (unsigned __int8 *)&v5[v18] )
    {
      while ( (unsigned __int64)(v20 - v19) >= 2 )
      {
        if ( v19[1] == 4 )
        {
          if ( !v19 )
            break;
          v24 = (__int64)v19;
          if ( v17 < (char *)v19
            || v17 - (char *)v19 > 0xFFFF
            || (unsigned __int64)(v17 - (char *)v19) < 6
            || v19[5] != 9 )
          {
            v24 = 0LL;
          }
          if ( v17 < (char *)v19
            || v17 - (char *)v19 > 0xFFFF
            || (unsigned __int64)(v17 - (char *)v19) < 8
            || v19[7] != 1 )
          {
            v24 = 0LL;
          }
          v34 = *v19;
          v13 = &v19[v34];
          if ( v24 )
            goto LABEL_46;
          if ( (_BYTE)v34 )
            goto LABEL_24;
          break;
        }
        v21 = *v19;
        if ( !*v19 )
        {
          LOBYTE(v42) = 0;
          UsbhException(a1, 0, 83, (int)v5, v18, -1, -1, usbfile_usbd_c, 105, v42);
          break;
        }
        v14 = &v19[v21];
        if ( v19 <= v14 )
        {
          v19 += v21;
          if ( v14 < v20 )
            continue;
        }
        break;
      }
    }
    v22 = v2[640];
    if ( (v22 & 1) != 0 )
      v2[640] = v22 & 0xFFFFFFBF;
    v23 = (unsigned __int8 *)v5;
    v24 = 0LL;
    v25 = &v5[*((unsigned __int16 *)v5 + 1)];
LABEL_33:
    v26 = *((unsigned __int16 *)v5 + 1);
    v13 = v23;
    v14 = (unsigned __int8 *)&v5[v26];
    if ( v23 < (unsigned __int8 *)&v5[v26] )
    {
      while ( (unsigned __int64)(v14 - v13) >= 2 )
      {
        if ( v13[1] == 4 )
        {
          if ( !v13 )
            break;
          v24 = (__int64)v13;
          if ( v25 < (char *)v13
            || v25 - (char *)v13 > 0xFFFF
            || (unsigned __int64)(v25 - (char *)v13) < 6
            || v13[5] != 9 )
          {
            v24 = 0LL;
          }
          if ( v25 < (char *)v13 || v25 - (char *)v13 > 0xFFFF || (unsigned __int64)(v25 - (char *)v13) < 8 || v13[7] )
            v24 = 0LL;
          v27 = *v13;
          v23 = &v13[v27];
          if ( v24 )
            goto LABEL_46;
          if ( (_BYTE)v27 )
            goto LABEL_33;
          break;
        }
        v35 = *v13;
        if ( !*v13 )
        {
          LOBYTE(v42) = 0;
          UsbhException(a1, 0, 83, (int)v5, v26, -1, -1, usbfile_usbd_c, 105, v42);
          break;
        }
        v36 = &v13[v35];
        if ( v13 <= v36 )
        {
          v13 += v35;
          if ( v36 < v14 )
            continue;
        }
        break;
      }
    }
  }
  else
  {
    v24 = UsbhParseConfigurationDescriptorEx(a1, (_DWORD)v5, v41, 9, -1, -1);
  }
LABEL_103:
  if ( !v24 )
  {
    LOBYTE(v42) = 0;
    UsbhException(a1, 0, 18, (int)v5, *((unsigned __int16 *)v5 + 1), -1073741823, 0, usbfile_hub_c, 4478, v42);
    v39 = *((unsigned __int16 *)v5 + 1);
    v40 = 1667655732;
LABEL_106:
    Log(a1, 8, v40, v39, (__int64)v5);
    ExFreePoolWithTag(v5, 0);
    return 3221225473LL;
  }
LABEL_46:
  v28 = *(_BYTE *)(v24 + 5);
  if ( v28 != 9 )
  {
    v39 = v28;
    v40 = 1667655733;
    goto LABEL_106;
  }
  ConfigurationRequest = UsbhCreateConfigurationRequestEx(v13, v5, v14, v24);
  v30 = ConfigurationRequest;
  if ( ConfigurationRequest )
  {
    v31 = UsbhSyncSendInternalIoctl(a1, 2228227LL, ConfigurationRequest, 0LL);
    Log(a1, 8, 1667655735, 0LL, v31);
    if ( v31 >= 0 )
    {
      *(_OWORD *)(v2 + 658) = *(_OWORD *)(v30 + 64);
      *((_QWORD *)v2 + 331) = *(_QWORD *)(v30 + 80);
      *((_QWORD *)v2 + 328) = *(_QWORD *)(v30 + 32);
    }
    ExFreePoolWithTag(v5, 0);
    ExFreePoolWithTag((PVOID)v30, 0);
    return (unsigned int)v31;
  }
  else
  {
    Log(a1, 8, 1667655734, 0LL, 0LL);
    ExFreePoolWithTag(v5, 0);
    return 3221225626LL;
  }
}
