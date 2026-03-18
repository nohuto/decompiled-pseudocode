/*
 * XREFs of ?_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0200958
 * Callers:
 *     ?_DisableVirtualModeSupport@DXGMONITOR@@QEAAJE@Z @ 0x1C02018A4 (-_DisableVirtualModeSupport@DXGMONITOR@@QEAAJE@Z.c)
 * Callees:
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C010AFF0 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_SaveVirtualModeSupportToRegistry(UNICODE_STRING *this)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+58h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+18h] BYREF

  result = DXGMONITOR::_OpenMonitorDataStore(this, 0, &KeyHandle);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"VMSDisabled");
    Data = (LODWORD(this[1].Buffer) >> 7) & 1;
    v3 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
    ZwClose(KeyHandle);
    if ( (int)v3 >= 0 )
    {
      return 0LL;
    }
    else
    {
      v5 = WdLogNewEntry5_WdError(v4);
      *(_QWORD *)(v5 + 24) = this;
      *(_QWORD *)(v5 + 32) = v3;
      WdLogEvent5_WdError(v5);
      return (unsigned int)v3;
    }
  }
  return result;
}
