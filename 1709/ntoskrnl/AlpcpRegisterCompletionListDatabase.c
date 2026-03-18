/*
 * XREFs of AlpcpRegisterCompletionListDatabase @ 0x1406DE074
 * Callers:
 *     AlpcpInitializeCompletionList @ 0x1406DD984 (AlpcpInitializeCompletionList.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpRegisterCompletionListDatabase(__int64 **a1)
{
  __int64 *v2; // rdx
  __int64 *v3; // rcx
  unsigned __int64 v4; // rax
  __int64 **v5; // rax
  unsigned int v6; // ebx

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpCompletionListDatabase, 0LL);
  v2 = (__int64 *)qword_14036A1B0;
  if ( (__int64 *)qword_14036A1B0 != &qword_14036A1B0 )
  {
    v3 = a1[2];
    do
    {
      v4 = v2[2];
      if ( v4 > (unsigned __int64)v3 )
        break;
      if ( (__int64 *)v4 == v3 )
      {
        if ( v2[5] >= (unsigned __int64)a1[6] )
          break;
        if ( v2[6] > (unsigned __int64)a1[5] )
        {
          v6 = 0;
          goto LABEL_12;
        }
      }
      v2 = (__int64 *)*v2;
    }
    while ( v2 != &qword_14036A1B0 );
  }
  v5 = (__int64 **)v2[1];
  if ( *v5 != v2 )
    __fastfail(3u);
  *a1 = v2;
  a1[1] = (__int64 *)v5;
  *v5 = (__int64 *)a1;
  v2[1] = (__int64)a1;
  v6 = 1;
  ++dword_14036A1A8;
LABEL_12:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpCompletionListDatabase, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpCompletionListDatabase);
  KeAbPostRelease((ULONG_PTR)&AlpcpCompletionListDatabase);
  return v6;
}
