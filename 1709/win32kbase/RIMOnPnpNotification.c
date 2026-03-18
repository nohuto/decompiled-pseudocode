/*
 * XREFs of RIMOnPnpNotification @ 0x1C000A430
 * Callers:
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C0019990 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x1C00DB240 (-OnPnpNotification@CBaseInput@@AEAAJXZ.c)
 *     NtRIMOnPnpNotification @ 0x1C01000D0 (NtRIMOnPnpNotification.c)
 * Callees:
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C000A28C (rimProcessAnyQueuedCompleteFrames.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C000B52C (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     RIMDoOnPnpNotification @ 0x1C000B9F4 (RIMDoOnPnpNotification.c)
 *     RIMStartDeviceSpecificRead @ 0x1C000C120 (RIMStartDeviceSpecificRead.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0018F24 (RimDeviceTypeToRimInputType.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0019000 (RawInputManagerObjectResolveHandle.c)
 *     rimDoRimDevChange @ 0x1C001AEAC (rimDoRimDevChange.c)
 *     rimSignalReadComplete @ 0x1C00A46B8 (rimSignalReadComplete.c)
 *     rimStackAttachAndProcessInput @ 0x1C00A49F0 (rimStackAttachAndProcessInput.c)
 *     WPP_RECORDER_SF_qqSd @ 0x1C010383C (WPP_RECORDER_SF_qqSd.c)
 *     RIMTransferKeyboardInjectionDeviceDataFifoToDataBuffer @ 0x1C010A844 (RIMTransferKeyboardInjectionDeviceDataFifoToDataBuffer.c)
 *     RIMFreeDev @ 0x1C010CAFC (RIMFreeDev.c)
 *     rimDoScheduledSecondaryRimPnpWorkPending @ 0x1C010F130 (rimDoScheduledSecondaryRimPnpWorkPending.c)
 */

