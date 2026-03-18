/*
 * XREFs of OPMDestroyAllProtectedOutputs @ 0x1C0092A40
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C006D9A0 (-Lock@CMutex@@QEAAXXZ.c)
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@PEAVCMutex@@@Z @ 0x1C006DA30 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@.c)
 */

LONG OPMDestroyAllProtectedOutputs()
{
  COPM *v0; // rdi
  LONG result; // eax
  struct _KMUTANT *v2; // rcx

  v0 = qword_1C018B748;
  CMutex::Lock((void **)qword_1C018B748 + 4);
  result = CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyAllHandlesFromAdapter(
             (__int64)v0,
             0LL,
             (__int64)v0 + 24);
  v2 = (struct _KMUTANT *)*((_QWORD *)v0 + 4);
  if ( v2 )
    return KeReleaseMutex(v2, 0);
  return result;
}
