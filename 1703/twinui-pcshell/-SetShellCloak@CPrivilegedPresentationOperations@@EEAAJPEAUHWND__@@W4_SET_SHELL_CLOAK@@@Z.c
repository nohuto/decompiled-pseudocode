/*
 * XREFs of ?SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4_SET_SHELL_CLOAK@@@Z @ 0x1800CF4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?Instance@PrivilegedOperationsTraceLogging@@KAPEAV1@XZ @ 0x1800CF074 (-Instance@PrivilegedOperationsTraceLogging@@KAPEAV1@XZ.c)
 *     ?TakeIamAccess@IamAccess@@QEAA?AVSyncIamAccess@1@XZ @ 0x1800CF1CC (-TakeIamAccess@IamAccess@@QEAA-AVSyncIamAccess@1@XZ.c)
 *     ??$SetShellCloak@HAEAPEAUHWND__@@AEBKAEAK@PrivilegedOperationsTraceLogging@@SAX$$QEAHAEAPEAUHWND__@@AEBKAEAK@Z @ 0x1800D2478 (--$SetShellCloak@HAEAPEAUHWND__@@AEBKAEAK@PrivilegedOperationsTraceLogging@@SAX$$QEAHAEAPEAUHWND.c)
 *     IsDwmSetWindowAttributePresent @ 0x18019691C (IsDwmSetWindowAttributePresent.c)
 */

__int64 __fastcall CPrivilegedPresentationOperations::SetShellCloak(__int64 a1, HWND a2, int a3)
{
  int v6; // ebx
  _DWORD *v8; // rcx
  HRESULT v9; // eax
  RTL_SRWLOCK *v10; // rbx
  unsigned int v11; // edi
  DWORD WindowThreadProcessId; // [rsp+20h] [rbp-10h] BYREF
  BOOL v13; // [rsp+24h] [rbp-Ch] BYREF
  int pvAttribute; // [rsp+28h] [rbp-8h] BYREF
  HWND v15; // [rsp+58h] [rbp+28h] BYREF
  RTL_SRWLOCK *dwProcessId; // [rsp+68h] [rbp+38h] BYREF

  v15 = a2;
  v6 = 0;
  if ( !(unsigned __int8)IsDwmSetWindowAttributePresent() )
    return 0LL;
  v8 = (_DWORD *)*((_QWORD *)PrivilegedOperationsTraceLogging::Instance() + 1);
  if ( v8 )
  {
    if ( *v8 )
    {
      WindowThreadProcessId = GetWindowThreadProcessId(a2, (LPDWORD)&dwProcessId);
      v13 = a3 == 1;
      ((void (__fastcall *)(BOOL *, HWND *, DWORD *, RTL_SRWLOCK **))PrivilegedOperationsTraceLogging::SetShellCloak<int,HWND__ * &,unsigned long const &,unsigned long &>)(
        &v13,
        &v15,
        &WindowThreadProcessId,
        &dwProcessId);
    }
  }
  IamAccess::TakeIamAccess(*(_QWORD *)(a1 + 40), &dwProcessId);
  LOBYTE(v6) = a3 != 0;
  pvAttribute = v6;
  v9 = DwmSetWindowAttribute(a2, 0xDu, &pvAttribute, 4u);
  v10 = dwProcessId;
  v11 = v9;
  EnableIAMAccess(dwProcessId[4].Ptr, 0LL);
  ReleaseSRWLockExclusive(v10 + 5);
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v10);
  return v11;
}
