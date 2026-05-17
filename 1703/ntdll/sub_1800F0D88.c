/*
 * XREFs of sub_1800F0D88 @ 0x1800F0D88
 * Callers:
 *     sub_1800EF328 @ 0x1800EF328 (sub_1800EF328.c)
 *     sub_1800EFBEC @ 0x1800EFBEC (sub_1800EFBEC.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     sub_1800706A4 @ 0x1800706A4 (sub_1800706A4.c)
 *     sub_180103988 @ 0x180103988 (sub_180103988.c)
 */

__int64 __fastcall sub_1800F0D88(int a1, unsigned int a2)
{
  struct _PEB *v2; // r14
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdx
  volatile signed __int64 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax

  v2 = NtCurrentPeb();
  if ( a2 )
  {
    v4 = 0LL;
    v5 = a2;
    do
    {
      v6 = (__int64)v2->ProcessHeaps[v4];
      if ( *(_DWORD *)(v6 + 16) == -571548178 )
      {
        if ( (*(_BYTE *)(v6 + 20) & 1) == 0 )
        {
          if ( a1 )
          {
            *(_QWORD *)(v6 + 144) = 1LL;
            v7 = 3LL;
          }
          else
          {
            v7 = 1LL;
          }
          sub_180103988(v6 + 288, v7);
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 144));
          sub_1800706A4(v6, a1);
        }
      }
      else if ( (*(_BYTE *)(v6 + 112) & 1) == 0 )
      {
        if ( *(_BYTE *)(v6 + 386) == 2 )
          v8 = *(volatile signed __int64 **)(v6 + 376);
        else
          v8 = 0LL;
        if ( v8 )
        {
          if ( a1 )
            *v8 = 1LL;
          RtlReleaseSRWLockExclusive(v8);
        }
        if ( a1 )
        {
          v9 = *(_QWORD *)(v6 + 352);
          *(_WORD *)(v6 + 384) = 0;
          *(_QWORD *)(v9 + 16) = NtCurrentTeb()->ClientId.UniqueThread;
          *(_DWORD *)(v9 + 8) = -2;
          *(_DWORD *)(v9 + 12) = 1;
          *(_QWORD *)(v9 + 24) = 0LL;
        }
        RtlLeaveCriticalSection(*(_QWORD *)(v6 + 352));
      }
      ++v4;
      --v5;
    }
    while ( v5 );
  }
  if ( a1 )
  {
    qword_180159A90 = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
    dword_180159A88 = -2;
    dword_180159A8C = 1;
    qword_180159A98 = 0LL;
  }
  v10 = qword_180159600;
  if ( (_BYTE)a1 )
    v10 = 1LL;
  qword_180159600 = v10;
  if ( (dword_180159648 & 4) == 0 )
    RtlReleaseSRWLockExclusive(&qword_180159600);
  return RtlLeaveCriticalSection((__int64)&unk_180159A80);
}
