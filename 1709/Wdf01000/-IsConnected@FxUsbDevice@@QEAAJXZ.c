/*
 * XREFs of ?IsConnected@FxUsbDevice@@QEAAJXZ @ 0x1C00919F0
 * Callers:
 *     imp_WdfUsbTargetDeviceIsConnectedSynchronous @ 0x1C008B110 (imp_WdfUsbTargetDeviceIsConnectedSynchronous.c)
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C008E3E0 (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 * Callees:
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C0091878 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 */

__int64 __fastcall FxUsbDevice::IsConnected(FxUsbDevice *this)
{
  __int64 result; // rax
  unsigned int portStatus; // [rsp+38h] [rbp+10h] BYREF

  result = FxUsbDevice::GetPortStatus(this, (IFxMemory *)&portStatus);
  if ( (int)result >= 0 && (portStatus & 2) == 0 )
    return 3221225664LL;
  return result;
}
