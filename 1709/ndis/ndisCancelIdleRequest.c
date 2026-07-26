/*
 * XREFs of ndisCancelIdleRequest @ 0x1C006FCD8
 * Callers:
 *     ndisCancelIdleRequestSync @ 0x1C006FDF4 (ndisCancelIdleRequestSync.c)
 *     ndisIdleCancelWorkItem @ 0x1C0070100 (ndisIdleCancelWorkItem.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C00111C8 (ndisLogMiniportEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x1C006E470 (ndisSelectiveSuspendSetResumeBusyReason.c)
 */

char __fastcall ndisCancelIdleRequest(_QWORD *a1, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  KIRQL v7; // al
  KIRQL v8; // bp

  v3 = a1[560];
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v3);
  v8 = v7;
  if ( (*(_DWORD *)(v3 + 504) & 0x84) == 4 )
  {
    *(_DWORD *)(v3 + 504) |= 0x80u;
    if ( a2 )
      ndisSelectiveSuspendSetResumeBusyReason((_DWORD *)v3, 1, a2, a3);
    *(_QWORD *)(v3 + 656) = MEMORY[0xFFFFF78000000014];
    KeReleaseSpinLock((PKSPIN_LOCK)v3, v8);
    KeWaitForSingleObject((PVOID)(v3 + 224), Executive, 0, 0, 0LL);
    if ( (unsigned __int8)byte_1C0098756 >= 4u )
      WPP_SF_qD(0x1Au, &WPP_72bd2a87b7f83093ce8d5792cc2b4ff7_Traceguids, (__int64)a1, a2);
    ndisLogMiniportEvent((__int64)a1, 0x10u);
    (*(void (__fastcall **)(_QWORD))(a1[473] + 848LL))(a1[3]);
    return 1;
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)v3, v7);
    return 0;
  }
}
