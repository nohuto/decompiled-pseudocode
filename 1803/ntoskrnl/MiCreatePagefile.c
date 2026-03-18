/*
 * XREFs of MiCreatePagefile @ 0x14063C9BC
 * Callers:
 *     MmStoreRegister @ 0x14063BBC8 (MmStoreRegister.c)
 *     MiCreatePagingFile @ 0x14063BE50 (MiCreatePagingFile.c)
 * Callees:
 *     InitializeSListHead @ 0x14006A770 (InitializeSListHead.c)
 *     RtlClearBits @ 0x140072BD0 (RtlClearBits.c)
 *     RtlSetAllBits @ 0x14007D2B0 (RtlSetAllBits.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     MiAllocateModWriterEntry @ 0x1401330FC (MiAllocateModWriterEntry.c)
 *     MiInitializePagefileBitmapsCache @ 0x14017DFE4 (MiInitializePagefileBitmapsCache.c)
 *     MiReservePageHash @ 0x14017E168 (MiReservePageHash.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x14063CCAC (MiCreatePageFileSpaceBitmaps.c)
 *     MiDeletePagefile @ 0x14074E938 (MiDeletePagefile.c)
 */

_QWORD *__fastcall MiCreatePagefile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        UNICODE_STRING *a6,
        int a7,
        char a8)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // rsi
  unsigned int v14; // edi
  _QWORD *v15; // r15
  unsigned int v16; // r12d
  _QWORD *ModWriterEntry; // rax
  _QWORD *v18; // rbx
  UNICODE_STRING *v19; // rcx
  ULONG_PTR v20; // rax
  __int64 PageFileSpaceBitmaps; // rax
  __int64 v22; // rdi
  PVOID v23; // rax
  _BYTE v25[288]; // [rsp+20h] [rbp-158h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x120uLL, 0x20206D4Du);
  v13 = v25;
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
  *((_DWORD *)v13 + 31) = dword_14044B180;
  *((_DWORD *)v13 + 34) = 4 * dword_14044B180;
  v13[32] = a1;
  v13[29] = 0LL;
  InitializeSListHead((PSLIST_HEADER)v13 + 5);
  v13[31] = 0LL;
  if ( a7 < 0 )
  {
    *((_WORD *)v13 + 102) |= 0xB0u;
  }
  else if ( a2 )
  {
    if ( (a7 & 0x40000000) != 0 )
      *((_WORD *)v13 + 102) |= 0x20u;
    if ( (a7 & 0x2000000) != 0 )
      *((_WORD *)v13 + 102) |= 0x80u;
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
  if ( v13 == (_QWORD *)v25 )
    goto LABEL_38;
  if ( a7 < 0 )
  {
    v14 = 1;
LABEL_20:
    v15 = v13 + 8;
    v16 = 0;
    while ( 1 )
    {
      ModWriterEntry = MiAllocateModWriterEntry(a1, (unsigned int)dword_14044B180, 0);
      v18 = ModWriterEntry;
      if ( !ModWriterEntry )
        goto LABEL_38;
      memset(ModWriterEntry, 0, 0x108uLL);
      v18[18] = v13;
      ++v16;
      v18[24] = a1;
      *v15++ = v18;
      if ( v16 >= v14 )
        goto LABEL_23;
    }
  }
  v14 = a2 != 0 ? 2 : 0;
  if ( v14 )
    goto LABEL_20;
LABEL_23:
  v19 = (UNICODE_STRING *)(v13 + 12);
  if ( a6 )
    *v19 = *a6;
  else
    RtlInitUnicodeString(v19, 0LL);
  if ( a2 )
  {
    v20 = MiReservePageHash(*((_DWORD *)v13 + 2));
    if ( !v20 )
      goto LABEL_38;
    v13[27] = v20;
  }
  PageFileSpaceBitmaps = MiCreatePageFileSpaceBitmaps(*((unsigned int *)v13 + 2));
  v22 = PageFileSpaceBitmaps;
  if ( PageFileSpaceBitmaps )
  {
    v13[14] = PageFileSpaceBitmaps;
    RtlSetAllBits((PRTL_BITMAP)(PageFileSpaceBitmaps + 8));
    RtlClearBits((PRTL_BITMAP)(v22 + 8), 2u, *(_DWORD *)v13 - 2);
    RtlSetAllBits((PRTL_BITMAP)(v22 + 24));
    if ( a2 )
      RtlClearBits((PRTL_BITMAP)(v22 + 24), 2u, *(_DWORD *)v13 - 2);
    *((_DWORD *)v13 + 30) = 2;
    if ( !a2 )
      return v13;
    v23 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x7000uLL, 0x6342694Du);
    v13[24] = v23;
    if ( v23 )
    {
      MiInitializePagefileBitmapsCache((__int64)v13);
      return v13;
    }
  }
LABEL_38:
  MiDeletePagefile(v13);
  return 0LL;
}
