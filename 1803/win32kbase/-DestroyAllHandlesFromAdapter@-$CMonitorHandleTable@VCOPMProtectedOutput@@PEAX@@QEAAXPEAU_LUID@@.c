/*
 * XREFs of ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@PEAVCMutex@@@Z @ 0x1C00C5668
 * Callers:
 *     OPMDestroyAllProtectedOutputs @ 0x1C00C6A70 (OPMDestroyAllProtectedOutputs.c)
 *     DrvCleanupGraphicsDevices @ 0x1C00D3898 (DrvCleanupGraphicsDevices.c)
 * Callees:
 *     ?GetFirstElementIndex@?$CList@VCOPMProtectedOutput@@@@QEAAEPEAK@Z @ 0x1C0062E9C (-GetFirstElementIndex@-$CList@VCOPMProtectedOutput@@@@QEAAEPEAK@Z.c)
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@AEAAJPEAVCOPMProtectedOutput@@KPEAVCMutex@@@Z @ 0x1C00C56FC (-DestroyHandleInternal@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@AEAAJPEAVCOPMProtectedO.c)
 *     ?GetElement@?$CList@VCOPMProtectedOutput@@@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00C5C08 (-GetElement@-$CList@VCOPMProtectedOutput@@@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z.c)
 *     ?GetNextElementIndex@?$CList@VCOPMProtectedOutput@@@@QEAAEKPEAK@Z @ 0x1C00C5DB4 (-GetNextElementIndex@-$CList@VCOPMProtectedOutput@@@@QEAAEKPEAK@Z.c)
 */

char __fastcall CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyAllHandlesFromAdapter(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  char result; // al
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  for ( result = CList<COPMProtectedOutput>::GetFirstElementIndex(a1, &v7);
        result;
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
