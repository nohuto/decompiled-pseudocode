/*
 * XREFs of RIMOnPnpNotification @ 0x1C01027D0
 * Callers:
 *     NtRIMOnPnpNotification @ 0x1C00FFB60 (NtRIMOnPnpNotification.c)
 *     ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x1C011A450 (-OnPnpNotification@CBaseInput@@AEAAJXZ.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C011A480 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0050284 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 *     rimDoRimDevChange @ 0x1C0051F54 (rimDoRimDevChange.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0094074 (rimProcessAnyQueuedCompleteFrames.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C00940C4 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     RIMDoOnPnpNotification @ 0x1C0094468 (RIMDoOnPnpNotification.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0095144 (RIMStartDeviceSpecificRead.c)
 *     rimSignalReadComplete @ 0x1C00999CC (rimSignalReadComplete.c)
 *     rimStackAttachAndProcessInput @ 0x1C0099CF0 (rimStackAttachAndProcessInput.c)
 *     WPP_RECORDER_SF_qqSd @ 0x1C01037BC (WPP_RECORDER_SF_qqSd.c)
 *     RIMFreeDev @ 0x1C010DB18 (RIMFreeDev.c)
 *     rimDoScheduledSecondaryRimPnpWorkPending @ 0x1C011069C (rimDoScheduledSecondaryRimPnpWorkPending.c)
 */

