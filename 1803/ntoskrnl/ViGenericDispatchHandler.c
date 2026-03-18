/*
 * XREFs of ViGenericDispatchHandler @ 0x14082FA64
 * Callers:
 *     ViGenericCleanup @ 0x14082F900 (ViGenericCleanup.c)
 *     ViGenericClose @ 0x14082F930 (ViGenericClose.c)
 *     ViGenericCreate @ 0x14082F960 (ViGenericCreate.c)
 *     ViGenericCreateMailslot @ 0x14082F980 (ViGenericCreateMailslot.c)
 *     ViGenericCreateNamedPipe @ 0x14082F9B0 (ViGenericCreateNamedPipe.c)
 *     ViGenericDeviceChange @ 0x14082F9E0 (ViGenericDeviceChange.c)
 *     ViGenericDeviceControl @ 0x14082FA10 (ViGenericDeviceControl.c)
 *     ViGenericDirectoryControl @ 0x14082FA40 (ViGenericDirectoryControl.c)
 *     ViGenericFileSystemControl @ 0x14082FC00 (ViGenericFileSystemControl.c)
 *     ViGenericFlushBuffers @ 0x14082FC30 (ViGenericFlushBuffers.c)
 *     ViGenericInternalDeviceControl @ 0x14082FC60 (ViGenericInternalDeviceControl.c)
 *     ViGenericLockControl @ 0x14082FC90 (ViGenericLockControl.c)
 *     ViGenericPnp @ 0x14082FCC0 (ViGenericPnp.c)
 *     ViGenericPower @ 0x14082FCF0 (ViGenericPower.c)
 *     ViGenericQueryEa @ 0x14082FD20 (ViGenericQueryEa.c)
 *     ViGenericQueryInformation @ 0x14082FD50 (ViGenericQueryInformation.c)
 *     ViGenericQueryQuota @ 0x14082FD80 (ViGenericQueryQuota.c)
 *     ViGenericQuerySecurity @ 0x14082FDB0 (ViGenericQuerySecurity.c)
 *     ViGenericQueryVolumeInformation @ 0x14082FDE0 (ViGenericQueryVolumeInformation.c)
 *     ViGenericRead @ 0x14082FE10 (ViGenericRead.c)
 *     ViGenericSetEa @ 0x14082FE40 (ViGenericSetEa.c)
 *     ViGenericSetInformation @ 0x14082FE70 (ViGenericSetInformation.c)
 *     ViGenericSetQuota @ 0x14082FEA0 (ViGenericSetQuota.c)
 *     ViGenericSetSecurity @ 0x14082FED0 (ViGenericSetSecurity.c)
 *     ViGenericSetVolumeInformation @ 0x14082FF00 (ViGenericSetVolumeInformation.c)
 *     ViGenericShutdown @ 0x14082FF30 (ViGenericShutdown.c)
 *     ViGenericSystemControl @ 0x14082FF60 (ViGenericSystemControl.c)
 *     ViGenericWrite @ 0x14082FF90 (ViGenericWrite.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
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
