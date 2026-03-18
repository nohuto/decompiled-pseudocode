/*
 * XREFs of EtwpGetTraceGroupInfo @ 0x14070A0B8
 * Callers:
 *     NtTraceControl @ 0x14047FD70 (NtTraceControl.c)
 * Callees:
 *     RtlUIntAdd @ 0x14004C5F0 (RtlUIntAdd.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     qsort @ 0x14016AA40 (qsort.c)
 *     memset @ 0x140192D80 (memset.c)
 *     EtwpUnreferenceGuidEntry @ 0x140480BE4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140480CD0 (EtwpFindGuidEntryByGuid.c)
 */

__int64 __fastcall EtwpGetTraceGroupInfo(__int64 a1, _DWORD *a2, _DWORD *a3, UINT *a4)
{
  UINT v4; // r15d
  unsigned int v6; // r13d
  unsigned int v8; // edi
  int v9; // ebp
  _QWORD *GuidEntryByGuid; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v13; // ecx
  __int64 v14; // r8
  _OWORD *v15; // rdx
  _OWORD *v16; // rax
  _QWORD *v17; // r14
  int *v18; // rax
  UINT v19; // ecx
  _QWORD *v20; // rbx
  struct _KTHREAD *v21; // rax
  _QWORD *v22; // rcx
  __int64 v23; // rdx
  _OWORD *v24; // [rsp+20h] [rbp-48h]
  int *v25; // [rsp+28h] [rbp-40h]
  UINT puResult; // [rsp+80h] [rbp+18h] BYREF
  UINT *v27; // [rsp+88h] [rbp+20h]

  v27 = a4;
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
  v13 = 4;
  GuidEntryByGuid[49] = KeGetCurrentThread();
  v14 = 8LL;
  if ( v4 >= 4 )
    *a3 = 8;
  v15 = a3 + 1;
  v16 = GuidEntryByGuid + 14;
  do
  {
    v13 += 32;
    if ( v13 <= v4 )
    {
      *v15 = *v16;
      v15[1] = v16[1];
      v15 += 2;
    }
    v16 += 2;
    --v14;
  }
  while ( v14 );
  v17 = (_QWORD *)GuidEntryByGuid[5];
  v18 = &a3[v13 / 4];
  v19 = v13 + 4;
  v25 = v18;
  v20 = (_QWORD *)((char *)a3 + v19);
  puResult = v19;
  v24 = v20;
  while ( v17 != GuidEntryByGuid + 5 )
  {
    if ( RtlUIntAdd(v19, 0x10u, &puResult) < 0 )
    {
      v6 = -2147483643;
      goto LABEL_30;
    }
    v19 = puResult;
    ++v8;
    if ( puResult <= v4 )
    {
      v21 = KeGetCurrentThread();
      --v21->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v17[2] + 384LL, 0LL);
      *(_QWORD *)(v17[2] + 392LL) = KeGetCurrentThread();
      *v24 = *(_OWORD *)(v17[2] + 24LL);
      *(_QWORD *)(v17[2] + 392LL) = 0LL;
      ExReleasePushLockEx(v17[2] + 384LL, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      ++v24;
      v19 = puResult;
    }
    v17 = (_QWORD *)*v17;
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
      qsort(v20, v8, 0x10uLL, (int (__cdecl *)(const void *, const void *))EtwpCompareGuid);
      v9 = 1;
      v22 = v20 + 2;
      v23 = v8 - 1;
      do
      {
        if ( *v22 != *v20 || v22[1] != v20[1] )
        {
          v20 += 2;
          if ( v20 != v22 )
            *(_OWORD *)v20 = *(_OWORD *)v22;
          ++v9;
        }
        v22 += 2;
        --v23;
      }
      while ( v23 );
    }
    *v25 = v9;
  }
LABEL_30:
  GuidEntryByGuid[49] = 0LL;
  ExReleasePushLockEx((ULONG_PTR)(GuidEntryByGuid + 48), 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  *v27 = puResult;
  return v6;
}
