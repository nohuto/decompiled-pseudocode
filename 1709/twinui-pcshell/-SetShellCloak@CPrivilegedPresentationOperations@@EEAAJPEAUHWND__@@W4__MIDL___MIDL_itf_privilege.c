/*
 * XREFs of ?SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x1800F24A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@PrivilegedOperationsTraceLogging@@KAPEAV1@XZ @ 0x1800F1FD4 (-Instance@PrivilegedOperationsTraceLogging@@KAPEAV1@XZ.c)
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800F20F0 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ??$SetShellCloak@HAEAPEAUHWND__@@AEBKAEAK@PrivilegedOperationsTraceLogging@@SAX$$QEAHAEAPEAUHWND__@@AEBKAEAK@Z @ 0x1800F559C (--$SetShellCloak@HAEAPEAUHWND__@@AEBKAEAK@PrivilegedOperationsTraceLogging@@SAX$$QEAHAEAPEAUHWND.c)
 *     IsDwmSetWindowAttributePresent @ 0x1801E4D50 (IsDwmSetWindowAttributePresent.c)
 */

__int64 __fastcall CPrivilegedPresentationOperations::SetShellCloak(__int64 a1, HWND a2, int a3)
{
  HWND v4; // rsi
  int v6; // edi
  _DWORD *v8; // rcx
  RTL_SRWLOCK *v9; // rbx
  unsigned int v10; // ebx
  DWORD WindowThreadProcessId; // [rsp+20h] [rbp-20h] BYREF
  BOOL v12; // [rsp+24h] [rbp-1Ch] BYREF
  int pvAttribute; // [rsp+28h] [rbp-18h] BYREF
  RTL_SRWLOCK *v14; // [rsp+30h] [rbp-10h] BYREF
  HWND v15; // [rsp+68h] [rbp+28h] BYREF
  DWORD dwProcessId; // [rsp+78h] [rbp+38h] BYREF

  v15 = a2;
  v4 = a2;
  v6 = 0;
  if ( !(unsigned __int8)IsDwmSetWindowAttributePresent() )
    return 0LL;
  v8 = (_DWORD *)*((_QWORD *)PrivilegedOperationsTraceLogging::Instance() + 1);
  if ( v8 && *v8 )
  {
    WindowThreadProcessId = GetWindowThreadProcessId(v4, &dwProcessId);
    v12 = a3 == 1;
    ((void (__fastcall *)(BOOL *, HWND *, DWORD *, DWORD *))PrivilegedOperationsTraceLogging::SetShellCloak<int,HWND__ * &,unsigned long const &,unsigned long &>)(
      &v12,
      &v15,
      &WindowThreadProcessId,
      &dwProcessId);
  }
  v9 = *(RTL_SRWLOCK **)(a1 + 56);
  v14 = v9;
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)&v9[5].Ptr + 1);
    v4 = v15;
    v9 = v14;
  }
  AcquireSRWLockExclusive(v9 + 7);
  EnableIAMAccess(v9[6].Ptr, 1LL);
  LOBYTE(v6) = a3 != 0;
  pvAttribute = v6;
  v10 = DwmSetWindowAttribute(v4, 0xDu, &pvAttribute, 4u);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v14);
  return v10;
}
