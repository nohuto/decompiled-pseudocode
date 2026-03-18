/*
 * XREFs of TtmiRetrieveEventFromQueue @ 0x14077473C
 * Callers:
 *     TtmpDispatchGetTerminalEvent @ 0x14077415C (TtmpDispatchGetTerminalEvent.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     TtmiLogError @ 0x1406535C4 (TtmiLogError.c)
 *     TtmiLogQueueDequeueEvent @ 0x140776664 (TtmiLogQueueDequeueEvent.c)
 */

__int64 __fastcall TtmiRetrieveEventFromQueue(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebp
  int v6; // edx
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int128 v12; // xmm1

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 24), 1u);
  v5 = 0;
  if ( !*(_BYTE *)(a1 + 168) )
  {
    v5 = -1073740032;
    v6 = 477;
LABEL_3:
    TtmiLogError("TtmiRetrieveEventFromQueue", v6, -1, v5);
    goto LABEL_13;
  }
  v7 = (_QWORD *)(a1 + 152);
  v8 = *(_QWORD **)(a1 + 152);
  if ( v8 == (_QWORD *)(a1 + 152) )
  {
    v5 = -2147483622;
    v6 = 482;
    goto LABEL_3;
  }
  if ( (_QWORD *)v8[1] != v7 || (v9 = *v8, *(_QWORD **)(*v8 + 8LL) != v8) )
    __fastfail(3u);
  *v7 = v9;
  *(_QWORD *)(v9 + 8) = v7;
  if ( (_QWORD *)*v7 == v7 )
    KeResetEvent((PRKEVENT)(a1 + 128));
  v10 = v8 + 2;
  TtmiLogQueueDequeueEvent(a1, v8 + 2);
  v11 = 4LL;
  do
  {
    *(_OWORD *)a2 = *(_OWORD *)v10;
    *(_OWORD *)(a2 + 16) = *((_OWORD *)v10 + 1);
    *(_OWORD *)(a2 + 32) = *((_OWORD *)v10 + 2);
    *(_OWORD *)(a2 + 48) = *((_OWORD *)v10 + 3);
    *(_OWORD *)(a2 + 64) = *((_OWORD *)v10 + 4);
    *(_OWORD *)(a2 + 80) = *((_OWORD *)v10 + 5);
    *(_OWORD *)(a2 + 96) = *((_OWORD *)v10 + 6);
    a2 += 128LL;
    v12 = *((_OWORD *)v10 + 7);
    v10 += 16;
    *(_OWORD *)(a2 - 16) = v12;
    --v11;
  }
  while ( v11 );
  *(_OWORD *)a2 = *(_OWORD *)v10;
  *(_QWORD *)(a2 + 16) = v10[2];
  *(_DWORD *)(a2 + 24) = *((_DWORD *)v10 + 6);
  ExFreePoolWithTag(v8, 0x716D7454u);
LABEL_13:
  ExReleaseResourceLite((PERESOURCE)(a1 + 24));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
