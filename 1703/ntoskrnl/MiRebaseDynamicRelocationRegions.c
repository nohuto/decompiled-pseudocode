/*
 * XREFs of MiRebaseDynamicRelocationRegions @ 0x140810AF8
 * Callers:
 *     MiInitializeSystemVa @ 0x140810A84 (MiInitializeSystemVa.c)
 * Callees:
 *     KeFlushEntireTb @ 0x1401590B0 (KeFlushEntireTb.c)
 *     VslGetNestedPageProtectionFlags @ 0x140159240 (VslGetNestedPageProtectionFlags.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiApplyDynamicRelocations @ 0x140810CD0 (MiApplyDynamicRelocations.c)
 */

__int64 __fastcall MiRebaseDynamicRelocationRegions(__int64 a1)
{
  __int64 *v1; // r15
  __int64 v2; // rdi
  __int64 v3; // rbp
  unsigned __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 *v7; // r9
  _QWORD *v8; // r10
  int v9; // ebx
  unsigned __int64 v10; // r12
  unsigned __int64 i; // rsi
  __int64 result; // rax
  __int64 v13; // [rsp+68h] [rbp+10h]
  __int64 v14; // [rsp+70h] [rbp+18h]

  v1 = *(__int64 **)(a1 + 16);
  v2 = *v1;
  v13 = *v1;
  if ( (VslGetNestedPageProtectionFlags() & 2) != 0 )
    MiFlags |= 0x200000u;
  v3 = qword_14036D880;
  v4 = 0xFFFFF68000000000uLL;
  v5 = qword_14036D850;
  v14 = qword_14036D850;
  if ( qword_14036D880 != 0xFFFFF68000000000uLL )
  {
    v6 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL);
    *v7 = v6;
    v9 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v7) )
      MiWritePteShadow();
    *v8 = 0LL;
    if ( MiPteInShadowRange((unsigned __int64)v8) )
      MiWritePteShadow();
    KeFlushEntireTb();
    v10 = v3;
    for ( i = 39LL; ; i -= 9LL )
    {
      MiApplyDynamicRelocations((PVOID)v1[6], *((unsigned int *)v1 + 16));
      MiApplyDynamicRelocations(*(PVOID *)(v2 + 48), *(unsigned int *)(v2 + 64));
      if ( i >= 0xC )
      {
        MiApplyDynamicRelocations((PVOID)v1[6], *((unsigned int *)v1 + 16));
        v2 = v13;
        MiApplyDynamicRelocations(*(PVOID *)(v13 + 48), *(unsigned int *)(v13 + 64));
      }
      if ( (unsigned int)++v9 > 4 )
        break;
      v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v10 = v3 + ((v10 >> 9) & 0x7FFFFFFFF8LL);
    }
    v5 = v14;
  }
  result = 0xFFFFFA8000000000uLL;
  if ( v5 != 0xFFFFFA8000000000uLL )
  {
    MiApplyDynamicRelocations((PVOID)v1[6], *((unsigned int *)v1 + 16));
    result = MiApplyDynamicRelocations(*(PVOID *)(v2 + 48), *(unsigned int *)(v2 + 64));
  }
  MmPteBase = v3;
  qword_14033BC70 = v3;
  return result;
}
