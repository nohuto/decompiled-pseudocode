/*
 * XREFs of UpdateMonitorDevices @ 0x1C007A450
 * Callers:
 *     DrvEnumDisplayDevices @ 0x1C003EEB0 (DrvEnumDisplayDevices.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C0069AC0 (DrvUpdateDisplayDriverParameters.c)
 *     GetMonitorPhysicalDimensions @ 0x1C00784F0 (GetMonitorPhysicalDimensions.c)
 *     DrvSetMonitorBrightness @ 0x1C007876C (DrvSetMonitorBrightness.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00789F0 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C00791C8 (-PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x1C00A09F0 (DrvCreatePhysicalMonitorObjects.c)
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x1C00A1D30 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 *     DrvPVPGetFirstActiveMonitor @ 0x1C00FA37C (DrvPVPGetFirstActiveMonitor.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     GreDeviceIoControlEx @ 0x1C007A620 (GreDeviceIoControlEx.c)
 */

void UpdateMonitorDevices()
{
  wchar_t *i; // rbx
  __int64 v1; // rcx
  int v2; // esi
  struct _DEVICE_OBJECT *v3; // rcx
  PVOID v4; // r8
  __int64 v5; // rdi
  __int64 v6; // r9
  __int64 v7; // r8
  PVOID v8; // rdx
  __int64 v9; // rcx
  void *v10; // rax
  __int64 v11; // [rsp+60h] [rbp+20h] BYREF
  PVOID P; // [rsp+68h] [rbp+28h] BYREF

  for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
  {
    P = 0LL;
    v2 = 1;
    v3 = (struct _DEVICE_OBJECT *)*((_QWORD *)i + 17);
    if ( !v3 )
      goto LABEL_2;
    if ( (int)GreDeviceIoControlEx(v3, 0x23201Bu, 0LL, 0, &P, 8u, (__int64)&v11, 1u) < 0 )
      goto LABEL_2;
    v4 = P;
    if ( !P )
      goto LABEL_2;
    LODWORD(v5) = 0;
    if ( (*(_DWORD *)P & 0x20000000) != 0 )
    {
      do
        v5 = (unsigned int)(v5 + 1);
      while ( (*((_DWORD *)P + 5 * v5) & 0x20000000) != 0 );
    }
    if ( *((_DWORD *)i + 56) < (unsigned int)v5 )
    {
      v9 = *((_QWORD *)i + 29);
      if ( v9 )
        Win32FreePool(v9);
      v10 = PALLOCMEM2((unsigned int)(20 * v5), 1986291527LL, 1);
      *((_QWORD *)i + 29) = v10;
      if ( !v10 )
      {
        *((_DWORD *)i + 56) = 0;
        ExFreePoolWithTag(P, 0);
        return;
      }
      v4 = P;
    }
    *((_DWORD *)i + 56) = v5;
    if ( (_DWORD)v5 )
    {
      v2 = 0;
      v6 = (unsigned int)v5;
      v7 = 0LL;
      do
      {
        *(_DWORD *)(v7 + *((_QWORD *)i + 29)) = 0;
        v8 = P;
        if ( (*(_DWORD *)((_BYTE *)P + v7) & 1) != 0 )
        {
          *(_DWORD *)(v7 + *((_QWORD *)i + 29)) |= 1u;
          v8 = P;
        }
        if ( (*(_DWORD *)((_BYTE *)v8 + v7) & 2) == 0 )
        {
          *(_DWORD *)(v7 + *((_QWORD *)i + 29)) |= 2u;
          v8 = P;
        }
        if ( *(int *)((char *)v8 + v7) >= 0 )
        {
          *(_DWORD *)(v7 + *((_QWORD *)i + 29)) |= 0x80000000;
          v8 = P;
        }
        if ( (*(_DWORD *)((_BYTE *)v8 + v7) & 0x40000000) == 0 )
        {
          *(_DWORD *)(v7 + *((_QWORD *)i + 29)) |= 0x40000000u;
          v8 = P;
        }
        *(_DWORD *)(v7 + *((_QWORD *)i + 29) + 4) = *(_DWORD *)((char *)v8 + v7 + 4);
        *(_QWORD *)(v7 + *((_QWORD *)i + 29) + 8) = *(_QWORD *)((char *)P + v7 + 8);
        *(_BYTE *)(v7 + *((_QWORD *)i + 29) + 16) = *((_BYTE *)P + v7 + 16);
        v7 += 20LL;
        --v6;
      }
      while ( v6 );
      v4 = P;
    }
    ExFreePoolWithTag(v4, 0);
    if ( v2 )
    {
LABEL_2:
      v1 = *((_QWORD *)i + 29);
      if ( v1 )
        Win32FreePool(v1);
      *((_DWORD *)i + 56) = 0;
      *((_QWORD *)i + 29) = 0LL;
    }
  }
}
