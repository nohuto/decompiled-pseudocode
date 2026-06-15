/*
 * XREFs of ?AddTail@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUSampleDataBlock@CMonitor@@@Z @ 0x18007D1A0
 * Callers:
 *     ?ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x1800473E4 (-ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 *     ?ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x18004792C (-ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 * Callees:
 *     ?NewNode@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAUSampleDataBlock@CMonitor@@PEAV312@1@Z @ 0x1800B6AF8 (-NewNode@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMonitor.c)
 */

__int64 __fastcall ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::AddTail(
        __int64 *a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // rcx

  result = ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::NewNode(
             a1,
             a2,
             a1[1],
             0LL);
  v4 = (__int64 *)a1[1];
  if ( v4 )
    *v4 = result;
  else
    *a1 = result;
  a1[1] = result;
  return result;
}
