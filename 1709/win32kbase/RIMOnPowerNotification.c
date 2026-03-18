/*
 * XREFs of RIMOnPowerNotification @ 0x1C00A3A20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E724 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0019000 (RawInputManagerObjectResolveHandle.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     RIMDoOnPowerNotification @ 0x1C00A3B70 (RIMDoOnPowerNotification.c)
 *     RIMEnumerateDevicesForTelemetry @ 0x1C00A3D60 (RIMEnumerateDevicesForTelemetry.c)
 *     DbgPrintRIMAlways @ 0x1C00F0070 (DbgPrintRIMAlways.c)
 *     RIMDoMobileKeyboardInvalidation @ 0x1C01014E4 (RIMDoMobileKeyboardInvalidation.c)
 */

__int64 __fastcall RIMOnPowerNotification(char *a1, __int64 a2)
{
  int v4; // esi
  _QWORD *v5; // rdi
  __int64 v6; // rbp
  int v7; // eax
  __int64 *v9; // r14
  unsigned int v10; // edi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *i; // r8
  struct _LIST_ENTRY *v13; // rdx
  __int64 v14; // rax
  __int64 *v15; // r15
  __int64 v16; // r12
  __int64 v17; // rdi
  __int64 j; // rsi
  int v19; // eax
  __int64 v20; // [rsp+28h] [rbp-40h]
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x4Cu,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  if ( a1 == (char *)-1LL )
  {
    if ( a2 == 2 )
    {
      v9 = 0LL;
      Object = 0LL;
      v10 = 0;
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
            ++v10;
          }
          Flink = Flink->Flink;
        }
        while ( Flink != &gObRimList );
        if ( v10 )
        {
          Object = (PVOID)Win32AllocPool(8LL * v10, 0x6D707352u);
          v9 = (__int64 *)Object;
          v10 = 0;
          if ( Object )
          {
            for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
            {
              v13 = i - 1;
              if ( (HIDWORD(i[3].Blink) & 0x20) != 0
                && !BYTE1(v13[4].Blink)
                && !LOBYTE(v13[4].Blink)
                && !HIDWORD(v13[61].Flink) )
              {
                v14 = v10++;
                v9[v14] = (__int64)v13;
              }
            }
          }
        }
      }
      qword_1C0193AE8 = 0LL;
      ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
      KeLeaveCriticalRegion();
      if ( v10 )
      {
        v15 = v9;
        v16 = v10;
        do
        {
          v17 = *v15;
          RIMLockExclusive(*v15 + 96);
          if ( *(_BYTE *)(v17 + 73) || *(_BYTE *)(v17 + 75) )
          {
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              0x12u,
              0x4Fu,
              (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
          }
          else
          {
            RIMLockExclusive(v17 + 696);
            for ( j = *(_QWORD *)(v17 + 552); j; j = *(_QWORD *)(j + 40) )
            {
              v19 = *(_DWORD *)(j + 184);
              if ( (v19 & 0x2000) != 0 && (v19 & 0x4000) != 0 )
              {
                RIMDoMobileKeyboardInvalidation(v17, j);
              }
              else if ( !*(_DWORD *)(v17 + 976) )
              {
                WPP_RECORDER_SF_qq(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  3u,
                  0x14u,
                  0x4Eu,
                  (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
                  v17,
                  j);
                DbgPrintRIMAlways("pRimObj:%p, pRimDev:%p rimInvalidateHidKeyboardDeviceKeys skipped as it is paused!\n");
              }
            }
            *(_QWORD *)(v17 + 704) = 0LL;
            ExReleasePushLockExclusiveEx(v17 + 696, 0LL);
            KeLeaveCriticalRegion();
          }
          *(_QWORD *)(v17 + 104) = 0LL;
          ExReleasePushLockExclusiveEx(v17 + 96, 0LL);
          KeLeaveCriticalRegion();
          ++v15;
          --v16;
        }
        while ( v16 );
        v9 = (__int64 *)Object;
      }
      if ( v9 )
        Win32FreePool((__int64)v9);
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
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x12u,
          0x4Du,
          (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
      }
      else
      {
        RIMLockExclusive((__int64)(v5 + 87));
        v6 = v5[69];
        while ( v6 )
        {
          v7 = RIMDoOnPowerNotification(v5, v6, a2);
          v6 = *(_QWORD *)(v6 + 40);
          v4 = v7;
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
  LODWORD(v20) = v4;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x50u,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
    v20);
  return (unsigned int)v4;
}
