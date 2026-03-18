/*
 * XREFs of EtwpRundownNotifications @ 0x140590C14
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x140590460 (EtwpDeleteRegistrationObject.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     EtwpUnreferenceDataBlock @ 0x14058DCB4 (EtwpUnreferenceDataBlock.c)
 *     EtwpReleaseQueueEntry @ 0x14058DCDC (EtwpReleaseQueueEntry.c)
 */

void __fastcall EtwpRundownNotifications(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v5; // rdi
  PVOID *v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rbx
  _QWORD *v9; // rcx
  volatile signed __int32 **v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rdx
  __int64 v14; // rax
  PVOID P[2]; // [rsp+20h] [rbp-10h] BYREF

  v2 = *(_QWORD *)(a1 + 1080);
  if ( v2 )
  {
    P[1] = P;
    P[0] = P;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = v2 + 16;
    ExAcquirePushLockExclusiveEx(v2 + 16, 0LL);
    v8 = (_QWORD *)(v2 + 24);
    v9 = (_QWORD *)*v8;
    while ( v9 != v8 )
    {
      v11 = v9;
      v9 = (_QWORD *)*v9;
      if ( v11[3] == a2 )
      {
        if ( (_QWORD *)v9[1] != v11 || (v12 = (_QWORD *)v11[1], (_QWORD *)*v12 != v11) )
          __fastfail(3u);
        *v12 = v9;
        v9[1] = v12;
        v13 = P[0];
        if ( *((PVOID **)P[0] + 1) != P )
          __fastfail(3u);
        *v11 = P[0];
        v6 = P;
        v11[1] = P;
        v13[1] = v11;
        P[0] = v11;
      }
    }
    ExReleasePushLockEx(v5, 0LL, (__int64)v6, v7);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    while ( 1 )
    {
      v10 = (volatile signed __int32 **)P[0];
      if ( P[0] == P )
        break;
      if ( *((PVOID **)P[0] + 1) != P || (v14 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
        __fastfail(3u);
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v14 + 8) = P;
      EtwpUnreferenceDataBlock(v10[2]);
      EtwpReleaseQueueEntry((char *)v10, 1);
    }
  }
}
