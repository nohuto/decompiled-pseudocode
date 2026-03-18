/*
 * XREFs of CiSchedulerWait @ 0x1C00038B4
 * Callers:
 *     CiSchedulerThreadFunction @ 0x1C00035A0 (CiSchedulerThreadFunction.c)
 * Callees:
 *     CiLogSchedulerWakeup @ 0x1C0001924 (CiLogSchedulerWakeup.c)
 *     WPP_SF_ @ 0x1C0001EF4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C00022F4 (WPP_SF_d.c)
 *     CiSchedulerSleep @ 0x1C000324C (CiSchedulerSleep.c)
 *     CiSystemDetectIdleProcessors @ 0x1C0003A94 (CiSystemDetectIdleProcessors.c)
 */

char __fastcall CiSchedulerWait(__int64 a1, unsigned int *a2)
{
  unsigned int DpcData_high; // edx
  int v4; // ecx
  unsigned int v5; // edi
  int v6; // esi
  struct _DEVICE_OBJECT *SystemArgument1; // rcx
  struct _DEVICE_OBJECT *NextDevice; // rdx

  if ( CiThreadsMovedUp )
  {
    if ( CiSchedulerInLazyMode )
    {
      DpcData_high = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
      v4 = 2;
    }
    else
    {
      DpcData_high = (unsigned int)WPP_MAIN_CB.SecurityDescriptor;
      v4 = 1;
    }
    CiSchedulerSleep(v4, DpcData_high, a2);
    if ( (*a2 & 0xC) == 0 )
    {
      while ( 1 )
      {
        CiSystemDetectIdleProcessors();
        if ( !CiProcessorIdleHistoryBits )
          break;
        if ( CiProcessorIdleHistoryBits == CiSchedulerIdleCycleBitMask )
        {
          if ( !CiSchedulerInLazyMode )
          {
            if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
              WPP_SF_d(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                0xDu,
                (__int64)&WPP_c55bb13be5913af8a2f5960fa336dd1c_Traceguids,
                SHIDWORD(WPP_MAIN_CB.Dpc.DpcData));
            CiSchedulerInLazyMode = 1;
          }
          v5 = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
          v6 = 4;
        }
        else
        {
          v5 = *(&WPP_MAIN_CB.ActiveThreadCount + 1);
          v6 = 3;
        }
        if ( byte_1C00062A8 )
          CiLogSchedulerWakeup(*a2);
        KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
        if ( CiSchedulerInLazyMode )
        {
          SystemArgument1 = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.SystemArgument1;
          if ( WPP_MAIN_CB.Dpc.SystemArgument1 == &WPP_MAIN_CB.Dpc.SystemArgument1 )
          {
LABEL_23:
            *a2 |= 0x80u;
            WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
            return 0;
          }
          while ( 1 )
          {
            NextDevice = SystemArgument1->NextDevice;
            if ( NextDevice != (struct _DEVICE_OBJECT *)&SystemArgument1->NextDevice )
              break;
LABEL_22:
            SystemArgument1 = *(struct _DEVICE_OBJECT **)&SystemArgument1->Type;
            if ( SystemArgument1 == (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.SystemArgument1 )
              goto LABEL_23;
          }
          while ( (BYTE4(NextDevice->DeviceExtension) & 1) != 0 )
          {
            NextDevice = *(struct _DEVICE_OBJECT **)&NextDevice->Type;
            if ( NextDevice == (struct _DEVICE_OBJECT *)&SystemArgument1->NextDevice )
              goto LABEL_22;
          }
        }
        CiSchedulerSleep(v6, v5, a2);
        if ( (*a2 & 0xC) != 0 )
          return 0;
      }
      if ( CiSchedulerInLazyMode )
      {
        CiSchedulerInLazyMode = 0;
        if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          WPP_SF_(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0xCu,
            (__int64)&WPP_c55bb13be5913af8a2f5960fa336dd1c_Traceguids);
      }
    }
    return 0;
  }
  else
  {
    CiSchedulerSleep(0, HIDWORD(WPP_MAIN_CB.SecurityDescriptor), a2);
    return 1;
  }
}
