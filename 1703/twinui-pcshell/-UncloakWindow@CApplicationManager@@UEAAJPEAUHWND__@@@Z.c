/*
 * XREFs of ?UncloakWindow@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x18000A700
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKPEAPEAX@Z @ 0x180175FE0 (-GetCallingProcessHandle@CallerIdentity@@YAJKPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::UncloakWindow(CApplicationManager *this, HWND a2, void **a3)
{
  int CallingProcessHandle; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  DWORD ProcessId; // eax
  int v8; // eax
  unsigned __int64 v9; // r9
  int v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD dwProcessId; // [rsp+50h] [rbp+18h] BYREF
  HANDLE Process; // [rsp+58h] [rbp+20h] BYREF

  v12 = -2LL;
  Process = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(this, (unsigned int)&Process, a3);
  v5 = CallingProcessHandle;
  if ( CallingProcessHandle < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x86B,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)CallingProcessHandle);
    goto LABEL_19;
  }
  if ( !(unsigned int)GetProcessUIContextInformation(Process, &v11) )
  {
    v5 = -2147024890;
    v6 = 2158LL;
LABEL_17:
    v9 = v5;
    goto LABEL_18;
  }
  if ( v11 != 2 )
  {
    v5 = -2089418751;
    v6 = 2159LL;
    goto LABEL_17;
  }
  if ( !GetWindowThreadProcessId(a2, &dwProcessId) )
  {
    v5 = -2147024890;
    v6 = 2163LL;
    goto LABEL_17;
  }
  ProcessId = GetProcessId(Process);
  if ( dwProcessId != ProcessId )
  {
    v6 = 2164LL;
LABEL_16:
    v5 = -2147024809;
    goto LABEL_17;
  }
  if ( !(unsigned int)IsShellManagedWindow(a2) || GetWindow(a2, 4u) )
  {
    v6 = 2167LL;
    goto LABEL_16;
  }
  v8 = (*(__int64 (__fastcall **)(PVOID, HWND, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[15].Ptr
                                                      + 24LL))(
         CApplicationManagerUtility::g_pIAMGlobals[15].Ptr,
         a2,
         0LL);
  v5 = v8;
  if ( v8 >= 0 )
    goto LABEL_19;
  v9 = (unsigned int)v8;
  v6 = 2170LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)v9);
LABEL_19:
  if ( (char *)Process - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(Process);
  return v5;
}
