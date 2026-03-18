/*
 * XREFs of MiCombineWorkingSet @ 0x1400CF650
 * Callers:
 *     MiCombineIdenticalPages @ 0x140509D90 (MiCombineIdenticalPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiWalkPageTables @ 0x14009CD60 (MiWalkPageTables.c)
 *     MiIsStoreProcess @ 0x1400E6B90 (MiIsStoreProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiCombineWorkingSet(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // r14
  int v4; // r12d
  void *v5; // rsi
  __int64 v6; // r15
  LONG *SharedVm; // rbx
  KIRQL v8; // al
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  SIZE_T v13; // rbx
  PVOID PoolWithTag; // rax
  int v16; // [rsp+28h] [rbp-A9h]
  _QWORD v17[5]; // [rsp+30h] [rbp-A1h] BYREF
  _QWORD v18[20]; // [rsp+58h] [rbp-79h] BYREF

  v1 = 0;
  LODWORD(v17[0]) = 0;
  memset(&v17[1], 0, 0x20uLL);
  memset(v18, 0, 0x98uLL);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 3;
  v16 = *(_DWORD *)(a1 + 52);
  v5 = 0LL;
  v6 = v3 - 1280;
  if ( (*(_BYTE *)(v3 + 192) & 7) != 0 )
    v6 = 0LL;
  SharedVm = MiGetSharedVm(v3);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  BYTE4(v18[0]) = v8;
  if ( !v6
    || (*(_DWORD *)(v6 + 772) & 0xC00u) >= 0xC00
    && !*(_QWORD *)(v3 + 104)
    && !(unsigned int)MiIsStoreProcess(v6, v9, v10, v11) )
  {
    v12 = *(_QWORD *)(v3 + 144);
    if ( v12 )
    {
      v13 = (32 * v12 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      while ( 1 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x6D75534Du);
        v5 = PoolWithTag;
        if ( PoolWithTag )
          break;
        v13 >>= 1;
        if ( v13 < 0x10000 )
          goto LABEL_11;
      }
      v18[3] = -1LL;
      v17[4] = PoolWithTag;
      LODWORD(v17[0]) = v16;
      v18[18] = v17;
      v18[16] = MiCombinePte;
      v18[17] = MiCombineWorkingSetTail;
      v17[3] = a1;
      v17[2] = v13 >> 5;
      v18[1] = v3;
      LODWORD(v18[0]) = 2;
      BYTE6(v18[0]) = 3;
      v4 = MiWalkPageTables((__int64)v18);
    }
  }
LABEL_11:
  LOBYTE(v9) = BYTE4(v18[0]);
  MiUnlockWorkingSetExclusive(v3, v9);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v4 == 2 )
    return (unsigned int)-1073741248;
  return v1;
}
