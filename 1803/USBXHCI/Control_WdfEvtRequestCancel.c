/*
 * XREFs of Control_WdfEvtRequestCancel @ 0x1C0024210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     TR_QueueDpcForTransferCompletion @ 0x1C0020F04 (TR_QueueDpcForTransferCompletion.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C0024800 (WPP_RECORDER_SF_DDq.c)
 *     ESM_AddEvent @ 0x1C003C210 (ESM_AddEvent.c)
 */

void __fastcall Control_WdfEvtRequestCancel(__int64 a1)
{
  char v1; // bl
  char v2; // si
  char v3; // bp
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rcx
  int v7; // edx
  KIRQL v8; // al
  __int64 v9; // rdx

  v1 = a1;
  v2 = 0;
  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004B098);
  v5 = *(_QWORD *)(v4 + 56);
  v6 = *(_QWORD *)(v5 + 56);
  v7 = *(_DWORD *)(v6 + 144);
  LOBYTE(v7) = 4;
  WPP_RECORDER_SF_DDq(
    *(_QWORD *)(v6 + 80),
    v7,
    *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL),
    41,
    (__int64)&WPP_c6284e221afa347fe82b1ff2c61a8f94_Traceguids,
    *(_BYTE *)(*(_QWORD *)(v5 + 48) + 135LL),
    *(_DWORD *)(v6 + 144),
    v1);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
  *(_BYTE *)(v5 + 104) = v8;
  if ( *(_DWORD *)(v4 + 112) == 1 )
  {
    if ( (*(_DWORD *)(v5 + 352) & 8) != 0 )
      v2 = 1;
    else
      v3 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), v8);
  if ( v3 )
  {
    v9 = *(_QWORD *)(v5 + 56);
    _m_prefetchw((const void *)(v9 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v9 + 32), 1u) & 1) == 0 )
      ESM_AddEvent((PVOID)(v9 + 288));
  }
  *(_BYTE *)(v5 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
  if ( *(_DWORD *)(v4 + 112) == 2 && (!v3 || (*(_DWORD *)(v5 + 352) & 0xA) != 0) )
    v2 = 1;
  *(_DWORD *)(v4 + 112) = 3;
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), *(_BYTE *)(v5 + 104));
  if ( v2 )
    TR_QueueDpcForTransferCompletion(v5);
}
