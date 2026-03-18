/*
 * XREFs of ViGenericDispatchHandler @ 0x1407C24F4
 * Callers:
 *     ViGenericCleanup @ 0x1407C2390 (ViGenericCleanup.c)
 *     ViGenericClose @ 0x1407C23C0 (ViGenericClose.c)
 *     ViGenericCreate @ 0x1407C23F0 (ViGenericCreate.c)
 *     ViGenericCreateMailslot @ 0x1407C2410 (ViGenericCreateMailslot.c)
 *     ViGenericCreateNamedPipe @ 0x1407C2440 (ViGenericCreateNamedPipe.c)
 *     ViGenericDeviceChange @ 0x1407C2470 (ViGenericDeviceChange.c)
 *     ViGenericDeviceControl @ 0x1407C24A0 (ViGenericDeviceControl.c)
 *     ViGenericDirectoryControl @ 0x1407C24D0 (ViGenericDirectoryControl.c)
 *     ViGenericFileSystemControl @ 0x1407C2690 (ViGenericFileSystemControl.c)
 *     ViGenericFlushBuffers @ 0x1407C26C0 (ViGenericFlushBuffers.c)
 *     ViGenericInternalDeviceControl @ 0x1407C26F0 (ViGenericInternalDeviceControl.c)
 *     ViGenericLockControl @ 0x1407C2720 (ViGenericLockControl.c)
 *     ViGenericPnp @ 0x1407C2750 (ViGenericPnp.c)
 *     ViGenericPower @ 0x1407C2780 (ViGenericPower.c)
 *     ViGenericQueryEa @ 0x1407C27B0 (ViGenericQueryEa.c)
 *     ViGenericQueryInformation @ 0x1407C27E0 (ViGenericQueryInformation.c)
 *     ViGenericQueryQuota @ 0x1407C2810 (ViGenericQueryQuota.c)
 *     ViGenericQuerySecurity @ 0x1407C2840 (ViGenericQuerySecurity.c)
 *     ViGenericQueryVolumeInformation @ 0x1407C2870 (ViGenericQueryVolumeInformation.c)
 *     ViGenericRead @ 0x1407C28A0 (ViGenericRead.c)
 *     ViGenericSetEa @ 0x1407C28D0 (ViGenericSetEa.c)
 *     ViGenericSetInformation @ 0x1407C2900 (ViGenericSetInformation.c)
 *     ViGenericSetQuota @ 0x1407C2930 (ViGenericSetQuota.c)
 *     ViGenericSetSecurity @ 0x1407C2960 (ViGenericSetSecurity.c)
 *     ViGenericSetVolumeInformation @ 0x1407C2990 (ViGenericSetVolumeInformation.c)
 *     ViGenericShutdown @ 0x1407C29C0 (ViGenericShutdown.c)
 *     ViGenericSystemControl @ 0x1407C29F0 (ViGenericSystemControl.c)
 *     ViGenericWrite @ 0x1407C2A20 (ViGenericWrite.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ViGenericDispatchHandler(__int64 a1, __int64 a2, __int64 (*a3)(void), unsigned int a4)
{
  ULONG_PTR v4; // r11
  __int64 v5; // rbx
  ULONG_PTR v6; // r9

  v4 = *(_QWORD *)(a1 + 8);
  v5 = a4;
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 48) + 64LL);
  if ( !v6 || !*(_QWORD *)(v6 + 8 * v5 + 32) )
    KeBugCheckEx(0xC4u, 0x1013uLL, v4, v6, 0LL);
  if ( ((MmVerifierData & 0x80000) != 0 || (MmVerifierData & 0x100000) != 0) && a3 )
    return a3();
  else
    return (*(__int64 (**)(void))(v6 + 8 * v5 + 32))();
}
