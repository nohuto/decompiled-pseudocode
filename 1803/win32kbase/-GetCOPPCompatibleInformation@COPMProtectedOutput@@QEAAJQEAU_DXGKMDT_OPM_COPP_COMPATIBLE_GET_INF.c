/*
 * XREFs of ?GetCOPPCompatibleInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00C589C
 * Callers:
 *     ?GetCOPPCompatibleInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00C5820 (-GetCOPPCompatibleInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETER.c)
 * Callees:
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C0062E70 (-Lock@CMutex@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     CallMonitor @ 0x1C00C0450 (CallMonitor.c)
 */

__int64 __fastcall COPMProtectedOutput::GetCOPPCompatibleInformation(
        COPMProtectedOutput *this,
        struct _DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS *const a2,
        struct _DXGKMDT_OPM_REQUESTED_INFORMATION *a3)
{
  void **v3; // rbx
  unsigned int v5; // edi
  struct _DEVICE_OBJECT *v6; // rcx
  _QWORD InputBuffer[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = (void **)*((_QWORD *)this + 1);
  CMutex::Lock(v3);
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
  {
    v5 = -1071774438;
  }
  else
  {
    v6 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 2);
    InputBuffer[0] = *((_QWORD *)this + 9);
    InputBuffer[1] = &unk_1C01A8540;
    v5 = CallMonitor(v6, 0x23249Bu, InputBuffer, 0x10u, &unk_1C01A9540, 0x1000u);
  }
  if ( *v3 )
    KeReleaseMutex((PRKMUTEX)*v3, 0);
  return v5;
}
