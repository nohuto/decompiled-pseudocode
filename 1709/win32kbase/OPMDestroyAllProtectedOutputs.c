/*
 * XREFs of OPMDestroyAllProtectedOutputs @ 0x1C00749B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C0074C60 (-Lock@CMutex@@QEAAXXZ.c)
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@PEAVCMutex@@@Z @ 0x1C0074CF0 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@.c)
 */

LONG OPMDestroyAllProtectedOutputs()
{
  COPM *v0; // rdi
  LONG result; // eax
  struct _KMUTANT *v2; // rcx

  v0 = qword_1C01903B8;
  CMutex::Lock((COPM *)((char *)qword_1C01903B8 + 32));
  result = CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyAllHandlesFromAdapter(v0, 0LL, (char *)v0 + 24);
  v2 = (struct _KMUTANT *)*((_QWORD *)v0 + 4);
  if ( v2 )
    return KeReleaseMutex(v2, 0);
  return result;
}
