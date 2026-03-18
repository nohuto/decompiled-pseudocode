/*
 * XREFs of ?GetElement@?$CList@VCOPMProtectedOutput@@@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00ED8F4
 * Callers:
 *     ?DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z @ 0x1C006D8A8 (-DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z.c)
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@PEAVCMutex@@@Z @ 0x1C006DA30 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00ED91C (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtected.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CList<COPMProtectedOutput>::GetElement(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v4; // rdx

  if ( a2 >= *(_DWORD *)(a1 + 12) )
    return 3221225473LL;
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * a2);
  if ( !v4 )
    return 3221225473LL;
  *a3 = v4;
  return 0LL;
}
