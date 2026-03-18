/*
 * XREFs of CiSchedulerSetTaskIndexMode @ 0x1C0003164
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C0009BC0 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiLogSetTaskIndexMode @ 0x1C0001960 (CiLogSetTaskIndexMode.c)
 *     CiSystemUpdateMediaBufferingState @ 0x1C0002860 (CiSystemUpdateMediaBufferingState.c)
 *     CiSchedulerSetTaskIndexThreadTag @ 0x1C0003230 (CiSchedulerSetTaskIndexThreadTag.c)
 */

void __fastcall CiSchedulerSetTaskIndexMode(__int64 a1, unsigned int a2)
{
  int v4; // ecx
  int v5; // edx
  unsigned int v6; // ecx

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 3LL) & 1) != 0 )
  {
    if ( byte_1C00062B0 )
      CiLogSetTaskIndexMode(a1, a2);
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v4 = 0;
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    v5 = *(_DWORD *)(a1 + 184) | 1;
    if ( a2 == 1 )
      v4 = 2;
    v6 = *(_DWORD *)(a1 + 184) & 0xFFFFFFFC | 1 | v4;
    *(_DWORD *)(a1 + 184) = v6;
    if ( (((unsigned __int8)v5 ^ (unsigned __int8)v6) & 2) != 0 )
    {
      if ( a2 == 1 )
      {
        ++CiTotalTasksBuffering;
        CiSystemUpdateMediaBufferingState();
      }
      CiSchedulerSetTaskIndexThreadTag(a1, a2);
      if ( a2 != 1 )
      {
        --CiTotalTasksBuffering;
        CiSystemUpdateMediaBufferingState();
      }
    }
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  }
}
