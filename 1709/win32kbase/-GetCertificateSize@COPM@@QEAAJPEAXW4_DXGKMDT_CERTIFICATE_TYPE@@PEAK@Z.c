/*
 * XREFs of ?GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z @ 0x1C00A1070
 * Callers:
 *     NtGdiGetCertificateSizeByHandle @ 0x1C00A0660 (NtGdiGetCertificateSizeByHandle.c)
 *     NtGdiGetCertificateByHandle @ 0x1C00A0720 (NtGdiGetCertificateByHandle.c)
 * Callees:
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C0074C60 (-Lock@CMutex@@QEAAXXZ.c)
 *     ?GetCertificateSize@COPMProtectedOutput@@QEAAJW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z @ 0x1C00A1554 (-GetCertificateSize@COPMProtectedOutput@@QEAAJW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00A16BC (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtected.c)
 */

__int64 __fastcall COPM::GetCertificateSize(COPM *this, void *a2, enum _DXGKMDT_CERTIFICATE_TYPE a3, unsigned int *a4)
{
  COPM *v4; // rdi
  PRKMUTEX *v8; // rbx
  int HandleObject; // edi
  COPMProtectedOutput *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = this;
  v4 = qword_1C01903B8;
  v8 = (PRKMUTEX *)((char *)qword_1C01903B8 + 24);
  CMutex::Lock((void **)qword_1C01903B8 + 3);
  HandleObject = CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject(v4, a2, &v11);
  if ( HandleObject >= 0 )
  {
    HandleObject = COPMProtectedOutput::GetCertificateSize(v11, a3, a4);
    if ( HandleObject >= 0 )
      HandleObject = 0;
  }
  if ( *v8 )
    KeReleaseMutex(*v8, 0);
  return (unsigned int)HandleObject;
}
