/*
 * XREFs of MmGetSectionRange @ 0x1406E21A8
 * Callers:
 *     PoSetHiberRange @ 0x140241970 (PoSetHiberRange.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlImageNtHeader @ 0x1400AE3B0 (RtlImageNtHeader.c)
 *     MiLookupDataTableEntry @ 0x1400DCDF4 (MiLookupDataTableEntry.c)
 */

__int64 __fastcall MmGetSectionRange(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v7; // edi
  PVOID *v8; // rax
  PVOID *v9; // rbp
  PVOID v10; // rcx
  unsigned __int64 v11; // rbx
  PIMAGE_NT_HEADERS v12; // rax
  int v13; // r10d
  int *v14; // rdx
  int v15; // r8d
  unsigned __int64 v16; // r9

  CurrentThread = KeGetCurrentThread();
  v7 = -1073741275;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v8 = MiLookupDataTableEntry(a1, 1);
  v9 = v8;
  if ( v8 )
  {
    v10 = v8[6];
    v11 = a1 - (_QWORD)v10;
    v12 = RtlImageNtHeader(v10);
    v13 = 0;
    if ( v12->FileHeader.NumberOfSections )
    {
      v14 = (int *)((char *)&v12->OptionalHeader.SizeOfInitializedData + v12->FileHeader.SizeOfOptionalHeader);
      while ( 1 )
      {
        v15 = *v14;
        v16 = (unsigned int)v14[1];
        if ( v14[2] >= (unsigned int)*v14 )
          v15 = v14[2];
        if ( v11 >= v16 && v11 < (unsigned int)(v16 + v15) )
          break;
        v14 += 10;
        if ( ++v13 >= (unsigned int)v12->FileHeader.NumberOfSections )
          goto LABEL_11;
      }
      *a3 = v15;
      *a2 = (char *)v9[6] + v16;
      v7 = 0;
    }
  }
LABEL_11:
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v7;
}
