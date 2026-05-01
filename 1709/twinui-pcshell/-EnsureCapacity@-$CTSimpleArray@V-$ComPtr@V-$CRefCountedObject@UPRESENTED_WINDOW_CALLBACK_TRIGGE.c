/*
 * XREFs of ?EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyLocalMem@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180046610
 * Callers:
 *     ?_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIAsyncCallback@@PEAK@Z @ 0x18004401C (-_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmer.c)
 *     ?_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x180044284 (-_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_A.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>,4294967294,CTPolicyLocalMem<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>>::EnsureCapacity(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // r9
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  void *v8; // rcx
  SIZE_T v9; // rax
  HLOCAL v10; // rax
  HLOCAL v11; // rcx

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
        v7 = v5 - v4;
        v8 = *(void **)a1;
        if ( v7 <= 0x1000 )
          v6 = v5;
        if ( a2 > v6 )
          v6 = a2;
        if ( v6 > 0xFFFFFFFE )
          v6 = 4294967294LL;
        if ( is_mul_ok(v6, 8uLL) )
        {
          v9 = 8 * v6;
          if ( v8 )
            v10 = LocalReAlloc(v8, v9, 0x42u);
          else
            v10 = LocalAlloc(0x40u, v9);
          v11 = v10;
          result = v10 == 0LL ? 0x8007000E : 0;
          if ( (int)result >= 0 )
          {
            *(_QWORD *)(a1 + 24) = v6;
            *(_QWORD *)a1 = v11;
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
