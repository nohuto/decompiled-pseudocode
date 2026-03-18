/*
 * XREFs of MiCombiningInProgress @ 0x140004A14
 * Callers:
 *     MiCombineIdenticalPages @ 0x14048CAE4 (MiCombineIdenticalPages.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140051CE0 (MiFlushEntireTbDueToAttributeChange.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MiCombiningInProgress(__int64 *a1, _QWORD *a2, int a3)
{
  __int64 v3; // rbp
  KIRQL v7; // r14
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v9; // r8
  _QWORD *v10; // rcx
  __int64 v11; // rax
  char v12; // al
  _QWORD *v13; // rdx
  __int64 result; // rax
  __int64 v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rcx

  v3 = *a1;
  v7 = ExAcquireSpinLockExclusive(&dword_1403CBD00);
  if ( a3 == 1 )
  {
    ++*((_DWORD *)a1 + 16);
    ++dword_1403CBD04;
    CurrentThread = KeGetCurrentThread();
    memset(a2, 0, 0x50uLL);
    v10 = (_QWORD *)(v3 + 6384);
    a2[5] = CurrentThread;
    v11 = *(_QWORD *)(v3 + 6384);
    if ( *(_QWORD *)(v11 + 8) != v3 + 6384 )
      __fastfail(3u);
    *a2 = v11;
    a2[1] = v10;
    *(_QWORD *)(v11 + 8) = a2;
    v12 = 0;
    *v10 = a2;
    v13 = (_QWORD *)qword_1403CBD08;
    if ( qword_1403CBD08 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)CurrentThread >= v13[3] )
        {
          v17 = (_QWORD *)v13[1];
          if ( !v17 )
          {
            v12 = 1;
            break;
          }
        }
        else
        {
          v17 = (_QWORD *)*v13;
          if ( !*v13 )
            break;
        }
        v13 = v17;
      }
    }
    LOBYTE(v9) = v12;
    RtlAvlInsertNodeEx(&qword_1403CBD08, v13, v9, a2 + 2);
  }
  else
  {
    v15 = *a2;
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v16 = (_QWORD *)a2[1], (_QWORD *)*v16 != a2) )
      __fastfail(3u);
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    RtlAvlRemoveNode(&qword_1403CBD08, a2 + 2);
    --*((_DWORD *)a1 + 16);
    if ( dword_1403CBD04 == 1 )
      MiFlushEntireTbDueToAttributeChange();
    --dword_1403CBD04;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CBD00);
  result = v7;
  __writecr8(v7);
  return result;
}
