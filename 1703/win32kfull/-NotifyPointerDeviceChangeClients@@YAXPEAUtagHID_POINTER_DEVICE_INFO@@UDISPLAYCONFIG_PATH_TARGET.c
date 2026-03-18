/*
 * XREFs of ?NotifyPointerDeviceChangeClients@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UDISPLAYCONFIG_PATH_TARGET_INFO@@UDISPLAYCONFIG_SOURCE_MODE@@H@Z @ 0x1C01A52D0
 * Callers:
 *     ?SetPointerDeviceDisplayConfig@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@HPEAUtagDISPLAY_PATH_INFO@@PEAUtagQDC_DATA@@@Z @ 0x1C01A5A18 (-SetPointerDeviceDisplayConfig@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@HPEAUtagDISPLAY_PATH_INFO@@PE.c)
 * Callees:
 *     PostPointerEventMessage @ 0x1C00B0620 (PostPointerEventMessage.c)
 */

void __fastcall NotifyPointerDeviceChangeClients(_DWORD *a1, __int64 a2, _DWORD *a3, int a4)
{
  int v4; // r11d
  int v5; // r10d
  int v7; // r11d
  int v8; // r11d
  int v9; // r11d
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  unsigned int v13; // eax

  v4 = *(_DWORD *)(a2 + 20);
  v5 = 0;
  if ( a1[185] != v4 )
  {
    v7 = v4 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 == 1 )
            v5 = 32;
        }
        else
        {
          v5 = 16;
        }
      }
      else
      {
        v5 = 8;
      }
    }
    else
    {
      v5 = 4;
    }
  }
  v10 = *(_DWORD *)(a2 + 24);
  if ( a1[186] != v10 )
  {
    v11 = v10 - 2;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 == 1 )
          v5 |= 0x800u;
      }
      else
      {
        v5 |= 0x40u;
      }
    }
    else
    {
      v5 |= 0x80u;
    }
  }
  if ( a1[195] != a3[3] || a1[196] != a3[4] )
    v5 |= 0x400u;
  if ( a1[192] != *a3 || a1[193] != a3[1] )
    v5 |= 0x200u;
  v13 = v5 | 0x100;
  if ( !a4 )
    v13 = v5;
  if ( v13 )
    PostPointerEventMessage((__int64)a1, 0x238u, v13, 1);
}
