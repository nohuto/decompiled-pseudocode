/*
 * XREFs of ?GetCertificateSize@COPMProtectedOutput@@QEAAJW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z @ 0x1C00C5B78
 * Callers:
 *     ?GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z @ 0x1C00C5AEC (-GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z.c)
 * Callees:
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C0062E70 (-Lock@CMutex@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     CallMonitor @ 0x1C00C0450 (CallMonitor.c)
 */

__int64 __fastcall COPMProtectedOutput::GetCertificateSize(
        COPMProtectedOutput *this,
        enum _DXGKMDT_CERTIFICATE_TYPE a2,
        unsigned int *a3)
{
  void **v3; // rbx
  unsigned int v6; // edi
  enum _DXGKMDT_CERTIFICATE_TYPE InputBuffer; // [rsp+48h] [rbp+10h] BYREF

  InputBuffer = a2;
  v3 = (void **)*((_QWORD *)this + 1);
  CMutex::Lock(v3);
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
    v6 = -1071774438;
  else
    v6 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x232483u, &InputBuffer, 4u, a3, 4u);
  if ( *v3 )
    KeReleaseMutex((PRKMUTEX)*v3, 0);
  return v6;
}
