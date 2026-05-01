/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a713dc744d2e33656eb13ccb399d0571___::Run @ 0x18006E750
 * Callers:
 *     <none>
 * Callees:
 *     ?_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z @ 0x18006B6E4 (-_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a713dc744d2e33656eb13ccb399d0571___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 64LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    CFrameApplicationPresentation::_UpdateMinSizePreferences(
      *(CFrameApplicationPresentation **)(a1 + 32),
      *(HWND *)(a1 + 40));
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v3);
}
