/*
 * XREFs of VidSchiClearFlipDevice @ 0x1C0012C3C
 * Callers:
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C0015A0C (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 *     VidSchiReportHwHang @ 0x1C0034304 (VidSchiReportHwHang.c)
 *     VidSchFlushDevice @ 0x1C0078E70 (VidSchFlushDevice.c)
 *     VidSchFlushAdapter @ 0x1C00BCEF0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiSetFlipDevice @ 0x1C0005D0C (VidSchiSetFlipDevice.c)
 *     VidSchiProcessFlipPendingContextList @ 0x1C0014800 (VidSchiProcessFlipPendingContextList.c)
 */

void __fastcall VidSchiClearFlipDevice(struct _VIDSCH_GLOBAL *a1, __int64 a2, unsigned int a3)
{
  unsigned int i; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  for ( i = 0; i < *((_DWORD *)a1 + 10); ++i )
    VidSchiSetFlipDevice(a1, i, a2, 0, a3, 0, 0);
  if ( *((_BYTE *)a1 + 51) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 238, &LockHandle);
    if ( (unsigned int)VidSchiProcessFlipPendingContextList(a1) )
    {
      *((_QWORD *)a1 + 175) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)a1 + 57, 0, 0);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
