/*
 * XREFs of MiInitializeMdlPages @ 0x1400B36CC
 * Callers:
 *     MiAllocatePagesForMdl @ 0x1400B3544 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiInitializeMdlPfn @ 0x1400B3814 (MiInitializeMdlPfn.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiLogMdlRangeEvent @ 0x140254F3C (MiLogMdlRangeEvent.c)
 */

__int64 __fastcall MiInitializeMdlPages(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // r12
  unsigned __int64 v3; // r14
  __int64 v5; // rbp
  __int64 DemandZeroPte; // rbx
  _KPROCESS *Process; // r15
  __int64 v8; // r15
  unsigned __int64 v9; // rbp
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  unsigned __int8 v12; // al
  unsigned __int64 v13; // rdi
  __int64 result; // rax

  v2 = (_QWORD *)(a1 + 48);
  v3 = (unsigned __int64)*(unsigned int *)(a1 + 40) >> 12;
  v5 = a1;
  if ( (a2 & 0x80000200) != 0 )
    DemandZeroPte = 0LL;
  else
    DemandZeroPte = MiMakeDemandZeroPte(4LL);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( v3 )
  {
    v8 = ((unsigned __int64)Process >> 3) & 0xFFFFFFFFFFELL;
    v9 = v3;
    do
    {
      v10 = 48LL * *v2 - 0x58000000000LL;
      *(_QWORD *)(v10 + 8) = 0xFFFFF68000000000uLL;
      v11 = *(_QWORD *)(v10 + 40) & 0xFDFFFFFFFFFFFFFDuLL;
      *(_QWORD *)(v10 + 16) = DemandZeroPte;
      *(_QWORD *)(v10 + 40) = v11 | 0xFFFFFFFFDLL;
      v12 = MiLockPageInline(v10);
      *(_QWORD *)v10 = 0LL;
      v13 = v12;
      *(_QWORD *)v10 = v8;
      MiInitializeMdlPfn(v10, a2);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v13);
      ++v2;
      --v9;
    }
    while ( v9 );
    v5 = a1;
    v2 = (_QWORD *)(a1 + 48);
  }
  *(_QWORD *)(v5 + 16) = 0LL;
  *(_WORD *)(v5 + 10) |= 2u;
  result = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    return MiLogMdlRangeEvent(v2, 632LL, v3);
  return result;
}
