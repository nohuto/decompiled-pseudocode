/*
 * XREFs of _lambda_60cdd79d6ef93393eeddedcffed22f52_::operator() @ 0x18011DF60
 * Callers:
 *     ?DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x18011F150 (-DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x180126888 (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 *     ?_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIImmersiveApplication@@W4ApplicationDisappearReason@@@Z @ 0x180127CF0 (-_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PE.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_60cdd79d6ef93393eeddedcffed22f52_::operator()(_QWORD **a1)
{
  RTL_SRWLOCK *v2; // rbx

  if ( (int)CAppViewManager::_ObliterateOperation((CAppViewManager *)*a1, (const struct _GUID *)a1[1]) < 0 && *a1[2] )
  {
    v2 = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    CAppViewManager::_TransferAllWindowsToNextGlomWorker(*a1, *a1[2], 0LL, 4294967293LL, -2LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*a1)[15] + 176LL))((*a1)[15], *a1[2]);
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
}
