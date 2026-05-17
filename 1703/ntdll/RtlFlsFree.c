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

__int64 __fastcall RtlFlsFree(unsigned int a1)
{
  struct _PEB *ProcessEnvironmentBlock; // rsi
  const signed __int32 **FlsBitmap; // rcx
  unsigned __int8 v4; // di
  struct _FLS_CALLBACK_INFO *FlsCallback; // rax
  __int64 v6; // r14
  __int64 v7; // rbp
  void (*v8)(void); // r15
  struct _LIST_ENTRY *i; // rbx

  if ( a1 - 1 > 0x7E )
    return 3221225485LL;
  ProcessEnvironmentBlock = NtCurrentTeb()->ProcessEnvironmentBlock;
  RtlAcquireSRWLockExclusive(&qword_18015C200);
  FlsBitmap = (const signed __int32 **)ProcessEnvironmentBlock->FlsBitmap;
  if ( a1 >= *(_DWORD *)FlsBitmap )
  {
    v4 = 0;
  }
  else
  {
    v4 = _bittest(FlsBitmap[1], a1);
    if ( v4 )
    {
      RtlClearBits(FlsBitmap, a1, 1LL);
      FlsCallback = ProcessEnvironmentBlock->FlsCallback;
      v6 = 16LL * a1;
      v7 = a1;
      v8 = *(void (**)(void))((char *)FlsCallback + v6);
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)((char *)FlsCallback + v6 + 8));
      for ( i = ProcessEnvironmentBlock->FlsListHead.Flink; i != &ProcessEnvironmentBlock->FlsListHead; i = i->Flink )
      {
        if ( v8 )
        {
          if ( *((_QWORD *)&i[1].Flink + v7) )
            v8();
        }
        *((_QWORD *)&i[1].Flink + v7) = 0LL;
      }
      *(_QWORD *)((char *)ProcessEnvironmentBlock->FlsCallback + v6) = 0LL;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)((char *)ProcessEnvironmentBlock->FlsCallback + v6 + 8));
    }
  }
  RtlReleaseSRWLockExclusive(&qword_18015C200);
  return v4 == 0 ? 0xC000000D : 0;
}
