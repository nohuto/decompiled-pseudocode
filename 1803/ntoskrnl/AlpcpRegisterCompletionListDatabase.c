/*
 * XREFs of AlpcpRegisterCompletionListDatabase @ 0x140748BA8
 * Callers:
 *     AlpcpInitializeCompletionList @ 0x14052DD94 (AlpcpInitializeCompletionList.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall AlpcpRegisterCompletionListDatabase(__int64 **a1)
{
  __int64 v2; // r9
  __int64 *v3; // rdx
  __int64 *v4; // rcx
  unsigned __int64 v5; // rax
  __int64 **v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rdx

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpCompletionListDatabase, 0LL);
  v3 = (__int64 *)qword_1403AD250;
  if ( (__int64 *)qword_1403AD250 != &qword_1403AD250 )
  {
    v4 = a1[2];
    do
    {
      v5 = v3[2];
      if ( v5 > (unsigned __int64)v4 )
        break;
      if ( (__int64 *)v5 == v4 )
      {
        if ( v3[5] >= (unsigned __int64)a1[6] )
          break;
        if ( v3[6] > (unsigned __int64)a1[5] )
        {
          v7 = 0;
          goto LABEL_12;
        }
      }
      v3 = (__int64 *)*v3;
    }
    while ( v3 != &qword_1403AD250 );
  }
  v6 = (__int64 **)v3[1];
  if ( *v6 != v3 )
    __fastfail(3u);
  *a1 = v3;
  a1[1] = (__int64 *)v6;
  *v6 = (__int64 *)a1;
  v3[1] = (__int64)a1;
  v7 = 1;
  ++dword_1403AD248;
LABEL_12:
  v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpCompletionListDatabase, 0xFFFFFFFFFFFFFFFFuLL);
  LOBYTE(v8) = v8 & 6;
  if ( (_BYTE)v8 == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpCompletionListDatabase, v8, (__int64)&qword_1403AD250, v2);
  KeAbPostRelease((ULONG_PTR)&AlpcpCompletionListDatabase);
  return v7;
}
