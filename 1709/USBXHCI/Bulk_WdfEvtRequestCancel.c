/*
 * XREFs of Bulk_WdfEvtRequestCancel @ 0x1C0031EA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     TR_QueueDpcForTransferCompletion @ 0x1C0023648 (TR_QueueDpcForTransferCompletion.c)
 *     WPP_RECORDER_SF_DDDx @ 0x1C00324F0 (WPP_RECORDER_SF_DDDx.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

void __fastcall Bulk_WdfEvtRequestCancel(__int64 a1)
{
  char v1; // bp
  char v2; // r14
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rcx
  int v6; // edx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // rcx
  __int64 *v13; // rcx

  v1 = 0;
  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004E098);
  v4 = *(_QWORD *)(v3 + 56);
  v5 = *(_QWORD *)(v4 + 56);
  v6 = *(_DWORD *)(v5 + 144);
  LOBYTE(v6) = 4;
  WPP_RECORDER_SF_DDDx(*(_QWORD *)(v5 + 80), v6, *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL), 13);
  *(_BYTE *)(v4 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  if ( *(_DWORD *)(v3 + 64) == 1 )
  {
    v7 = *(_DWORD *)(v4 + 324);
    if ( (v7 & 0x20) != 0 )
    {
      v8 = v4 + 368;
      v9 = *(_QWORD *)(v4 + 368);
      if ( v9 != v4 + 368 )
      {
        **(_QWORD **)(v4 + 408) = v9;
        *(_QWORD *)(*(_QWORD *)v8 + 8LL) = *(_QWORD *)(v4 + 408);
        **(_QWORD **)(v4 + 376) = v4 + 400;
        *(_QWORD *)(v4 + 408) = *(_QWORD *)(v4 + 376);
        *(_QWORD *)(v4 + 376) = v4 + 368;
        *(_QWORD *)v8 = v8;
      }
      v1 = 1;
    }
    else
    {
      v2 = 1;
      *(_DWORD *)(v4 + 324) = v7 | 0x10;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), *(_BYTE *)(v4 + 104));
  if ( v2 )
  {
    v10 = *(_QWORD *)(v4 + 56);
    _m_prefetchw((const void *)(v10 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v10 + 32), 1u) & 1) == 0 )
      ESM_AddEvent((PVOID)(v10 + 288));
  }
  *(_BYTE *)(v4 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  if ( *(_DWORD *)(v3 + 64) == 2 )
  {
    v11 = *(_QWORD *)v3;
    if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || (v12 = *(_QWORD **)(v3 + 8), *v12 != v3) )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    v13 = *(__int64 **)(v4 + 408);
    if ( *v13 != v4 + 400 )
      __fastfail(3u);
    *(_QWORD *)v3 = v4 + 400;
    v1 = 1;
    *(_QWORD *)(v3 + 8) = v13;
    *v13 = v3;
    *(_QWORD *)(v4 + 408) = v3;
  }
  *(_DWORD *)(v3 + 64) = 3;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), *(_BYTE *)(v4 + 104));
  if ( v1 )
    TR_QueueDpcForTransferCompletion((_QWORD *)v4);
}
