/*
 * XREFs of ?SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C00EDCD0
 * Callers:
 *     NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x1C00EE680 (NtGdiSetOPMSigningKeyAndSequenceNumbers.c)
 * Callees:
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C006D9A0 (-Lock@CMutex@@QEAAXXZ.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00ED91C (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtected.c)
 *     ?SetSigningKeyAndSequenceNumbers@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C00EDD5C (-SetSigningKeyAndSequenceNumbers@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS.c)
 */

__int64 __fastcall COPM::SetSigningKeyAndSequenceNumbers(
        COPM *this,
        unsigned __int64 a2,
        struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *const a3)
{
  COPM *v3; // rdi
  PRKMUTEX *v6; // rbx
  int HandleObject; // edi
  COPMProtectedOutput *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = this;
  v3 = qword_1C018B748;
  v6 = (PRKMUTEX *)((char *)qword_1C018B748 + 24);
  CMutex::Lock((void **)qword_1C018B748 + 3);
  HandleObject = CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject((__int64)v3, a2, &v9);
  if ( HandleObject >= 0 )
  {
    HandleObject = COPMProtectedOutput::SetSigningKeyAndSequenceNumbers(v9, a3);
    if ( HandleObject >= 0 )
      HandleObject = 0;
  }
  if ( *v6 )
    KeReleaseMutex(*v6, 0);
  return (unsigned int)HandleObject;
}
