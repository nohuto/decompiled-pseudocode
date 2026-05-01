/*
 * XREFs of ?_SetFrameCloak@CFrameApplicationPresentation@@AEAAX_N@Z @ 0x180069164
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9547a9903e0d647dceb9847620021a40___::Run @ 0x18006B8F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9547a9903e0d647dceb9847620021a40___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1ab7f1210d4a2916bb4211d88b774039___::Run @ 0x18006B960 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1ab7f1210d4a2916bb4211d88b774039___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFrameApplicationPresentation::_SetFrameCloak(CFrameApplicationPresentation *this, unsigned __int8 a2)
{
  unsigned int v3; // ebx

  v3 = a2;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  (*(void (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[15].Ptr + 24LL))(
    CApplicationManagerUtility::g_pIAMGlobals[15].Ptr,
    *((_QWORD *)this + 15),
    v3);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
}
