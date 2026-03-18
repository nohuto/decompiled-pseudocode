/*
 * XREFs of PspSetCreateProcessNotifyRoutine @ 0x1405A8C54
 * Callers:
 *     PsSetCreateProcessNotifyRoutineEx @ 0x1405A8970 (PsSetCreateProcessNotifyRoutineEx.c)
 *     PsSetCreateProcessNotifyRoutineEx2 @ 0x1405A8A30 (PsSetCreateProcessNotifyRoutineEx2.c)
 *     PsSetCreateProcessNotifyRoutine @ 0x1405A8B70 (PsSetCreateProcessNotifyRoutine.c)
 * Callees:
 *     ExGetCallBackBlockContext @ 0x14008BB84 (ExGetCallBackBlockContext.c)
 *     ExDereferenceCallBackBlock @ 0x14008BC30 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x14008BC80 (ExReferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x14008BD80 (ExGetCallBackBlockRoutine.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExWaitForRundownProtectionRelease @ 0x14010EFC0 (ExWaitForRundownProtectionRelease.c)
 *     ExCompareExchangeCallBack @ 0x140155B4C (ExCompareExchangeCallBack.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x140155C08 (MmVerifyCallbackFunctionCheckFlags.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExAllocateCallBack @ 0x1405A8D44 (ExAllocateCallBack.c)
 */

__int64 __fastcall PspSetCreateProcessNotifyRoutine(unsigned __int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  int v3; // edi
  int v5; // edx
  struct _EX_RUNDOWN_REF *v6; // rsi
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v9; // r14
  struct _EX_RUNDOWN_REF *v10; // rax
  struct _EX_RUNDOWN_REF *v11; // rbx

  v2 = a2;
  v3 = a2 & 2;
  if ( (a2 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = 0LL;
    while ( 1 )
    {
      v10 = ExReferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v9);
      v11 = v10;
      if ( v10 )
      {
        LODWORD(v2) = v2 & 0xFFFFFFFE;
        if ( ExGetCallBackBlockRoutine((__int64)v10) == a1
          && (unsigned int)ExGetCallBackBlockContext((__int64)v11) == (_DWORD)v2
          && ExCompareExchangeCallBack((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v9, 0LL, (__int64)v11) )
        {
          if ( v3 )
            _InterlockedDecrement(&PspCreateProcessNotifyRoutineExCount);
          else
            _InterlockedDecrement(&PspCreateProcessNotifyRoutineCount);
          ExDereferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + (unsigned int)v9, v11);
          KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
          ExWaitForRundownProtectionRelease(v11);
          ExFreePoolWithTag(v11, 0);
          return 0LL;
        }
        ExDereferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v9, v11);
      }
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= 0x40 )
      {
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
        return 3221225594LL;
      }
    }
  }
  if ( (a2 & 2) != 0 )
    v5 = 32;
  else
    v5 = 0;
  if ( !(unsigned int)MmVerifyCallbackFunctionCheckFlags(a1, v5) )
    return 3221225506LL;
  v6 = (struct _EX_RUNDOWN_REF *)ExAllocateCallBack(a1, v2);
  if ( !v6 )
    return 3221225626LL;
  v7 = 0LL;
  while ( !ExCompareExchangeCallBack((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v7, v6, 0LL) )
  {
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= 0x40 )
    {
      ExFreePoolWithTag(v6, 0);
      return 3221225485LL;
    }
  }
  if ( v3 )
  {
    _InterlockedIncrement(&PspCreateProcessNotifyRoutineExCount);
    if ( (PspNotifyEnableMask & 4) == 0 )
      _interlockedbittestandset(&PspNotifyEnableMask, 2u);
  }
  else
  {
    _InterlockedIncrement(&PspCreateProcessNotifyRoutineCount);
    if ( (PspNotifyEnableMask & 2) == 0 )
      _interlockedbittestandset(&PspNotifyEnableMask, 1u);
  }
  return 0LL;
}
