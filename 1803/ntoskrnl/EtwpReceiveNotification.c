/*
 * XREFs of EtwpReceiveNotification @ 0x14058DD40
 * Callers:
 *     NtTraceControl @ 0x14058F8F0 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     EtwpUnreferenceDataBlock @ 0x14058DCB4 (EtwpUnreferenceDataBlock.c)
 *     EtwpReleaseQueueEntry @ 0x14058DCDC (EtwpReleaseQueueEntry.c)
 */

__int64 __fastcall EtwpReceiveNotification(void *a1, unsigned int a2, char a3, _DWORD *a4)
{
  int v4; // esi
  unsigned __int64 v9; // r14
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  char **v14; // r14
  char *i; // rdi
  char *v16; // rax
  char **v17; // rcx
  __int64 v18; // rbp
  char *v19; // r12
  signed __int32 v20; // ebx
  char *v22; // rax

  v4 = 0;
  v9 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[9];
  if ( v9 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = v9 + 16;
    ExAcquirePushLockExclusiveEx(v9 + 16, 0LL);
    v14 = (char **)(v9 + 24);
    for ( i = *v14; i != (char *)v14 && a3 != (*(_BYTE *)(*((_QWORD *)i + 3) + 99LL) & 1); i = *(char **)i )
      ;
    if ( i == (char *)v14 )
    {
      ExReleasePushLockEx(v11, 0LL, v12, v13);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return (unsigned int)-2147483622;
    }
    else
    {
      v16 = *(char **)i;
      if ( *(char **)(*(_QWORD *)i + 8LL) != i || (v17 = (char **)*((_QWORD *)i + 1), *v17 != i) )
        __fastfail(3u);
      *v17 = v16;
      *((_QWORD *)v16 + 1) = v17;
      v18 = *((_QWORD *)i + 2);
      if ( *(_DWORD *)(v18 + 4) > a2 )
      {
        v22 = *v14;
        if ( *((char ***)*v14 + 1) != v14 )
          __fastfail(3u);
        *(_QWORD *)i = v22;
        v4 = -1073741789;
        *((_QWORD *)i + 1) = v14;
        *((_QWORD *)v22 + 1) = i;
        *v14 = i;
      }
      v19 = *v14;
      *a4 = *(_DWORD *)(v18 + 4);
      ExReleasePushLockEx(v11, 0LL, v12, v13);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( v4 >= 0 )
      {
        v20 = _InterlockedIncrement((volatile signed __int32 *)(v18 + 20));
        memmove(a1, (const void *)v18, *(unsigned int *)(v18 + 4));
        *((_QWORD *)a1 + 3) = 0LL;
        *((_DWORD *)a1 + 5) = v20;
        *((_DWORD *)a1 + 6) = *((unsigned __int16 *)i + 24);
        if ( *(_BYTE *)(v18 + 12) )
          *((_DWORD *)a1 + 4) = *((unsigned __int16 *)i + 25);
        EtwpUnreferenceDataBlock((volatile signed __int32 *)v18);
        EtwpReleaseQueueEntry(i, 1);
        if ( v19 != (char *)v14 )
          return 261;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
