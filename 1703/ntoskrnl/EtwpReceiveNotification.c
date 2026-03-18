/*
 * XREFs of EtwpReceiveNotification @ 0x140553BEC
 * Callers:
 *     NtTraceControl @ 0x14047FD70 (NtTraceControl.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     EtwpReleaseQueueEntry @ 0x140553D7C (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x140553DE0 (EtwpUnreferenceDataBlock.c)
 */

__int64 __fastcall EtwpReceiveNotification(void *a1, unsigned int a2, char a3, _DWORD *a4)
{
  int v4; // esi
  unsigned __int64 v9; // r14
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v11; // rbx
  _QWORD *v12; // r14
  _QWORD *i; // rdi
  _QWORD *v14; // rcx
  void **v15; // rax
  __int64 v16; // rbp
  _QWORD *v17; // r12
  signed __int32 v18; // ebx
  _QWORD *v20; // rax

  v4 = 0;
  v9 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[9];
  if ( v9 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = v9 + 16;
    ExAcquirePushLockExclusiveEx(v9 + 16, 0LL);
    v12 = (_QWORD *)(v9 + 24);
    for ( i = (_QWORD *)*v12; i != v12 && a3 != (*(_BYTE *)(i[3] + 99LL) & 1); i = (_QWORD *)*i )
      ;
    if ( i == v12 )
    {
      ExReleasePushLockEx(v11, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return (unsigned int)-2147483622;
    }
    else
    {
      v14 = (_QWORD *)*i;
      v15 = (void **)i[1];
      if ( *(_QWORD **)(*i + 8LL) != i || *v15 != i )
        __fastfail(3u);
      *v15 = v14;
      v14[1] = v15;
      v16 = i[2];
      if ( *(_DWORD *)(v16 + 4) > a2 )
      {
        v20 = (_QWORD *)*v12;
        if ( *(_QWORD **)(*v12 + 8LL) != v12 )
          __fastfail(3u);
        *i = v20;
        v4 = -1073741789;
        i[1] = v12;
        v20[1] = i;
        *v12 = i;
      }
      v17 = (_QWORD *)*v12;
      *a4 = *(_DWORD *)(v16 + 4);
      ExReleasePushLockEx(v11, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( v4 >= 0 )
      {
        v18 = _InterlockedIncrement((volatile signed __int32 *)(v16 + 20));
        memmove(a1, (const void *)v16, *(unsigned int *)(v16 + 4));
        *((_QWORD *)a1 + 3) = 0LL;
        *((_DWORD *)a1 + 5) = v18;
        *((_DWORD *)a1 + 6) = *((unsigned __int16 *)i + 24);
        if ( *(_BYTE *)(v16 + 12) )
          *((_DWORD *)a1 + 4) = *((unsigned __int16 *)i + 25);
        EtwpUnreferenceDataBlock(v16);
        EtwpReleaseQueueEntry(i);
        if ( v17 != v12 )
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
