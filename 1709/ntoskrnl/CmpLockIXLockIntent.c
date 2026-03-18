/*
 * XREFs of CmpLockIXLockIntent @ 0x140569164
 * Callers:
 *     CmpUndoDeleteKeyForTrans @ 0x14045005C (CmpUndoDeleteKeyForTrans.c)
 *     CmDeleteKey @ 0x140472480 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x140474FC8 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x140475B90 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x14047B690 (CmSetValueKey.c)
 *     CmSetKeyFlags @ 0x14068DC84 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14068E12C (CmSetLastWriteTimeKey.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmEqualTrans @ 0x14056959C (CmEqualTrans.c)
 */

bool __fastcall CmpLockIXLockIntent(unsigned int *a1, __int64 a2)
{
  int v2; // eax
  __int64 v5; // rbp
  _QWORD *v7; // rax
  __int64 v8; // rbp
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // r14
  __int64 v11; // rax

  v2 = *a1;
  if ( !*a1 )
  {
    *a1 = 1;
    *((_QWORD *)a1 + 1) = a2;
LABEL_7:
    *(_QWORD *)(a2 + 16) = a1;
    return 1;
  }
  if ( v2 < 0 )
    return (unsigned __int8)CmEqualTrans(*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL)) != 0;
  if ( v2 != 1 )
  {
    v8 = 0LL;
    while ( !(unsigned __int8)CmEqualTrans(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 8 * v8) + 56LL)) )
    {
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *a1 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * (*a1 + 1), 0x78494D43u);
        v10 = PoolWithTag;
        if ( !PoolWithTag )
          return 0;
        memmove(PoolWithTag, *((const void **)a1 + 1), 8LL * *a1);
        ExFreePoolWithTag(*((PVOID *)a1 + 1), 0x78494D43u);
        v11 = *a1;
        *((_QWORD *)a1 + 1) = v10;
        v10[v11] = a2;
        goto LABEL_18;
      }
    }
    return 1;
  }
  v5 = *((_QWORD *)a1 + 1);
  if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(v5 + 56)) )
    return 1;
  v7 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x78494D43u);
  if ( v7 )
  {
    *((_QWORD *)a1 + 1) = v7;
    *v7 = v5;
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL) = a2;
LABEL_18:
    ++*a1;
    goto LABEL_7;
  }
  return 0;
}
