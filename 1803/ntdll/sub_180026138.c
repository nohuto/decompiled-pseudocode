/*
 * XREFs of sub_180026138 @ 0x180026138
 * Callers:
 *     sub_180025ACC @ 0x180025ACC (sub_180025ACC.c)
 *     sub_180026040 @ 0x180026040 (sub_180026040.c)
 *     sub_180054A20 @ 0x180054A20 (sub_180054A20.c)
 *     RtlQueueWorkItem @ 0x180057A90 (RtlQueueWorkItem.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     ZwReleaseWorkerFactoryWorker @ 0x18009D790 (ZwReleaseWorkerFactoryWorker.c)
 *     sub_180108210 @ 0x180108210 (sub_180108210.c)
 */

int __fastcall sub_180026138(__int64 a1, char *a2, int a3, __int64 a4)
{
  char *v4; // rbx
  __int64 v6; // rcx
  signed __int32 v7; // eax
  _RTL_SRWLOCK **v8; // rdi
  _RTL_SRWLOCK *v9; // rsi
  _RTL_SRWLOCK **Ptr; // rax
  int v11; // r8d
  __int64 *ThreadPoolData; // rax
  __int64 v13; // rax
  signed __int64 v14; // rax
  int v15; // edx
  signed __int64 v16; // rtt
  signed __int32 v17; // edx
  signed __int32 v18; // ett
  signed __int64 v20; // [rsp+30h] [rbp+8h]

  v4 = a2;
  if ( !a2 )
  {
    if ( a4 && (*(_BYTE *)(a4 + 56) & 2) != 0 )
    {
      v4 = (char *)qword_18015D3A8;
      goto LABEL_31;
    }
    v4 = (char *)qword_18015D3B8;
  }
  if ( v4 == (char *)qword_18015D3A8 )
LABEL_31:
    a3 = 1;
  v6 = *(unsigned int *)(a1 + 8);
  _m_prefetchw(v4 + 428);
  v7 = *((_DWORD *)v4 + 107);
  while ( v7 == -2 )
  {
    v17 = v6;
LABEL_26:
    v18 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)v4 + 107, v17, v7);
    if ( v18 == v7 )
      goto LABEL_6;
  }
  if ( v7 != (_DWORD)v6 && v7 != -1 )
  {
    v17 = -1;
    goto LABEL_26;
  }
LABEL_6:
  v8 = (_RTL_SRWLOCK **)(a1 + 16);
  v9 = (_RTL_SRWLOCK *)(*(_QWORD *)&v4[8 * a3 + 16] + 24 * v6);
  RtlAcquireSRWLockExclusive(v9 + 2);
  Ptr = (_RTL_SRWLOCK **)v9[1].Ptr;
  if ( *Ptr != v9 )
    __fastfail(3u);
  *v8 = v9;
  v8[1] = (_RTL_SRWLOCK *)Ptr;
  *Ptr = (_RTL_SRWLOCK *)v8;
  v9[1].Ptr = v8;
  RtlReleaseSRWLockExclusive(v9 + 2);
  if ( *((_DWORD *)v4 + 106) != MEMORY[0x7FFE03C0] )
    sub_180108210(v4);
  v11 = 0;
  ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v13 = *ThreadPoolData;
    if ( *(char **)(v13 + 48) == v4 && *(_DWORD *)(v13 + 128) == 3 )
    {
      *(_DWORD *)(v13 + 128) = 4;
      v11 = 1;
    }
  }
  _m_prefetchw(v4 + 8);
  v14 = *((_QWORD *)v4 + 1);
  LODWORD(v20) = v14;
  do
  {
    if ( (v20 & 0xFFFF0000) != 0 || v11 )
    {
      v15 = 0;
    }
    else
    {
      LODWORD(v20) = (unsigned __int16)v20 | ((v20 & 0xFFFF0000) + 0x10000);
      v15 = 1;
    }
    v16 = v14;
    HIDWORD(v20) = HIDWORD(v14) + 1;
    v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 1, v20, v14);
    LODWORD(v20) = v14;
  }
  while ( v16 != v14 );
  if ( v15 )
    LODWORD(v14) = ZwReleaseWorkerFactoryWorker(*((HANDLE *)v4 + 7));
  return v14;
}
