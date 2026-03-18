/*
 * XREFs of SmKmStoreHelperCommandProcess @ 0x14027384C
 * Callers:
 *     SmKmStoreHelperWorker @ 0x14000C8E0 (SmKmStoreHelperWorker.c)
 *     SmKmStoreHelperCommandCleanup @ 0x140273790 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     SmSetThreadPagePriority @ 0x14000B6CC (SmSetThreadPagePriority.c)
 *     ZwUnlockVirtualMemory @ 0x1401810E0 (ZwUnlockVirtualMemory.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x1402729FC (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 *     SmFpAllocate @ 0x140272DD0 (SmFpAllocate.c)
 *     SmFpFree @ 0x140272EDC (SmFpFree.c)
 *     SmKmUnlockMdl @ 0x140273F34 (SmKmUnlockMdl.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x140274274 (SmKmVirtualLockCtxLockMemory.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x140274394 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406EA930 (MmStoreAllocateVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x1406EAB28 (MmStoreFreeVirtualMemory.c)
 */

void __fastcall SmKmStoreHelperCommandProcess(__int64 a1, int a2, __int64 a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // ebx
  volatile LONG *v10; // rcx
  struct _MDL *v11; // r14
  int v12; // r12d
  struct _MDL *v13; // r13
  ULONG_PTR v14; // rax
  ULONG_PTR v15; // rcx
  ULONG_PTR v16; // rcx
  PVOID VirtualMemory; // rax
  ULONG_PTR v18; // rcx
  struct _KTHREAD *v19[2]; // [rsp+30h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR NumberOfBytesToUnlock; // [rsp+88h] [rbp+48h] BYREF

  v5 = a2 - 2;
  if ( !v5 )
  {
    v16 = *(_QWORD *)(a3 + 8);
    BaseAddress = *(PVOID *)a3;
    NumberOfBytesToUnlock = v16;
    VirtualMemory = (PVOID)MmStoreAllocateVirtualMemory();
    BaseAddress = VirtualMemory;
    if ( VirtualMemory )
    {
      v18 = *(_QWORD *)(a1 + 104);
      if ( v18 )
      {
        v9 = SmKmVirtualLockCtxLockMemory(v18);
        if ( v9 < 0 )
        {
          MmStoreFreeVirtualMemory(BaseAddress);
          goto LABEL_32;
        }
        VirtualMemory = BaseAddress;
      }
      *(_QWORD *)(a3 + 24) = VirtualMemory;
      goto LABEL_31;
    }
LABEL_10:
    v9 = -1073741670;
    goto LABEL_32;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( !v8 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))a3)(a1, *(_QWORD *)(a3 + 8), 0LL);
        goto LABEL_32;
      }
      if ( v8 != 1 )
      {
        v9 = -1073741811;
        goto LABEL_32;
      }
      BaseAddress = *(PVOID *)a3;
      NumberOfBytesToUnlock = *(_QWORD *)(a3 + 8);
      ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &NumberOfBytesToUnlock, 1u);
LABEL_31:
      v9 = 0;
      goto LABEL_32;
    }
    v10 = *(volatile LONG **)(a1 + 112);
    BaseAddress = *(PVOID *)a3;
    NumberOfBytesToUnlock = *(_QWORD *)(a3 + 8);
    v11 = (struct _MDL *)SmFpAllocate(v10, 2, a1, 0LL, *(_DWORD *)(a3 + 20) & 1);
    if ( v11 )
    {
      v19[0] = KeGetCurrentThread();
      v12 = SmSetThreadPagePriority(v19);
      v9 = SmKmProbeAndLockAddress((unsigned __int64)BaseAddress, NumberOfBytesToUnlock, v11, 0);
      if ( v9 == -1073741395 && (*(_DWORD *)(a3 + 20) & 1) != 0 )
      {
        v13 = (struct _MDL *)SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 112), 4, a1, 0LL, 1);
        v9 = SmKmProbeAndLockAddress((unsigned __int64)BaseAddress, NumberOfBytesToUnlock, v11, 1);
        if ( v9 >= 0 )
          v11->Next = v13;
        else
          SmFpFree(*(_QWORD *)(a1 + 112), 4, a1, v13);
      }
      if ( v12 != *(_DWORD *)(a3 + 16) )
        SmSetThreadPagePriority(v19);
      if ( v9 >= 0 )
      {
        BaseAddress = (PVOID)SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 112), 5, a1, (__int64)v11, *(_DWORD *)(a3 + 20) & 1);
        if ( BaseAddress )
        {
          *(_QWORD *)(a3 + 24) = v11;
          goto LABEL_31;
        }
        v9 = -1073741670;
        SmKmUnlockMdl(v11);
      }
      SmFpFree(*(_QWORD *)(a1 + 112), 2, a1, v11);
      goto LABEL_32;
    }
    goto LABEL_10;
  }
  v14 = *(_QWORD *)(a3 + 8);
  BaseAddress = *(PVOID *)a3;
  NumberOfBytesToUnlock = v14;
  MmStoreFreeVirtualMemory(BaseAddress);
  v15 = *(_QWORD *)(a1 + 104);
  v9 = 0;
  if ( v15 )
    SmKmVirtualLockCtxMemoryUnlocked(v15);
LABEL_32:
  *(_DWORD *)(a3 + 32) = v9;
}
