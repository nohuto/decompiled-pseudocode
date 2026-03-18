/*
 * XREFs of MiIssuePageExtendRequest @ 0x14021A1F0
 * Callers:
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiCreatePagingFile @ 0x1405B967C (MiCreatePagingFile.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x1406BF54C (MiExtendWorkingSetSwapPagefile.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     MiQueuePageFileExtension @ 0x14021A580 (MiQueuePageFileExtension.c)
 */

__int64 __fastcall MiIssuePageExtendRequest(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v7; // r8d
  unsigned int v8; // ebx
  LARGE_INTEGER *Timeout; // rsi
  unsigned int v10; // ecx
  __int64 v11; // rdx
  KIRQL v12; // si
  __int64 v13; // rcx
  _QWORD **v14; // rdx
  __int64 v15; // [rsp+48h] [rbp-9h] BYREF
  __int64 v16; // [rsp+50h] [rbp-1h] BYREF
  _QWORD **v17; // [rsp+58h] [rbp+7h]
  __int64 v18; // [rsp+60h] [rbp+Fh]
  __int64 v19; // [rsp+68h] [rbp+17h]
  __int64 v20; // [rsp+70h] [rbp+1Fh]
  __int16 Object; // [rsp+78h] [rbp+27h] BYREF
  char v22; // [rsp+7Ah] [rbp+29h]
  int v23; // [rsp+7Ch] [rbp+2Bh]
  _QWORD v24[2]; // [rsp+80h] [rbp+2Fh] BYREF
  int v25; // [rsp+90h] [rbp+3Fh]
  char v26; // [rsp+94h] [rbp+43h]
  char v27; // [rsp+97h] [rbp+46h]
  __int64 v28; // [rsp+98h] [rbp+47h]
  __int16 v29; // [rsp+A0h] [rbp+4Fh]

  if ( (ULONG_PTR *(__fastcall *)(__int64))KeGetCurrentThread()[1].ApcState.ApcListHead[1].Flink == MiDereferenceSegmentThread
    || KeGetCurrentIrql() >= 2u )
  {
    return 0LL;
  }
  v7 = *(_DWORD *)(a1 + 5592);
  v8 = 0;
  v25 = 1;
  v20 = 0LL;
  v19 = a2;
  v29 = 0;
  v15 = 0LL;
  v24[1] = v24;
  v24[0] = v24;
  v18 = a1;
  v26 = a3;
  v27 = v27 & 0xFC | (2 * (a4 & 1));
  v28 = 0LL;
  Object = 0;
  v22 = 6;
  v23 = 0;
  if ( a3 >= v7 )
  {
    Timeout = (LARGE_INTEGER *)&MiOneSecond;
    v10 = 0;
    if ( v7 )
    {
      v11 = a1 + 5600;
      do
      {
        if ( (*(_BYTE *)(*(_QWORD *)v11 + 204LL) & 0x50) == 0 && **(_QWORD **)v11 < *(_QWORD *)(*(_QWORD *)v11 + 8LL) )
          break;
        ++v10;
        v11 += 8LL;
      }
      while ( v10 < v7 );
    }
    if ( v10 != v7 )
      goto LABEL_12;
    return 0LL;
  }
  Timeout = 0LL;
LABEL_12:
  MiQueuePageFileExtension(&v15, 1LL);
  if ( KeWaitForSingleObject(&Object, Executive, 0, 0, Timeout) == 258 )
  {
    v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
    if ( !v23 )
    {
      if ( v28 )
      {
        *(_QWORD *)(v28 + 80) = 0LL;
      }
      else
      {
        v13 = v16;
        v14 = v17;
        if ( *(__int64 **)(v16 + 8) != &v16 || *v17 != &v16 )
          __fastfail(3u);
        *v17 = (_QWORD *)v16;
        *(_QWORD *)(v13 + 8) = v14;
      }
      v20 = 0LL;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1344));
    __writecr8(v12);
  }
  LOBYTE(v8) = v20 != 0;
  return v8;
}
