/*
 * XREFs of Bulk_Transfer_PrepareForCompletion @ 0x1C002F35C
 * Callers:
 *     Bulk_Transfer_Complete @ 0x1C002F15C (Bulk_Transfer_Complete.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C002F1B4 (Bulk_Transfer_CompleteCancelable.c)
 * Callees:
 *     TR_GetUsbdStatusFromTrbCompletionCode @ 0x1C0020B68 (TR_GetUsbdStatusFromTrbCompletionCode.c)
 *     TR_ReleaseDoubleBuffer @ 0x1C002109C (TR_ReleaseDoubleBuffer.c)
 *     WPP_RECORDER_SF_DDDqdD @ 0x1C0030574 (WPP_RECORDER_SF_DDDqdD.c)
 */

void __fastcall Bulk_Transfer_PrepareForCompletion(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r10
  unsigned int v6; // eax
  __int64 v7; // rcx
  int UsbdStatusFromTrbCompletionCode; // eax
  __int64 v9; // r9
  __int64 v10; // r10
  int v11; // eax
  int v12; // r8d
  _QWORD *v13; // rdx
  struct _MDL *v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // eax
  struct _MDL *v17; // rax

  v3 = *(_QWORD *)(a2 + 48);
  v6 = *(unsigned __int16 *)(v3 + 2);
  if ( v6 <= 0x38 || (v7 = 52LL, v6 > 0x3A) )
    v7 = 36LL;
  *(_DWORD *)(v3 + v7) = *(_DWORD *)(a2 + 108);
  UsbdStatusFromTrbCompletionCode = TR_GetUsbdStatusFromTrbCompletionCode(a1, *(_DWORD *)(a2 + 68), a3);
  *(_DWORD *)(v10 + 4) = UsbdStatusFromTrbCompletionCode;
  if ( UsbdStatusFromTrbCompletionCode <= -1073738240 )
  {
    if ( UsbdStatusFromTrbCompletionCode == -1073738240 )
    {
      v11 = -1073741637;
      goto LABEL_21;
    }
    if ( UsbdStatusFromTrbCompletionCode == -2147483136
      || UsbdStatusFromTrbCompletionCode == -2147482880
      || UsbdStatusFromTrbCompletionCode == -2147482112
      || UsbdStatusFromTrbCompletionCode == -1073739264 )
    {
      v11 = -1073741811;
      goto LABEL_21;
    }
LABEL_17:
    v11 = -1073741823;
    goto LABEL_21;
  }
  switch ( UsbdStatusFromTrbCompletionCode )
  {
    case -1073737728:
      v11 = -1073741670;
      break;
    case -1073713152:
      v11 = -1073741810;
      break;
    case -1073676288:
      v11 = -1073741536;
      break;
    default:
      if ( (unsigned int)UsbdStatusFromTrbCompletionCode <= 1 )
      {
        v11 = 0;
        break;
      }
      goto LABEL_17;
  }
LABEL_21:
  *(_DWORD *)(a2 + 72) = v11;
  ++*(_DWORD *)(v9 + 240);
  *(_QWORD *)(v9 + 248) += *(unsigned int *)(a2 + 108);
  v12 = *(_DWORD *)(a2 + 72);
  if ( v12 < 0 )
  {
    ++*(_DWORD *)(v9 + 244);
    v12 = *(_DWORD *)(a2 + 72);
  }
  WPP_RECORDER_SF_DDDqdD(
    *(_QWORD *)(*(_QWORD *)(v9 + 56) + 80LL),
    *(unsigned __int8 *)(*(_QWORD *)(v9 + 48) + 135LL),
    v12,
    v9);
  v13 = *(_QWORD **)(a2 + 96);
  if ( v13 )
  {
    TR_ReleaseDoubleBuffer(*(_QWORD *)(a2 + 56), v13);
    *(_QWORD *)(a2 + 96) = 0LL;
  }
  v14 = *(struct _MDL **)(a2 + 80);
  if ( v14 )
  {
    v15 = *(_QWORD *)(a2 + 48);
    v16 = *(unsigned __int16 *)(v15 + 2);
    if ( v16 <= 0x38 || v16 > 0x3A )
      v17 = *(struct _MDL **)(v15 + 48);
    else
      v17 = 0LL;
    if ( v14 != v17 && v14 != *(struct _MDL **)(*(_QWORD *)(a2 + 56) + 120LL) )
    {
      IoFreeMdl(v14);
      *(_QWORD *)(a2 + 80) = 0LL;
    }
  }
  *(_BYTE *)(a2 + 16) = 0;
}
