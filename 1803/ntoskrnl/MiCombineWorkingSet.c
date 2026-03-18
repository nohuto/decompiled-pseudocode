/*
 * XREFs of MiCombineWorkingSet @ 0x140004854
 * Callers:
 *     MiCombineIdenticalPages @ 0x14048CAE4 (MiCombineIdenticalPages.c)
 * Callees:
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiIsStoreProcess @ 0x1400D5C14 (MiIsStoreProcess.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiFreeCombineMdls @ 0x14048CA2C (MiFreeCombineMdls.c)
 */

__int64 __fastcall MiCombineWorkingSet(__int64 a1)
{
  __int64 v2; // r14
  unsigned int v3; // edi
  int v4; // r13d
  void *v5; // rsi
  __int64 v6; // rbx
  int v7; // r12d
  __int64 v8; // rdx
  __int64 v9; // rbx
  SIZE_T v10; // rbx
  PVOID PoolWithTag; // rax
  _QWORD v13[6]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v14[22]; // [rsp+58h] [rbp-B0h] BYREF

  memset(v13, 0, 0x28uLL);
  memset(v14, 0, sizeof(v14));
  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 52);
  v5 = 0LL;
  v6 = v2 - 1280;
  v7 = 3;
  if ( (*(_BYTE *)(v2 + 184) & 7) != 0 )
    v6 = 0LL;
  BYTE4(v14[0]) = MiLockWorkingSetShared(v2);
  if ( !v6 || (*(_DWORD *)(v6 + 772) & 0xC00u) >= 0xC00 && !*(_QWORD *)(v2 + 104) && !(unsigned int)MiIsStoreProcess(v6) )
  {
    v9 = *(_QWORD *)(v2 + 144);
    if ( v9 )
    {
      v10 = (32 * v9 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      while ( 1 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x6D75534Du);
        v5 = PoolWithTag;
        if ( PoolWithTag )
          break;
        v10 >>= 1;
        if ( v10 < 0x10000 )
          goto LABEL_11;
      }
      v14[5] = -1LL;
      v13[4] = PoolWithTag;
      v14[21] = v13;
      v14[19] = MiCombinePte;
      v14[20] = MiCombineWorkingSetTail;
      v13[3] = a1;
      v13[2] = v10 >> 5;
      LODWORD(v13[0]) = v4;
      v14[3] = v2;
      LODWORD(v14[0]) = 6;
      BYTE6(v14[0]) = 7;
      v7 = MiWalkPageTables(v14);
    }
  }
LABEL_11:
  LOBYTE(v8) = BYTE4(v14[0]);
  MiUnlockWorkingSetShared(v2, v8);
  MiFreeCombineMdls(a1);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v7 == 4 )
    return (unsigned int)-1073741248;
  return v3;
}
