/*
 * XREFs of MiCombiningInProgress @ 0x14012CB20
 * Callers:
 *     MiCombineIdenticalPages @ 0x14056185C (MiCombineIdenticalPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140063C1C (MiFlushEntireTbDueToAttributeChange.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x140098EF0 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x1400DB450 (RtlAvlRemoveNode.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall MiCombiningInProgress(__int64 *a1, _QWORD *a2, int a3)
{
  __int64 v3; // rbp
  KIRQL v7; // r14
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v16; // rcx
  __int64 v17; // rax
  bool v18; // al
  _QWORD *v19; // rdx
  _QWORD *v20; // rcx

  v3 = *a1;
  v7 = ExAcquireSpinLockExclusive(&dword_14036C700);
  if ( a3 == 1 )
  {
    ++*((_DWORD *)a1 + 16);
    ++dword_14036C704;
    CurrentThread = KeGetCurrentThread();
    memset(a2, 0, 0x50uLL);
    v16 = (_QWORD *)(v3 + 5160);
    a2[5] = CurrentThread;
    v17 = *(_QWORD *)(v3 + 5160);
    if ( *(_QWORD *)(v17 + 8) != v3 + 5160 )
      __fastfail(3u);
    *a2 = v17;
    a2[1] = v16;
    *(_QWORD *)(v17 + 8) = a2;
    v18 = 0;
    *v16 = a2;
    v19 = (_QWORD *)qword_14036C708;
    if ( qword_14036C708 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)CurrentThread < v19[3] )
        {
          v20 = (_QWORD *)*v19;
          if ( !*v19 )
            break;
        }
        else
        {
          v20 = (_QWORD *)v19[1];
          if ( !v20 )
          {
            v18 = 1;
            break;
          }
        }
        v19 = v20;
      }
    }
    RtlAvlInsertNodeEx((unsigned __int64 *)&qword_14036C708, (unsigned __int64)v19, v18, (unsigned __int64)(a2 + 2));
  }
  else
  {
    v8 = *a2;
    v9 = (_QWORD *)a2[1];
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v9 != a2 )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    RtlAvlRemoveNode((unsigned __int64 *)&qword_14036C708, (__int64)(a2 + 2));
    --*((_DWORD *)a1 + 16);
    v13 = dword_14036C704;
    if ( dword_14036C704 == 1 )
    {
      MiFlushEntireTbDueToAttributeChange(v11, v10, v12);
      v13 = dword_14036C704;
    }
    dword_14036C704 = v13 - 1;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036C700);
  result = v7;
  __writecr8(v7);
  return result;
}
