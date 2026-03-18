/*
 * XREFs of ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@PEAVCMutex@@@Z @ 0x1C0074CF0
 * Callers:
 *     OPMDestroyAllProtectedOutputs @ 0x1C00749B0 (OPMDestroyAllProtectedOutputs.c)
 *     DrvCleanupGraphicsDevices @ 0x1C00F93C4 (DrvCleanupGraphicsDevices.c)
 * Callees:
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@AEAAJPEAVCOPMProtectedOutput@@KPEAVCMutex@@@Z @ 0x1C0074D38 (-DestroyHandleInternal@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@AEAAJPEAVCOPMProtectedO.c)
 *     ?GetFirstElementIndex@?$CList@VCOPMProtectedOutput@@@@QEAAEPEAK@Z @ 0x1C0074DC0 (-GetFirstElementIndex@-$CList@VCOPMProtectedOutput@@@@QEAAEPEAK@Z.c)
 *     ?GetNextElementIndex@?$CList@VCOPMProtectedOutput@@@@QEAAEKPEAK@Z @ 0x1C00A1A9C (-GetNextElementIndex@-$CList@VCOPMProtectedOutput@@@@QEAAEKPEAK@Z.c)
 *     ?GetElement@?$CList@VCOPMProtectedOutput@@@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00A1AE4 (-GetElement@-$CList@VCOPMProtectedOutput@@@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z.c)
 */

__int64 __fastcall CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyAllHandlesFromAdapter(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  __int64 result; // rax
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  for ( result = CList<COPMProtectedOutput>::GetFirstElementIndex(a1, &v7);
        (_BYTE)result;
        result = CList<COPMProtectedOutput>::GetNextElementIndex(a1, v7, &v7) )
  {
    CList<COPMProtectedOutput>::GetElement(a1, v7, &v8);
    if ( !a2 || *(_DWORD *)(v8 + 64) == *a2 && *(_DWORD *)(v8 + 68) == a2[1] )
    {
      CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyHandleInternal(a1, v8, v7, a3);
      v8 = 0LL;
    }
  }
  return result;
}
