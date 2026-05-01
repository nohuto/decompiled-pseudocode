/*
 * XREFs of ?EnsureCapacity@?$CTSimpleArray@URecoveredWindowForView@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@URecoveredWindowForView@@@@V?$CSimpleArrayStandardCompareHelper@URecoveredWindowForView@@@@V?$CSimpleArrayStandardMergeHelper@URecoveredWindowForView@@@@@@QEAAJ_K@Z @ 0x180126318
 * Callers:
 *     ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x1801247A0 (-_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ.c)
 *     ?s_RecoverWindowsProc@ViewEventDispatcher@@CAHPEAUHWND__@@_J@Z @ 0x180124FA0 (-s_RecoverWindowsProc@ViewEventDispatcher@@CAHPEAUHWND__@@_J@Z.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x180024508 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 */

__int64 __fastcall CTSimpleArray<RecoveredWindowForView,4294967294,CTPolicyCoTaskMem<RecoveredWindowForView>,CSimpleArrayStandardCompareHelper<RecoveredWindowForView>,CSimpleArrayStandardMergeHelper<RecoveredWindowForView>>::EnsureCapacity(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // r9
  unsigned __int64 v6; // rdi
  void *v7; // [rsp+48h] [rbp+10h] BYREF

  result = 2147942522LL;
  if ( a2 <= 0xFFFFFFFE )
  {
    v4 = *(_QWORD *)(a1 + 24);
    result = 0LL;
    if ( a2 > v4 )
    {
      v5 = 2 * v4;
      if ( is_mul_ok(v4, 2uLL) )
      {
        result = 0LL;
      }
      else
      {
        v5 = -1LL;
        result = 2147942934LL;
      }
      if ( (int)result >= 0 )
      {
        v6 = v4 + 4096;
        if ( v5 - v4 <= 0x1000 )
          v6 = v5;
        if ( a2 > v6 )
          v6 = a2;
        if ( v6 > 0xFFFFFFFE )
          v6 = 4294967294LL;
        v7 = 0LL;
        if ( is_mul_ok(v6, 0x18uLL) )
        {
          result = CTCoAllocPolicy::Realloc(
                     (IMalloc *)&v7,
                     (v6 * (unsigned __int128)0x18uLL) >> 64,
                     *(void **)a1,
                     24 * v6,
                     &v7);
          if ( (int)result >= 0 )
          {
            *(_QWORD *)a1 = v7;
            *(_QWORD *)(a1 + 24) = v6;
          }
        }
        else
        {
          return 2147942934LL;
        }
      }
    }
  }
  return result;
}
