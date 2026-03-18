/*
 * XREFs of CmpRundownUnitOfWork @ 0x1404CE510
 * Callers:
 *     CmpSetKeySecurity @ 0x14006E950 (CmpSetKeySecurity.c)
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404CE2D0 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteValueKey @ 0x1404CEB38 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1404CF840 (CmDeleteKey.c)
 *     CmpCreateChild @ 0x1404D0388 (CmpCreateChild.c)
 *     CmpUndoDeleteKeyForTrans @ 0x14056B998 (CmpUndoDeleteKeyForTrans.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1406645C4 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140664A64 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140490F80 (CmpDereferenceKeyControlBlockWithLock.c)
 *     UNLOCK_TRANSACTION_LIST @ 0x1404CE62C (UNLOCK_TRANSACTION_LIST.c)
 *     LOCK_TRANSACTION_LIST @ 0x1404CE654 (LOCK_TRANSACTION_LIST.c)
 */

_QWORD *__fastcall CmpRundownUnitOfWork(_QWORD *BugCheckParameter4)
{
  ULONG_PTR v1; // rsi
  ULONG_PTR v3; // rsi
  __int64 v4; // rcx
  _QWORD *v5; // rax
  _QWORD *result; // rax
  __int64 v7; // r8
  volatile signed __int32 *v8; // rcx
  _QWORD *v9; // rdx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  __int64 i; // r8
  __int64 v13; // r10
  __int64 *v14; // rcx
  __int64 v15; // rbx
  __int64 j; // r8
  __int64 v17; // r10
  __int64 *v18; // rcx
  __int64 v19; // rbx

  v1 = BugCheckParameter4[2];
  if ( v1 )
  {
    BugCheckParameter4[2] = 0LL;
    v10 = *(_DWORD *)v1 & 0x7FFFFFFF;
    if ( v10 == 1 )
    {
      if ( *(_QWORD **)(v1 + 8) != BugCheckParameter4 )
        KeBugCheckEx(0x51u, 0x12uLL, 1uLL, v1, (ULONG_PTR)BugCheckParameter4);
      *(_DWORD *)v1 = 0;
      *(_QWORD *)(v1 + 8) = 0LL;
    }
    else
    {
      for ( i = 0LL; (unsigned int)i < v10; i = (unsigned int)(i + 1) )
      {
        if ( *(_QWORD **)(*(_QWORD *)(v1 + 8) + 8 * i) == BugCheckParameter4 )
          break;
      }
      if ( (_DWORD)i == v10 )
        KeBugCheckEx(0x51u, 0x12uLL, 2uLL, v1, (ULONG_PTR)BugCheckParameter4);
      if ( (unsigned int)i < v10 - 1 )
      {
        v13 = 8LL * (unsigned int)i;
        do
        {
          i = (unsigned int)(i + 1);
          *(_QWORD *)(v13 + *(_QWORD *)(v1 + 8)) = *(_QWORD *)(*(_QWORD *)(v1 + 8) + 8 * i);
          v13 += 8LL;
        }
        while ( (unsigned int)i < v10 - 1 );
      }
      if ( --*(_DWORD *)v1 == 1 )
      {
        v14 = *(__int64 **)(v1 + 8);
        v15 = *v14;
        ExFreePoolWithTag(v14, 0x78494D43u);
        *(_QWORD *)(v1 + 8) = v15;
      }
    }
  }
  v3 = BugCheckParameter4[3];
  if ( v3 )
  {
    BugCheckParameter4[3] = 0LL;
    v11 = *(_DWORD *)v3 & 0x7FFFFFFF;
    if ( v11 == 1 )
    {
      if ( *(_QWORD **)(v3 + 8) != BugCheckParameter4 )
        KeBugCheckEx(0x51u, 0x12uLL, 1uLL, v3, (ULONG_PTR)BugCheckParameter4);
      *(_DWORD *)v3 = 0;
      *(_QWORD *)(v3 + 8) = 0LL;
    }
    else
    {
      for ( j = 0LL; (unsigned int)j < v11; j = (unsigned int)(j + 1) )
      {
        if ( *(_QWORD **)(*(_QWORD *)(v3 + 8) + 8 * j) == BugCheckParameter4 )
          break;
      }
      if ( (_DWORD)j == v11 )
        KeBugCheckEx(0x51u, 0x12uLL, 2uLL, v3, (ULONG_PTR)BugCheckParameter4);
      if ( (unsigned int)j < v11 - 1 )
      {
        v17 = 8LL * (unsigned int)j;
        do
        {
          j = (unsigned int)(j + 1);
          *(_QWORD *)(v17 + *(_QWORD *)(v3 + 8)) = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 8 * j);
          v17 += 8LL;
        }
        while ( (unsigned int)j < v11 - 1 );
      }
      if ( --*(_DWORD *)v3 == 1 )
      {
        v18 = *(__int64 **)(v3 + 8);
        v19 = *v18;
        ExFreePoolWithTag(v18, 0x78494D43u);
        *(_QWORD *)(v3 + 8) = v19;
      }
    }
  }
  if ( (_QWORD *)*BugCheckParameter4 != BugCheckParameter4 )
  {
    LOCK_TRANSACTION_LIST();
    v4 = *BugCheckParameter4;
    v5 = (_QWORD *)BugCheckParameter4[1];
    if ( *(_QWORD **)(*BugCheckParameter4 + 8LL) != BugCheckParameter4 || (_QWORD *)*v5 != BugCheckParameter4 )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    UNLOCK_TRANSACTION_LIST();
    BugCheckParameter4[7] = 0LL;
  }
  result = BugCheckParameter4 + 4;
  if ( (_QWORD *)*result != result )
  {
    v7 = *result;
    v8 = (volatile signed __int32 *)BugCheckParameter4[6];
    v9 = (_QWORD *)BugCheckParameter4[5];
    if ( *(_QWORD **)(*result + 8LL) != result || (_QWORD *)*v9 != result )
      __fastfail(3u);
    *v9 = v7;
    *(_QWORD *)(v7 + 8) = v9;
    result = (_QWORD *)CmpDereferenceKeyControlBlockWithLock(v8, 0);
    BugCheckParameter4[6] = 0LL;
  }
  return result;
}
