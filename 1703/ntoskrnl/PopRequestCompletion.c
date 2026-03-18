/*
 * XREFs of PopRequestCompletion @ 0x140144A90
 * Callers:
 *     <none>
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x140022800 (IoReleaseRemoveLockEx.c)
 *     PopPepDeviceWaitWake @ 0x1401401E4 (PopPepDeviceWaitWake.c)
 *     PopFreeIrp @ 0x140144BEC (PopFreeIrp.c)
 *     PopDequeueQuerySetIrp @ 0x140144CE4 (PopDequeueQuerySetIrp.c)
 *     PopDiagTraceIrpFinish @ 0x140144E20 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceFxDevicePowerState @ 0x1401450B0 (PopDiagTraceFxDevicePowerState.c)
 *     PopPepDeviceDState @ 0x140145904 (PopPepDeviceDState.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PopUpdateWakeSource @ 0x14022DD1C (PopUpdateWakeSource.c)
 */

__int64 __fastcall PopRequestCompletion(__int64 a1, IRP *a2, __int64 a3)
{
  void (__fastcall *v3)(_QWORD, IRP *, _QWORD, _QWORD, IO_STATUS_BLOCK *); // rax
  __int64 v5; // rdi
  IRP *v6; // rbp
  char v7; // si
  char v8; // r14
  IO_STATUS_BLOCK *p_IoStatus; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // r8

  v3 = *(void (__fastcall **)(_QWORD, IRP *, _QWORD, _QWORD, IO_STATUS_BLOCK *))(a3 + 216);
  v5 = *(_QWORD *)(a3 + 200);
  v6 = a2;
  v7 = *(_BYTE *)(a3 + 209);
  v8 = *(_BYTE *)(a3 + 184);
  if ( v3 )
  {
    p_IoStatus = &a2->IoStatus;
    LOBYTE(a2) = *(_BYTE *)(a3 + 184);
    v3(*(_QWORD *)(a3 + 232), a2, *(unsigned int *)(a3 + 192), *(_QWORD *)(a3 + 224), p_IoStatus);
  }
  if ( v8 )
  {
    PopDequeueQuerySetIrp(v6);
    if ( v5 && *(_BYTE *)(a3 + 184) == 2 && *(_DWORD *)(a3 + 188) == 1 && v7 )
    {
      if ( *(_DWORD *)(a3 + 192) == 1 )
      {
        _m_prefetchw((const void *)(v5 + 32));
        v7 = (_InterlockedAnd((volatile signed __int32 *)(v5 + 32), 0xFFFFFFFD) & 2) != 0;
      }
      if ( v7 )
      {
        LOBYTE(v11) = *(_BYTE *)(a3 + 208);
        LOBYTE(v10) = 1;
        PopPepDeviceDState(*(_QWORD *)(v5 + 56), *(unsigned int *)(a3 + 192), v10, v11);
        PopDiagTraceFxDevicePowerState(*(_QWORD *)(v5 + 48), *(unsigned int *)(a3 + 192));
      }
    }
  }
  else
  {
    PopDiagTraceIrpFinish(v6);
    if ( v6->IoStatus.Status >= 0 && *(_BYTE *)(a3 + 240) )
      PopUpdateWakeSource(*(PVOID *)(a3 + 24));
    if ( v5 )
    {
      PopPepDeviceWaitWake(*(_QWORD *)(v5 + 56), 1, v13);
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 216), 0LL, 0x20u);
    }
  }
  PopFreeIrp(v6);
  return 3221225494LL;
}
