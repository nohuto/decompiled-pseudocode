/*
 * XREFs of Control_WdfEvtIoDefault @ 0x1C0023FB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     Control_MapTransfer @ 0x1C0021D80 (Control_MapTransfer.c)
 *     Control_TransferData_Initialize @ 0x1C00229FC (Control_TransferData_Initialize.c)
 *     Control_Transfer_CompleteCancelable @ 0x1C0022DA0 (Control_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDqDq @ 0x1C0024B58 (WPP_RECORDER_SF_DDqDq.c)
 */

void __fastcall Control_WdfEvtIoDefault(__int64 a1, __int64 a2)
{
  KIRQL v4; // bp
  unsigned __int8 CurrentIrql; // si
  bool v6; // zf
  char v7; // r15
  char v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r13
  int v12; // edx
  int v13; // r8d
  KIRQL v14; // al
  PWDF_DRIVER_GLOBALS v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // [rsp+38h] [rbp-80h]
  int v20; // [rsp+40h] [rbp-78h]
  _QWORD v21[5]; // [rsp+50h] [rbp-68h] BYREF

  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v6 = CurrentIrql == 0;
  if ( !CurrentIrql )
  {
    v4 = KfRaiseIrql(2u);
    v6 = 1;
  }
  v7 = v6;
  v8 = 0;
  memset(v21, 0, sizeof(v21));
  LOWORD(v21[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v21);
  v9 = v21[1];
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          a1,
          off_1C004B3B8);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          a2,
          off_1C004B098);
  v20 = *(_DWORD *)(v9 + 36);
  HIDWORD(v19) = HIDWORD(a2);
  WPP_RECORDER_SF_DDqDq(*(_QWORD *)(*(_QWORD *)(v10 + 56) + 80LL), v12, v13, *(_DWORD *)(*(_QWORD *)(v10 + 56) + 144LL));
  Control_TransferData_Initialize(v10, a2, v9, (_QWORD *)v11);
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 96));
  v15 = WdfDriverGlobals;
  *(_BYTE *)(v10 + 104) = v14;
  v16 = WdfFunctions_01023;
  *(_QWORD *)(v10 + 344) = v11;
  *(_DWORD *)(v11 + 128) = 0;
  *(_DWORD *)(v11 + 132) = 0;
  v17 = *(_QWORD *)(v11 + 24);
  *(_DWORD *)(v11 + 112) = 1;
  v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)()))(v16 + 3144))(
          v15,
          v17,
          Control_WdfEvtRequestCancel);
  if ( v18 >= 0 )
  {
    if ( *(_DWORD *)(v10 + 108) == 2 )
    {
      *(_DWORD *)(v10 + 108) = 3;
      v8 = 1;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 96), *(_BYTE *)(v10 + 104));
    if ( v8 )
      Control_MapTransfer(v10, v7);
  }
  else
  {
    LODWORD(v19) = v18;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)(v10 + 56) + 80LL),
      3u,
      0xEu,
      0x26u,
      (__int64)&WPP_c6284e221afa347fe82b1ff2c61a8f94_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v10 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(v10 + 56) + 144LL),
      v19,
      v20,
      v11);
    *(_DWORD *)(v11 + 112) = 3;
    Control_Transfer_CompleteCancelable((_QWORD *)v10, v7);
    KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 96), *(_BYTE *)(v10 + 104));
  }
  if ( !CurrentIrql )
    KeLowerIrql(v4);
}
