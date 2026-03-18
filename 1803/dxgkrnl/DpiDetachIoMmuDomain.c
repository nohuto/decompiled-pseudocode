/*
 * XREFs of DpiDetachIoMmuDomain @ 0x1C0201FC4
 * Callers:
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C015998C (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C015BF48 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     DpiGetIoMmuContextFromDevice @ 0x1C0040538 (DpiGetIoMmuContextFromDevice.c)
 */

__int64 __fastcall DpiDetachIoMmuDomain(__int64 a1)
{
  __int64 IoMmuContextFromDevice; // rax
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rax

  IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice(a1);
  result = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))qword_1C007AC58)(
             *(_QWORD *)(IoMmuContextFromDevice + 80),
             a1,
             0LL);
  if ( (int)result < 0 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 420LL;
    return WdLogEvent5_WdAssertion(v5);
  }
  return result;
}
