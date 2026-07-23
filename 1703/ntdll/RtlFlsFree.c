/*
 * XREFs of RtlFlsFree @ 0x180059B10
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlClearBits @ 0x180059C40 (RtlClearBits.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __cdecl RtlFlsFree(ULONG FlsIndex)
{
  PPEB ProcessEnvironmentBlock; // rsi
  _RTL_BITMAP *ChpeV2ProcessInfo; // rcx
  unsigned __int8 v4; // di
  char *v5; // rax
  __int64 v6; // r14
  __int64 v7; // rbp
  void (*v8)(void); // r15
  PVOID *i; // rbx

  if ( FlsIndex - 1 > 0x7E )
    return -1073741811;
  ProcessEnvironmentBlock = NtCurrentTeb()->ProcessEnvironmentBlock;
  RtlAcquireSRWLockExclusive(&stru_18015C200);
  ChpeV2ProcessInfo = (_RTL_BITMAP *)ProcessEnvironmentBlock->ChpeV2ProcessInfo;
  if ( FlsIndex >= ChpeV2ProcessInfo->SizeOfBitMap )
  {
    v4 = 0;
  }
  else
  {
    v4 = _bittest((const signed __int32 *)ChpeV2ProcessInfo->Buffer, FlsIndex);
    if ( v4 )
    {
      RtlClearBits(ChpeV2ProcessInfo, FlsIndex, 1u);
      v5 = (char *)ProcessEnvironmentBlock->SparePointers[0];
      v6 = 16LL * FlsIndex;
      v7 = FlsIndex;
      v8 = *(void (**)(void))&v5[v6];
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)&v5[v6 + 8]);
      for ( i = (PVOID *)ProcessEnvironmentBlock->SparePointers[1];
            i != &ProcessEnvironmentBlock->SparePointers[1];
            i = (PVOID *)*i )
      {
        if ( v8 )
        {
          if ( i[v7 + 2] )
            v8();
        }
        i[v7 + 2] = 0LL;
      }
      *(_QWORD *)((char *)ProcessEnvironmentBlock->SparePointers[0] + v6) = 0LL;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)((char *)ProcessEnvironmentBlock->SparePointers[0] + v6 + 8));
    }
  }
  RtlReleaseSRWLockExclusive(&stru_18015C200);
  return v4 == 0 ? 0xC000000D : 0;
}
