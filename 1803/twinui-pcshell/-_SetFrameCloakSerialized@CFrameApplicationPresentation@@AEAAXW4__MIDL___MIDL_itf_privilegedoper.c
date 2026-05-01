/*
 * XREFs of ?_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x180013620
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d2fa7908b891c12cbb1669318d2d4613__&___ptr64_::Run @ 0x18000E5E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d2fa7908b891c12cbb1669318d2d4613__-___ptr64.c)
 *     ?Show@CFrameApplicationPresentation@@UEAAJXZ @ 0x1800148B0 (-Show@CFrameApplicationPresentation@@UEAAJXZ.c)
 *     ?Hide@CFrameApplicationPresentation@@UEAAJXZ @ 0x180136F40 (-Hide@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_66130c34581757aa5e7e6aafaafaa423___ @ 0x180135F38 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_66130c34581757aa5e7e6aafaafaa423___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_SetFrameCloakSerialized(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  HWND v3; // rdx
  __int64 (__fastcall *v4)(__int64, HWND, int); // rax
  PVOID Ptr; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+28h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 204) )
  {
    v8 = a2;
    v7 = a1;
    return CFrameApplicationPresentation::_AddTaskToQueue__lambda_66130c34581757aa5e7e6aafaafaa423___(a1, &v7);
  }
  else
  {
    v2 = a2;
    v3 = *(HWND *)(a1 + 128);
    v4 = *(__int64 (__fastcall **)(__int64, HWND, int))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                      + 24LL);
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[17].Ptr;
    if ( v4 == CPrivilegedPresentationOperations::SetShellCloak )
      return CPrivilegedPresentationOperations::SetShellCloak((__int64)Ptr, v3, v2);
    else
      return v4((__int64)Ptr, v3, v2);
  }
}
