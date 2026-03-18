/*
 * XREFs of MiIssuePageExtendRequest @ 0x14025F94C
 * Callers:
 *     MmResourcesAvailable @ 0x1400869F0 (MmResourcesAvailable.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiPageFileNoFreeSpace @ 0x14025FBA0 (MiPageFileNoFreeSpace.c)
 *     MiCreatePagingFile @ 0x14063BE50 (MiCreatePagingFile.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x140756438 (MiExtendWorkingSetSwapPagefile.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiQueuePageFileExtension @ 0x14025FD2C (MiQueuePageFileExtension.c)
 */

__int64 __fastcall MiIssuePageExtendRequest(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx
  int v8; // r14d
  int v10; // r12d
  __int64 *v11; // rdi
  char v12; // al
  char v13; // al
  unsigned int v14; // r9d
  LARGE_INTEGER *Timeout; // rsi
  unsigned int v16; // r10d
  char v17; // al
  unsigned int v18; // ecx
  char v19; // al
  char v20; // al
  KIRQL v21; // r14
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 **v24; // rdx
  __int64 v25; // [rsp+30h] [rbp-29h] BYREF
  __int16 v26; // [rsp+60h] [rbp+7h]
  char v27; // [rsp+62h] [rbp+9h]
  int v28; // [rsp+64h] [rbp+Bh]
  _QWORD v29[2]; // [rsp+68h] [rbp+Fh] BYREF
  int v30; // [rsp+78h] [rbp+1Fh]
  char v31; // [rsp+7Ch] [rbp+23h]
  char v32; // [rsp+7Fh] [rbp+26h]

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v8 = a3 & 8;
  if ( (a3 & 8) != 0 && !*(_BYTE *)(a1 + 1617) )
    return 0LL;
  v10 = a3 & 2;
  if ( (a3 & 2) != 0 )
  {
    v11 = (__int64 *)((v8 != 0 ? 0x3B0 : 0) + a1 + 424);
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)v11 + 18, 1, 0) )
    {
      v12 = *((_BYTE *)v11 + 79);
      a2 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( (a3 & 4) != 0 )
        v13 = v12 | 1;
      else
        v13 = v12 & 0xFE;
      *((_BYTE *)v11 + 79) = v13;
      v14 = 0;
      goto LABEL_10;
    }
    return 0LL;
  }
  if ( (ULONG_PTR *(__fastcall *)(__int64))CurrentThread[1].ApcState.ApcListHead[0].Blink == MiDereferenceSegmentThread
    || KeGetCurrentIrql() >= 2u )
  {
    return 0LL;
  }
  if ( (a3 & 8) != 0 )
    a2 = (a2 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v16 = *(_DWORD *)(a1 + 6872);
  v11 = &v25;
  v14 = 1;
  v30 = 1;
  v25 = 0LL;
  v31 = a4;
  if ( (a3 & 1) != 0 )
    v17 = v32 & 0xE8 | 2;
  else
    v17 = v32 & 0xE8;
  v32 = v17;
  v29[1] = v29;
  v29[0] = v29;
  v26 = 0;
  v27 = 6;
  v28 = 0;
  if ( (a3 & 8) != 0 )
  {
    Timeout = (LARGE_INTEGER *)&MiOneSecond;
  }
  else
  {
    if ( a4 < v16 )
    {
LABEL_10:
      Timeout = 0LL;
      goto LABEL_27;
    }
    Timeout = (LARGE_INTEGER *)&MiOneSecond;
    v18 = 0;
    if ( v16 )
    {
      a3 = a1 + 6880;
      do
      {
        if ( (*(_BYTE *)(*(_QWORD *)a3 + 204LL) & 0x50) == 0 && **(_QWORD **)a3 < *(_QWORD *)(*(_QWORD *)a3 + 8LL) )
          break;
        ++v18;
        a3 += 8LL;
      }
      while ( v18 < v16 );
    }
    if ( v18 == v16 )
      return 0LL;
  }
LABEL_27:
  v19 = *((_BYTE *)v11 + 79);
  if ( v8 )
    v20 = v19 | 8;
  else
    v20 = v19 & 0xF7;
  v11[4] = a2;
  LOBYTE(a3) = 17;
  *((_BYTE *)v11 + 79) = v20;
  v11[5] = 0LL;
  v11[3] = a1;
  v11[10] = 0LL;
  MiQueuePageFileExtension(v11, v14, a3);
  if ( v10 )
    return 0LL;
  if ( KeWaitForSingleObject(v11 + 6, Executive, 0, 0, Timeout) == 258 )
  {
    v21 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
    if ( !*((_DWORD *)v11 + 13) )
    {
      v22 = v11[10];
      if ( v22 )
      {
        *(_QWORD *)(v22 + 80) = 0LL;
      }
      else
      {
        v23 = v11[1];
        if ( *(__int64 **)(v23 + 8) != v11 + 1 || (v24 = (__int64 **)v11[2], *v24 != v11 + 1) )
          __fastfail(3u);
        *v24 = (__int64 *)v23;
        *(_QWORD *)(v23 + 8) = v24;
      }
      v11[5] = 0LL;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1280));
    __writecr8(v21);
  }
  LOBYTE(v5) = v11[5] != 0;
  return v5;
}
