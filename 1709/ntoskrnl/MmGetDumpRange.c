/*
 * XREFs of MmGetDumpRange @ 0x14021AFE8
 * Callers:
 *     IoWriteCrashDump @ 0x1401F6B7C (IoWriteCrashDump.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     MiAddNonSecuredPagesToDump @ 0x14021A7AC (MiAddNonSecuredPagesToDump.c)
 *     MiAddPhysicalPagesToCrashDump @ 0x14021A874 (MiAddPhysicalPagesToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x14021AE94 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x14021B580 (MmRemoveSystemCacheFromDump.c)
 *     MiRemoveFreePoolMemoryFromDump @ 0x1402215B0 (MiRemoveFreePoolMemoryFromDump.c)
 *     MiRemoveEnclavePagesFromDump @ 0x140229990 (MiRemoveEnclavePagesFromDump.c)
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
  char *v16; // r11
  unsigned int v17; // ebp
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  __int64 v20; // r8
  char *v21; // rcx
  __int64 j; // rax
  unsigned int SizeOfBitMap; // edx
  unsigned int v24; // eax
  __int64 v25; // rdi
  __int64 k; // rdi
  __int64 v27; // rsi
  ULONG_PTR v28; // rdi

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
    v13 = v12 < qword_140388AD0->SizeOfBitMap ? v12 : 0;
    v14 = qword_140388AD0->SizeOfBitMap - 1;
    v15 = ((__int64)qword_140388AD0->Buffer & 4) != 0LL ? 0x20 : 0;
    v16 = (char *)qword_140388AD0->Buffer - (((__int64)qword_140388AD0->Buffer & 4) != 0 ? 4 : 0);
    while ( 1 )
    {
      v17 = v15 + v14;
      v18 = v15 + v13;
      if ( v14 - v13 == -1 )
        goto LABEL_19;
      v20 = (1LL << (v18 & 0x3F)) - 1;
      v21 = &v16[8 * ((unsigned __int64)v18 >> 6)];
      for ( j = v20 | ~*(_QWORD *)v21; j == -1; j = ~*(_QWORD *)v21 )
      {
        v21 += 8;
        if ( v21 > &v16[8 * ((unsigned __int64)v17 >> 6)] )
          goto LABEL_19;
      }
      _BitScanForward64((unsigned __int64 *)&j, ~j);
      v19 = j + ((unsigned int)((v21 - v16) >> 3) << 6);
      if ( v19 > v17 )
      {
LABEL_19:
        v19 = -1;
      }
      else if ( v19 != -1 )
      {
        break;
      }
      if ( !v13 )
        break;
      SizeOfBitMap = v12 + 1;
      if ( v12 + 1 > qword_140388AD0->SizeOfBitMap )
        SizeOfBitMap = qword_140388AD0->SizeOfBitMap;
      v14 = SizeOfBitMap - 1;
      v13 = 0;
    }
    v24 = v19 - v15;
    if ( v19 == -1 )
      v24 = -1;
    if ( v24 < v12 || v24 == -1 )
      break;
    v12 = v24 + 1;
    v25 = *(_QWORD *)(qword_140388AF0 + 8LL * v24);
    if ( (*(_DWORD *)(v25 + 4) & 2) != 0 )
    {
      for ( k = *(_QWORD *)(v25 + 3984); k != 0xFFFFFFFFFLL; k = *(_QWORD *)(48 * k - 0x58000000000LL) & 0xFFFFFFFFFLL )
        (*(void (__fastcall **)(ULONG_PTR, __int64, __int64, __int64))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          k,
          1LL,
          2LL);
    }
  }
  if ( byte_140388C34 == 1 )
  {
    LOBYTE(v24) = 0;
    if ( 48 * BugCheckParameter3 - 0x58000000000LL >= 0xFFFFFA8000000000uLL )
    {
      v27 = 0LL;
      v28 = 48 * BugCheckParameter3 / 0x30 + 1;
      do
      {
        LOBYTE(v24) = *(_BYTE *)(v27 - 0x57FFFFFFFDDLL);
        if ( (v24 & 0x40) != 0 )
          LOBYTE(v24) = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, __int64))(BugCheckParameter2 + 8))(
                          BugCheckParameter2,
                          v27 / 48,
                          1LL,
                          2LL);
        v27 += 48LL;
        --v28;
      }
      while ( v28 );
    }
  }
  if ( qword_1403885E8 )
    LOBYTE(v24) = MiRemoveEnclavePagesFromDump(BugCheckParameter2);
  return v24;
}
