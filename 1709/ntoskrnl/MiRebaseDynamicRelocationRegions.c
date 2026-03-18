/*
 * XREFs of MiRebaseDynamicRelocationRegions @ 0x140839610
 * Callers:
 *     MiInitializeSystemVa @ 0x14083959C (MiInitializeSystemVa.c)
 * Callees:
 *     KeFlushEntireTb @ 0x140143A40 (KeFlushEntireTb.c)
 *     VslGetNestedPageProtectionFlags @ 0x140143BC0 (VslGetNestedPageProtectionFlags.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiApplyDynamicRelocations @ 0x14083982C (MiApplyDynamicRelocations.c)
 */

__int64 __fastcall MiRebaseDynamicRelocationRegions(__int64 a1)
{
  __int64 *v1; // r15
  __int64 v2; // rdi
  __int64 v3; // rbp
  unsigned __int64 v4; // r14
  __int64 v5; // r13
  _QWORD *v6; // r10
  _QWORD *v7; // r9
  unsigned __int64 v8; // r11
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
  v3 = qword_140389B60;
  v4 = 0xFFFFF68000000000uLL;
  v5 = qword_140389B20;
  v14 = qword_140389B20;
  if ( qword_140389B60 != 0xFFFFF68000000000uLL )
  {
    v6 = (_QWORD *)0xFFFFF6FB7DBEDF68LL;
    v7 = (_QWORD *)(8 * (((unsigned __int64)qword_140389B60 >> 39) & 0x1FF) - 0x90482413000LL);
    v8 = 0xFFFFF6FB7DBED7F8uLL;
    *v7 = MEMORY[0xFFFFF6FB7DBEDF68];
    if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow();
    v9 = 0;
    if ( (MiFlags & 0x400000) == 0 )
    {
      *v6 = 0LL;
      if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && v8 >= (unsigned __int64)v6 )
        MiWritePteShadow();
    }
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
  qword_140353CA0 = v3;
  return result;
}
