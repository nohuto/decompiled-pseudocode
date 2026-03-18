/*
 * XREFs of ?GetInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00A1204
 * Callers:
 *     ?GetInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@QEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00A0E48 (-GetInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@QEAU_DXGKMDT_OPM_REQUESTED_.c)
 * Callees:
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C0074C60 (-Lock@CMutex@@QEAAXXZ.c)
 *     CallMonitor @ 0x1C00A2390 (CallMonitor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COPMProtectedOutput::GetInformation(
        COPMProtectedOutput *this,
        struct _DXGKMDT_OPM_GET_INFO_PARAMETERS *const a2,
        struct _DXGKMDT_OPM_REQUESTED_INFORMATION *a3)
{
  void **v3; // rbx
  struct _DEVICE_OBJECT *v5; // rcx
  unsigned int v6; // edi
  _QWORD InputBuffer[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = (void **)*((_QWORD *)this + 1);
  CMutex::Lock(v3);
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
  {
    v6 = -1071774438;
  }
  else
  {
    v5 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 2);
    InputBuffer[0] = *((_QWORD *)this + 9);
    InputBuffer[1] = &unk_1C0193B00;
    v6 = CallMonitor(v5, 0x232497u, InputBuffer, 0x10u, &unk_1C0194B10, 0x1000u);
  }
  if ( *v3 )
    KeReleaseMutex((PRKMUTEX)*v3, 0);
  return v6;
}
