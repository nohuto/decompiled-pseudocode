/*
 * XREFs of ?_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C01E6280
 * Callers:
 *     ?_DisableVirtualModeSupport@DXGMONITOR@@QEAAJE@Z @ 0x1C01E6F78 (-_DisableVirtualModeSupport@DXGMONITOR@@QEAAJE@Z.c)
 * Callees:
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C0108310 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_SaveVirtualModeSupportToRegistry(DXGMONITOR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+58h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+18h] BYREF

  result = DXGMONITOR::_OpenMonitorDataStore(this, 0LL, &KeyHandle, a4);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"VMSDisabled");
    Data = (*((_DWORD *)this + 6) >> 7) & 1;
    v6 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
    ZwClose(KeyHandle);
    if ( (int)v6 >= 0 )
    {
      return 0LL;
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(v8, v7);
      *(_QWORD *)(v9 + 24) = this;
      *(_QWORD *)(v9 + 32) = v6;
      WdLogEvent5_WdError(v9);
      return (unsigned int)v6;
    }
  }
  return result;
}
