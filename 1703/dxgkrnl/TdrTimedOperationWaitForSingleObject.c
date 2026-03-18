/*
 * XREFs of TdrTimedOperationWaitForSingleObject @ 0x1C0193600
 * Callers:
 *     <none>
 * Callees:
 *     ?_TdrTimedOperationGetRelativeTimeLeft@@YAXAEAU_DXGK_TIMED_OPERATION@@AEAT_LARGE_INTEGER@@@Z @ 0x1C0036414 (-_TdrTimedOperationGetRelativeTimeLeft@@YAXAEAU_DXGK_TIMED_OPERATION@@AEAT_LARGE_INTEGER@@@Z.c)
 *     TdrTimedOperationAllowToDebugTimeout @ 0x1C0036470 (TdrTimedOperationAllowToDebugTimeout.c)
 *     TdrTimedOperationBugcheckOnTimeout @ 0x1C00365DC (TdrTimedOperationBugcheckOnTimeout.c)
 */

__int64 __fastcall TdrTimedOperationWaitForSingleObject(
        struct _DXGK_TIMED_OPERATION *a1,
        PVOID Object,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        __int64 *a6)
{
  __int64 v10; // rax
  unsigned int v11; // edi
  union _LARGE_INTEGER Timeout; // [rsp+30h] [rbp-18h] BYREF
  union _LARGE_INTEGER v14; // [rsp+38h] [rbp-10h] BYREF

  _TdrTimedOperationGetRelativeTimeLeft(a1, &v14);
  if ( v14.QuadPart )
  {
    if ( !a6 )
      goto LABEL_7;
    v10 = *a6;
    if ( !*a6 )
      goto LABEL_7;
    if ( v10 > 0 )
      v10 = -v10;
    Timeout.QuadPart = v10;
    if ( v10 < v14.QuadPart )
LABEL_7:
      Timeout = v14;
    v11 = KeWaitForSingleObject(Object, WaitReason, WaitMode, Alertable, &Timeout);
    _TdrTimedOperationGetRelativeTimeLeft(a1, &v14);
    if ( v14.QuadPart )
      return v11;
  }
  a1->TimeoutTriggered = 1;
  if ( (unsigned int)TdrTimedOperationAllowToDebugTimeout(a1) )
  {
    a1->StartTick.QuadPart = MEMORY[0xFFFFF78000000320];
    return 0LL;
  }
  else
  {
    if ( a1->OsHandled )
      TdrTimedOperationBugcheckOnTimeout();
    return 258LL;
  }
}
