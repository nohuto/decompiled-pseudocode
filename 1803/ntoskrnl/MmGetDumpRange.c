/*
 * XREFs of MmGetDumpRange @ 0x140257488
 * Callers:
 *     IoWriteCrashDump @ 0x140233E8C (IoWriteCrashDump.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     MiAddNonSecuredPagesToDump @ 0x140256D30 (MiAddNonSecuredPagesToDump.c)
 *     MiAddPhysicalPagesToCrashDump @ 0x140256DF8 (MiAddPhysicalPagesToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x140257390 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x1402577EC (MmRemoveSystemCacheFromDump.c)
 *     MiRemoveFreePoolMemoryFromDump @ 0x14025C350 (MiRemoveFreePoolMemoryFromDump.c)
 *     MiRemoveEnclavePagesFromDump @ 0x14026479C (MiRemoveEnclavePagesFromDump.c)
 */

char __fastcall MmGetDumpRange(ULONG_PTR BugCheckParameter2, int a2, char a3)
{
  __int64 *v5; // rdi
  __int64 v6; // rsi
  signed __int64 v7; // rax
  _QWORD *v8; // rcx
  unsigned int i; // edi
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // esi
  unsigned int v13; // r9d
  unsigned int v14; // edx
  int v15; // r10d
  char *v16; // rdi
  unsigned int v17; // r11d
  unsigned int v18; // edx
  char *v19; // rdx
  __int64 j; // r8
  unsigned __int64 v21; // rax
  unsigned int SizeOfBitMap; // edx
  unsigned int v23; // eax
  __int64 v24; // rdi
  __int64 k; // rdi
  __int64 v26; // rsi
  ULONG_PTR v27; // rdi

  if ( a2 )
  {
    v8 = MmPhysicalMemoryBlock;
    for ( i = 0; i < *(_DWORD *)MmPhysicalMemoryBlock; ++i )
    {
      v10 = v8[2 * i + 3];
      v11 = v8[2 * i + 2];
      if ( (MiFlags & 0x8000) != 0 )
        MiAddNonSecuredPagesToDump(
          (__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))BugCheckParameter2,
          v11,
          v10);
      else
        (*(void (__fastcall **)(ULONG_PTR, __int64, __int64, __int64))BugCheckParameter2)(
          BugCheckParameter2,
          v11,
          v10,
          2LL);
      v8 = MmPhysicalMemoryBlock;
    }
  }
  else
  {
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v5 = KiProcessorBlock;
      v6 = (unsigned int)KeNumberProcessors_0;
      do
      {
        (*(void (__fastcall **)(ULONG_PTR, _QWORD, __int64, __int64))BugCheckParameter2)(
          BugCheckParameter2,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v5++ + 8) + 184LL) + 40LL) >> 12,
          1LL,
          2LL);
        --v6;
      }
      while ( v6 );
    }
    MmAddRangeToCrashDump(
      (__int64 (__fastcall **)(_QWORD, __int64, __int64))BugCheckParameter2,
      0xFFFF800000000000uLL,
      0x800000000000LL);
    if ( (a3 & 1) != 0 && (KiBugCheckActive & 3) != 0 )
      MmAddRangeToCrashDump(
        (__int64 (__fastcall **)(_QWORD, __int64, __int64))BugCheckParameter2,
        0LL,
        0x7FFFFFFF0000LL);
    v7 = __readcr3();
    (*(void (__fastcall **)(ULONG_PTR, signed __int64, __int64, __int64))BugCheckParameter2)(
      BugCheckParameter2,
      v7 / 4096,
      1LL,
      2LL);
    if ( (a3 & 2) != 0 )
    {
      MiAddPhysicalPagesToCrashDump((void (__fastcall **)(_QWORD, __int64, __int64))BugCheckParameter2);
      MmRemoveSystemCacheFromDump(BugCheckParameter2);
    }
    MiRemoveFreePoolMemoryFromDump(BugCheckParameter2);
  }
  v12 = 0;
  while ( 1 )
  {
    v13 = v12 < qword_1403CBD68->SizeOfBitMap ? v12 : 0;
    v14 = qword_1403CBD68->SizeOfBitMap - 1;
    v15 = ((__int64)qword_1403CBD68->Buffer & 4) != 0LL ? 0x20 : 0;
    v16 = (char *)qword_1403CBD68->Buffer - (((__int64)qword_1403CBD68->Buffer & 4) != 0 ? 4 : 0);
    while ( 1 )
    {
      v17 = v15 + v14;
      if ( v14 - v13 == -1 )
        goto LABEL_19;
      v19 = &v16[8 * ((unsigned __int64)(v15 + v13) >> 6)];
      for ( j = ~*(_QWORD *)v19 | ((1LL << ((v15 + v13) & 0x3F)) - 1); j == -1; j = ~*(_QWORD *)v19 )
      {
        v19 += 8;
        if ( v19 > &v16[8 * ((unsigned __int64)v17 >> 6)] )
          goto LABEL_19;
      }
      _BitScanForward64(&v21, ~j);
      v18 = v21 + ((unsigned int)((v19 - v16) >> 3) << 6);
      if ( v18 > v17 )
      {
LABEL_19:
        v18 = -1;
      }
      else if ( v18 != -1 )
      {
        break;
      }
      if ( !v13 )
        break;
      SizeOfBitMap = v12 + 1;
      if ( v12 + 1 > qword_1403CBD68->SizeOfBitMap )
        SizeOfBitMap = qword_1403CBD68->SizeOfBitMap;
      v14 = SizeOfBitMap - 1;
      v13 = 0;
    }
    v23 = v18 - v15;
    if ( v18 == -1 )
      v23 = -1;
    if ( v23 < v12 || v23 == -1 )
      break;
    v12 = v23 + 1;
    v24 = *(_QWORD *)(qword_1403CBD88 + 8LL * v23);
    if ( (*(_DWORD *)(v24 + 4) & 2) != 0 )
    {
      for ( k = *(_QWORD *)(v24 + 4048); k != 0xFFFFFFFFFLL; k = *(_QWORD *)(48 * k - 0x58000000000LL) & 0xFFFFFFFFFLL )
        (*(void (__fastcall **)(ULONG_PTR, __int64, __int64, __int64))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          k,
          1LL,
          2LL);
    }
  }
  if ( byte_1403CBED8 == 1 )
  {
    LOBYTE(v23) = 0;
    if ( 48 * BugCheckParameter3 - 0x58000000000LL >= 0xFFFFFA8000000000uLL )
    {
      v26 = 0LL;
      v27 = 48 * BugCheckParameter3 / 0x30 + 1;
      do
      {
        LOBYTE(v23) = *(_BYTE *)(v26 - 0x57FFFFFFFDDLL);
        if ( (v23 & 0x40) != 0 )
          LOBYTE(v23) = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, __int64))(BugCheckParameter2 + 8))(
                          BugCheckParameter2,
                          v26 / 48,
                          1LL,
                          2LL);
        v26 += 48LL;
        --v27;
      }
      while ( v27 );
    }
  }
  if ( qword_1403CB788 )
    LOBYTE(v23) = MiRemoveEnclavePagesFromDump(BugCheckParameter2);
  return v23;
}
