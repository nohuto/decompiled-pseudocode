/*
 * XREFs of PiPnpRtlObjectEventCreate @ 0x14048689C
 * Callers:
 *     PiPnpRtlCacheObjectBaseKey @ 0x140485F2C (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404DEF00 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1406969CC (PiPnpRtlEnsureObjectCached.c)
 * Callees:
 *     RtlLookupElementGenericTableFullAvl @ 0x14004C520 (RtlLookupElementGenericTableFullAvl.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x14004CBC0 (RtlInsertElementGenericTableFullAvl.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     PiDmObjectRelease @ 0x140485734 (PiDmObjectRelease.c)
 *     PiDmInitializeComparisonObject @ 0x140485970 (PiDmInitializeComparisonObject.c)
 *     PiDmGetObject @ 0x140487390 (PiDmGetObject.c)
 *     PiPnpRtlObjectEventRelease @ 0x140489038 (PiPnpRtlObjectEventRelease.c)
 */

__int64 __fastcall PiPnpRtlObjectEventCreate(_WORD *a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  unsigned int *v5; // rdi
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
  v9 = PiDmInitializeComparisonObject(a1, a2, (__int64)v23);
  if ( v9 >= 0 )
  {
    v22 = v23;
    v10 = RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(a3 + 24), &Buffer, &NodeOrParent, &SearchResult);
    if ( v10 )
      v10 = (_QWORD *)*v10;
    if ( v10 )
      goto LABEL_5;
    Object = PiDmGetObject(a2, a1, &P);
    v9 = Object;
    if ( Object == -1073741772 )
    {
      v5 = (unsigned int *)P;
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
    v5 = (unsigned int *)P;
  }
LABEL_18:
  *a4 = 0LL;
LABEL_19:
  if ( v5 )
    PiDmObjectRelease(v5);
  return (unsigned int)v9;
}
