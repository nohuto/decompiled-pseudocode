/*
 * XREFs of EtwpRundownNotifications @ 0x1404825D0
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x140480960 (EtwpDeleteRegistrationObject.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     EtwpReleaseQueueEntry @ 0x140553D7C (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x140553DE0 (EtwpUnreferenceDataBlock.c)
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
  __int64 v10; // r8
  _QWORD *v11; // rdx
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
        v11 = (_QWORD *)v9[1];
        if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v11 != v9 )
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    while ( 1 )
    {
      v8 = P[0];
      if ( P[0] == P )
        break;
      v13 = *(_QWORD *)P[0];
      if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v13 + 8) != P[0] )
        __fastfail(3u);
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v13 + 8) = P;
      EtwpUnreferenceDataBlock(v8[2]);
      EtwpReleaseQueueEntry(v8);
    }
  }
}
