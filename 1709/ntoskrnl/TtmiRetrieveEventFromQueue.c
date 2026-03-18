/*
 * XREFs of TtmiRetrieveEventFromQueue @ 0x140710EB4
 * Callers:
 *     TtmpDispatchGetTerminalEvent @ 0x1407108E0 (TtmpDispatchGetTerminalEvent.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     TtmiLogError @ 0x1405EA14C (TtmiLogError.c)
 */

__int64 __fastcall TtmiRetrieveEventFromQueue(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // edi
  int v6; // edx
  char **v7; // rax
  char *v8; // rsi
  char *v9; // rcx
  __int64 v10; // rax
  char *v11; // r8
  __int128 v12; // xmm1

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 24), 1u);
  v5 = 0;
  if ( !*(_BYTE *)(a1 + 168) )
  {
    v5 = -1073740032;
    v6 = 476;
LABEL_3:
    TtmiLogError("TtmiRetrieveEventFromQueue", v6, -1, v5);
    goto LABEL_13;
  }
  v7 = (char **)(a1 + 152);
  if ( *v7 == (char *)v7 )
  {
    v5 = -2147483622;
    v6 = 481;
    goto LABEL_3;
  }
  v8 = *v7;
  if ( *((char ***)*v7 + 1) != v7 || (v9 = *(char **)v8, *(char **)(*(_QWORD *)v8 + 8LL) != v8) )
    __fastfail(3u);
  *v7 = v9;
  *((_QWORD *)v9 + 1) = v7;
  if ( *v7 == (char *)v7 )
    KeResetEvent((PRKEVENT)(a1 + 128));
  v10 = 4LL;
  v11 = v8 + 16;
  do
  {
    *(_OWORD *)a2 = *(_OWORD *)v11;
    *(_OWORD *)(a2 + 16) = *((_OWORD *)v11 + 1);
    *(_OWORD *)(a2 + 32) = *((_OWORD *)v11 + 2);
    *(_OWORD *)(a2 + 48) = *((_OWORD *)v11 + 3);
    *(_OWORD *)(a2 + 64) = *((_OWORD *)v11 + 4);
    *(_OWORD *)(a2 + 80) = *((_OWORD *)v11 + 5);
    *(_OWORD *)(a2 + 96) = *((_OWORD *)v11 + 6);
    a2 += 128LL;
    v12 = *((_OWORD *)v11 + 7);
    v11 += 128;
    *(_OWORD *)(a2 - 16) = v12;
    --v10;
  }
  while ( v10 );
  *(_OWORD *)a2 = *(_OWORD *)v11;
  *(_QWORD *)(a2 + 16) = *((_QWORD *)v11 + 2);
  *(_DWORD *)(a2 + 24) = *((_DWORD *)v11 + 6);
  ExFreePoolWithTag(v8, 0x716D7454u);
LABEL_13:
  ExReleaseResourceLite((PERESOURCE)(a1 + 24));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
