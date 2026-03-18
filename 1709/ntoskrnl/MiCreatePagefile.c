/*
 * XREFs of MiCreatePagefile @ 0x1405D4B4C
 * Callers:
 *     MiCreatePagingFile @ 0x1405D3FF0 (MiCreatePagingFile.c)
 *     MmStoreRegister @ 0x1406EABBC (MmStoreRegister.c)
 * Callees:
 *     RtlClearBits @ 0x140080ED0 (RtlClearBits.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     InitializeSListHead @ 0x1400B46E0 (InitializeSListHead.c)
 *     MiAllocateModWriterEntry @ 0x14011F3F0 (MiAllocateModWriterEntry.c)
 *     RtlSetAllBits @ 0x14012CF30 (RtlSetAllBits.c)
 *     MiInitializePagefileBitmapsCache @ 0x1401500A0 (MiInitializePagefileBitmapsCache.c)
 *     MiReservePageHash @ 0x1401501B4 (MiReservePageHash.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x1405D4DF4 (MiCreatePageFileSpaceBitmaps.c)
 *     MiDeletePagefile @ 0x1406E4538 (MiDeletePagefile.c)
 */

_QWORD *__fastcall MiCreatePagefile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        int a7,
        char a8)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // edi
  _QWORD *v17; // r15
  unsigned int v18; // r12d
  _QWORD *ModWriterEntry; // rax
  _QWORD *v20; // rbx
  ULONG_PTR v21; // rax
  __int64 PageFileSpaceBitmaps; // rax
  __int64 v23; // rdi
  PVOID v24; // rax
  _BYTE v26[288]; // [rsp+20h] [rbp-158h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x120uLL, 0x20206D4Du);
  v13 = v26;
  if ( PoolWithTag )
    v13 = PoolWithTag;
  memset(v13, 0, 0x120uLL);
  v13[1] = a5;
  v13[3] = a4 - 2;
  v13[6] = a4 - 2;
  v13[7] = a2;
  v13[28] = a3;
  *v13 = a4;
  v13[2] = a4;
  *((_DWORD *)v13 + 31) = dword_140400120;
  *((_DWORD *)v13 + 34) = 4 * dword_140400120;
  v13[32] = a1;
  v13[29] = 0LL;
  InitializeSListHead((PSLIST_HEADER)v13 + 5);
  v13[31] = 0LL;
  if ( a7 < 0 )
  {
    v14 = 128LL;
    *((_WORD *)v13 + 102) |= 0xB0u;
  }
  else if ( a2 )
  {
    if ( (a7 & 0x40000000) != 0 )
      *((_WORD *)v13 + 102) |= 0x20u;
    if ( (a7 & 0x2000000) != 0 )
    {
      v14 = 128LL;
      *((_WORD *)v13 + 102) |= 0x80u;
    }
  }
  else
  {
    *((_WORD *)v13 + 102) |= 0x60u;
  }
  if ( (a7 & 0x1000000) != 0 )
    *((_WORD *)v13 + 102) |= 0x400u;
  if ( (a8 & 1) != 0 )
    *((_WORD *)v13 + 102) |= 0x200u;
  if ( (a7 & 0x3C000000) != 0 )
    *((_DWORD *)v13 + 50) = (a7 & 0x3C000000u) >> 26;
  if ( v13 == (_QWORD *)v26 )
    goto LABEL_37;
  if ( a7 < 0 )
  {
    v16 = 1;
LABEL_18:
    v17 = v13 + 8;
    v18 = 0;
    while ( 1 )
    {
      ModWriterEntry = MiAllocateModWriterEntry(a1, (unsigned int)dword_140400120, 0);
      v20 = ModWriterEntry;
      if ( !ModWriterEntry )
        goto LABEL_37;
      memset(ModWriterEntry, 0, 0x108uLL);
      v20[18] = v13;
      ++v18;
      v20[24] = a1;
      *v17++ = v20;
      if ( v18 >= v16 )
        goto LABEL_21;
    }
  }
  v16 = a2 != 0 ? 2 : 0;
  if ( v16 )
    goto LABEL_18;
LABEL_21:
  if ( a6 )
    *((_OWORD *)v13 + 6) = *a6;
  else
    RtlInitUnicodeString((PUNICODE_STRING)v13 + 6, 0LL);
  if ( a2 )
  {
    v21 = MiReservePageHash(*((_DWORD *)v13 + 2), v14, v15);
    if ( !v21 )
      goto LABEL_37;
    v13[27] = v21;
  }
  PageFileSpaceBitmaps = MiCreatePageFileSpaceBitmaps(*((unsigned int *)v13 + 2));
  v23 = PageFileSpaceBitmaps;
  if ( PageFileSpaceBitmaps )
  {
    v13[14] = PageFileSpaceBitmaps;
    RtlSetAllBits((PRTL_BITMAP)(PageFileSpaceBitmaps + 8));
    RtlClearBits((PRTL_BITMAP)(v23 + 8), 2u, *(_DWORD *)v13 - 2);
    RtlSetAllBits((PRTL_BITMAP)(v23 + 24));
    if ( a2 )
      RtlClearBits((PRTL_BITMAP)(v23 + 24), 2u, *(_DWORD *)v13 - 2);
    *((_DWORD *)v13 + 30) = 2;
    if ( !a2 )
      return v13;
    v24 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x7000uLL, 0x6342694Du);
    v13[24] = v24;
    if ( v24 )
    {
      MiInitializePagefileBitmapsCache((__int64)v13);
      return v13;
    }
  }
LABEL_37:
  MiDeletePagefile(v13);
  return 0LL;
}
