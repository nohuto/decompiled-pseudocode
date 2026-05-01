/*
 * XREFs of ?Add@?$CTSimpleArray@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@PEA_K@Z @ 0x1800437C0
 * Callers:
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180043150 (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z @ 0x18007ADC8 (-AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x180023BE8 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IAsyncCallback>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAsyncCallback>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAsyncCallback>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAsyncCallback>>>::Add(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v6; // rax
  int v7; // r9d
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int64 v10; // r10
  unsigned __int64 v11; // rbp
  _QWORD *v12; // rdx
  void *v14; // [rsp+50h] [rbp+8h] BYREF

  if ( a3 )
    *a3 = 0LL;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 24);
  if ( v6 != v8 )
  {
LABEL_20:
    v12 = (_QWORD *)(*(_QWORD *)a1 + 8 * (*(_QWORD *)(a1 + 8))++);
    if ( v12 )
    {
      *v12 = 0LL;
      if ( v12 != a2 )
      {
        *v12 = *a2;
        *a2 = 0LL;
      }
    }
    if ( a3 )
      *a3 = *(_QWORD *)(a1 + 8) - 1LL;
    return (unsigned int)v7;
  }
  v9 = v6 + 1;
  v7 = -2147024774;
  if ( (unsigned __int64)(v6 + 1) > 0xFFFFFFFE || (v7 = 0, v9 <= v8) )
  {
LABEL_19:
    if ( v7 < 0 )
      return (unsigned int)v7;
    goto LABEL_20;
  }
  v10 = 2 * v8;
  if ( !is_mul_ok(v8, 2uLL) )
  {
    v10 = -1LL;
    v7 = -2147024362;
  }
  if ( v7 >= 0 )
  {
    v11 = v8 + 4096;
    if ( v10 - v8 <= 0x1000 )
      v11 = v10;
    if ( v9 > v11 )
      v11 = v6 + 1;
    if ( v11 > 0xFFFFFFFE )
      v11 = 4294967294LL;
    v14 = 0LL;
    if ( is_mul_ok(v11, 8uLL) )
    {
      v7 = CTCoAllocPolicy::Realloc((IMalloc *)&v14, (v11 * (unsigned __int128)8uLL) >> 64, *(void **)a1, 8 * v11, &v14);
      if ( v7 >= 0 )
      {
        *(_QWORD *)a1 = v14;
        *(_QWORD *)(a1 + 24) = v11;
      }
    }
    else
    {
      v7 = -2147024362;
    }
    goto LABEL_19;
  }
  return (unsigned int)v7;
}
