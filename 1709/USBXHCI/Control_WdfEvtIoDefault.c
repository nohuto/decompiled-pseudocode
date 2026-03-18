/*
 * XREFs of Control_WdfEvtIoDefault @ 0x1C00267A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000E154 (WPP_RECORDER_SF_ddL.c)
 *     Control_MapTransfer @ 0x1C0024510 (Control_MapTransfer.c)
 *     Control_TransferData_Initialize @ 0x1C002518C (Control_TransferData_Initialize.c)
 *     Control_Transfer_CompleteCancelable @ 0x1C002552C (Control_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDqDq @ 0x1C00270F4 (WPP_RECORDER_SF_DDqDq.c)
 */

void __fastcall Control_WdfEvtIoDefault(__int64 a1, __int64 a2)
{
  KIRQL v4; // bp
  char v5; // si
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r15
  int v9; // edx
  int v10; // r8d
  KIRQL v11; // al
  PWDF_DRIVER_GLOBALS v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // eax
  int v16; // ebx
  __int64 v17; // [rsp+38h] [rbp-70h]
  int v18; // [rsp+40h] [rbp-68h]
  _QWORD v19[5]; // [rsp+50h] [rbp-58h] BYREF

  v4 = 0;
  if ( KeGetCurrentIrql() )
  {
    v5 = 0;
  }
  else
  {
    v4 = KfRaiseIrql(2u);
    v5 = 1;
  }
  memset(v19, 0, sizeof(v19));
  LOWORD(v19[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v19);
  v6 = v19[1];
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004E3B8);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C004E098);
  v18 = *(_DWORD *)(v6 + 36);
  HIDWORD(v17) = HIDWORD(a2);
  WPP_RECORDER_SF_DDqDq(*(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL), v9, v10, *(_DWORD *)(*(_QWORD *)(v7 + 56) + 144LL));
  Control_TransferData_Initialize(v7, a2, v6, (_QWORD *)v8);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 96));
  v12 = WdfDriverGlobals;
  *(_BYTE *)(v7 + 104) = v11;
  v13 = WdfFunctions_01015;
  *(_QWORD *)(v7 + 344) = v8;
  *(_DWORD *)(v8 + 128) = 0;
  *(_DWORD *)(v8 + 132) = 0;
  v14 = *(_QWORD *)(v8 + 24);
  *(_DWORD *)(v8 + 112) = 1;
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)()))(v13 + 3144))(
          v12,
          v14,
          Control_WdfEvtRequestCancel);
  if ( v15 >= 0 )
  {
    v16 = *(_DWORD *)(v7 + 108);
    if ( v16 == 2 )
      *(_DWORD *)(v7 + 108) = 3;
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), *(_BYTE *)(v7 + 104));
    if ( v16 == 2 )
      Control_MapTransfer(v7, v5);
  }
  else
  {
    LODWORD(v17) = v15;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)(v7 + 56) + 80LL),
      3u,
      0xEu,
      0x26u,
      (__int64)&WPP_9dc305b4e1d93dbd1473da557c698a68_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v7 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(v7 + 56) + 144LL),
      v17,
      v18,
      v8);
    *(_DWORD *)(v8 + 112) = 3;
    Control_Transfer_CompleteCancelable((_QWORD *)v7, v5);
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), *(_BYTE *)(v7 + 104));
  }
  if ( v5 )
    KeLowerIrql(v4);
}
