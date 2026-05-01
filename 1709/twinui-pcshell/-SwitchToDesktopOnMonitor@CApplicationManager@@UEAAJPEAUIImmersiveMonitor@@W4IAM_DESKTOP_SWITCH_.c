/*
 * XREFs of ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x180008B90
 * Callers:
 *     <none>
 * Callees:
 *     ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x18000891C (-_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ.c)
 *     ?_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ @ 0x1800089BC (-_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ.c)
 *     CDelayIAMOperations::AddOperation__lambda_9f5e0378c1f80d1f3850aec2e7057c94___ @ 0x1800190C4 (CDelayIAMOperations--AddOperation__lambda_9f5e0378c1f80d1f3850aec2e7057c94___.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  unsigned int v11; // r15d
  HANDLE *v12; // rax
  HANDLE Event; // rax
  signed int LastError; // eax
  int v15; // edi
  _QWORD v17[2]; // [rsp+30h] [rbp-58h] BYREF
  bool v18; // [rsp+40h] [rbp-48h]
  HANDLE *v19; // [rsp+48h] [rbp-40h]
  unsigned int v20; // [rsp+50h] [rbp-38h]

  v6 = CApplicationManager::_ValidateCallerUiContextForDesktopSwitch(a1, a2);
  if ( v6 < 0 )
    return (unsigned int)v6;
  v7 = 0LL;
  v8 = CApplicationManagerUtility::g_pIAMGlobals;
  v10 = LODWORD(v8[9].Ptr) == GetCurrentThreadId();
  v11 = 3;
  if ( (~(a3 >> 2) & 1) != 0 )
  {
    if ( v10 )
    {
      v6 = CApplicationManager::_ActivateIamSpecialWindow((CApplicationManager *)((char *)a1 - 160), v9);
    }
    else
    {
      v12 = (HANDLE *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v7 = v12;
      if ( v12 )
      {
        v12[1] = 0LL;
        *v12 = &CRefCountedObject<CAutoHandle<void *>>::`vftable';
        *((_DWORD *)v12 + 4) = 0;
      }
      else
      {
        v7 = 0LL;
      }
      if ( v7 )
        (*((void (__fastcall **)(HANDLE *))*v7 + 1))(v7);
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
          goto LABEL_34;
        v11 = 4;
      }
    }
  }
  if ( v6 >= 0 )
  {
    if ( a2 )
      (*(void (__fastcall **)(enum PROCESS_UICONTEXT *))(*(_QWORD *)a2 + 8LL))(a2);
    v17[0] = (char *)a1 - 160;
    v17[1] = a2;
    if ( a2 )
      (*(void (__fastcall **)(enum PROCESS_UICONTEXT *))(*(_QWORD *)a2 + 8LL))(a2);
    v18 = v10;
    v19 = v7;
    if ( v7 )
      (*((void (__fastcall **)(HANDLE *))*v7 + 1))(v7);
    v20 = a3;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v15 = CDelayIAMOperations::AddOperation__lambda_9f5e0378c1f80d1f3850aec2e7057c94___(*((_QWORD *)a1 + 81), v17, v11);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v6 = v15 == 0 ? 0x80004005 : 0;
    if ( v15 && v7 )
      WaitForSingleObjectEx(v7[1], 0x1388u, 0);
    if ( v7 )
      (*((void (__fastcall **)(HANDLE *))*v7 + 2))(v7);
    if ( a2 )
    {
      (*(void (__fastcall **)(enum PROCESS_UICONTEXT *))(*(_QWORD *)a2 + 16LL))(a2);
      (*(void (__fastcall **)(enum PROCESS_UICONTEXT *))(*(_QWORD *)a2 + 16LL))(a2);
    }
  }
LABEL_34:
  if ( v7 )
    (*((void (__fastcall **)(HANDLE *))*v7 + 2))(v7);
  return (unsigned int)v6;
}
