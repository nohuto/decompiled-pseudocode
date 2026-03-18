/*
 * XREFs of WriteFieldLoop @ 0x1C0015A80
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C00039C0 (HeapAlloc.c)
 *     HeapInsertFreeList @ 0x1C00162F0 (HeapInsertFreeList.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 */

__int64 __fastcall WriteFieldLoop(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // r8d
  __int64 v10; // r12
  __int64 v11; // r13
  _DWORD *v12; // r14
  unsigned int v13; // r15d
  __int64 v14; // rax
  __int64 v15; // r9
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // rbp
  __int64 result; // rax
  __int64 v24; // rcx
  __int64 v25; // rbx

  if ( a3 )
    v6 = 1;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  if ( v6 )
  {
    if ( v6 != 1 )
      return a3;
    goto LABEL_20;
  }
  v7 = *(_DWORD *)(a2 + 56);
  if ( !v7 )
  {
    ++*(_DWORD *)(a2 + 16);
LABEL_20:
    v24 = *(_QWORD *)(a1 + 416);
    v25 = v24 - 16;
    *(_QWORD *)(a1 + 416) = *(_QWORD *)(v24 + 8);
    *(_DWORD *)(v24 - 16) = 0;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    HeapInsertFreeList(*(_QWORD *)(v25 + 8), v25);
    KeReleaseSpinLock(&gmutHeap, NewIrql);
    return a3;
  }
  v8 = *(_DWORD *)(a2 + 60);
  v9 = 128;
  v10 = *(_QWORD *)(a2 + 48);
  if ( v8 > v7 )
    v8 = *(_DWORD *)(a2 + 56);
  v11 = *(_QWORD *)(a2 + 32);
  v12 = *(_DWORD **)(a2 + 40);
  if ( v12[5] )
    v9 = v12[7] + 128;
  v13 = 0;
  v14 = HeapAlloc(a1 + 440, 1297237576, v9);
  v15 = v14;
  if ( v14 )
  {
    *(_QWORD *)(v14 + 8) = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = v14;
    *(_QWORD *)(v14 + 24) = WriteFieldObj;
    *(_DWORD *)v14 = 1330004801;
    *(_QWORD *)(v14 + 32) = v11;
    *(_QWORD *)(v14 + 40) = v10;
    *(_QWORD *)(v14 + 48) = v10 + v8;
    v16 = v12[3] & 0xF;
    v17 = 1;
    if ( (unsigned int)(v16 - 1) <= 3 )
      v17 = 1 << (v16 - 1);
    v18 = 8 * v17;
    *(_DWORD *)(v15 + 56) = v17;
    v19 = 8 * v17 + v12[1] + v12[2] - 1;
    if ( v18 == 8 )
      v20 = v19 >> 3;
    else
      v20 = v19 / v18;
    *(_DWORD *)(v15 + 60) = v20;
    v21 = 8 * *(_DWORD *)(v15 + 56);
    if ( v21 >= 0x40 )
      v22 = 0LL;
    else
      v22 = 1LL << v21;
    *(_QWORD *)(v15 + 64) = v22 - 1;
    *(_DWORD *)(v15 + 72) = 8 * *(_DWORD *)(v15 + 56) - v12[1];
    *(_DWORD *)(v15 + 76) = v12[1];
    memmove((void *)(v15 + 96), v12, (unsigned int)(v12[7] + 32));
  }
  else
  {
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    v13 = -1072431102;
  }
  *(_DWORD *)(a2 + 56) -= v8;
  result = v13;
  *(_QWORD *)(a2 + 48) += v8;
  return result;
}
