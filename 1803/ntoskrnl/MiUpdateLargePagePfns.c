/*
 * XREFs of MiUpdateLargePagePfns @ 0x1402690D8
 * Callers:
 *     MiFindLargePageMemory @ 0x140755784 (MiFindLargePageMemory.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiUpdateLargePagePfns(__int64 a1, int a2)
{
  int v3; // ebp
  __int64 DemandZeroPte; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // r8
  unsigned int v9; // r12d
  __int64 v10; // r15
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  _KPROCESS *Process; // [rsp+58h] [rbp+10h]

  v3 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  DemandZeroPte = MiMakeDemandZeroPte(4);
  v7 = 48 * v6 - 0x58000000000LL;
  v9 = 0;
  v10 = v7 + 48 * v8;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  do
  {
    MiLockPageAtDpcInline(v7);
    if ( (*(_DWORD *)(v7 + 16) & 0x3E0LL) != 0 )
    {
      v9 = 1;
      v12 = a2 & (unsigned int)dword_1403CB6D8 | (((unsigned int)(*(_QWORD *)(v7 + 40) >> 36) & 3) << byte_1403CB69A) | (unsigned __int64)((unsigned __int16)(*(_QWORD *)(v7 + 40) >> 58) << byte_1403CB699);
      v13 = 3 * v12;
      *(_QWORD *)v7 = *(_QWORD *)(a1 + 24 * v12 + 16);
      ++*(_QWORD *)(a1 + 8 * v13 + 8);
      *(_QWORD *)(a1 + 8 * v13 + 16) = v7;
    }
    else
    {
      *(_QWORD *)(v7 + 8) = 0xFFFFF68000000000uLL;
      v14 = (*(_QWORD *)v7 ^ ((unsigned __int64)Process >> 3)) & 0xFFFFFFFFFFELL;
      *(_QWORD *)(v7 + 16) = DemandZeroPte;
      *(_QWORD *)v7 ^= v14;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++a2;
    v7 += 48LL;
    if ( (++v3 & 0xF) == 0 && KeShouldYieldProcessor() )
    {
      __writecr8(CurrentIrql);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
    }
  }
  while ( v7 != v10 );
  __writecr8(CurrentIrql);
  return v9;
}
