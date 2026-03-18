/*
 * XREFs of ?Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C00C535C
 * Callers:
 *     ?ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C00C5418 (-ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 * Callees:
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C0062E70 (-Lock@CMutex@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     CallMonitor @ 0x1C00C0450 (CallMonitor.c)
 */

__int64 __fastcall COPMProtectedOutput::Configure(
        COPMProtectedOutput *this,
        struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *const a2,
        int a3,
        const unsigned __int8 *a4)
{
  void **v4; // rbx
  unsigned int v9; // edi
  struct _DEVICE_OBJECT *v10; // rcx
  _QWORD InputBuffer[2]; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+40h] [rbp-18h]
  const unsigned __int8 *v14; // [rsp+48h] [rbp-10h]

  v4 = (void **)*((_QWORD *)this + 1);
  CMutex::Lock(v4);
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
  {
    v9 = -1071774438;
  }
  else
  {
    v10 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 2);
    InputBuffer[0] = *((_QWORD *)this + 9);
    InputBuffer[1] = a2;
    v13 = a3;
    v14 = a4;
    v9 = CallMonitor(v10, 0x23249Fu, InputBuffer, 0x20u, 0LL, 0);
  }
  if ( *v4 )
    KeReleaseMutex((PRKMUTEX)*v4, 0);
  return v9;
}
