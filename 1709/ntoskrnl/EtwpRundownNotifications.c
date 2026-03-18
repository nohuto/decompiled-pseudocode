/*
 * XREFs of EtwpRundownNotifications @ 0x1404920B0
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x140491B40 (EtwpDeleteRegistrationObject.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     EtwpReleaseQueueEntry @ 0x1404EFCEC (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x1404EFD38 (EtwpUnreferenceDataBlock.c)
 */

void __fastcall EtwpRundownNotifications(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v5; // rdi
  _QWORD **v6; // rbx
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // r8
  _QWORD *v12; // rdx
  __int64 v13; // rax
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
    v6 = (_QWORD **)(v2 + 24);
    v7 = *v6;
    while ( v7 != v6 )
    {
      v9 = v7;
      v7 = (_QWORD *)*v7;
      if ( v9[3] == a2 )
      {
        v10 = *v9;
        if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v11 = (_QWORD *)v9[1], (_QWORD *)*v11 != v9) )
          __fastfail(3u);
        *v11 = v10;
        *(_QWORD *)(v10 + 8) = v11;
        v12 = P[0];
        if ( *((PVOID **)P[0] + 1) != P )
          __fastfail(3u);
        *v9 = P[0];
        v9[1] = P;
        v12[1] = v9;
        P[0] = v9;
      }
    }
    ExReleasePushLockEx(v5, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    while ( 1 )
    {
      v8 = P[0];
      if ( P[0] == P )
        break;
      if ( *((PVOID **)P[0] + 1) != P || (v13 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
        __fastfail(3u);
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v13 + 8) = P;
      EtwpUnreferenceDataBlock(v8[2]);
      EtwpReleaseQueueEntry(v8);
    }
  }
}
