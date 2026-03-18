/*
 * XREFs of IopAllocatePassiveInterruptBlock @ 0x140726D00
 * Callers:
 *     IopConnectInterrupt @ 0x14060BCDC (IopConnectInterrupt.c)
 * Callees:
 *     KeInitializeDpc @ 0x140038FE0 (KeInitializeDpc.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     IopFindPassiveInterruptBlock @ 0x14023B27C (IopFindPassiveInterruptBlock.c)
 *     IopInsertPassiveInterruptBlock @ 0x14023B2F4 (IopInsertPassiveInterruptBlock.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopAllocatePassiveInterruptBlock(_DWORD *a1, _OWORD *a2)
{
  int v4; // eax
  unsigned int v5; // esi
  int inserted; // edi
  PVOID PoolWithTag; // rax
  __int64 v8; // rbx
  int v9; // eax
  char v11; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 == 1 && ((v4 = a1[2]) == 0 || v4 == 3) )
  {
    v5 = a1[3];
    if ( IopFindPassiveInterruptBlock(v5) )
    {
      return 0;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xC8uLL, 0x6269704Bu);
      v8 = (__int64)PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0xC8uLL);
        *(_QWORD *)(v8 + 8) = v8;
        *(_QWORD *)v8 = v8;
        *(_DWORD *)(v8 + 16) = a1[2];
        *(_DWORD *)(v8 + 20) = v5;
        *(_DWORD *)(v8 + 32) = a1[6];
        *(_OWORD *)(v8 + 40) = *a2;
        v9 = a1[2];
        if ( v9 )
        {
          if ( v9 == 3 )
            *(_BYTE *)(v8 + 28) = 0;
        }
        else
        {
          *(_DWORD *)(v8 + 24) = a1[16];
          *(_BYTE *)(v8 + 28) = ((__int64 (__fastcall *)(_QWORD))off_140398860[0])(0LL);
        }
        KeInitializeEvent((PRKEVENT)(v8 + 168), SynchronizationEvent, 1u);
        KeInitializeDpc((PRKDPC)(v8 + 104), (PKDEFERRED_ROUTINE)IopPassiveInterruptDpc, (PVOID)v8);
        *(_QWORD *)(v8 + 56) = 0LL;
        *(_QWORD *)(v8 + 72) = 0LL;
        *(_QWORD *)(v8 + 88) = IopPassiveInterruptWorker;
        *(_QWORD *)(v8 + 96) = v8;
        *(_BYTE *)(v8 + 105) = 2;
        inserted = IopInsertPassiveInterruptBlock(v8, &v11);
        if ( inserted < 0 || !v11 )
          ExFreePoolWithTag((PVOID)v8, 0x6269704Bu);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)inserted;
}
