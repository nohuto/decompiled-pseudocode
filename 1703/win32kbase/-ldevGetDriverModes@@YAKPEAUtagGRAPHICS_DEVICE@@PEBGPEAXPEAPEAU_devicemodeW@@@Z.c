/*
 * XREFs of ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C005F630
 * Callers:
 *     DrvBuildDevmodeList @ 0x1C005E770 (DrvBuildDevmodeList.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ldevUnloadImage @ 0x1C005F790 (ldevUnloadImage.c)
 *     ldevLoadDriver @ 0x1C005F8A0 (ldevLoadDriver.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ldevGetDriverModes(
        struct tagGRAPHICS_DEVICE *a1,
        const unsigned __int16 *a2,
        void *a3,
        struct _devicemodeW **a4)
{
  unsigned int v7; // ebx
  __int64 Driver; // rax
  __int64 v9; // rbp
  __int64 (__fastcall *v10)(void *, _QWORD, struct _devicemodeW *); // r14
  unsigned int v11; // edi
  struct _devicemodeW *v12; // rax
  unsigned int v13; // eax
  int v14; // ecx
  unsigned int v16; // r8d
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned int v19; // eax

  *a4 = 0LL;
  v7 = 0;
  Driver = ldevLoadDriver(a2);
  v9 = Driver;
  if ( Driver )
  {
    v10 = *(__int64 (__fastcall **)(void *, _QWORD, struct _devicemodeW *))(Driver + 392);
    if ( v10 )
    {
      while ( 1 )
      {
        v11 = v10(a3, 0LL, 0LL);
        if ( !v11 )
          break;
        if ( *(_DWORD *)(v9 + 56) < 0x30000u && v11 <= 0x10000 )
          v11 = 0x10000;
        v12 = (struct _devicemodeW *)PALLOCMEM2(v11, 1936876615LL, 0);
        *a4 = v12;
        if ( !v12 )
          break;
        v13 = v10(a3, v11, v12);
        v14 = *((_DWORD *)a1 + 40);
        v7 = v13;
        if ( (v14 & 0x800000) == 0 || v13 != -1 )
        {
          if ( (v14 & 0x4000000) != 0 )
          {
            v16 = 0;
            if ( v13 )
            {
              v17 = (__int64)*a4;
              do
              {
                v18 = v16;
                v16 += *(unsigned __int16 *)(v16 + v17 + 70) + *(unsigned __int16 *)(v16 + v17 + 68);
                v19 = 0;
                if ( *(_DWORD *)(v18 + v17 + 168) == 32 )
                  v19 = v7;
                v7 = v19;
              }
              while ( v16 < v19 );
            }
          }
          break;
        }
        Win32FreePool((__int64)*a4);
      }
    }
    ldevUnloadImage(v9);
    if ( v7 && ((*a4)->dmFields & 0x7C0000) != 0x7C0000 )
      return 0;
  }
  return v7;
}
