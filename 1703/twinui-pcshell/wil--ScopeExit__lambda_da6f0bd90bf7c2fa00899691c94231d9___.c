/*
 * XREFs of wil::ScopeExit__lambda_da6f0bd90bf7c2fa00899691c94231d9___ @ 0x180044290
 * Callers:
 *     ?DragComplete@CAppViewManager@@UEAAJU_GUID@@UtagPOINT@@@Z @ 0x18003E970 (-DragComplete@CAppViewManager@@UEAAJU_GUID@@UtagPOINT@@@Z.c)
 *     ?RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x180073450 (-RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_.c)
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1800F76FC (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x1800F9508 (-_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::ScopeExit__lambda_da6f0bd90bf7c2fa00899691c94231d9___(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax
  __int64 v4; // xmm1_8

  v2 = *a2;
  result = a1;
  *(_BYTE *)(a1 + 24) = 1;
  v4 = *((_QWORD *)a2 + 2);
  *(_OWORD *)a1 = v2;
  *(_QWORD *)(a1 + 16) = v4;
  return result;
}
