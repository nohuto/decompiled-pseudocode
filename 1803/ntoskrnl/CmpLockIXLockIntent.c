/*
 * XREFs of CmpLockIXLockIntent @ 0x140498504
 * Callers:
 *     CmDeleteValueKey @ 0x14049B18C (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14049FF78 (CmDeleteKey.c)
 *     CmSetValueKey @ 0x1404A4924 (CmSetValueKey.c)
 *     CmpCreateChild @ 0x140514170 (CmpCreateChild.c)
 *     CmpUndoDeleteKeyForTrans @ 0x1405C1A44 (CmpUndoDeleteKeyForTrans.c)
 *     CmSetKeyFlags @ 0x1406F1FB8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1406F2444 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmEqualTrans @ 0x140498AE0 (CmEqualTrans.c)
 */

bool __fastcall CmpLockIXLockIntent(unsigned int *a1, __int64 a2)
{
  int v2; // eax
  __int64 v6; // rbp
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
LABEL_8:
    *(_QWORD *)(a2 + 16) = a1;
    return 1;
  }
  if ( v2 < 0 )
    return (unsigned __int8)CmEqualTrans(*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL), *(_QWORD *)(a2 + 56)) != 0;
  if ( v2 != 1 )
  {
    v8 = 0LL;
    while ( !(unsigned __int8)CmEqualTrans(
                                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 8 * v8) + 56LL),
                                *(_QWORD *)(a2 + 56)) )
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
        goto LABEL_17;
      }
    }
    return 1;
  }
  v6 = *((_QWORD *)a1 + 1);
  if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(v6 + 56), *(_QWORD *)(a2 + 56)) )
    return 1;
  v7 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x78494D43u);
  if ( v7 )
  {
    *((_QWORD *)a1 + 1) = v7;
    *v7 = v6;
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL) = a2;
LABEL_17:
    ++*a1;
    goto LABEL_8;
  }
  return 0;
}
