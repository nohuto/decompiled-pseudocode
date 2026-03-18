/*
 * XREFs of ViGenericDispatchHandler @ 0x140780488
 * Callers:
 *     ViGenericCleanup @ 0x140780390 (ViGenericCleanup.c)
 *     ViGenericClose @ 0x1407803B0 (ViGenericClose.c)
 *     ViGenericCreate @ 0x1407803D0 (ViGenericCreate.c)
 *     ViGenericCreateMailslot @ 0x1407803F0 (ViGenericCreateMailslot.c)
 *     ViGenericCreateNamedPipe @ 0x140780410 (ViGenericCreateNamedPipe.c)
 *     ViGenericDeviceChange @ 0x140780430 (ViGenericDeviceChange.c)
 *     ViGenericDeviceControl @ 0x140780450 (ViGenericDeviceControl.c)
 *     ViGenericDirectoryControl @ 0x140780470 (ViGenericDirectoryControl.c)
 *     ViGenericFileSystemControl @ 0x140780610 (ViGenericFileSystemControl.c)
 *     ViGenericFlushBuffers @ 0x140780630 (ViGenericFlushBuffers.c)
 *     ViGenericInternalDeviceControl @ 0x140780650 (ViGenericInternalDeviceControl.c)
 *     ViGenericLockControl @ 0x140780670 (ViGenericLockControl.c)
 *     ViGenericPnp @ 0x140780690 (ViGenericPnp.c)
 *     ViGenericPower @ 0x1407806B0 (ViGenericPower.c)
 *     ViGenericQueryEa @ 0x1407806D0 (ViGenericQueryEa.c)
 *     ViGenericQueryInformation @ 0x1407806F0 (ViGenericQueryInformation.c)
 *     ViGenericQueryQuota @ 0x140780710 (ViGenericQueryQuota.c)
 *     ViGenericQuerySecurity @ 0x140780730 (ViGenericQuerySecurity.c)
 *     ViGenericQueryVolumeInformation @ 0x140780750 (ViGenericQueryVolumeInformation.c)
 *     ViGenericRead @ 0x140780770 (ViGenericRead.c)
 *     ViGenericSetEa @ 0x140780790 (ViGenericSetEa.c)
 *     ViGenericSetInformation @ 0x1407807B0 (ViGenericSetInformation.c)
 *     ViGenericSetQuota @ 0x1407807D0 (ViGenericSetQuota.c)
 *     ViGenericSetSecurity @ 0x1407807F0 (ViGenericSetSecurity.c)
 *     ViGenericSetVolumeInformation @ 0x140780810 (ViGenericSetVolumeInformation.c)
 *     ViGenericShutdown @ 0x140780830 (ViGenericShutdown.c)
 *     ViGenericSystemControl @ 0x140780850 (ViGenericSystemControl.c)
 *     ViGenericWrite @ 0x140780870 (ViGenericWrite.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall ViGenericDispatchHandler(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, __int64, ULONG_PTR),
        unsigned int a4)
{
  __int64 v5; // r11
  ULONG_PTR v6; // r8
  ULONG_PTR v7; // r9
  __int64 (__fastcall *v8)(__int64, __int64, ULONG_PTR); // rax

  v5 = a4;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 48) + 64LL);
  if ( !v7 || (v8 = *(__int64 (__fastcall **)(__int64, __int64, ULONG_PTR))(v7 + 8 * v5 + 32)) == 0LL )
    KeBugCheckEx(0xC4u, 0x1013uLL, v6, v7, 0LL);
  if ( a3 )
  {
    v6 = *(_QWORD *)(v7 + 8 * v5 + 32);
    v8 = a3;
  }
  return v8(a1, a2, v6);
}
