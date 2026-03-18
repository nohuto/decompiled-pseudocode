/*
 * XREFs of IopDestroyDeviceNode @ 0x1405887A0
 * Callers:
 *     IopLegacyResourceAllocation @ 0x14055B6A0 (IopLegacyResourceAllocation.c)
 *     IopRemoveLegacyDeviceNode @ 0x14055B7D0 (IopRemoveLegacyDeviceNode.c)
 *     IopDeleteDevice @ 0x140588740 (IopDeleteDevice.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     IoAddTriageDumpDataBlock @ 0x14015ACC8 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IopUncacheInterfaceInformation @ 0x140553CA8 (IopUncacheInterfaceInformation.c)
 *     IopLegacyResourceAllocation @ 0x14055B6A0 (IopLegacyResourceAllocation.c)
 *     PnpFreeDeviceInstancePath @ 0x140588A74 (PnpFreeDeviceInstancePath.c)
 */

void __fastcall IopDestroyDeviceNode(char *P)
{
  __int64 v2; // r8
  void *v3; // rcx
  void *v4; // rcx
  char *v5; // rdi
  void *v6; // rcx
  unsigned __int16 *v7; // rsi
  __int64 v8; // rax
  unsigned __int16 *v9; // rsi
  __int64 v10; // rax
  PVOID *v11; // rsi
  _QWORD *v12; // rax

  if ( P )
  {
    if ( *((_QWORD *)P + 90) )
    {
      v7 = (unsigned __int16 *)(P + 40);
      IoAddTriageDumpDataBlock((int)P, 728);
      if ( *v7 )
      {
        IoAddTriageDumpDataBlock((int)v7, 2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v7 + 1), *v7);
      }
      if ( *((_WORD *)P + 28) )
      {
        IoAddTriageDumpDataBlock((_DWORD)P + 56, 2);
        IoAddTriageDumpDataBlock(*((_QWORD *)P + 8), *((unsigned __int16 *)P + 28));
      }
      v8 = *((_QWORD *)P + 2);
      if ( v8 && *(_WORD *)(v8 + 56) )
      {
        IoAddTriageDumpDataBlock(v8 + 56, 2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*((_QWORD *)P + 2) + 64LL),
          *(unsigned __int16 *)(*((_QWORD *)P + 2) + 56LL));
      }
      KeBugCheckEx(0xCAu, 5uLL, *((_QWORD *)P + 4), *((_QWORD *)P + 90), 0x11uLL);
    }
    v2 = *((_QWORD *)P + 4);
    if ( (*(_DWORD *)(v2 + 48) & 0x1000) != 0 && *((_QWORD *)P + 2) )
    {
      v9 = (unsigned __int16 *)(P + 40);
      IoAddTriageDumpDataBlock((int)P, 728);
      if ( *v9 )
      {
        IoAddTriageDumpDataBlock((int)v9, 2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v9 + 1), *v9);
      }
      if ( *((_WORD *)P + 28) )
      {
        IoAddTriageDumpDataBlock((_DWORD)P + 56, 2);
        IoAddTriageDumpDataBlock(*((_QWORD *)P + 8), *((unsigned __int16 *)P + 28));
      }
      v10 = *((_QWORD *)P + 2);
      if ( v10 && *(_WORD *)(v10 + 56) )
      {
        IoAddTriageDumpDataBlock(v10 + 56, 2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*((_QWORD *)P + 2) + 64LL),
          *(unsigned __int16 *)(*((_QWORD *)P + 2) + 56LL));
      }
      KeBugCheckEx(0xCAu, 5uLL, *((_QWORD *)P + 4), 0LL, 0LL);
    }
    if ( (*((_DWORD *)P + 99) & 0x20000) != 0 )
    {
      IopLegacyResourceAllocation(-1, (__int64)PnpDriverObject, v2, 0LL, 0LL);
    }
    else
    {
      v3 = (void *)*((_QWORD *)P + 54);
      if ( v3 )
        ObfDereferenceObject(v3);
      if ( *((_WORD *)P + 28) )
        ExFreePoolWithTag(*((PVOID *)P + 8), 0);
      PnpFreeDeviceInstancePath(P);
      ExAcquireFastMutex(&PiResourceListLock);
      v4 = (void *)*((_QWORD *)P + 55);
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      KeReleaseGuardedMutex(&PiResourceListLock);
      IopUncacheInterfaceInformation(*((_QWORD *)P + 4), 0);
      v5 = P + 608;
      while ( *(char **)v5 != v5 )
      {
        v11 = *(PVOID **)v5;
        if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || (v12 = *v11, *((PVOID **)*v11 + 1) != v11) )
          __fastfail(3u);
        *(_QWORD *)v5 = v12;
        v12[1] = v5;
        ExFreePoolWithTag(v11[3], 0);
        ExFreePoolWithTag(v11, 0);
      }
      v6 = (void *)*((_QWORD *)P + 89);
      if ( v6 )
        ExFreePoolWithTag(v6, 0x62655250u);
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 4) + 312LL) + 40LL) = 0LL;
      ExFreePoolWithTag(P, 0);
      _InterlockedDecrement(&IopNumberDeviceNodes);
    }
  }
}
