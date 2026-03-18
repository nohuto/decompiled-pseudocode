/*
 * XREFs of ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0001518
 * Callers:
 *     ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1C000136C (-Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z @ 0x1C00013E8 (-Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z.c)
 *     ?EmitUpdate@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00039E8 (-EmitUpdate@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?ClearSynchronizationEvents@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAAXXZ @ 0x1C0003C50 (-ClearSynchronizationEvents@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAAXXZ.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C000A618 (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C000ACA0 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C000BF60 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C0017660 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0017AA0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 *     ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_JPEAVCEvent@2@PEAW4DeferReason@12@@Z @ 0x1C0046D34 (-ShouldDefer@CBatch@DirectComposition@@QEAA_N_JPEAVCEvent@2@PEAW4DeferReason@12@@Z.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C0046E58 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C014485C (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z @ 0x1C0147300 (-VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

DirectComposition::CEvent *__fastcall DirectComposition::CEvent::`scalar deleting destructor'(
        DirectComposition::CEvent *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
    ObfDereferenceObject(v2);
  Win32FreePool(this);
  return this;
}
