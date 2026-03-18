/*
 * XREFs of ?SetSigningKeyAndSequenceNumbers@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C00A1398
 * Callers:
 *     ?SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C00A0EC4 (-SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z.c)
 * Callees:
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C0074C60 (-Lock@CMutex@@QEAAXXZ.c)
 *     CallMonitor @ 0x1C00A2390 (CallMonitor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COPMProtectedOutput::SetSigningKeyAndSequenceNumbers(
        COPMProtectedOutput *this,
        struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *const a2)
{
  void **v2; // rbx
  struct _DEVICE_OBJECT *v5; // rcx
  unsigned int v6; // edi
  _QWORD InputBuffer[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = (void **)*((_QWORD *)this + 1);
  CMutex::Lock(v2);
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
  {
    v6 = -1071774438;
  }
  else
  {
    v5 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 2);
    InputBuffer[0] = *((_QWORD *)this + 9);
    InputBuffer[1] = a2;
    v6 = CallMonitor(v5, 0x232493u, InputBuffer, 0x10u, 0LL, 0);
  }
  if ( *v2 )
    KeReleaseMutex((PRKMUTEX)*v2, 0);
  return v6;
}
