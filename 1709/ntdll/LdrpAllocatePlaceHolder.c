/*
 * XREFs of LdrpAllocatePlaceHolder @ 0x1800204C0
 * Callers:
 *     LdrpFindOrPrepareLoadingModule @ 0x1800203DC (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpLoadDependentModule @ 0x18002F160 (LdrpLoadDependentModule.c)
 *     LdrpCreatePendingEnclaveModule @ 0x1800D0490 (LdrpCreatePendingEnclaveModule.c)
 * Callees:
 *     LdrpAllocateModuleEntry @ 0x1800205E0 (LdrpAllocateModuleEntry.c)
 *     LdrpLogDllState @ 0x180031CA8 (LdrpLogDllState.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

__int64 __fastcall LdrpAllocatePlaceHolder(
        const void **a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7)
{
  __int64 v10; // rdx
  __int64 Heap; // rax
  __int64 v13; // rbx
  __int64 ModuleEntry; // rax

  v10 = (NtdllBaseTag + 0x40000) | 8u;
  *a6 = 0LL;
  Heap = RtlAllocateHeap(LdrpHeap, v10, *(unsigned __int16 *)a1 + 194LL);
  v13 = Heap;
  if ( Heap )
  {
    *(_QWORD *)(Heap + 176) = -1LL;
    *(_QWORD *)(Heap + 40) = a7;
    *(_QWORD *)(Heap + 48) = a5;
    *(_QWORD *)(Heap + 8) = Heap + 192;
    *(_DWORD *)(Heap + 32) = a3 | 0x8000;
    *(_QWORD *)(Heap + 16) = a2;
    *(_WORD *)Heap = *(_WORD *)a1;
    *(_WORD *)(Heap + 2) = *(_WORD *)a1 + 2;
    memmove((void *)(Heap + 192), a1[1], *(unsigned __int16 *)a1);
    *(_WORD *)(*(_QWORD *)(v13 + 8) + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0;
    ModuleEntry = LdrpAllocateModuleEntry(v13);
    *a6 = ModuleEntry;
    if ( ModuleEntry )
    {
      *(_DWORD *)(ModuleEntry + 268) = a4;
      LdrpLogDllState(0LL, v13, 5292LL);
    }
    else
    {
      RtlFreeHeap(LdrpHeap, 0LL, v13);
    }
  }
  return *a6 == 0 ? 0xC0000017 : 0;
}
