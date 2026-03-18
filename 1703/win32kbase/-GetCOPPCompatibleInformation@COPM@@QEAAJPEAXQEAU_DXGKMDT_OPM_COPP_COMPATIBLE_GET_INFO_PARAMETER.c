/*
 * XREFs of ?GetCOPPCompatibleInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00ED50C
 * Callers:
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1C00EE140 (NtGdiGetCOPPCompatibleOPMInformation.c)
 * Callees:
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C006D9A0 (-Lock@CMutex@@QEAAXXZ.c)
 *     ?GetCOPPCompatibleInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00ED588 (-GetCOPPCompatibleInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INF.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00ED91C (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtected.c)
 */

__int64 __fastcall COPM::GetCOPPCompatibleInformation(
        COPM *this,
        void *a2,
        struct _DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS *const a3,
        struct _DXGKMDT_OPM_REQUESTED_INFORMATION *a4)
{
  COPM *v4; // rdi
  PRKMUTEX *v6; // rbx
  struct _DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS *v7; // rdx
  int HandleObject; // edi
  struct _DXGKMDT_OPM_REQUESTED_INFORMATION *v9; // r8
  COPMProtectedOutput *v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = (COPMProtectedOutput *)a4;
  v4 = qword_1C018B748;
  v6 = (PRKMUTEX *)((char *)qword_1C018B748 + 24);
  CMutex::Lock((void **)qword_1C018B748 + 3);
  HandleObject = CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject(v4, a2, &v11);
  if ( HandleObject >= 0 )
  {
    HandleObject = COPMProtectedOutput::GetCOPPCompatibleInformation(v11, v7, v9);
    if ( HandleObject >= 0 )
      HandleObject = 0;
  }
  if ( *v6 )
    KeReleaseMutex(*v6, 0);
  return (unsigned int)HandleObject;
}
