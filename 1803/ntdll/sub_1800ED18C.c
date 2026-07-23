/*
 * XREFs of sub_1800ED18C @ 0x1800ED18C
 * Callers:
 *     sub_1800EB360 @ 0x1800EB360 (sub_1800EB360.c)
 *     sub_1800EBBBC @ 0x1800EBBBC (sub_1800EBBBC.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     sub_180048F40 @ 0x180048F40 (sub_180048F40.c)
 *     sub_18005EE34 @ 0x18005EE34 (sub_18005EE34.c)
 *     sub_180104DE4 @ 0x180104DE4 (sub_180104DE4.c)
 */

NTSTATUS __fastcall sub_1800ED18C(int a1, unsigned int a2)
{
  struct _PEB *v2; // r15
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rbx
  _RTL_SRWLOCK *v7; // rcx
  __int64 v8; // rdx
  HANDLE UniqueThread; // rcx
  int v11; // [rsp+20h] [rbp-38h] BYREF
  char v12; // [rsp+24h] [rbp-34h]
  void *v13; // [rsp+28h] [rbp-30h]

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
            *(_QWORD *)(v6 + 360) = 1LL;
          sub_180104DE4(v6 + 512, a1 != 0 ? 3 : 1);
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v6 + 360));
          sub_180048F40(v6, a1);
        }
      }
      else if ( (*(_BYTE *)(v6 + 112) & 1) == 0 )
      {
        if ( *(_BYTE *)(v6 + 386) == 2 )
          v7 = *(_RTL_SRWLOCK **)(v6 + 376);
        else
          v7 = 0LL;
        if ( v7 )
        {
          if ( a1 )
            v7->Ptr = (PVOID)1;
          RtlReleaseSRWLockExclusive(v7);
        }
        if ( a1 )
        {
          v8 = *(_QWORD *)(v6 + 352);
          *(_WORD *)(v6 + 384) = 0;
          *(_QWORD *)(v8 + 16) = NtCurrentTeb()->ClientId.UniqueThread;
          *(_DWORD *)(v8 + 8) = -2;
          *(_DWORD *)(v8 + 12) = 1;
          *(_QWORD *)(v8 + 24) = 0LL;
        }
        RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(v6 + 352));
      }
      ++v4;
      --v5;
    }
    while ( v5 );
  }
  if ( a1 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_18015D860 = -1LL;
    stru_18015AAC0.OwningThread = UniqueThread;
    stru_18015AAC0.LockCount = -2;
    stru_18015AAC0.RecursionCount = 1;
    stru_18015AAC0.LockSemaphore = 0LL;
    qword_18015D858 = 1LL;
  }
  v11 = 1;
  v13 = &unk_18015D838;
  v12 = -1;
  sub_18005EE34((__int64)&v11);
  return RtlLeaveCriticalSection(&stru_18015AAC0);
}
