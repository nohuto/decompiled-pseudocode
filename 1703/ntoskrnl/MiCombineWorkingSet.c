/*
 * XREFs of MiCombineWorkingSet @ 0x14007369C
 * Callers:
 *     MiCombineIdenticalPages @ 0x14056185C (MiCombineIdenticalPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiIsStoreProcess @ 0x140073C0C (MiIsStoreProcess.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiWalkPageTables @ 0x1400D7BB0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCombineWorkingSet(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // r14
  int v4; // r12d
  void *v5; // rsi
  __int64 v6; // r15
  __int64 SharedVm; // rbx
  KIRQL v8; // al
  __int64 v9; // rdx
  __int64 v10; // rbx
  SIZE_T v11; // rbx
  PVOID PoolWithTag; // rax
  int v14; // [rsp+28h] [rbp-99h]
  _QWORD v15[5]; // [rsp+30h] [rbp-91h] BYREF
  _QWORD v16[18]; // [rsp+58h] [rbp-69h] BYREF

  v1 = 0;
  LODWORD(v15[0]) = 0;
  memset(&v15[1], 0, 0x20uLL);
  memset(v16, 0, sizeof(v16));
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 3;
  v14 = *(_DWORD *)(a1 + 52);
  v5 = 0LL;
  v6 = v3 - 1280;
  if ( (*(_BYTE *)(v3 + 192) & 7) != 0 )
    v6 = 0LL;
  SharedVm = MiGetSharedVm(v3);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  BYTE4(v16[0]) = v8;
  if ( !v6 || (*(_DWORD *)(v6 + 772) & 0xC00u) >= 0xC00 && !*(_QWORD *)(v3 + 104) && !(unsigned int)MiIsStoreProcess(v6) )
  {
    v10 = *(_QWORD *)(v3 + 144);
    if ( v10 )
    {
      v11 = (32 * v10 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      while ( 1 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x6D75534Du);
        v5 = PoolWithTag;
        if ( PoolWithTag )
          break;
        v11 >>= 1;
        if ( v11 < 0x10000 )
          goto LABEL_11;
      }
      v16[3] = -1LL;
      v15[4] = PoolWithTag;
      LODWORD(v15[0]) = v14;
      v16[17] = v15;
      v16[15] = MiCombinePte;
      v16[16] = MiCombineWorkingSetTail;
      v15[3] = a1;
      v15[2] = v11 >> 5;
      v16[1] = v3;
      LODWORD(v16[0]) = 2;
      BYTE6(v16[0]) = 3;
      v4 = MiWalkPageTables(v16);
    }
  }
LABEL_11:
  LOBYTE(v9) = BYTE4(v16[0]);
  MiUnlockWorkingSetExclusive(v3, v9);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v4 == 2 )
    return (unsigned int)-1073741248;
  return v1;
}
