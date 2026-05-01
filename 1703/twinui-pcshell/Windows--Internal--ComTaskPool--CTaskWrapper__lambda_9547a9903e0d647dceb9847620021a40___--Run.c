/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9547a9903e0d647dceb9847620021a40___::Run @ 0x18006B8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetFrameCloak@CFrameApplicationPresentation@@AEAAX_N@Z @ 0x180069164 (-_SetFrameCloak@CFrameApplicationPresentation@@AEAAX_N@Z.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9547a9903e0d647dceb9847620021a40___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    CFrameApplicationPresentation::_SetFrameCloak(*(CFrameApplicationPresentation **)(a1 + 32), 1u);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 196LL);
  ReleaseSRWLockExclusive(v3);
}
