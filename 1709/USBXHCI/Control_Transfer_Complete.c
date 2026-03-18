/*
 * XREFs of Control_Transfer_Complete @ 0x1C0025324
 * Callers:
 *     Control_Transfer_CompleteCancelable @ 0x1C002552C (Control_Transfer_CompleteCancelable.c)
 *     Control_WdfDpcForCanceledOnQueueTransferCompletion @ 0x1C00264D0 (Control_WdfDpcForCanceledOnQueueTransferCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     TR_GetUsbdStatusFromTrbCompletionCode @ 0x1C002329C (TR_GetUsbdStatusFromTrbCompletionCode.c)
 *     Control_TransferData_Free @ 0x1C0025058 (Control_TransferData_Free.c)
 *     WPP_RECORDER_SF_DDqdDD @ 0x1C00273A0 (WPP_RECORDER_SF_DDqdDD.c)
 */

KIRQL __fastcall Control_Transfer_Complete(__int64 a1, __int64 a2, char a3)
{
  int v6; // r8d
  int UsbdStatusFromTrbCompletionCode; // r9d
  unsigned int v8; // edx
  __int64 v9; // r10
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // rdi
  int v14; // esi
  KIRQL v15; // bl
  KIRQL result; // al

  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  v8 = *(_DWORD *)(a2 + 124);
  v9 = *(_QWORD *)(a2 + 48);
  if ( v8 )
  {
    UsbdStatusFromTrbCompletionCode = TR_GetUsbdStatusFromTrbCompletionCode(a1, v8, 0xFFFFFFFF);
    *(_DWORD *)(v9 + 4) = UsbdStatusFromTrbCompletionCode;
    if ( UsbdStatusFromTrbCompletionCode > -1073738240 )
    {
      switch ( UsbdStatusFromTrbCompletionCode )
      {
        case -1073737728:
          v12 = -1073741670;
          goto LABEL_32;
        case -1073713152:
          v12 = -1073741810;
          goto LABEL_32;
        case -1073676288:
          v12 = -1073741536;
          goto LABEL_32;
      }
      if ( (unsigned int)UsbdStatusFromTrbCompletionCode <= 1 )
      {
        v12 = 0;
        goto LABEL_32;
      }
    }
    else
    {
      if ( UsbdStatusFromTrbCompletionCode == -1073738240 )
      {
        v12 = -1073741637;
        goto LABEL_32;
      }
      if ( UsbdStatusFromTrbCompletionCode == -2147483136
        || UsbdStatusFromTrbCompletionCode == -2147482880
        || UsbdStatusFromTrbCompletionCode == -2147482112
        || UsbdStatusFromTrbCompletionCode == -1073739264 )
      {
        v12 = -1073741811;
LABEL_32:
        *(_DWORD *)(a2 + 120) = v12;
        goto LABEL_33;
      }
    }
    v12 = -1073741823;
    goto LABEL_32;
  }
  if ( *(_DWORD *)(a2 + 112) == 3 || *(_DWORD *)(a2 + 116) == 3 )
    *(_DWORD *)(a2 + 120) = -1073741536;
  v10 = *(_DWORD *)(a2 + 120);
  switch ( v10 )
  {
    case -1073741810:
      v11 = -1073713152;
      break;
    case -1073741670:
      v11 = -1073737728;
      break;
    case -1073741637:
      v11 = -1073738240;
      break;
    case -1073741536:
      v11 = -1073676288;
      break;
    default:
      v11 = v10 != 0 ? 0x80000300 : 0;
      break;
  }
  *(_DWORD *)(v9 + 4) = v11;
LABEL_33:
  v13 = *(unsigned int *)(a2 + 108);
  v14 = *(_DWORD *)(a2 + 120);
  *(_DWORD *)(v9 + 36) = v13;
  WPP_RECORDER_SF_DDqdDD(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
    v6,
    UsbdStatusFromTrbCompletionCode);
  Control_TransferData_Free(a1, a2, a3);
  v15 = KfRaiseIrql(2u);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2104))(
    WdfDriverGlobals,
    *(_QWORD *)(a2 + 24),
    (unsigned int)v14);
  KeLowerIrql(v15);
  result = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  ++*(_DWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 248) += v13;
  *(_BYTE *)(a1 + 104) = result;
  if ( v14 < 0 )
    ++*(_DWORD *)(a1 + 244);
  return result;
}
