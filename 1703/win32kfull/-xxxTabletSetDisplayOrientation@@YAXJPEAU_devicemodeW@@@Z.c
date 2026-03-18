/*
 * XREFs of ?xxxTabletSetDisplayOrientation@@YAXJPEAU_devicemodeW@@@Z @ 0x1C019F6E4
 * Callers:
 *     ?xxxTabletButtonExecuteAction@@YAXPEAUtagTABLET_BUTTON_ACTION@@HPEAU_devicemodeW@@@Z @ 0x1C019F594 (-xxxTabletButtonExecuteAction@@YAXPEAUtagTABLET_BUTTON_ACTION@@HPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?TabletRetrieveDevMode@@YAJPEAU_devicemodeW@@@Z @ 0x1C019D9D0 (-TabletRetrieveDevMode@@YAJPEAU_devicemodeW@@@Z.c)
 */

void __fastcall xxxTabletSetDisplayOrientation(DWORD a1, struct _devicemodeW *a2)
{
  int v4; // ecx
  DWORD dmFields; // edx
  DWORD dmDisplayOrientation; // r8d
  DWORD dmPelsWidth; // ecx
  DWORD dmBitsPerPel; // eax
  _QWORD v9[8]; // [rsp+40h] [rbp-138h] BYREF
  struct _devicemodeW v10; // [rsp+80h] [rbp-F8h] BYREF

  memset(v9, 0, sizeof(v9));
  EtwActivityIdControl(3u, (LPGUID)&v9[1]);
  v4 = 0;
  v9[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v9[3]) = 19;
  if ( !a2 )
  {
    v4 = TabletRetrieveDevMode(&v10);
    if ( v4 < 0 )
      return;
    a2 = &v10;
  }
  dmFields = a2->dmFields;
  if ( (dmFields & 0x80u) != 0 )
  {
    dmDisplayOrientation = a2->dmDisplayOrientation;
    if ( a1 > 3 )
    {
      if ( a1 == -1 )
      {
        gCurrentOrientation = (gCurrentOrientation + 1) & 3;
        a2->dmDisplayOrientation = gbOrientationTable[gCurrentOrientation];
      }
      else
      {
        v4 = -1073741823;
      }
    }
    else
    {
      a2->dmDisplayOrientation = a1;
    }
    if ( v4 >= 0 )
    {
      a2->dmFields = dmFields & 0x7C0080;
      if ( ((dmDisplayOrientation & 0xFFFFFFFD) == 0) != ((a2->dmDisplayOrientation & 0xFFFFFFFD) == 0) )
      {
        dmPelsWidth = a2->dmPelsWidth;
        a2->dmPelsWidth = a2->dmPelsHeight;
        a2->dmPelsHeight = dmPelsWidth;
      }
      if ( a2->dmPelsWidth >= 0x258 )
      {
        while ( (unsigned int)xxxUserChangeDisplaySettings(0LL, a2, 0LL, 9LL, 0LL, 0, 0, v9) == -2 )
        {
          dmBitsPerPel = a2->dmBitsPerPel;
          if ( dmBitsPerPel < 0x18 )
            break;
          a2->dmBitsPerPel = dmBitsPerPel - 8;
        }
      }
    }
  }
}
