/*
 * XREFs of ViFreeMapRegisterFile @ 0x14081AD7C
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1408176D0 (VfAllocateAdapterChannel.c)
 *     VfBuildScatterGatherList @ 0x140817F50 (VfBuildScatterGatherList.c)
 *     VfCancelAdapterChannel @ 0x140818470 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x140818830 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1408188E0 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x140818AD0 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x140818DF0 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x140819BB0 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x140819D70 (ViAdapterCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     IoFreeMdl @ 0x140041DB0 (IoFreeMdl.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmUnmapLockedPages @ 0x140110450 (MmUnmapLockedPages.c)
 *     VfUtilFreePoolCheckIRQL @ 0x140160970 (VfUtilFreePoolCheckIRQL.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ViCheckPadding @ 0x14081A648 (ViCheckPadding.c)
 *     ViFreeToContiguousMemory @ 0x14081AFA4 (ViFreeToContiguousMemory.c)
 */

__int64 __fastcall ViFreeMapRegisterFile(__int64 a1, __int64 a2)
{
  KIRQL v4; // si
  __int64 v5; // r9
  _QWORD *v6; // r8
  __int64 v7; // rdi
  unsigned int v8; // esi
  __int64 i; // rdi
  __int64 v10; // rcx
  unsigned int v11; // r9d
  ULONG_PTR v12; // r8
  __int64 v13; // rdx
  _SLIST_ENTRY *v14; // rcx

  if ( !a2 || *(_DWORD *)a2 != -1393569779 )
    return 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 120));
  v5 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(v5 + 8) != a2 + 8 || (v6 = *(_QWORD **)(a2 + 16), *v6 != a2 + 8) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 120));
  __writecr8(v4);
  *(_DWORD *)a2 = 0;
  v7 = *(_QWORD *)(a2 + 40);
  if ( v7 )
  {
    if ( (*(_BYTE *)(v7 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v7 + 24), *(PMDL *)(a2 + 40));
    IoFreeMdl((PMDL)v7);
  }
  MmUnmapLockedPages(*(PVOID *)(a2 + 64), *(PMDL *)(a2 + 56));
  v8 = 0;
  for ( i = a2 + 88; v8 < *(_DWORD *)(a2 + 28); i += 32LL )
  {
    v10 = *(_QWORD *)(i + 16);
    if ( *(_QWORD *)i )
    {
      v11 = *(_DWORD *)(i + 8);
      v12 = (*(_QWORD *)i & 0xFFFLL) + v10 + 4096;
    }
    else
    {
      v12 = 0LL;
      v11 = 0;
    }
    ViCheckPadding(v10, 0x3000u, v12, v11);
    v13 = *(_QWORD *)(i + 16);
    *(_DWORD *)(i + 12) = 0;
    if ( !(unsigned int)ViFreeToContiguousMemory(a1, v13, v8) )
      ExFreePoolWithTag(*(PVOID *)(i + 16), 0);
    ++v8;
  }
  IoFreeMdl(*(PMDL *)(a2 + 56));
  v14 = *(_SLIST_ENTRY **)(a2 + 72);
  if ( v14 )
    VfUtilFreePoolCheckIRQL(v14);
  *(_QWORD *)a2 = 0LL;
  VfUtilFreePoolCheckIRQL((_SLIST_ENTRY *)a2);
  return 1LL;
}
