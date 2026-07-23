/*
 * XREFs of IoFillDumpHeader @ 0x1401F5874
 * Callers:
 *     IopConstructInMemoryDumpHeader @ 0x1401F7684 (IopConstructInMemoryDumpHeader.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1401F8550 (IopWriteCapsuleTriageDumpToFirmware.c)
 *     KeInitializeCrashDumpHeader @ 0x1401F9000 (KeInitializeCrashDumpHeader.c)
 *     IopLiveDumpEndMirroringCallback @ 0x14042B400 (IopLiveDumpEndMirroringCallback.c)
 *     DbgkpTriageDumpFillHeaders @ 0x1406AEA00 (DbgkpTriageDumpFillHeaders.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x14008D0E0 (KeQueryActiveProcessorCountEx.c)
 *     RtlGetNtProductType @ 0x1400F9570 (RtlGetNtProductType.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MmGetPhysicalMemoryRanges @ 0x140575450 (MmGetPhysicalMemoryRanges.c)
 */

__int64 __fastcall IoFillDumpHeader(
        _NT_PRODUCT_TYPE *a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _NT_PRODUCT_TYPE *v10; // r11
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rax
  size_t v13; // r8
  __int64 result; // rax

  v10 = a1;
  v11 = 2048LL;
  if ( ((unsigned __int8)a1 & 4) != 0 )
  {
    *a1 = 1162297680;
    v10 = a1 + 1;
    v11 = 2047LL;
  }
  memset64(v10, 0x4547415045474150uLL, v11 >> 1);
  if ( (v11 & 1) != 0 )
    v10[v11 - 1] = 1162297680;
  *((_QWORD *)a1 + 9) = a5;
  *((_QWORD *)a1 + 10) = a6;
  *((_QWORD *)a1 + 11) = a7;
  *((_DWORD *)a1 + 1) = 875976004;
  *((_DWORD *)a1 + 14) = a3;
  *((_QWORD *)a1 + 8) = a4;
  if ( a8 )
  {
    *((_QWORD *)a1 + 2) = *(_QWORD *)(*(_QWORD *)(a8 + 184) + 40LL) & 0xFFFFFFFFFFFFF000uLL;
  }
  else
  {
    v12 = __readcr3();
    *((_QWORD *)a1 + 2) = v12 & 0xFFFFFFFFFFFFF000uLL;
  }
  *((_DWORD *)a1 + 12) = 34404;
  *((_DWORD *)a1 + 998) = a2;
  *((_QWORD *)a1 + 3) = MmPfnDatabase;
  *((_QWORD *)a1 + 4) = &PsLoadedModuleList;
  *((_QWORD *)a1 + 5) = &PsActiveProcessHead;
  *((_QWORD *)a1 + 16) = &KdDebuggerDataBlock;
  *((_DWORD *)a1 + 13) = KeQueryActiveProcessorCountEx(0xFFFFu);
  *((_DWORD *)a1 + 2) = 15;
  *((_DWORD *)a1 + 3) = 16299;
  if ( (unsigned int)(a2 - 5) > 1 && MmPhysicalMemoryBlock )
  {
    if ( KeGetCurrentIrql() <= 1u )
      MmGetPhysicalMemoryRanges();
    v13 = 16 * ((unsigned int)(*(_DWORD *)MmPhysicalMemoryBlock - 1) + 2LL);
    if ( v13 > 0x2BC )
      v13 = 700LL;
    memmove(a1 + 34, MmPhysicalMemoryBlock, v13);
  }
  else
  {
    memset(a1 + 34, 0, 0x2BCuLL);
  }
  memset(a1 + 210, 0, 0xBB8uLL);
  *((_QWORD *)a1 + 481) = 0LL;
  *((_DWORD *)a1 + 966) = 0;
  *((_QWORD *)a1 + 482) = 0LL;
  *((_DWORD *)a1 + 960) = -2147483645;
  *((_DWORD *)a1 + 961) = 1;
  *((_DWORD *)a1 + 1002) = MEMORY[0xFFFFF78000000014];
  *((_DWORD *)a1 + 1003) = MEMORY[0xFFFFF78000000018];
  *((_DWORD *)a1 + 1036) = MEMORY[0xFFFFF78000000008];
  *((_DWORD *)a1 + 1037) = MEMORY[0xFFFFF7800000000C];
  RtlGetNtProductType(a1 + 1040);
  *((_DWORD *)a1 + 1041) = MEMORY[0xFFFFF780000002D0];
  result = MEMORY[0xFFFFF780000002C4];
  *((_DWORD *)a1 + 1044) = 0;
  *((_DWORD *)a1 + 1045) = result;
  return result;
}
