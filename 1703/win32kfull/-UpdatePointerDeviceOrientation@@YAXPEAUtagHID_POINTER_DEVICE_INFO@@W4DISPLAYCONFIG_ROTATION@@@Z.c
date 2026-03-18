/*
 * XREFs of ?UpdatePointerDeviceOrientation@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@W4DISPLAYCONFIG_ROTATION@@@Z @ 0x1C01A6670
 * Callers:
 *     ?SetPointerDeviceDisplayConfig@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@HPEAUtagDISPLAY_PATH_INFO@@PEAUtagQDC_DATA@@@Z @ 0x1C01A5A18 (-SetPointerDeviceDisplayConfig@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@HPEAUtagDISPLAY_PATH_INFO@@PE.c)
 * Callees:
 *     <none>
 */

void __fastcall UpdatePointerDeviceOrientation(__int64 a1, int a2)
{
  int v2; // r11d
  _QWORD *v3; // r8
  int v4; // r10d
  __int64 v5; // rax

  v2 = *(_DWORD *)(a1 + 700);
  v3 = *(_QWORD **)(a1 + 320);
  v4 = 1;
  switch ( v2 )
  {
    case 1:
      v4 = 3;
      break;
    case 2:
      v4 = 4;
      break;
    case 4:
      v4 = 2;
      break;
  }
  if ( v2 != a2 && a2 != v4 )
  {
    *(_DWORD *)(a1 + 160) ^= *(_DWORD *)(a1 + 156);
    *(_DWORD *)(a1 + 156) ^= *(_DWORD *)(a1 + 160);
    *(_DWORD *)(a1 + 160) ^= *(_DWORD *)(a1 + 156);
    *(_DWORD *)(a1 + 168) ^= *(_DWORD *)(a1 + 164);
    *(_DWORD *)(a1 + 164) ^= *(_DWORD *)(a1 + 168);
    *(_DWORD *)(a1 + 168) ^= *(_DWORD *)(a1 + 164);
    *(_DWORD *)(a1 + 176) ^= *(_DWORD *)(a1 + 172);
    *(_DWORD *)(a1 + 172) ^= *(_DWORD *)(a1 + 176);
    *(_DWORD *)(a1 + 176) ^= *(_DWORD *)(a1 + 172);
    *(_DWORD *)(a1 + 184) ^= *(_DWORD *)(a1 + 180);
    *(_DWORD *)(a1 + 180) ^= *(_DWORD *)(a1 + 184);
    *(_DWORD *)(a1 + 184) ^= *(_DWORD *)(a1 + 180);
  }
  if ( v3 )
  {
    switch ( a2 )
    {
      case 1:
        v5 = v3[2];
        goto LABEL_19;
      case 2:
        v5 = v3[4];
        goto LABEL_19;
      case 3:
        v5 = v3[6];
        goto LABEL_19;
      case 4:
        v5 = v3[8];
LABEL_19:
        v3[10] = v5;
        break;
    }
  }
  *(_DWORD *)(a1 + 700) = a2;
}
