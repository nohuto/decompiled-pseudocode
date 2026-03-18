/*
 * XREFs of PiPnpRtlObjectEventCreate @ 0x140522FC4
 * Callers:
 *     PiPnpRtlCacheObjectBaseKey @ 0x14052447C (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlObjectEventWorker @ 0x140528A70 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1406C259C (PiPnpRtlEnsureObjectCached.c)
 * Callees:
 *     RtlLookupElementGenericTableFullAvl @ 0x1400DF180 (RtlLookupElementGenericTableFullAvl.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1400DFD30 (RtlInsertElementGenericTableFullAvl.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PiDmGetObject @ 0x140523950 (PiDmGetObject.c)
 *     PiDmInitializeComparisonObject @ 0x140523AD0 (PiDmInitializeComparisonObject.c)
 *     PiDmObjectRelease @ 0x140523DEC (PiDmObjectRelease.c)
 *     PiPnpRtlObjectEventRelease @ 0x140528EA0 (PiPnpRtlObjectEventRelease.c)
 */

__int64 __fastcall PiPnpRtlObjectEventCreate(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  PVOID v5; // rdi
  unsigned int v7; // r12d
  int v9; // ebx
  _QWORD *v10; // rax
  int Object; // eax
  PVOID PoolWithTag; // rax
  _DWORD *v14; // rdi
  PVOID v15; // rax
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  TABLE_SEARCH_RESULT SearchResult; // [rsp+38h] [rbp-C8h] BYREF
  PVOID v18; // [rsp+40h] [rbp-C0h] BYREF
  PVOID NodeOrParent; // [rsp+48h] [rbp-B8h] BYREF
  char *Buffer; // [rsp+50h] [rbp-B0h] BYREF
  char v21; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE *v22; // [rsp+68h] [rbp-98h]
  _BYTE v23[112]; // [rsp+B0h] [rbp-50h] BYREF

  NodeOrParent = 0LL;
  Buffer = &v21;
  v5 = 0LL;
  *a4 = 0LL;
  P = 0LL;
  v7 = a2;
  v9 = PiDmInitializeComparisonObject(a1, a2, v23);
  if ( v9 >= 0 )
  {
    v22 = v23;
    v10 = RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(a3 + 24), &Buffer, &NodeOrParent, &SearchResult);
    if ( v10 )
      v10 = (_QWORD *)*v10;
    if ( v10 )
      goto LABEL_5;
    Object = PiDmGetObject(v7, a1, &P);
    v9 = Object;
    if ( Object == -1073741772 )
    {
      v5 = P;
      v9 = 0;
      goto LABEL_19;
    }
    if ( Object >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xF0uLL, 0x41706E50u);
      v18 = PoolWithTag;
      v14 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x50uLL);
        v15 = P;
        *v14 = 1;
        v14[18] = 5;
        *((_QWORD *)v14 + 1) = v15;
        v5 = 0LL;
        if ( RtlInsertElementGenericTableFullAvl((PRTL_AVL_TABLE)(a3 + 24), &v18, 8u, 0LL, NodeOrParent, SearchResult) )
        {
          v10 = v18;
LABEL_5:
          *a4 = v10;
          return (unsigned int)v9;
        }
        v9 = -1073741670;
        if ( v18 )
          PiPnpRtlObjectEventRelease(v18);
        goto LABEL_18;
      }
      v9 = -1073741670;
    }
    v5 = P;
  }
LABEL_18:
  *a4 = 0LL;
LABEL_19:
  if ( v5 )
    PiDmObjectRelease(v5);
  return (unsigned int)v9;
}