__int64 __fastcall RIMOnPnpNotification(__int64 a1)
{
  __int64 v2; // r8
  int v3; // edx
  int v4; // r14d
  char *v5; // rbx
  char *v6; // rbp
  char *v7; // rsi
  __int64 v8; // r8
  __int64 i; // rdi
  int v10; // eax
  __int64 v11; // rdi
  __int64 j; // rdi
  int v13; // eax
  __int64 k; // rdi
  int v15; // eax
  __int64 m; // rdi
  int v18; // eax
  NTSTATUS v19; // eax
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // r8
  char v23; // al
  int v24; // r8d
  int v25; // eax
  unsigned __int64 v26; // rax
  char v27; // al
  int v28; // edx
  int v29; // r8d
  int v30; // r9d
  int ObjectType; // [rsp+20h] [rbp-58h]
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF
  char *v33; // [rsp+90h] [rbp+18h]

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    19,
    53,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  LOBYTE(v2) = 1;
  v4 = RawInputManagerObjectResolveHandle(a1, 3LL, v2, &Object);
  if ( v4 < 0 )
    goto LABEL_31;
  v5 = (char *)Object;
  v6 = (char *)Object + 96;
  v33 = (char *)Object + 96;
  RIMLockExclusive((char *)Object + 96);
  if ( v5[73] || v5[75] )
  {
    v4 = -1073741637;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      3,
      18,
      57,
      (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
    goto LABEL_30;
  }
  v7 = v5 + 696;
  RIMLockExclusive(v5 + 696);
  if ( *((_DWORD *)v5 + 252) )
  {
    rimDoScheduledSecondaryRimPnpWorkPending(v5);
    _InterlockedDecrement((volatile signed __int32 *)v5 + 252);
    v5 = (char *)Object;
  }
  for ( i = *((_QWORD *)v5 + 69); i; i = *(_QWORD *)(i + 40) )
  {
    v10 = *(_DWORD *)(i + 184);
    if ( (v10 & 0x1000) == 0 && *(_BYTE *)(i + 204) && (v10 & 0x40) == 0 )
      RIMStartDeviceSpecificRead(v5, i, v8);
  }
  *((_QWORD *)v7 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v7, 0LL);
  KeLeaveCriticalRegion();
  v11 = *((_QWORD *)v5 + 69);
  if ( v11 )
  {
    do
    {
      if ( *((_QWORD *)v5 + 96) || *((_DWORD *)v5 + 244) )
      {
        v18 = *(_DWORD *)(v11 + 184);
        if ( (v18 & 0x1000) != 0 && (v18 & 0x20000) != 0 )
        {
          if ( *((_DWORD *)v5 + 244) && (v18 & 0x8000) == 0
            || (v19 = ObOpenObjectByPointer(
                        *(PVOID *)(v11 + 32),
                        0,
                        0LL,
                        3u,
                        ExRawInputManagerObjectType,
                        0,
                        (PHANDLE)(v11 + 352)),
                v19 >= 0) )
          {
            rimDoRimDevChange(v5, v11, 2LL);
            *(_DWORD *)(v11 + 184) &= ~0x20000u;
            if ( *((_DWORD *)v5 + 244) )
              *(_DWORD *)(v11 + 184) |= 0x200000u;
            *(_DWORD *)(v11 + 184) |= 0x800000u;
          }
          else
          {
            LOBYTE(v20) = 3;
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              v20,
              18,
              54,
              (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
              v19);
          }
        }
      }
      v11 = *(_QWORD *)(v11 + 40);
    }
    while ( v11 );
    v6 = v33;
  }
  for ( j = *((_QWORD *)v5 + 69); j; j = *(_QWORD *)(j + 40) )
  {
    if ( *((_QWORD *)v5 + 96) || *((_DWORD *)v5 + 244) )
    {
      v13 = *(_DWORD *)(j + 184);
      if ( (v13 & 0x1000) != 0 && (v13 & 0x800000) != 0 )
      {
        *(_DWORD *)(j + 184) = v13 & 0xFF7FFFFF;
        RIMLockExclusive(v7);
        if ( (*(_DWORD *)(j + 200) & 0x80u) == 0 )
        {
          if ( v5[712] )
          {
            v23 = *(_BYTE *)(j + 48);
            if ( v23 == 1 )
            {
              if ( (*(_DWORD *)(j + 184) & 0x1000) != 0 )
                RIMTransferKeyboardInjectionDeviceDataFifoToDataBuffer(v21, j);
            }
            else if ( v23 )
            {
              goto LABEL_59;
            }
            v5[712] = 0;
            v24 = 492;
            if ( *(_BYTE *)(j + 48) != 1 )
              v24 = 468;
            rimStackAttachAndProcessInput((_DWORD)v5, j, j + v24, j + 256, 0);
            rimSignalReadComplete(v5, j);
          }
        }
        else
        {
          rimProcessAnyQueuedCompleteFrames((__int64)v5, (__int64 **)j, v22);
        }
LABEL_59:
        *((_QWORD *)v7 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v7, 0LL);
        KeLeaveCriticalRegion();
        continue;
      }
    }
  }
LABEL_18:
  for ( k = *((_QWORD *)v5 + 69); k; k = *(_QWORD *)(k + 40) )
  {
    if ( *((_QWORD *)v5 + 96) || *((_DWORD *)v5 + 244) )
    {
      v15 = *(_DWORD *)(k + 184);
      if ( (v15 & 0x1000) != 0 && (v15 & 0x40000) != 0 )
      {
        if ( *(_QWORD *)(k + 352) || *((_DWORD *)v5 + 244) )
        {
          rimDoRimDevChange(v5, k, 3LL);
          *(_DWORD *)(k + 184) &= ~0x40000u;
          v25 = *(_DWORD *)(k + 184);
          if ( !*((_DWORD *)v5 + 244) || (v25 & 0x8000) != 0 )
            NtClose(*(HANDLE *)(k + 352));
          else
            *(_DWORD *)(k + 184) = v25 | 0x400000;
          v26 = *(_QWORD *)(k + 32);
          *(_QWORD *)(k + 352) = 0LL;
          RIMFreeDev(v5, (v26 + 64) & ((unsigned __int128)-(__int128)v26 >> 64));
          goto LABEL_18;
        }
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          3,
          18,
          55,
          (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
      }
    }
  }
  for ( m = *((_QWORD *)v5 + 69); m; m = *(_QWORD *)(m + 40) )
  {
    if ( (*(_DWORD *)(m + 184) & 0x10) != 0 )
    {
      v27 = RimDeviceTypeToRimInputType(m, *(unsigned __int8 *)(m + 48));
      WPP_RECORDER_SF_qqSd(
        WPP_GLOBAL_Control->DeviceExtension,
        v28,
        v29,
        v30,
        ObjectType,
        (char)v5,
        m,
        *(_QWORD *)(m + 216),
        v27);
      RIMDoOnPnpNotification(v5, m);
      *(_DWORD *)(m + 184) &= ~0x10u;
      KeSetEvent(*(PRKEVENT *)(m + 360), 1, 0);
    }
  }
  RIMSignalAllPriorPnpWorkToCompleteWaiters(v5);
LABEL_30:
  *((_QWORD *)v6 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v6, 0LL);
  KeLeaveCriticalRegion();
  ObfDereferenceObject(v5);
LABEL_31:
  LOBYTE(v3) = 3;
  WPP_RECORDER_SF_d(
    WPP_GLOBAL_Control->DeviceExtension,
    v3,
    19,
    58,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
    v4);
  return (unsigned int)v4;
}
