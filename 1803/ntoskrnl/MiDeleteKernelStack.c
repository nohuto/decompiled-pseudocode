/*
 * XREFs of MiDeleteKernelStack @ 0x140025C60
 * Callers:
 *     MiDeleteCachedKernelStack @ 0x140038BCC (MiDeleteCachedKernelStack.c)
 *     MmDeleteKernelStack @ 0x140130270 (MmDeleteKernelStack.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiDeleteValidSystemPage @ 0x140028710 (MiDeleteValidSystemPage.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

unsigned __int64 __fastcall MiDeleteKernelStack(__int64 a1, char a2)
{
  unsigned int v4; // eax
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 *v9; // r15
  __int64 *v10; // rbx
  unsigned __int64 v11; // r14
  unsigned __int8 v12; // al
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // r10
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // [rsp+20h] [rbp-78h]
  unsigned __int64 v23[6]; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int8 v24; // [rsp+A8h] [rbp+10h]
  unsigned int v25; // [rsp+B0h] [rbp+18h]
  __int64 v26; // [rsp+B8h] [rbp+20h] BYREF

  memset(v23, 0, 0x20uLL);
  if ( (a2 & 1) != 0 )
    v4 = 18;
  else
    v4 = (unsigned __int8)byte_1403CC2BC;
  v5 = v4 + 1;
  v6 = v4;
  v7 = 0LL;
  v25 = v4 + 1;
  v22 = v4;
  v8 = 0LL;
  v9 = (__int64 *)(a1 - 8LL * v4);
  v10 = v9;
  v11 = (unsigned __int64)&v9[v5];
  v12 = MiLockWorkingSetShared((__int64)&unk_1403CCB00);
  v24 = v12;
  if ( (unsigned __int64)v9 >= v11 )
    goto LABEL_17;
  v14 = (unsigned __int64)v9;
  do
  {
    if ( v7 )
    {
      if ( (v14 & 0xFFF) != 0 )
        goto LABEL_7;
      MiUnlockPageTableInternal(&unk_1403CCB00, v7);
    }
    v7 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(&unk_1403CCB00, v7, 0LL);
LABEL_7:
    v15 = *v10;
    if ( v14 >= 0xFFFFF6FB7DBED000uLL
      && v14 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x1800000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
    {
      v13 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v13 )
      {
        v21 = *(_QWORD *)(v13 + 8 * (((unsigned __int64)v10 >> 3) & 0x1FF));
        v13 = v15 | 0x20;
        if ( (v21 & 0x20) == 0 )
          v13 = *v10;
        v15 = v13;
        if ( (v21 & 0x42) != 0 )
          v15 = v13 | 0x42;
      }
    }
    v26 = v15;
    if ( (v15 & 1) != 0 )
    {
      if ( !v8 )
      {
        v18 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v26);
        v8 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v20 + 48 * (v19 & (v18 >> 12))) >> 40) & 0x3FFLL));
      }
      MiDeleteValidSystemPage(&unk_1403CCB00, v10, 0LL, v23);
      ++v23[0];
    }
    v14 = (unsigned __int64)++v10;
  }
  while ( (unsigned __int64)v10 < v11 );
  v6 = v22;
  LODWORD(v5) = v25;
  if ( v7 )
    MiUnlockPageTableInternal(&unk_1403CCB00, v7);
  v12 = v24;
LABEL_17:
  MiUnlockWorkingSetShared((__int64)&unk_1403CCB00, v12, v13);
  if ( (ULONG_PTR *)v8 == &MiSystemPartition )
  {
    _InterlockedExchangeAdd64(&qword_1403CC670, -v6);
    MiReturnResidentAvailable(v23[0], v16);
  }
  else
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 7104), v23[0]);
  }
  MiReleasePtes(&unk_1403CC258, v9, (unsigned int)v5);
  return MiReturnCommit(v8, v6 - v23[1]);
}
