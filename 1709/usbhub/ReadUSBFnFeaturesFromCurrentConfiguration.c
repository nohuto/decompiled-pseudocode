/*
 * XREFs of ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C0059888
 * Callers:
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C0059DFC (UsbDualRoleFeaturesQueryLocalMachine.c)
 * Callees:
 *     memmove @ 0x1C0029500 (memmove.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00463AC (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C005344C (WPP_RECORDER_SF_Sd.c)
 *     MyRegOpenKeyForRead @ 0x1C0059F7C (MyRegOpenKeyForRead.c)
 *     MyRegQueryString @ 0x1C0059FD8 (MyRegQueryString.c)
 */

void __fastcall ReadUSBFnFeaturesFromCurrentConfiguration(_DWORD *a1)
{
  __int64 v2; // r15
  int v3; // eax
  PVOID v4; // rsi
  HANDLE v5; // r12
  _DWORD *PoolWithTag; // rbp
  NTSTATUS v7; // eax
  int v8; // edx
  int v9; // r8d
  NTSTATUS v10; // ebx
  unsigned int v11; // r14d
  _DWORD *v12; // rax
  __int64 v13; // rax
  SIZE_T v15; // r14
  wchar_t *v16; // rax
  wchar_t *v17; // rbp
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // r8
  int String; // eax
  wchar_t *v22; // r14
  __int64 v23; // rax
  PULONG ResultLength; // [rsp+28h] [rbp-60h]
  PULONG ResultLengtha; // [rsp+28h] [rbp-60h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF
  ULONG Length; // [rsp+90h] [rbp+8h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+10h] BYREF
  PVOID P; // [rsp+A0h] [rbp+18h]

  *a1 &= 0xFFFFFFF1;
  LODWORD(v2) = 0;
  KeyHandle = 0LL;
  P = 0LL;
  v3 = MyRegOpenKeyForRead(a1, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN\\Default", &KeyHandle);
  if ( v3 < 0 )
  {
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      1u,
      0x16u,
      (__int64)&WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids,
      v3);
    goto LABEL_46;
  }
  v4 = 0LL;
  v5 = KeyHandle;
  RtlInitUnicodeString(&DestinationString, L"CurrentConfiguration");
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x55445246u);
  if ( !PoolWithTag )
    goto LABEL_18;
  v7 = ZwQueryValueKey(v5, &DestinationString, KeyValuePartialInformation, PoolWithTag, 0x10u, &Length);
  v10 = v7;
  if ( v7 == -2147483643 || v7 == -1073741789 )
  {
    v11 = PoolWithTag[2];
    v4 = ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x55445246u);
    if ( !v4 )
    {
LABEL_19:
      v10 = -1073741670;
      goto LABEL_20;
    }
    while ( 1 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      v12 = ExAllocatePoolWithTag(NonPagedPoolNx, Length, 0x55445246u);
      PoolWithTag = v12;
      if ( !v12 )
        break;
      v10 = ZwQueryValueKey(v5, &DestinationString, KeyValuePartialInformation, v12, Length, &Length);
      if ( v10 < 0 )
        goto LABEL_20;
      if ( v11 == PoolWithTag[2] )
      {
        memmove(v4, PoolWithTag + 3, v11);
        goto LABEL_13;
      }
      ExFreePoolWithTag(v4, 0);
      v11 = PoolWithTag[2];
      v4 = ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x55445246u);
      if ( !v4 )
        goto LABEL_19;
    }
LABEL_18:
    ExFreePoolWithTag(0LL, 0);
    goto LABEL_19;
  }
LABEL_13:
  if ( v10 >= 0 )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      v9,
      24,
      (__int64)&WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids,
      (__int64)v4);
    ZwClose(KeyHandle);
    v13 = -1LL;
    KeyHandle = 0LL;
    while ( *((_WORD *)v4 + ++v13) != 0 )
      ;
    v15 = 2 * v13 + 146;
    v16 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x55445246u);
    v17 = v16;
    if ( v16 )
    {
      wcscpy_s(v16, v15, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN\\Configurations\\");
      wcscat_s(v17, v15, (const wchar_t *)v4);
      v19 = MyRegOpenKeyForRead(v18, v17, &KeyHandle);
      if ( v19 >= 0 )
      {
        String = MyRegQueryString(KeyHandle);
        v22 = (wchar_t *)P;
        if ( String >= 0 )
        {
          if ( *(_WORD *)P )
          {
            do
            {
              if ( *a1 == 14 )
                break;
              if ( (*a1 & 2) != 0 || _wcsicmp(&v22[(unsigned int)v2], L"MTP") )
              {
                if ( (*(_BYTE *)a1 & 4) != 0 || _wcsicmp(&v22[(unsigned int)v2], L"IpOverUsb") )
                {
                  if ( (*(_BYTE *)a1 & 8) == 0 && !_wcsicmp(&v22[(unsigned int)v2], L"VidStream") )
                    *a1 |= 8u;
                }
                else
                {
                  *a1 |= 4u;
                }
              }
              else
              {
                *a1 |= 2u;
              }
              v23 = -1LL;
              do
                ++v23;
              while ( v22[(unsigned int)v2 + v23] );
              v2 = (unsigned int)(v23 + v2 + 1);
            }
            while ( v22[v2] );
          }
        }
        else
        {
          LODWORD(ResultLengtha) = String;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            1u,
            0x1Bu,
            (__int64)&WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids,
            ResultLengtha);
        }
        if ( v22 )
          ExFreePoolWithTag(v22, 0);
      }
      else
      {
        WPP_RECORDER_SF_Sd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          v20,
          0x1Au,
          (__int64)&WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids,
          v17,
          v19);
      }
      ExFreePoolWithTag(v17, 0);
    }
    else
    {
      LODWORD(ResultLengtha) = -1073741670;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        1u,
        0x19u,
        (__int64)&WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids,
        ResultLengtha);
    }
    goto LABEL_44;
  }
LABEL_20:
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    v4 = 0LL;
  }
  LODWORD(ResultLength) = v10;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    1u,
    0x17u,
    (__int64)&WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids,
    ResultLength);
LABEL_44:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
LABEL_46:
  if ( KeyHandle )
    ZwClose(KeyHandle);
}
