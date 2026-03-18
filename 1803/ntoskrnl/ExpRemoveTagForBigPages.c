/*
 * XREFs of ExpRemoveTagForBigPages @ 0x1402B8FA4
 * Callers:
 *     ExFreeHeapPool @ 0x1402BD494 (ExFreeHeapPool.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpRemoveTagForBigPages(
        ULONG_PTR BugCheckParameter2,
        int a2,
        _DWORD *a3,
        int *a4,
        _QWORD *a5,
        _WORD *a6,
        _BYTE *a7)
{
  ULONG_PTR v8; // rbx
  KIRQL v11; // r13
  __int64 v12; // r10
  volatile signed __int32 *v13; // r9
  unsigned __int64 v14; // r11
  int v15; // edi
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  unsigned int v18; // r8d
  __int64 v19; // rcx
  int v20; // r11d
  bool v21; // zf
  unsigned int v22; // ecx
  __int64 result; // rax

  v8 = a2;
  v11 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
  if ( (v8 & 0x20) != 0 )
  {
    v12 = *(_QWORD *)(qword_1403CB640 + 8248);
    v13 = (volatile signed __int32 *)(qword_1403CB640 + 8120);
    v14 = *(_QWORD *)(qword_1403CB640 + 8256);
  }
  else
  {
    v12 = PoolBigPageTable;
    v13 = &ExpPoolBigEntriesInUse;
    v14 = PoolBigPageTableSize;
  }
LABEL_4:
  v15 = 1;
  v16 = ((40543 * (unsigned int)(BugCheckParameter2 >> 12)) ^ ((40543
                                                              * (unsigned __int64)(unsigned int)(BugCheckParameter2 >> 12)) >> 32)) & (unsigned int)(v14 - 1);
  while ( 1 )
  {
    v17 = v12 + 24 * v16;
    if ( *(_QWORD *)v17 == BugCheckParameter2 )
      break;
    v16 = (unsigned int)(v16 + 1);
    if ( (unsigned int)v16 >= v14 )
    {
      if ( !v15 )
      {
LABEL_13:
        if ( (v8 & 0x21) != 0
          || v12 != PoolBigPageTable
          || (unsigned int)MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process) == -1
          || (v12 = *(_QWORD *)(qword_1403CB640 + 8248),
              v13 = (volatile signed __int32 *)(qword_1403CB640 + 8120),
              v14 = *(_QWORD *)(qword_1403CB640 + 8256),
              !v12)
          || !v14 )
        {
          KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, v8, 0LL);
        }
        goto LABEL_4;
      }
      v16 = 0LL;
      v15 = 0;
    }
  }
  if ( !v17 )
    goto LABEL_13;
  v18 = *(_DWORD *)(v17 + 12);
  v19 = *(_QWORD *)(v17 + 16);
  v20 = *(_DWORD *)(v17 + 8);
  *a3 = v20;
  v21 = v12 == PoolBigPageTable;
  *a4 = (v18 >> 8) & 0xFFF;
  *a5 = v19;
  if ( !v21 || v20 == 1819242320 )
  {
    LOWORD(v22) = 0;
    LOBYTE(v18) = 0;
  }
  else
  {
    v22 = v18 >> 20;
  }
  *a7 = v18;
  *a6 = v22;
  _InterlockedDecrement(v13);
  _InterlockedIncrement64((volatile signed __int64 *)v17);
  ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
  result = v11;
  __writecr8(v11);
  return result;
}
