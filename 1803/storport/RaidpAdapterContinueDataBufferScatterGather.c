/*
 * XREFs of RaidpAdapterContinueDataBufferScatterGather @ 0x1C002BC60
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterScatterGatherExecute @ 0x1C0006264 (RaidAdapterScatterGatherExecute.c)
 *     RaidXrbSetDataBufferAddress @ 0x1C000AD40 (RaidXrbSetDataBufferAddress.c)
 *     RaidAdapterRequestComplete @ 0x1C00275A8 (RaidAdapterRequestComplete.c)
 */

char __fastcall RaidpAdapterContinueDataBufferScatterGather(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  int v7; // eax

  v4 = *(_QWORD *)(a1 + 64);
  a4[19] = a3;
  if ( (int)RaidXrbSetDataBufferAddress(a4, v4, 1) < 0 )
  {
    *(_BYTE *)(a4[21] + 3LL) = 48;
    v6 = a4[21];
    if ( *(_BYTE *)(v6 + 2) == 40 )
      *(_DWORD *)(v6 + 44) = -1073741670;
    else
      *(_DWORD *)(v6 + 64) = -1073741670;
    goto LABEL_7;
  }
  v7 = RaidAdapterScatterGatherExecute(v4, (__int64)a4);
  if ( v7 < 0 )
  {
    *(_BYTE *)(a4[21] + 3LL) = 4;
LABEL_7:
    LOBYTE(v7) = RaidAdapterRequestComplete(v4, (__int64)a4, 1);
  }
  return v7;
}
