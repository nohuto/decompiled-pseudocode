/*
 * XREFs of CrmGlobalsInitialize @ 0x180037F78
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180037CC4 (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 *CrmGlobalsInitialize()
{
  __int64 *result; // rax

  memset_0(&CrmGlobals, 0, 0xF0uLL);
  RtlInitializeSRWLock(&unk_180092A18);
  dword_180092A20 = 0;
  xmmword_180092A28 = 0LL;
  CrmGlobals = 0LL;
  qword_180092988 = 0LL;
  RtlInitializeSRWLock(&CrmGlobals);
  LODWORD(qword_180092988) = 0;
  qword_180092A38 = 0LL;
  qword_180092A40 = 0LL;
  RtlInitializeSRWLock(&qword_180092A38);
  LODWORD(qword_180092A40) = 0;
  result = &qword_180092A48;
  qword_180092A50 = (__int64)&qword_180092A48;
  qword_180092A48 = (__int64)&qword_180092A48;
  return result;
}
