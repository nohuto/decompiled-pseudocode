/*
 * XREFs of DrvBuildDevmodeList @ 0x1C005E770
 * Callers:
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C005DCFC (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvEnumDisplaySettings @ 0x1C0061B40 (DrvEnumDisplaySettings.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C005F630 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     DrvGetDisplayDriverNames @ 0x1C005FE90 (DrvGetDisplayDriverNames.c)
 *     ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C00605BC (-PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C008D588 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

int __fastcall DrvBuildDevmodeList(struct tagGRAPHICS_DEVICE *a1, int a2, int a3)
{
  void *v3; // rax
  unsigned int *DisplayDriverNames; // rax
  __int64 v6; // r8
  unsigned int *v7; // rdi
  unsigned int v8; // esi
  unsigned int DriverModes; // eax
  void *v10; // r14
  size_t v11; // r15
  char *v12; // rbp
  __int64 v13; // rdx
  int v14; // edi
  unsigned int i; // r8d
  unsigned int j; // ebp
  __int64 v17; // rdx
  int v18; // eax
  int v19; // ecx
  __int64 v20; // rcx
  unsigned int v21; // edi
  unsigned int v22; // esi
  __int64 v23; // r11
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // r10d
  __int64 v28; // r9
  void *Src; // [rsp+50h] [rbp+8h] BYREF

  LODWORD(v3) = *((_DWORD *)a1 + 40);
  if ( ((unsigned int)v3 & 0x4000000) == 0 )
  {
    if ( ((unsigned int)v3 & 0x800000) != 0 && *((_DWORD *)a1 + 44) && *((_QWORD *)a1 + 23) )
    {
      if ( a3 && !a2 )
        goto LABEL_8;
      LODWORD(v3) = ((__int64 (__fastcall *)(char *, _QWORD, void **))qword_1C018BAA8)(
                      (char *)a1 + 264,
                      *((unsigned int *)a1 + 68),
                      &Src);
      if ( (int)v3 >= 0 )
      {
        LODWORD(v3) = (_DWORD)Src;
        if ( *((void **)a1 + 21) == Src )
          goto LABEL_8;
        *((_QWORD *)a1 + 21) = Src;
        goto LABEL_46;
      }
      a2 = 1;
    }
    if ( !a2 )
      goto LABEL_8;
  }
LABEL_46:
  if ( !*((_DWORD *)a1 + 44) )
    goto LABEL_9;
  v24 = *((_QWORD *)a1 + 23);
  if ( v24 )
  {
    LODWORD(v3) = Win32FreePool(v24);
    v25 = *((_QWORD *)a1 + 25);
    *((_QWORD *)a1 + 23) = 0LL;
    *((_DWORD *)a1 + 44) = 0;
    if ( v25 )
    {
      LODWORD(v3) = Win32FreePool(v25);
      *((_QWORD *)a1 + 25) = 0LL;
    }
  }
LABEL_8:
  if ( *((_DWORD *)a1 + 44) )
    return (int)v3;
LABEL_9:
  if ( *((_QWORD *)a1 + 23) )
    return (int)v3;
  *((_DWORD *)a1 + 48) = 0;
  DisplayDriverNames = (unsigned int *)DrvGetDisplayDriverNames(a1);
  v7 = DisplayDriverNames;
  if ( DisplayDriverNames )
  {
    v8 = 0;
    if ( *DisplayDriverNames )
    {
      do
      {
        DriverModes = ldevGetDriverModes(
                        a1,
                        *(const unsigned __int16 **)&v7[4 * v8 + 4],
                        *(void **)&v7[4 * v8 + 2],
                        (struct _devicemodeW **)&Src);
        v10 = Src;
        v11 = DriverModes;
        if ( DriverModes )
        {
          v12 = (char *)PALLOCMEM2(DriverModes + *((_DWORD *)a1 + 44), 1936876615LL, 0);
          if ( v12 )
          {
            if ( *((_DWORD *)a1 + 44) )
            {
              memmove(v12, *((const void **)a1 + 23), *((unsigned int *)a1 + 44));
              Win32FreePool(*((_QWORD *)a1 + 23));
            }
            memmove(&v12[*((unsigned int *)a1 + 44)], v10, v11);
            *((_DWORD *)a1 + 44) += v11;
            *((_QWORD *)a1 + 23) = v12;
          }
        }
        if ( v10 )
          Win32FreePool((__int64)v10);
        ++v8;
      }
      while ( v8 < *v7 );
    }
    Win32FreePool((__int64)v7);
  }
  v13 = *((unsigned int *)a1 + 44);
  if ( !(_DWORD)v13 && !*((_QWORD *)a1 + 23) )
    goto LABEL_54;
  v14 = 0;
  for ( i = 0;
        i < (unsigned int)v13;
        i += *(unsigned __int16 *)(i + *((_QWORD *)a1 + 23) + 70LL)
           + *(unsigned __int16 *)(i + *((_QWORD *)a1 + 23) + 68LL) )
  {
    ++v14;
  }
  v3 = PALLOCMEM2((unsigned int)(16 * v14), 1936876615LL, 1);
  *((_QWORD *)a1 + 25) = v3;
  if ( !v3 )
  {
    v26 = *((_QWORD *)a1 + 23);
    *((_DWORD *)a1 + 44) = 0;
    Win32FreePool(v26);
    *((_QWORD *)a1 + 23) = 0LL;
    goto LABEL_54;
  }
  v6 = 0LL;
  *((_DWORD *)a1 + 48) = v14;
  for ( j = 0; j < *((_DWORD *)a1 + 44); j += *(unsigned __int16 *)(v17 + 70) + (_DWORD)v3 )
  {
    v17 = *((_QWORD *)a1 + 23) + j;
    v18 = *(_DWORD *)(v17 + 72);
    if ( (v18 & 0x80u) == 0 )
    {
      *(_DWORD *)(v17 + 72) = v18 | 0x80;
    }
    else if ( *(_DWORD *)(v17 + 84) <= 3u )
    {
      goto LABEL_28;
    }
    *(_DWORD *)(v17 + 84) = 0;
LABEL_28:
    v19 = *(_DWORD *)(v17 + 72);
    if ( (v19 & 0x20000000) != 0 )
    {
      if ( (unsigned int)(*(_DWORD *)(v17 + 88) - 1) <= 1 )
        goto LABEL_30;
      *(_DWORD *)(v17 + 72) = v19 & 0xDFFFFFFF;
    }
    *(_DWORD *)(v17 + 88) = 0;
LABEL_30:
    v20 = (unsigned int)v6;
    v6 = (unsigned int)(v6 + 1);
    v20 *= 2LL;
    *(_DWORD *)(*((_QWORD *)a1 + 25) + 8 * v20) = 0;
    *(_QWORD *)(*((_QWORD *)a1 + 25) + 8 * v20 + 8) = v17;
    LODWORD(v3) = *(unsigned __int16 *)(v17 + 68);
  }
  v13 = *((unsigned int *)a1 + 48);
  v21 = 1;
  if ( (_DWORD)v13 )
  {
    v22 = 0;
    do
    {
      v23 = *((_QWORD *)a1 + 25);
      v6 = *(_QWORD *)(v23 + 16LL * v22 + 8);
      if ( *(_DWORD *)(v6 + 184) == 1 )
      {
        v27 = 1;
        if ( (_DWORD)v13 )
        {
          while ( 1 )
          {
            if ( v27 != v21 )
            {
              v28 = *(_QWORD *)(v23 + 16LL * (unsigned int)(v27 - 1) + 8);
              LODWORD(v3) = *(_DWORD *)(v28 + 168);
              if ( *(_DWORD *)(v6 + 168) == (_DWORD)v3 )
              {
                LODWORD(v3) = *(_DWORD *)(v28 + 172);
                if ( *(_DWORD *)(v6 + 172) == (_DWORD)v3 )
                {
                  LODWORD(v3) = *(_DWORD *)(v28 + 176);
                  if ( *(_DWORD *)(v6 + 176) == (_DWORD)v3 && ((*(_BYTE *)(v6 + 180) ^ *(_BYTE *)(v28 + 180)) & 4) == 0 )
                  {
                    LODWORD(v3) = *(_DWORD *)(v28 + 84);
                    if ( *(_DWORD *)(v6 + 84) == (_DWORD)v3 )
                    {
                      LODWORD(v3) = *(_DWORD *)(v28 + 88);
                      if ( *(_DWORD *)(v6 + 88) == (_DWORD)v3 )
                        break;
                    }
                  }
                }
              }
            }
            if ( ++v27 > (unsigned int)v13 )
              goto LABEL_34;
          }
          if ( (unsigned int)v13 > v21 )
            LODWORD(v3) = (unsigned int)memmove(
                                          (void *)(v23 + 16LL * v22),
                                          (const void *)(v23 + 16LL * v21),
                                          16LL * ((unsigned int)v13 - v21));
          --*((_DWORD *)a1 + 48);
          --v21;
          --v22;
        }
      }
LABEL_34:
      v13 = *((unsigned int *)a1 + 48);
      ++v21;
      ++v22;
    }
    while ( v21 <= (unsigned int)v13 );
  }
  if ( (*((_DWORD *)a1 + 40) & 0x6000008) == 0 )
  {
    LODWORD(v3) = PruneModesByDisplayDeviceCaps(a1, *((_DWORD *)a1 + 48), *((struct tagDEVMODEMARK **)a1 + 25));
    j = (unsigned int)v3;
  }
  if ( !j )
LABEL_54:
    LODWORD(v3) = DrvLogDisplayDriverEvent(2LL, v13, v6);
  return (int)v3;
}
