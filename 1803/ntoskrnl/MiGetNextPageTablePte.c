/*
 * XREFs of MiGetNextPageTablePte @ 0x140011270
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14000F720 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiReleaseWalkLocks @ 0x1400B5D98 (MiReleaseWalkLocks.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     MiFlushAllFilesystemPages @ 0x140255BA8 (MiFlushAllFilesystemPages.c)
 */

__int64 __fastcall MiGetNextPageTablePte(int *a1, __int64 *a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 result; // rax
  int v8; // r10d
  __int64 v9; // r14
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  void (__fastcall *v13)(int *); // rax
  ULONG_PTR BugCheckParameter4; // rbx
  int v15; // eax
  ULONG_PTR v16; // rdi
  __int64 v17; // rdx
  unsigned __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  unsigned __int64 v21; // rax
  __int64 v22; // [rsp+58h] [rbp+10h] BYREF

  v3 = (unsigned __int64)a2;
  LODWORD(v4) = a3;
  v5 = *a2;
  if ( v3 >= 0xFFFFF6FB7DBED000uLL
    && v3 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v5 & 1) != 0
    && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
  {
    v18 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 8 * ((v3 >> 3) & 0x1FF));
      v20 = v5 | 0x20;
      if ( (v19 & 0x20) == 0 )
        v20 = v5;
      v5 = v20;
      if ( (v19 & 0x42) != 0 )
        v5 = v20 | 0x42;
    }
  }
  v22 = v5;
  if ( !v5 )
    return !(_DWORD)v4 && (*a1 & 1) != 0;
  if ( (v5 & 1) != 0 && v3 == 0xFFFFF6FB7DBEDF68uLL )
    return 0LL;
  if ( (v5 & 1) == 0 )
  {
    if ( (_DWORD)v4 )
    {
      if ( (*a1 & 0x80u) != 0 )
        return 0LL;
      v12 = *((_QWORD *)a1 + 2);
      if ( v12 )
        MiFlushTbList(v12);
      v13 = (void (__fastcall *)(int *))*((_QWORD *)a1 + 20);
      if ( v13 )
        v13(a1);
      if ( !*((_BYTE *)a1 + 8) )
        MiReleaseWalkLocks(a1);
      BugCheckParameter4 = (__int64)(v3 << 25) >> 16;
      v15 = MmAccessFault(
              ((unsigned __int64)*((unsigned __int8 *)a1 + 9) << 57) | 0x100000000000002LL,
              BugCheckParameter4);
      v16 = v15;
      if ( v15 < 0 )
      {
        MiFlushAllFilesystemPages(1LL);
        KeBugCheckEx(0x7Au, 1uLL, v16, (ULONG_PTR)KeGetCurrentThread()->ApcState.Process, BugCheckParameter4);
      }
    }
    return 1LL;
  }
  v8 = *a1;
  if ( (v5 & 0x80u) != 0LL )
  {
    if ( (v8 & 0x40) == 0 )
      return 1LL;
    v17 = *((_QWORD *)a1 + 21);
    for ( *(_DWORD *)v17 = v4; (_DWORD)v4; LODWORD(v4) = v4 - 1 )
      v3 = (__int64)(v3 << 25) >> 16;
    if ( v3 < ((*((_QWORD *)a1 + 4) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
      v3 = ((*((_QWORD *)a1 + 4) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    result = 3LL;
    *(_QWORD *)(v17 + 8) = v3;
  }
  else
  {
    if ( (v8 & 0x200) != 0 && qword_1403CC468 != (PVOID)qword_1403CC470 )
    {
      v21 = MI_READ_PTE_LOCK_FREE(&v22);
      if ( (PVOID)((v21 >> 12) & 0xFFFFFFFFFLL) == *(&qword_1403CC468 + v4) )
        return 0LL;
    }
    if ( (int)v4 > *((unsigned __int8 *)a1 + 10) )
      return 2LL;
    if ( (v8 & 0x40) == 0 )
      return 1LL;
    v9 = *((_QWORD *)a1 + 21);
    if ( (v8 & 4) != 0 )
    {
      MiLockPageTableInternal(*((_QWORD *)a1 + 3), v3, 0LL);
      MiUnlockPageTableInternal(*((_QWORD *)a1 + 3), ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      *((_QWORD *)a1 + 6) = v3;
    }
    v10 = (__int64)(v3 << 25) >> 16;
    v11 = ((*((_QWORD *)a1 + 4) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    result = 3LL;
    if ( v10 >= v11 )
      v11 = v10;
    *(_QWORD *)(v9 + 8) = v11;
  }
  return result;
}
