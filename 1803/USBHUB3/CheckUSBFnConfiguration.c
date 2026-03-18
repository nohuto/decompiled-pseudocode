/*
 * XREFs of CheckUSBFnConfiguration @ 0x1C0037EF8
 * Callers:
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C0038118 (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C003827C (UsbDualRoleFeaturesQueryLocalMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0037B54 (WPP_RECORDER_SF_Sd.c)
 *     MyRegOpenKeyForRead @ 0x1C00384C4 (MyRegOpenKeyForRead.c)
 *     MyRegQueryString @ 0x1C0038520 (MyRegQueryString.c)
 */

__int64 __fastcall CheckUSBFnConfiguration(_DWORD *a1, const wchar_t *a2)
{
  __int64 v4; // rax
  SIZE_T v5; // rsi
  wchar_t *PoolWithTag; // rax
  wchar_t *v7; // rbp
  int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int String; // eax
  wchar_t *v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rax
  int v18; // [rsp+20h] [rbp-48h]
  HANDLE Handle; // [rsp+80h] [rbp+18h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h]

  Handle = 0LL;
  P = 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = 2 * v4 + 146;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x55445246u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    wcscpy_s(PoolWithTag, v5, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN\\Configurations\\");
    wcscat_s(v7, v5, a2);
    v8 = MyRegOpenKeyForRead(v9, v7, &Handle);
    if ( v8 >= 0 )
    {
      String = MyRegQueryString(Handle);
      v14 = (wchar_t *)P;
      v8 = String;
      if ( String >= 0 )
      {
        LODWORD(v15) = 0;
        if ( *(_WORD *)P )
        {
          do
          {
            if ( *a1 == 14 )
              break;
            if ( (*a1 & 2) != 0 || _wcsicmp(&v14[(unsigned int)v15], L"MTP") )
            {
              if ( (*(_BYTE *)a1 & 4) != 0 || _wcsicmp(&v14[(unsigned int)v15], L"IpOverUsb") )
              {
                if ( (*(_BYTE *)a1 & 8) == 0 && !_wcsicmp(&v14[(unsigned int)v15], L"VidStream") )
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
            v16 = -1LL;
            do
              ++v16;
            while ( v14[(unsigned int)v15 + v16] );
            v15 = (unsigned int)(v16 + v15 + 1);
          }
          while ( v14[v15] );
        }
      }
      else
      {
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          1u,
          0x18u,
          (__int64)&WPP_9cce5eef9b87323d59081bfb01133c40_Traceguids,
          String);
      }
      if ( v14 )
        ExFreePoolWithTag(v14, 0);
    }
    else
    {
      WPP_RECORDER_SF_Sd((__int64)WPP_GLOBAL_Control->DeviceExtension, v10, v11, v12, v18, v7);
    }
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
    v8 = -1073741670;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      1u,
      0x16u,
      (__int64)&WPP_9cce5eef9b87323d59081bfb01133c40_Traceguids,
      -1073741670);
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v8;
}
