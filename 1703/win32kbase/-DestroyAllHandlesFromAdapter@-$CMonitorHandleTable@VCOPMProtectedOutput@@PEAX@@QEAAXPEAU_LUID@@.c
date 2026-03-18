/*
 * XREFs of ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@PEAVCMutex@@@Z @ 0x1C006DA30
 * Callers:
 *     OPMDestroyAllProtectedOutputs @ 0x1C0092A40 (OPMDestroyAllProtectedOutputs.c)
 *     DrvCleanupGraphicsDevices @ 0x1C00F8F14 (DrvCleanupGraphicsDevices.c)
 * Callees:
 *     ?GetFirstElementIndex@?$CList@VCOPMProtectedOutput@@@@QEAAEPEAK@Z @ 0x1C006DA78 (-GetFirstElementIndex@-$CList@VCOPMProtectedOutput@@@@QEAAEPEAK@Z.c)
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@AEAAJPEAVCOPMProtectedOutput@@KPEAVCMutex@@@Z @ 0x1C00ED3F8 (-DestroyHandleInternal@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@AEAAJPEAVCOPMProtectedO.c)
 *     ?GetElement@?$CList@VCOPMProtectedOutput@@@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00ED8F4 (-GetElement@-$CList@VCOPMProtectedOutput@@@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z.c)
 *     ?GetNextElementIndex@?$CList@VCOPMProtectedOutput@@@@QEAAEKPEAK@Z @ 0x1C00EDAA0 (-GetNextElementIndex@-$CList@VCOPMProtectedOutput@@@@QEAAEKPEAK@Z.c)
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
