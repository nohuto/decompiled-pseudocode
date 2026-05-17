/*
 * XREFs of RtlStdReleaseStackTrace @ 0x1800FA3C0
 * Callers:
 *     RtlLogStackBackTraceEx @ 0x180009C98 (RtlLogStackBackTraceEx.c)
 *     RtlDeleteCriticalSection @ 0x180061480 (RtlDeleteCriticalSection.c)
 *     RtlReleaseStackTrace @ 0x1800FA0E0 (RtlReleaseStackTrace.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1800A3B50 (RtlpInterlockedPushEntrySList.c)
 *     RtlpStdLockAcquire @ 0x1800FA8B4 (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x1800FA8D0 (RtlpStdLockRelease.c)
 */

__int64 __fastcall RtlStdReleaseStackTrace(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v4; // rcx
  unsigned int v5; // eax
  _DWORD *v7; // rdx
  _QWORD **v8; // rdi
  _QWORD **v9; // r14
  __int16 v10; // cx
  __int16 v11; // ax
  _QWORD *v12; // rax
  __int64 result; // rax

  v2 = 0;
  v4 = *(unsigned __int16 *)(a2 + 14);
  v5 = 0;
  if ( *(_WORD *)(a2 + 14) )
  {
    v7 = (_DWORD *)(a2 + 16);
    do
    {
      v5 += *v7;
      v7 += 2;
      --v4;
    }
    while ( v4 );
  }
  v8 = (_QWORD **)(16LL * (v5 % *(_DWORD *)(a1 + 720)) + a1 + 728);
  v9 = v8 + 1;
  RtlpStdLockAcquire(v8 + 1);
  v10 = *(_WORD *)(a2 + 8);
  if ( (v10 & 0x7FF) != 0x7FF )
  {
    v11 = v10 ^ (v10 ^ (v10 - 1)) & 0x7FF;
    *(_WORD *)(a2 + 8) = v11;
    if ( (v11 & 0x7FF) == 0 )
    {
      if ( *v8 )
      {
        while ( 1 )
        {
          v12 = *v8;
          if ( *v8 == (_QWORD *)a2 )
            break;
          v8 = (_QWORD **)*v8;
          if ( !*v12 )
            goto LABEL_9;
        }
        *v8 = *(_QWORD **)a2;
      }
      else
      {
LABEL_9:
        __debugbreak();
      }
      v2 = 1;
    }
  }
  result = RtlpStdLockRelease(v9);
  if ( v2 )
  {
    result = RtlpInterlockedPushEntrySList(
               (__int128 *)(a1 + 16 * (((unsigned __int64)*(unsigned __int16 *)(a2 + 8) >> 11) + 13)),
               (_QWORD *)(a2 + 16));
    _InterlockedAdd((volatile signed __int32 *)(a1 + 196), 1u);
  }
  return result;
}
