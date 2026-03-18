/*
 * XREFs of ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C00372D8
 * Callers:
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C0037594 (UsbDualRoleFeaturesQueryLocalMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C002B994 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0036F34 (WPP_RECORDER_SF_Sd.c)
 *     MyRegOpenKeyForRead @ 0x1C00377C0 (MyRegOpenKeyForRead.c)
 *     MyRegQueryString @ 0x1C003781C (MyRegQueryString.c)
 */

void __fastcall ReadUSBFnFeaturesFromCurrentConfiguration(_DWORD *a1)
{
  int v2; // eax
  int String; // eax
  wchar_t *v4; // r14
  unsigned __int16 v5; // r9
  __int64 v6; // rax
  SIZE_T v7; // rsi
  wchar_t *PoolWithTag; // rax
  wchar_t *v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  wchar_t *v15; // rsi
  __int64 v16; // r12
  __int64 v17; // rax
  int v18; // [rsp+20h] [rbp-20h]
  __int64 v19; // [rsp+28h] [rbp-18h]
  HANDLE Handle; // [rsp+80h] [rbp+40h] BYREF
  wchar_t *Src; // [rsp+88h] [rbp+48h]
  PVOID P; // [rsp+90h] [rbp+50h]

  *a1 &= 0xFFFFFFF1;
  Handle = 0LL;
  Src = 0LL;
  P = 0LL;
  v2 = MyRegOpenKeyForRead(a1, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN\\Default", &Handle);
  if ( v2 < 0 )
  {
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      1u,
      0x16u,
      (__int64)&WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids,
      v2);
    goto LABEL_33;
  }
  String = MyRegQueryString(Handle);
  v4 = Src;
  if ( String >= 0 )
  {
    WPP_RECORDER_SF_S(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      1u,
      0x18u,
      (__int64)&WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids,
      Src);
    ZwClose(Handle);
    v6 = -1LL;
    Handle = 0LL;
    do
      ++v6;
    while ( v4[v6] );
    v7 = 2 * v6 + 146;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x55445246u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      wcscpy_s(PoolWithTag, v7, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN\\Configurations\\");
      wcscat_s(v9, v7, v4);
      if ( (int)MyRegOpenKeyForRead(v10, v9, &Handle) >= 0 )
      {
        v14 = MyRegQueryString(Handle);
        v15 = (wchar_t *)P;
        if ( v14 >= 0 )
        {
          LODWORD(v16) = 0;
          if ( *(_WORD *)P )
          {
            do
            {
              if ( *a1 == 14 )
                break;
              if ( (*a1 & 2) != 0 || _wcsicmp(&v15[(unsigned int)v16], L"MTP") )
              {
                if ( (*(_BYTE *)a1 & 4) != 0 || _wcsicmp(&v15[(unsigned int)v16], L"IpOverUsb") )
                {
                  if ( (*(_BYTE *)a1 & 8) == 0 && !_wcsicmp(&v15[(unsigned int)v16], L"VidStream") )
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
              v17 = -1LL;
              do
                ++v17;
              while ( v15[(unsigned int)v16 + v17] );
              v16 = (unsigned int)(v17 + v16 + 1);
            }
            while ( v15[v16] );
          }
        }
        else
        {
          LODWORD(v19) = v14;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            1u,
            0x1Bu,
            (__int64)&WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids,
            v19);
        }
        if ( v15 )
          ExFreePoolWithTag(v15, 0);
      }
      else
      {
        WPP_RECORDER_SF_Sd((__int64)WPP_GLOBAL_Control->DeviceExtension, v11, v12, v13, v18, v9);
      }
      ExFreePoolWithTag(v9, 0);
      goto LABEL_31;
    }
    v5 = 25;
    LODWORD(v19) = -1073741670;
  }
  else
  {
    v5 = 23;
    LODWORD(v19) = String;
  }
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    1u,
    v5,
    (__int64)&WPP_4020955e32f739b2468c4a2c1fbaa770_Traceguids,
    v19);
LABEL_31:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
LABEL_33:
  if ( Handle )
    ZwClose(Handle);
}
