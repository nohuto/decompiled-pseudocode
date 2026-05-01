/*
 * XREFs of ?Add@?$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardCompareHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardMergeHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@@@QEAAJ$$QEAVCGlomCollection@CActivationBasedAppAndGlomCollection@@PEA_K@Z @ 0x180017D2C
 * Callers:
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@UEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Z @ 0x1800071C0 (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@UEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x180024508 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTSimpleArray<CActivationBasedAppAndGlomCollection::CGlomCollection,4294967294,CTPolicyCoTaskMem<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardCompareHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardMergeHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>>::Add(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v6; // rax
  int v7; // edi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // r13
  __int64 v14; // r12
  unsigned __int64 i; // rbp
  __int64 v16; // rcx
  void *v18; // [rsp+60h] [rbp+8h] BYREF

  if ( a3 )
    *a3 = 0LL;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 24);
  if ( v6 != v8 )
  {
LABEL_20:
    ++*(_QWORD *)(a1 + 8);
    v12 = *(_QWORD *)a1 + 8 * (5LL * *(_QWORD *)(a1 + 8) - 5);
    if ( v12 )
    {
      *(_QWORD *)v12 = 0LL;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = 0LL;
      *(_QWORD *)(v12 + 24) = 0LL;
      v13 = *a2;
      v14 = a2[1];
      *a2 = 0LL;
      a2[1] = 0LL;
      a2[3] = 0LL;
      if ( *(_QWORD *)v12 )
      {
        for ( i = 0LL; i < *(_QWORD *)(v12 + 8); ++i )
        {
          v16 = *(_QWORD *)(*(_QWORD *)v12 + 8 * i);
          if ( v16 )
          {
            *(_QWORD *)(*(_QWORD *)v12 + 8 * i) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          }
        }
        CoTaskMemFree(*(LPVOID *)v12);
        *(_QWORD *)v12 = 0LL;
      }
      *(_QWORD *)v12 = v13;
      *(_QWORD *)(v12 + 8) = v14;
      *(_QWORD *)(v12 + 24) = v14;
      *(_DWORD *)(v12 + 32) = *((_DWORD *)a2 + 8);
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
    v18 = 0LL;
    v11 = v8 + 4096;
    if ( v10 - v8 <= 0x1000 )
      v11 = v10;
    if ( v9 > v11 )
      v11 = v6 + 1;
    if ( v11 > 0xFFFFFFFE )
      v11 = 4294967294LL;
    if ( is_mul_ok(v11, 0x28uLL) )
    {
      v7 = CTCoAllocPolicy::Realloc(&v18, (v11 * (unsigned __int128)0x28uLL) >> 64, *(void **)a1, 40 * v11, &v18);
      if ( v7 >= 0 )
      {
        *(_QWORD *)a1 = v18;
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
