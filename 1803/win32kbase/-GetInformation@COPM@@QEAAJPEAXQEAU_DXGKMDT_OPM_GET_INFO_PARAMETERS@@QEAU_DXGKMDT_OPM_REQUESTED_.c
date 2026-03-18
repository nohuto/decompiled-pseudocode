/*
 * XREFs of ?GetInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@QEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00C5C9C
 * Callers:
 *     NtGdiGetOPMInformation @ 0x1C00C6870 (NtGdiGetOPMInformation.c)
 * Callees:
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C0062E70 (-Lock@CMutex@@QEAAXXZ.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00C5C30 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtected.c)
 *     ?GetInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00C5D18 (-GetInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM.c)
 */

__int64 __fastcall COPM::GetInformation(
        COPM *this,
        unsigned __int64 a2,
        struct _DXGKMDT_OPM_GET_INFO_PARAMETERS *const a3,
        struct _DXGKMDT_OPM_REQUESTED_INFORMATION *const a4)
{
  PVOID v4; // rdi
  PRKMUTEX *v6; // rbx
  struct _DXGKMDT_OPM_GET_INFO_PARAMETERS *v7; // rdx
  int HandleObject; // edi
  struct _DXGKMDT_OPM_REQUESTED_INFORMATION *v9; // r8
  COPMProtectedOutput *v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = (COPMProtectedOutput *)a4;
  v4 = P;
  v6 = (PRKMUTEX *)((char *)P + 24);
  CMutex::Lock((void **)P + 3);
  HandleObject = CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject((__int64)v4, a2, &v11);
  if ( HandleObject >= 0 )
  {
    HandleObject = COPMProtectedOutput::GetInformation(v11, v7, v9);
    if ( HandleObject >= 0 )
      HandleObject = 0;
  }
  if ( *v6 )
    KeReleaseMutex(*v6, 0);
  return (unsigned int)HandleObject;
}
