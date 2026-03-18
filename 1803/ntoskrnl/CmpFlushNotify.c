/*
 * XREFs of CmpFlushNotify @ 0x14054E0F0
 * Callers:
 *     CmpPerformUnloadKey @ 0x14054D0B4 (CmpPerformUnloadKey.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14054DF64 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpDeleteKeyObject @ 0x14059F520 (CmpDeleteKeyObject.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpPostNotify @ 0x1404E2F90 (CmpPostNotify.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 */

void __fastcall CmpFlushNotify(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  char *v4; // rdi
  char v6; // si
  __int64 v8; // rax
  volatile signed __int64 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // al

  v4 = *(char **)(a1 + 16);
  v6 = a2;
  if ( v4 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = (volatile signed __int64 *)(*(_QWORD *)(v8 + 24) + 1672LL);
    if ( !(_BYTE)a2 )
    {
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(v8 + 24) + 1672LL, 0LL);
      v4 = *(char **)(a1 + 16);
    }
    if ( !v4 )
      goto LABEL_15;
    if ( *((char **)v4 + 2) != v4 + 16 )
    {
      CmpPostNotify((__int64)v4, a2, (__int64)a3, 0x10Bu, 0, 0LL, a3);
      v4 = *(char **)(a1 + 16);
    }
    if ( v4 )
    {
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v4 + 56));
      **((_QWORD **)v4 + 1) = *(_QWORD *)v4;
      if ( *(_QWORD *)v4 )
        *(_QWORD *)(*(_QWORD *)v4 + 8LL) = *((_QWORD *)v4 + 1);
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( !v6 )
      {
        v13 = _InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
          ExfTryToWakePushLock(v9, v10, v11, v12);
        KeAbPostRelease((ULONG_PTR)v9);
      }
      ExFreePoolWithTag(v4, 0);
    }
    else
    {
LABEL_15:
      if ( !v6 )
      {
        if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v9, a2, (__int64)a3, a4);
        KeAbPostRelease((ULONG_PTR)v9);
      }
    }
  }
}
