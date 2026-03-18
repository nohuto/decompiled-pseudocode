/*
 * XREFs of RIMOnPowerNotification @ 0x1C009AAC0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq @ 0x1C004D114 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 *     RIMDoOnPowerNotification @ 0x1C009AC10 (RIMDoOnPowerNotification.c)
 *     RIMEnumerateDevicesForTelemetry @ 0x1C009AE08 (RIMEnumerateDevicesForTelemetry.c)
 *     DbgPrintRIMAlways @ 0x1C00FF030 (DbgPrintRIMAlways.c)
 *     RIMDoMobileKeyboardInvalidation @ 0x1C01010A0 (RIMDoMobileKeyboardInvalidation.c)
 */

__int64 __fastcall RIMOnPowerNotification(char *a1, __int64 a2)
{
  __int64 v2; // r12
  int v4; // esi
  _QWORD *v5; // rdi
  int v6; // edx
  __int64 v7; // rbp
  int v8; // eax
  __int64 *v10; // r14
  unsigned int v11; // edi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *i; // r8
  struct _LIST_ENTRY *v14; // rdx
  __int64 v15; // rax
  __int64 *v16; // r15
  __int64 v17; // r12
  __int64 v18; // rdi
  int v19; // edx
  __int64 j; // rsi
  int v21; // eax
  __int64 v22; // [rsp+28h] [rbp-40h]
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    76,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  if ( a1 == (char *)-1LL )
  {
    if ( v2 == 2 )
    {
      v10 = 0LL;
      Object = 0LL;
      v11 = 0;
      RIMLockExclusive((__int64)&gObListLock);
      Flink = gObRimList.Flink;
      if ( gObRimList.Flink != &gObRimList )
      {
        do
        {
          if ( (HIDWORD(Flink[3].Blink) & 0x20) != 0
            && !BYTE1(Flink[3].Blink)
            && !LOBYTE(Flink[3].Blink)
            && !HIDWORD(Flink[60].Flink) )
          {
            ++v11;
          }
          Flink = Flink->Flink;
        }
        while ( Flink != &gObRimList );
        if ( v11 )
        {
          Object = (PVOID)Win32AllocPool(8LL * v11, 0x6D707352u);
          v10 = (__int64 *)Object;
          v11 = 0;
          if ( Object )
          {
            for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
            {
              v14 = i - 1;
              if ( (HIDWORD(i[3].Blink) & 0x20) != 0
                && !BYTE1(v14[4].Blink)
                && !LOBYTE(v14[4].Blink)
                && !HIDWORD(v14[61].Flink) )
              {
                v15 = v11++;
                v10[v15] = (__int64)v14;
              }
            }
          }
        }
      }
      qword_1C018EC88 = 0LL;
      ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
      KeLeaveCriticalRegion();
      if ( v11 )
      {
        v16 = v10;
        v17 = v11;
        do
        {
          v18 = *v16;
          RIMLockExclusive(*v16 + 96);
          if ( *(_BYTE *)(v18 + 73) || *(_BYTE *)(v18 + 75) )
          {
            LOBYTE(v19) = 3;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v19,
              18,
              79,
              (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
          }
          else
          {
            RIMLockExclusive(v18 + 696);
            for ( j = *(_QWORD *)(v18 + 552); j; j = *(_QWORD *)(j + 40) )
            {
              v21 = *(_DWORD *)(j + 184);
              if ( (v21 & 0x2000) != 0 && (v21 & 0x4000) != 0 )
              {
                RIMDoMobileKeyboardInvalidation(v18, j);
              }
              else if ( !*(_DWORD *)(v18 + 976) )
              {
                WPP_RECORDER_SF_qq(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  3u,
                  0x14u,
                  0x4Eu,
                  (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
                  v18,
                  j);
                DbgPrintRIMAlways("pRimObj:%p, pRimDev:%p rimInvalidateHidKeyboardDeviceKeys skipped as it is paused!\n");
              }
            }
            *(_QWORD *)(v18 + 704) = 0LL;
            ExReleasePushLockExclusiveEx(v18 + 696, 0LL);
            KeLeaveCriticalRegion();
          }
          *(_QWORD *)(v18 + 104) = 0LL;
          ExReleasePushLockExclusiveEx(v18 + 96, 0LL);
          KeLeaveCriticalRegion();
          ++v16;
          --v17;
        }
        while ( v17 );
        v10 = (__int64 *)Object;
      }
      if ( v10 )
        Win32FreePool((__int64)v10);
    }
    v4 = (int)Object;
  }
  else
  {
    v4 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
    if ( v4 >= 0 )
    {
      RIMEnumerateDevicesForTelemetry();
      v5 = Object;
      RIMLockExclusive((__int64)Object + 96);
      if ( *((_BYTE *)v5 + 73) || *((_BYTE *)v5 + 75) )
      {
        v4 = -1073741637;
        LOBYTE(v6) = 3;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v6,
          18,
          77,
          (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
      }
      else
      {
        RIMLockExclusive((__int64)(v5 + 87));
        v7 = v5[69];
        while ( v7 )
        {
          v8 = RIMDoOnPowerNotification(v5, v7, v2);
          v7 = *(_QWORD *)(v7 + 40);
          v4 = v8;
        }
        v5[88] = 0LL;
        ExReleasePushLockExclusiveEx(v5 + 87, 0LL);
        KeLeaveCriticalRegion();
      }
      v5[13] = 0LL;
      ExReleasePushLockExclusiveEx(v5 + 12, 0LL);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v5);
    }
  }
  LODWORD(v22) = v4;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x50u,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
    v22);
  return (unsigned int)v4;
}
