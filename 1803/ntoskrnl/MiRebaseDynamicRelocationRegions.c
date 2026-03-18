/*
 * XREFs of MiRebaseDynamicRelocationRegions @ 0x1408BB1A4
 * Callers:
 *     MiInitializeSystemVa @ 0x1408BB130 (MiInitializeSystemVa.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeFlushEntireTb @ 0x14017D5B0 (KeFlushEntireTb.c)
 *     VslGetNestedPageProtectionFlags @ 0x14017D610 (VslGetNestedPageProtectionFlags.c)
 *     MiApplyDynamicRelocations @ 0x1408BB388 (MiApplyDynamicRelocations.c)
 */

__int64 __fastcall MiRebaseDynamicRelocationRegions(__int64 a1)
{
  __int64 *v1; // r14
  __int64 v2; // rbx
  __int64 v3; // rsi
  unsigned __int64 v4; // rbp
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // r10
  int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // r12
  unsigned __int64 i; // rdi
  __int64 result; // rax
  __int64 v19; // [rsp+68h] [rbp+10h]
  __int64 v20; // [rsp+70h] [rbp+18h]

  v1 = *(__int64 **)(a1 + 16);
  v2 = *v1;
  v19 = *v1;
  if ( (VslGetNestedPageProtectionFlags() & 2) != 0 )
    MiFlags |= 0x200000u;
  v3 = qword_1403CD120;
  v4 = 0xFFFFF68000000000uLL;
  v5 = qword_1403CD0E0;
  v20 = qword_1403CD0E0;
  if ( qword_1403CD120 != 0xFFFFF68000000000uLL )
  {
    v6 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL);
    *v7 = v6;
    v12 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v7) )
      MiWritePteShadow(v9, v8, v10);
    if ( (MiFlags & 0x400000) == 0 )
    {
      *v11 = ZeroPte;
      if ( MiPteInShadowRange((unsigned __int64)v11) )
        MiWritePteShadow(v14, v13, v15);
    }
    KeFlushEntireTb();
    v16 = v3;
    for ( i = 39LL; ; i -= 9LL )
    {
      MiApplyDynamicRelocations((PVOID)v1[6], *((unsigned int *)v1 + 16));
      MiApplyDynamicRelocations(*(PVOID *)(v2 + 48), *(unsigned int *)(v2 + 64));
      if ( i >= 0xC )
      {
        MiApplyDynamicRelocations((PVOID)v1[6], *((unsigned int *)v1 + 16));
        v2 = v19;
        MiApplyDynamicRelocations(*(PVOID *)(v19 + 48), *(unsigned int *)(v19 + 64));
      }
      if ( (unsigned int)++v12 > 4 )
        break;
      v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v16 = v3 + ((v16 >> 9) & 0x7FFFFFFFF8LL);
    }
    v5 = v20;
  }
  result = 0xFFFFFA8000000000uLL;
  if ( v5 != 0xFFFFFA8000000000uLL )
  {
    MiApplyDynamicRelocations((PVOID)v1[6], *((unsigned int *)v1 + 16));
    result = MiApplyDynamicRelocations(*(PVOID *)(v2 + 48), *(unsigned int *)(v2 + 64));
  }
  MmPteBase = v3;
  qword_140396880 = v3;
  return result;
}
