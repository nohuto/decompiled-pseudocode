/*
 * XREFs of ?IrpMJIoControlHandler@CSidebandDevice@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00075A8
 * Callers:
 *     SidebandDispatchIrp @ 0x1C0007050 (SidebandDispatchIrp.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010C4 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall CSidebandDevice::IrpMJIoControlHandler(
        CSidebandDevice *this,
        struct _DEVICE_OBJECT *a2,
        struct _IRP *a3)
{
  unsigned int inserted; // ebx
  __int64 v6; // rdx
  __int64 result; // rax
  unsigned int v8; // [rsp+28h] [rbp-10h]

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)a2,
    9u,
    0x81u,
    (__int64)&WPP_b40f9266b8da340d7b072cc037fdecb6_Traceguids);
  switch ( a3->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
    case 0x220007u:
    case 0x22000Bu:
    case 0x22000Fu:
    case 0x220013u:
    case 0x220017u:
    case 0x22001Bu:
    case 0x22001Fu:
    case 0x220023u:
    case 0x220027u:
    case 0x22002Bu:
    case 0x22002Fu:
    case 0x220033u:
    case 0x220037u:
    case 0x22003Bu:
    case 0x22003Fu:
    case 0x220043u:
    case 0x220047u:
    case 0x22004Bu:
    case 0x22004Fu:
      inserted = IoCsqInsertIrpEx((PIO_CSQ)(*((_QWORD *)this + 5) + 160LL), a3, 0LL, (char *)this + 64);
      v8 = inserted;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v6,
        9u,
        0x82u,
        (__int64)&WPP_b40f9266b8da340d7b072cc037fdecb6_Traceguids,
        v8);
      result = inserted;
      break;
    default:
      a3->IoStatus.Information = 0LL;
      a3->IoStatus.Status = -1073741822;
      IofCompleteRequest(a3, 0);
      result = 3221225474LL;
      break;
  }
  return result;
}
