/*
 * XREFs of EtwpGetTraceGroupInfo @ 0x1407A5FA4
 * Callers:
 *     NtTraceControl @ 0x14058F8F0 (NtTraceControl.c)
 * Callees:
 *     RtlUIntAdd @ 0x1400382D0 (RtlUIntAdd.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     qsort @ 0x140189210 (qsort.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405906D4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405907D0 (EtwpFindGuidEntryByGuid.c)
 */

__int64 __fastcall EtwpGetTraceGroupInfo(__int64 a1, _DWORD *a2, _DWORD *a3, UINT *a4)
{
  UINT v4; // r15d
  unsigned int v6; // r12d
  unsigned int v8; // edi
  int v9; // ebp
  _QWORD *GuidEntryByGuid; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r8
  _OWORD *v16; // rdx
  _OWORD *v17; // rcx
  _QWORD *v18; // r14
  UINT v19; // ecx
  _QWORD *v20; // rbx
  struct _KTHREAD *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rcx
  __int64 v25; // rdx
  _OWORD *v26; // [rsp+20h] [rbp-48h]
  int *v27; // [rsp+28h] [rbp-40h]
  UINT puResult; // [rsp+80h] [rbp+18h] BYREF
  UINT *v29; // [rsp+88h] [rbp+20h]

  v29 = a4;
  v4 = *a4;
  v6 = 0;
  v8 = 0;
  v9 = 0;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, a2, 2);
  if ( !GuidEntryByGuid )
    return 3221226133LL;
  memset(a3, 0, *a4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 48), 0LL);
  GuidEntryByGuid[49] = KeGetCurrentThread();
  LODWORD(v14) = 4;
  v15 = 8LL;
  if ( v4 >= 4 )
    *a3 = 8;
  v16 = a3 + 1;
  v17 = GuidEntryByGuid + 14;
  do
  {
    v14 = (unsigned int)(v14 + 32);
    if ( (unsigned int)v14 <= v4 )
    {
      *v16 = *v17;
      v16[1] = v17[1];
      v16 += 2;
    }
    v17 += 2;
    --v15;
  }
  while ( v15 );
  v27 = (_DWORD *)((char *)a3 + v14);
  v18 = (_QWORD *)GuidEntryByGuid[5];
  v19 = v14 + 4;
  v20 = (_QWORD *)((char *)a3 + (unsigned int)(v14 + 4));
  puResult = v14 + 4;
  v26 = v20;
  while ( v18 != GuidEntryByGuid + 5 )
  {
    if ( RtlUIntAdd(v19, 0x10u, &puResult) < 0 )
    {
      v6 = -2147483643;
      goto LABEL_29;
    }
    v19 = puResult;
    ++v8;
    if ( puResult <= v4 )
    {
      v21 = KeGetCurrentThread();
      --v21->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v18[2] + 384LL, 0LL);
      *(_QWORD *)(v18[2] + 392LL) = KeGetCurrentThread();
      *v26 = *(_OWORD *)(v18[2] + 24LL);
      *(_QWORD *)(v18[2] + 392LL) = 0LL;
      ExReleasePushLockEx(v18[2] + 384LL, 0LL, v22, v23);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ++v26;
      v19 = puResult;
    }
    v18 = (_QWORD *)*v18;
  }
  if ( v19 > v4 )
  {
    v6 = -1073741789;
  }
  else
  {
    if ( v8 == 1 )
    {
      v9 = 1;
    }
    else if ( v8 > 1 )
    {
      qsort(v20, v8, 0x10uLL, EtwpCompareGuid);
      v24 = v20 + 2;
      v9 = 1;
      v25 = v8 - 1;
      do
      {
        if ( *v24 != *v20 || v24[1] != v20[1] )
        {
          v20 += 2;
          if ( v20 != v24 )
            *(_OWORD *)v20 = *(_OWORD *)v24;
          ++v9;
        }
        v24 += 2;
        --v25;
      }
      while ( v25 );
    }
    *v27 = v9;
  }
LABEL_29:
  GuidEntryByGuid[49] = 0LL;
  ExReleasePushLockEx((ULONG_PTR)(GuidEntryByGuid + 48), 0LL, v15, v13);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  *v29 = puResult;
  return v6;
}
