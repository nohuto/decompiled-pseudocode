/*
 * XREFs of TtmiRetrieveEventFromQueue @ 0x1406DAAA4
 * Callers:
 *     TtmpDispatchGetTerminalEvent @ 0x1406DA4D0 (TtmpDispatchGetTerminalEvent.c)
 * Callees:
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     TtmiLogError @ 0x140584D50 (TtmiLogError.c)
 */

__int64 __fastcall TtmiRetrieveEventFromQueue(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // edi
  int v6; // edx
  char **v7; // rax
  char *v8; // rsi
  __int64 v9; // rcx
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
  v9 = *(_QWORD *)*v7;
  if ( *((char ***)*v7 + 1) != v7 || *(char **)(v9 + 8) != v8 )
    __fastfail(3u);
  *v7 = (char *)v9;
  *(_QWORD *)(v9 + 8) = v7;
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v5;
}
