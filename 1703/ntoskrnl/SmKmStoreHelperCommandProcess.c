/*
 * XREFs of SmKmStoreHelperCommandProcess @ 0x140120FFC
 * Callers:
 *     SmKmStoreHelperWorker @ 0x140120F30 (SmKmStoreHelperWorker.c)
 *     SmKmStoreHelperCommandCleanup @ 0x14024DFB0 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     SmKmUnlockMdl @ 0x140039E90 (SmKmUnlockMdl.c)
 *     SmFpFree @ 0x140054CF0 (SmFpFree.c)
 *     SmFpAllocate @ 0x140121890 (SmFpAllocate.c)
 *     SmSetThreadPagePriority @ 0x140121D78 (SmSetThreadPagePriority.c)
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x140121E64 (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 *     ZwUnlockVirtualMemory @ 0x1401816E0 (ZwUnlockVirtualMemory.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x14024E700 (SmKmVirtualLockCtxLockMemory.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x14024E820 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     MmStoreFreeVirtualMemory @ 0x140430BB4 (MmStoreFreeVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x1404543B0 (MmStoreAllocateVirtualMemory.c)
 */

void __fastcall SmKmStoreHelperCommandProcess(__int64 a1, int a2, __int64 a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  struct _MDL *v8; // r14
  __int64 v9; // rdx
  unsigned int v10; // r12d
  int v11; // ebx
  ULONG_PTR v12; // rcx
  PVOID VirtualMemory; // rax
  ULONG_PTR v14; // rcx
  ULONG_PTR v15; // rax
  ULONG_PTR v16; // rcx
  int v17; // edx
  struct _MDL *v18; // r13
  _QWORD v19[2]; // [rsp+30h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR NumberOfBytesToUnlock; // [rsp+88h] [rbp+48h] BYREF

  v5 = a2 - 2;
  if ( !v5 )
  {
    v12 = *(_QWORD *)(a3 + 8);
    BaseAddress = *(PVOID *)a3;
    NumberOfBytesToUnlock = v12;
    VirtualMemory = (PVOID)MmStoreAllocateVirtualMemory();
    BaseAddress = VirtualMemory;
    if ( VirtualMemory )
    {
      v14 = *(_QWORD *)(a1 + 104);
      if ( v14 )
      {
        v11 = SmKmVirtualLockCtxLockMemory(v14);
        if ( v11 < 0 )
        {
          MmStoreFreeVirtualMemory(BaseAddress);
          goto LABEL_12;
        }
        VirtualMemory = BaseAddress;
      }
      *(_QWORD *)(a3 + 24) = VirtualMemory;
      goto LABEL_11;
    }
LABEL_23:
    v11 = -1073741670;
    goto LABEL_12;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v17 = v7 - 1;
      if ( !v17 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))a3)(a1, *(_QWORD *)(a3 + 8), 0LL);
        goto LABEL_12;
      }
      if ( v17 != 1 )
      {
        v11 = -1073741811;
        goto LABEL_12;
      }
      BaseAddress = *(PVOID *)a3;
      NumberOfBytesToUnlock = *(_QWORD *)(a3 + 8);
      ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &NumberOfBytesToUnlock, 1u);
      goto LABEL_11;
    }
    BaseAddress = *(PVOID *)a3;
    NumberOfBytesToUnlock = *(_QWORD *)(a3 + 8);
    v8 = (struct _MDL *)SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 112), *(_DWORD *)(a3 + 20) & 1);
    if ( v8 )
    {
      v9 = *(unsigned int *)(a3 + 16);
      v19[0] = KeGetCurrentThread();
      v10 = SmSetThreadPagePriority(v19, v9);
      v11 = SmKmProbeAndLockAddress(BaseAddress, NumberOfBytesToUnlock, v8, 0);
      if ( v11 == -1073741395 && (*(_DWORD *)(a3 + 20) & 1) != 0 )
      {
        v18 = (struct _MDL *)SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 112), 1);
        v11 = SmKmProbeAndLockAddress(BaseAddress, NumberOfBytesToUnlock, v8, 1u);
        if ( v11 >= 0 )
          v8->Next = v18;
        else
          SmFpFree(*(_QWORD *)(a1 + 112), 4, a1, v18);
      }
      if ( v10 != *(_DWORD *)(a3 + 16) )
        SmSetThreadPagePriority(v19, v10);
      if ( v11 >= 0 )
      {
        BaseAddress = (PVOID)SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 112), *(_DWORD *)(a3 + 20) & 1);
        if ( BaseAddress )
        {
          *(_QWORD *)(a3 + 24) = v8;
LABEL_11:
          v11 = 0;
          goto LABEL_12;
        }
        v11 = -1073741670;
        SmKmUnlockMdl(v8, *(_QWORD *)(a1 + 112), a1);
      }
      SmFpFree(*(_QWORD *)(a1 + 112), 2, a1, v8);
      goto LABEL_12;
    }
    goto LABEL_23;
  }
  v15 = *(_QWORD *)(a3 + 8);
  BaseAddress = *(PVOID *)a3;
  NumberOfBytesToUnlock = v15;
  MmStoreFreeVirtualMemory(BaseAddress);
  v16 = *(_QWORD *)(a1 + 104);
  v11 = 0;
  if ( v16 )
    SmKmVirtualLockCtxMemoryUnlocked(v16);
LABEL_12:
  *(_DWORD *)(a3 + 32) = v11;
}
