/*
 * XREFs of AlpcpRegisterCompletionListDatabase @ 0x14056B7BC
 * Callers:
 *     AlpcpInitializeCompletionList @ 0x14056B364 (AlpcpInitializeCompletionList.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpRegisterCompletionListDatabase(__int64 **a1)
{
  __int64 *v2; // rdx
  __int64 **v3; // rax
  unsigned int v4; // ebx
  __int64 *v6; // rcx
  unsigned __int64 v7; // rax

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpCompletionListDatabase, 0LL);
  v2 = (__int64 *)qword_14034F750;
  if ( (__int64 *)qword_14034F750 != &qword_14034F750 )
  {
    v6 = a1[2];
    do
    {
      v7 = v2[2];
      if ( v7 > (unsigned __int64)v6 )
        break;
      if ( (__int64 *)v7 == v6 )
      {
        if ( v2[5] >= (unsigned __int64)a1[6] )
          break;
        if ( v2[6] > (unsigned __int64)a1[5] )
        {
          v4 = 0;
          goto LABEL_4;
        }
      }
      v2 = (__int64 *)*v2;
    }
    while ( v2 != &qword_14034F750 );
  }
  v3 = (__int64 **)v2[1];
  if ( *v3 != v2 )
    __fastfail(3u);
  *a1 = v2;
  a1[1] = (__int64 *)v3;
  *v3 = (__int64 *)a1;
  v2[1] = (__int64)a1;
  v4 = 1;
  ++dword_14034F748;
LABEL_4:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpCompletionListDatabase, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpCompletionListDatabase);
  KeAbPostRelease((ULONG_PTR)&AlpcpCompletionListDatabase);
  return v4;
}
