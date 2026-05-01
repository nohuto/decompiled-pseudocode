/*
 * XREFs of ?Add@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@PEA_K@Z @ 0x1800503A4
 * Callers:
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x18004DAF0 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 *     ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x18004E040 (-EnsureFramePool@CApplicationFrameService@@UEAAJXZ.c)
 *     ?_TransferFromPoolToActive@CApplicationFrameService@@AEAAJ_K@Z @ 0x18004F4C4 (-_TransferFromPoolToActive@CApplicationFrameService@@AEAAJ_K@Z.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x180024508 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::Add(
        __int64 a1,
        __int64 *a2,
        void *a3)
{
  __int64 v3; // r9
  unsigned __int64 v5; // rcx
  int v6; // r8d
  unsigned __int64 v8; // r9
  __int64 v9; // r10
  unsigned __int64 v10; // rdi
  unsigned __int128 v11; // rax
  __int64 *v12; // r9
  __int64 v13; // rcx
  void *v15; // [rsp+60h] [rbp+18h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h]

  v15 = a3;
  v3 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = 0;
  if ( v3 != v5 )
  {
LABEL_18:
    v12 = (__int64 *)(*(_QWORD *)a1 + 8 * (*(_QWORD *)(a1 + 8))++);
    if ( v12 )
    {
      v13 = *a2;
      *v12 = *a2;
      if ( v13 )
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 52));
    }
    return (unsigned int)v6;
  }
  v8 = v3 + 1;
  v6 = -2147024774;
  if ( v8 > 0xFFFFFFFE || (v6 = 0, v8 <= v5) )
  {
LABEL_17:
    if ( v6 < 0 )
      return (unsigned int)v6;
    goto LABEL_18;
  }
  v9 = 2 * v5;
  if ( !is_mul_ok(v5, 2uLL) )
  {
    v9 = -1LL;
    v6 = -2147024362;
  }
  if ( v6 >= 0 )
  {
    v10 = v5 + 4096;
    if ( v9 - v5 <= 0x1000 )
      v10 = v9;
    if ( v8 > v10 )
      v10 = v8;
    if ( v10 > 0xFFFFFFFE )
      v10 = 4294967294LL;
    v15 = 0LL;
    v11 = v10 * (unsigned __int128)8uLL;
    v16 = *((_QWORD *)&v11 + 1);
    if ( is_mul_ok(v10, 8uLL) )
    {
      v6 = CTCoAllocPolicy::Realloc((IMalloc *)&v15, *((__int64 *)&v11 + 1), *(void **)a1, v11, &v15);
      if ( v6 >= 0 )
      {
        *(_QWORD *)a1 = v15;
        *(_QWORD *)(a1 + 24) = v10;
      }
    }
    else
    {
      v6 = -2147024362;
    }
    goto LABEL_17;
  }
  return (unsigned int)v6;
}
