/*
 * XREFs of KeWaitForAlertByThreadId @ 0x1400448F8
 * Callers:
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 *     NtWaitForAlertByThreadId @ 0x14047F200 (NtWaitForAlertByThreadId.c)
 * Callees:
 *     KiFastExitThreadWait @ 0x140017F24 (KiFastExitThreadWait.c)
 *     KiCheckDueTimeExpired @ 0x140044A30 (KiCheckDueTimeExpired.c)
 *     KiCheckWaitNext @ 0x140044AC0 (KiCheckWaitNext.c)
 *     KiCommitThreadWait @ 0x1400EAB20 (KiCommitThreadWait.c)
 *     KiBeginThreadWait @ 0x1400FC780 (KiBeginThreadWait.c)
 */

__int64 __fastcall KeWaitForAlertByThreadId(char a1, _QWORD *a2, void *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // rdx
  char v7; // si
  __int64 result; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r8
  unsigned __int8 CurrentIrql; // al
  unsigned int v14; // ebx
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v16; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 3u) )
    return 257LL;
  if ( !a2 || *a2 )
  {
    v7 = KiCheckWaitNext((_DWORD)CurrentThread, (_DWORD)a2, 0, (unsigned int)&v15, (__int64)&v16);
    while ( 1 )
    {
      LOBYTE(v6) = a1;
      result = KiBeginThreadWait(CurrentThread, v6, 37LL, 0LL);
      if ( (_DWORD)result )
        return result;
      if ( _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 3u) )
        break;
      if ( (unsigned int)KiCheckDueTimeExpired(CurrentThread, v16, v15) )
      {
        v14 = 258;
        goto LABEL_13;
      }
      v12 = v16;
      CurrentThread->WaitBlock[0].Object = a3;
      CurrentThread->WaitBlockFill4[17] = 5;
      CurrentThread->WaitBlockCount = 1;
      result = KiCommitThreadWait(v10, &CurrentThread->320, v12, v11);
      CurrentThread->WaitReason = 0;
      if ( (_DWORD)result != 256 )
        return result;
      v7 = 0;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentThread->WaitIrql = CurrentIrql;
    }
    v14 = 257;
LABEL_13:
    CurrentThread->WaitReason = 0;
    LOBYTE(v9) = v7;
    KiFastExitThreadWait((__int64)KeGetCurrentPrcb(), (__int64)CurrentThread, v9);
    return v14;
  }
  return 258LL;
}
