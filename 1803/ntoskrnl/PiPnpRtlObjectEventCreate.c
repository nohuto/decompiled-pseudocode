/*
 * XREFs of PiPnpRtlObjectEventCreate @ 0x140504830
 * Callers:
 *     PiPnpRtlCacheObjectBaseKey @ 0x140508230 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlObjectEventWorker @ 0x1405D2B70 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1407285CC (PiPnpRtlEnsureObjectCached.c)
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x14006D570 (RtlInsertElementGenericTableFullAvl.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x14006DBC0 (RtlLookupElementGenericTableFullAvl.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PiDmGetObject @ 0x1405074E8 (PiDmGetObject.c)
 *     PiDmInitializeComparisonObject @ 0x140507674 (PiDmInitializeComparisonObject.c)
 *     PiDmObjectRelease @ 0x1405078AC (PiDmObjectRelease.c)
 *     PiPnpRtlObjectEventRelease @ 0x140509B1C (PiPnpRtlObjectEventRelease.c)
 */

__int64 __fastcall PiPnpRtlObjectEventCreate(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  PVOID v5; // rsi
  unsigned int v7; // r13d
  int v9; // ebx
  PVOID *v10; // rax
  PVOID v11; // rdi
  int Object; // eax
  PVOID PoolWithTag; // rax
  _DWORD *v15; // rdi
  PVOID v16; // rax
  PVOID inserted; // rax
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  TABLE_SEARCH_RESULT SearchResult; // [rsp+38h] [rbp-C8h] BYREF
  PVOID v20; // [rsp+40h] [rbp-C0h] BYREF
  PVOID NodeOrParent; // [rsp+48h] [rbp-B8h] BYREF
  char *Buffer; // [rsp+50h] [rbp-B0h] BYREF
  char v23; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE *v24; // [rsp+68h] [rbp-98h]
  _BYTE v25[112]; // [rsp+B0h] [rbp-50h] BYREF

  NodeOrParent = 0LL;
  Buffer = &v23;
  v5 = 0LL;
  *a4 = 0LL;
  P = 0LL;
  v7 = a2;
  v9 = PiDmInitializeComparisonObject(a1, a2, v25);
  if ( v9 >= 0 )
  {
    v24 = v25;
    v10 = (PVOID *)RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(a3 + 24), &Buffer, &NodeOrParent, &SearchResult);
    if ( v10 )
      v11 = *v10;
    else
      v11 = 0LL;
    if ( v11 )
      goto LABEL_5;
    Object = PiDmGetObject(v7, a1, &P);
    v9 = Object;
    if ( Object == -1073741772 )
    {
      v5 = P;
      v9 = 0;
      goto LABEL_19;
    }
    if ( Object < 0 )
    {
      v5 = P;
LABEL_16:
      if ( v11 )
        PiPnpRtlObjectEventRelease(v11);
      goto LABEL_18;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xF0uLL, 0x41706E50u);
    v20 = PoolWithTag;
    v15 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x50uLL);
      v16 = P;
      *v15 = 1;
      v15[18] = 5;
      v5 = 0LL;
      *((_QWORD *)v15 + 1) = v16;
      inserted = RtlInsertElementGenericTableFullAvl(
                   (PRTL_AVL_TABLE)(a3 + 24),
                   &v20,
                   8u,
                   0LL,
                   NodeOrParent,
                   SearchResult);
      v11 = v20;
      if ( inserted )
      {
LABEL_5:
        *a4 = v11;
        return (unsigned int)v9;
      }
      v9 = -1073741670;
      goto LABEL_16;
    }
    v5 = P;
    v9 = -1073741670;
  }
LABEL_18:
  *a4 = 0LL;
LABEL_19:
  if ( v5 )
    PiDmObjectRelease(v5);
  return (unsigned int)v9;
}