__int64 __fastcall RIMOnPnpNotification(char *a1)
{
  int v2; // r14d
  PVOID v3; // rbx
  char *v4; // rbp
  __int64 v5; // rsi
  __int64 i; // rdi
  int v7; // eax
  __int64 v8; // rdi
  int v9; // eax
  NTSTATUS v10; // eax
  __int64 j; // rdi
  int v12; // eax
  int v13; // r8d
  __int64 v14; // r8
  __int64 k; // rdi
  int v16; // eax
  unsigned __int64 v17; // rax
  __int64 m; // rdi
  char v19; // al
  int v20; // edx
  int v21; // r8d
  int v22; // r9d
  int ObjectType; // [rsp+20h] [rbp-58h]
  KPROCESSOR_MODE AccessMode[8]; // [rsp+28h] [rbp-50h]
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF
  char *v27; // [rsp+90h] [rbp+18h]

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    19,
    53,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  v2 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v2 >= 0 )
  {
    v3 = Object;
    v4 = (char *)Object + 96;
    v27 = (char *)Object + 96;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v3 + 73) || *((_BYTE *)v3 + 75) )
    {
      v2 = -1073741637;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        3,
        18,
        57,
        (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
    }
    else
    {
      v5 = (__int64)v3 + 696;
      RIMLockExclusive((__int64)v3 + 696);
      if ( *((_DWORD *)v3 + 252) )
      {
        rimDoScheduledSecondaryRimPnpWorkPending(v3);
        _InterlockedDecrement((volatile signed __int32 *)v3 + 252);
        v3 = Object;
      }
      for ( i = *((_QWORD *)v3 + 69); i; i = *(_QWORD *)(i + 40) )
      {
        v7 = *(_DWORD *)(i + 184);
        if ( (v7 & 0x1000) == 0 && *(_BYTE *)(i + 204) && (v7 & 0x40) == 0 )
          RIMStartDeviceSpecificRead((__int64)v3, i);
      }
      *(_QWORD *)(v5 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v5, 0LL);
      KeLeaveCriticalRegion();
      v8 = *((_QWORD *)v3 + 69);
      if ( v8 )
      {
        do
        {
          if ( *((_QWORD *)v3 + 96) || *((_DWORD *)v3 + 244) )
          {
            v9 = *(_DWORD *)(v8 + 184);
            if ( (v9 & 0x1000) != 0 && (v9 & 0x20000) != 0 )
            {
              if ( *((_DWORD *)v3 + 244) )
                v10 = 0;
              else
                v10 = ObOpenObjectByPointer(
                        *(PVOID *)(v8 + 32),
                        0,
                        0LL,
                        3u,
                        ExRawInputManagerObjectType,
                        0,
                        (PHANDLE)(v8 + 352));
              if ( v10 < 0 )
              {
                WPP_RECORDER_SF_D(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  3u,
                  0x12u,
                  0x36u,
                  (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
              }
              else
              {
                rimDoRimDevChange((__int64)v3, v8, 2);
                *(_DWORD *)(v8 + 184) &= ~0x20000u;
                if ( *((_DWORD *)v3 + 244) )
                  *(_DWORD *)(v8 + 184) |= 0x200000u;
                *(_DWORD *)(v8 + 184) |= 0x800000u;
              }
            }
          }
          v8 = *(_QWORD *)(v8 + 40);
        }
        while ( v8 );
        v4 = v27;
      }
      for ( j = *((_QWORD *)v3 + 69); j; j = *(_QWORD *)(j + 40) )
      {
        if ( *((_QWORD *)v3 + 96) || *((_DWORD *)v3 + 244) )
        {
          v12 = *(_DWORD *)(j + 184);
          if ( (v12 & 0x1000) != 0 && (v12 & 0x800000) != 0 )
          {
            *(_DWORD *)(j + 184) = v12 & 0xFF7FFFFF;
            RIMLockExclusive(v5);
            if ( (*(_DWORD *)(j + 200) & 0x80u) == 0 )
            {
              if ( *((_BYTE *)v3 + 712) && *(_BYTE *)(j + 48) <= 1u )
              {
                *((_BYTE *)v3 + 712) = 0;
                v14 = 468LL;
                if ( *(_BYTE *)(j + 48) == 1 )
                  v14 = 492LL;
                rimStackAttachAndProcessInput((__int64)v3, j, j + v14, j + 256, 0);
                rimSignalReadComplete((__int64)v3, j);
              }
            }
            else
            {
              rimProcessAnyQueuedCompleteFrames((__int64)v3, j, v13);
            }
            *(_QWORD *)(v5 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v5, 0LL);
            KeLeaveCriticalRegion();
          }
        }
      }
LABEL_43:
      for ( k = *((_QWORD *)v3 + 69); k; k = *(_QWORD *)(k + 40) )
      {
        if ( *((_QWORD *)v3 + 96) || *((_DWORD *)v3 + 244) )
        {
          v16 = *(_DWORD *)(k + 184);
          if ( (v16 & 0x1000) != 0 && (v16 & 0x40000) != 0 )
          {
            if ( *(_QWORD *)(k + 352) || *((_DWORD *)v3 + 244) )
            {
              rimDoRimDevChange((__int64)v3, k, 3);
              *(_DWORD *)(k + 184) &= ~0x40000u;
              if ( *((_DWORD *)v3 + 244) )
                *(_DWORD *)(k + 184) |= 0x400000u;
              else
                NtClose(*(HANDLE *)(k + 352));
              v17 = *(_QWORD *)(k + 32);
              *(_QWORD *)(k + 352) = 0LL;
              RIMFreeDev(v3, (v17 + 64) & ((unsigned __int128)-(__int128)v17 >> 64));
              goto LABEL_43;
            }
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              3,
              18,
              55,
              (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
          }
        }
      }
      for ( m = *((_QWORD *)v3 + 69); m; m = *(_QWORD *)(m + 40) )
      {
        if ( (*(_DWORD *)(m + 184) & 0x10) != 0 )
        {
          v19 = RimDeviceTypeToRimInputType(m, *(unsigned __int8 *)(m + 48));
          WPP_RECORDER_SF_qqSd(
            WPP_GLOBAL_Control->DeviceExtension,
            v20,
            v21,
            v22,
            ObjectType,
            (char)v3,
            m,
            *(_QWORD *)(m + 216),
            v19);
          RIMDoOnPnpNotification((__int64)v3, m);
          *(_DWORD *)(m + 184) &= ~0x10u;
          KeSetEvent(*(PRKEVENT *)(m + 360), 1, 0);
        }
      }
      RIMSignalAllPriorPnpWorkToCompleteWaiters((__int64)v3);
    }
    *((_QWORD *)v4 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v3);
  }
  *(_DWORD *)AccessMode = v2;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x3Au,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
    *(_QWORD *)AccessMode);
  return (unsigned int)v2;
}
