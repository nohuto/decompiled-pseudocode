/*
 * XREFs of ?SetSigningKeyAndSequenceNumbers@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C00EDD5C
 * Callers:
 *     ?SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C00EDCD0 (-SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z.c)
 * Callees:
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C006D9A0 (-Lock@CMutex@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     CallMonitor @ 0x1C00E89E0 (CallMonitor.c)
 */

__int64 __fastcall COPMProtectedOutput::SetSigningKeyAndSequenceNumbers(
        COPMProtectedOutput *this,
        struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *const a2)
{
  void **v2; // rbx
  unsigned int v5; // edi
  struct _DEVICE_OBJECT *v6; // rcx
  _QWORD InputBuffer[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = (void **)*((_QWORD *)this + 1);
  CMutex::Lock(v2);
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
  {
    v5 = -1071774438;
  }
  else
  {
    v6 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 2);
    InputBuffer[0] = *((_QWORD *)this + 9);
    InputBuffer[1] = a2;
    v5 = CallMonitor(v6, 0x232493u, InputBuffer, 0x10u, 0LL, 0);
  }
  if ( *v2 )
    KeReleaseMutex((PRKMUTEX)*v2, 0);
  return v5;
}
