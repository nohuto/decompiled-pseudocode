/*
 * XREFs of ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x180008B20
 * Callers:
 *     <none>
 * Callees:
 *     ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x1800088B0 (-_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ.c)
 *     ?_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ @ 0x180008950 (-_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ.c)
 *     ??$CreateRefCountedObj@V?$CAutoHandle@PEAX@@@@YA?AV?$ComPtr@V?$CRefCountedObject@V?$CAutoHandle@PEAX@@@@@WRL@Microsoft@@XZ @ 0x180017E80 (--$CreateRefCountedObj@V-$CAutoHandle@PEAX@@@@YA-AV-$ComPtr@V-$CRefCountedObject@V-$CAutoHandle@.c)
 *     CDelayIAMOperations::AddOperation__lambda_9f5e0378c1f80d1f3850aec2e7057c94___ @ 0x180017ED8 (CDelayIAMOperations--AddOperation__lambda_9f5e0378c1f80d1f3850aec2e7057c94___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::SwitchToDesktopOnMonitor(
        CApplicationManager *a1,
        enum PROCESS_UICONTEXT *a2,
        unsigned int a3)
{
  signed int v6; // esi
  HANDLE *v7; // rbx
  PSRWLOCK v8; // rdi
  enum PROCESS_UICONTEXT *v9; // rdx
  bool v10; // di
  unsigned int v11; // r12d
  HANDLE **v12; // rax
  __int64 v13; // rcx
  HANDLE Event; // rax
  signed int LastError; // eax
  int v16; // edi
  int v17; // edi
  _QWORD v19[3]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v20[2]; // [rsp+38h] [rbp-28h] BYREF
  bool v21; // [rsp+48h] [rbp-18h]
  HANDLE *v22; // [rsp+50h] [rbp-10h]
  unsigned int v23; // [rsp+58h] [rbp-8h]
  __int64 v24; // [rsp+A8h] [rbp+48h] BYREF

  v19[1] = -2LL;
  v6 = CApplicationManager::_ValidateCallerUiContextForDesktopSwitch(a1, a2);
  if ( v6 < 0 )
    return (unsigned int)v6;
  v7 = 0LL;
  v19[0] = 0LL;
  v8 = CApplicationManagerUtility::g_pIAMGlobals;
  v10 = LODWORD(v8[9].Ptr) == GetCurrentThreadId();
  v11 = 3;
  if ( (~(a3 >> 2) & 1) != 0 )
  {
    if ( v10 )
    {
      v6 = CApplicationManager::_ActivateIamSpecialWindow((CApplicationManager *)((char *)a1 - 120), v9);
    }
    else
    {
      v12 = (HANDLE **)CreateRefCountedObj<CAutoHandle<void *>>(&v24);
      v7 = 0LL;
      if ( v19 != v12 )
      {
        v7 = *v12;
        *v12 = 0LL;
      }
      v19[0] = v7;
      v13 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      v6 = v7 == 0LL ? 0x8007000E : 0;
      if ( v7 )
      {
        Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
        v7[1] = Event;
        if ( Event )
        {
          v6 = 0;
        }
        else
        {
          LastError = GetLastError();
          v6 = (unsigned __int16)LastError | 0x80070000;
          if ( LastError <= 0 )
            v6 = LastError;
          if ( v6 >= 0 )
            v6 = -2147467259;
        }
        if ( v6 < 0 )
          goto LABEL_33;
        v11 = 4;
      }
    }
  }
  if ( v6 >= 0 )
  {
    v19[2] = a2;
    if ( a2 )
      (*(void (__fastcall **)(enum PROCESS_UICONTEXT *))(*(_QWORD *)a2 + 8LL))(a2);
    v20[0] = (char *)a1 - 120;
    v20[1] = a2;
    if ( a2 )
      (*(void (__fastcall **)(enum PROCESS_UICONTEXT *))(*(_QWORD *)a2 + 8LL))(a2);
    v21 = v10;
    v22 = v7;
    if ( v7 )
      (*((void (__fastcall **)(HANDLE *))*v7 + 1))(v7);
    v23 = a3;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v16 = CDelayIAMOperations::AddOperation__lambda_9f5e0378c1f80d1f3850aec2e7057c94___(*((_QWORD *)a1 + 76), v20, v11);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v17 = -v16;
    v6 = v17 == 0 ? 0x80004005 : 0;
    if ( v17 && v7 )
      WaitForSingleObjectEx(v7[1], 0x1388u, 0);
    if ( v7 )
      (*((void (__fastcall **)(HANDLE *))*v7 + 2))(v7);
    if ( a2 )
    {
      (*(void (__fastcall **)(enum PROCESS_UICONTEXT *))(*(_QWORD *)a2 + 16LL))(a2);
      (*(void (__fastcall **)(enum PROCESS_UICONTEXT *))(*(_QWORD *)a2 + 16LL))(a2);
    }
  }
LABEL_33:
  if ( v7 )
    (*((void (__fastcall **)(HANDLE *))*v7 + 2))(v7);
  return (unsigned int)v6;
}
