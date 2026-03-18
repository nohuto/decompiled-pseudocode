/*
 * XREFs of ?GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z @ 0x1C00ED624
 * Callers:
 *     NtGdiGetCertificateByHandle @ 0x1C00EE300 (NtGdiGetCertificateByHandle.c)
 * Callees:
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C006D9A0 (-Lock@CMutex@@QEAAXXZ.c)
 *     ?GetCertificate@COPMProtectedOutput@@QEAAJW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z @ 0x1C00ED6B8 (-GetCertificate@COPMProtectedOutput@@QEAAJW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00ED91C (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtected.c)
 */

__int64 __fastcall COPM::GetCertificate(
        COPM *this,
        void *a2,
        enum _DXGKMDT_CERTIFICATE_TYPE a3,
        unsigned __int8 *a4,
        unsigned int a5)
{
  COPM *v5; // rdi
  PRKMUTEX *v9; // rbx
  int HandleObject; // edi
  COPMProtectedOutput *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = this;
  v5 = qword_1C018B748;
  v9 = (PRKMUTEX *)((char *)qword_1C018B748 + 24);
  CMutex::Lock((void **)qword_1C018B748 + 3);
  HandleObject = CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject(v5, a2, &v12);
  if ( HandleObject >= 0 )
  {
    HandleObject = COPMProtectedOutput::GetCertificate(v12, a3, a4, a5);
    if ( HandleObject >= 0 )
      HandleObject = 0;
  }
  if ( *v9 )
    KeReleaseMutex(*v9, 0);
  return (unsigned int)HandleObject;
}
