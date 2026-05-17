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

signed __int64 __fastcall sub_180026138(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rcx
  signed __int32 v7; // eax
  __int64 *v8; // rdi
  __int64 v9; // rsi
  __int64 **v10; // rax
  __int64 v11; // r8
  __int64 *ThreadPoolData; // rax
  __int64 v13; // rax
  signed __int64 result; // rax
  __int64 v15; // rdx
  signed __int64 v16; // rtt
  signed __int32 v17; // edx
  signed __int32 v18; // ett
  signed __int64 v19; // [rsp+30h] [rbp+8h]

  v4 = a2;
  if ( !a2 )
  {
    if ( a4 && (*(_BYTE *)(a4 + 56) & 2) != 0 )
    {
      v4 = qword_18015D3A8;
      goto LABEL_31;
    }
    v4 = qword_18015D3B8;
  }
  if ( v4 == qword_18015D3A8 )
LABEL_31:
    a3 = 1;
  v6 = *(unsigned int *)(a1 + 8);
  _m_prefetchw((const void *)(v4 + 428));
  v7 = *(_DWORD *)(v4 + 428);
  while ( v7 == -2 )
  {
    v17 = v6;
LABEL_26:
    v18 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 428), v17, v7);
    if ( v18 == v7 )
      goto LABEL_6;
  }
  if ( v7 != (_DWORD)v6 && v7 != -1 )
  {
    v17 = -1;
    goto LABEL_26;
  }
LABEL_6:
  v8 = (__int64 *)(a1 + 16);
  v9 = *(_QWORD *)(v4 + 8LL * a3 + 16) + 24 * v6;
  RtlAcquireSRWLockExclusive(v9 + 16);
  v10 = *(__int64 ***)(v9 + 8);
  if ( *v10 != (__int64 *)v9 )
    __fastfail(3u);
  *v8 = v9;
  v8[1] = (__int64)v10;
  *v10 = v8;
  *(_QWORD *)(v9 + 8) = v8;
  RtlReleaseSRWLockExclusive(v9 + 16);
  if ( *(_DWORD *)(v4 + 424) != MEMORY[0x7FFE03C0] )
    sub_180108210(v4);
  v11 = 0LL;
  ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v13 = *ThreadPoolData;
    if ( *(_QWORD *)(v13 + 48) == v4 && *(_DWORD *)(v13 + 128) == 3 )
    {
      *(_DWORD *)(v13 + 128) = 4;
      v11 = 1LL;
    }
  }
  _m_prefetchw((const void *)(v4 + 8));
  result = *(_QWORD *)(v4 + 8);
  LODWORD(v19) = result;
  do
  {
    if ( (v19 & 0xFFFF0000) != 0 || (_DWORD)v11 )
    {
      v15 = 0LL;
    }
    else
    {
      LODWORD(v19) = (unsigned __int16)v19 | ((v19 & 0xFFFF0000) + 0x10000);
      v15 = 1LL;
    }
    v16 = result;
    HIDWORD(v19) = HIDWORD(result) + 1;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8), v19, result);
    LODWORD(v19) = result;
  }
  while ( v16 != result );
  if ( (_DWORD)v15 )
    return ZwReleaseWorkerFactoryWorker(*(_QWORD *)(v4 + 56), v15, v11, 4294901760LL);
  return result;
}
