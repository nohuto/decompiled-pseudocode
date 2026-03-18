/*
 * XREFs of Control_WdfDpcForCanceledOnQueueTransferCompletion @ 0x1C00264D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Control_Transfer_Complete @ 0x1C0025324 (Control_Transfer_Complete.c)
 */

void __fastcall Control_WdfDpcForCanceledOnQueueTransferCompletion(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  KIRQL v3; // al
  bool v4; // zf
  KIRQL v5; // dl
  __int64 v6; // rbx
  _QWORD *v7; // rdx
  __int64 v8; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 912))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v1,
         off_1C004E3B8);
  v9[1] = v9;
  v9[0] = v9;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
  v4 = *(_BYTE *)(v2 + 376) == 0;
  *(_BYTE *)(v2 + 104) = v3;
  if ( v4 )
  {
    *(_BYTE *)(v2 + 376) = 1;
    v6 = v2 + 360;
    while ( *(_QWORD *)v6 != v6 )
    {
      v7 = *(_QWORD **)v6;
      if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 || (v8 = *v7, *(_QWORD **)(*v7 + 8LL) != v7) )
        __fastfail(3u);
      *(_QWORD *)v6 = v8;
      *(_QWORD *)(v8 + 8) = v6;
      v7[1] = v7;
      *v7 = v7;
      Control_Transfer_Complete(v2, (__int64)v7, 0);
    }
    v5 = *(_BYTE *)(v2 + 104);
    *(_BYTE *)(v2 + 376) = 0;
  }
  else
  {
    v5 = v3;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v5);
}
