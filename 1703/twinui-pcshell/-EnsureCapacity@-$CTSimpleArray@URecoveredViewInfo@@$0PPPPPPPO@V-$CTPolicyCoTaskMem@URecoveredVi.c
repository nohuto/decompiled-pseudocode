/*
 * XREFs of ?EnsureCapacity@?$CTSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@URecoveredViewInfo@@@@V?$CSimpleArrayStandardCompareHelper@URecoveredViewInfo@@@@V?$CSimpleArrayStandardMergeHelper@URecoveredViewInfo@@@@@@QEAAJ_K@Z @ 0x18002B57C
 * Callers:
 *     RecoverWindowsProc @ 0x18002B220 (RecoverWindowsProc.c)
 *     ?RecoverApplicationWindows@@YAJPEAUIImmersiveShellHookNotification@@@Z @ 0x18002B3D4 (-RecoverApplicationWindows@@YAJPEAUIImmersiveShellHookNotification@@@Z.c)
 *     ?OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z @ 0x18010A8E0 (-OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x180023BE8 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 */

__int64 __fastcall CTSimpleArray<RecoveredViewInfo,4294967294,CTPolicyCoTaskMem<RecoveredViewInfo>,CSimpleArrayStandardCompareHelper<RecoveredViewInfo>,CSimpleArrayStandardMergeHelper<RecoveredViewInfo>>::EnsureCapacity(
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
        if ( is_mul_ok(v6, 0x10uLL) )
        {
          result = CTCoAllocPolicy::Realloc(
                     (IMalloc *)&v7,
                     (v6 * (unsigned __int128)0x10uLL) >> 64,
                     *(void **)a1,
                     16 * v6,
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
