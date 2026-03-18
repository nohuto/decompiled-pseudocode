/*
 * XREFs of VidSchiClearFlipDevice @ 0x1C00022EC
 * Callers:
 *     VidSchFlushQueuePackets @ 0x1C0013350 (VidSchFlushQueuePackets.c)
 *     VidSchiReportHwHang @ 0x1C002AF80 (VidSchiReportHwHang.c)
 *     VidSchFlushDevice @ 0x1C004EE80 (VidSchFlushDevice.c)
 *     VidSchFlushAdapter @ 0x1C00AB9E0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiSetFlipDevice @ 0x1C0003F40 (VidSchiSetFlipDevice.c)
 *     VidSchiProcessFlipPendingContextList @ 0x1C00138D0 (VidSchiProcessFlipPendingContextList.c)
 */

void __fastcall VidSchiClearFlipDevice(struct _VIDSCH_GLOBAL *a1, __int64 a2, int a3)
{
  unsigned int i; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  for ( i = 0; i < *((_DWORD *)a1 + 10); ++i )
    VidSchiSetFlipDevice(a1, a3, 0);
  if ( *((_BYTE *)a1 + 51) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 235, &LockHandle);
    if ( (unsigned int)VidSchiProcessFlipPendingContextList(a1) )
    {
      *((_QWORD *)a1 + 172) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)a1 + 56, 0, 0);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
