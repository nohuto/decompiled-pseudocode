/*
 * XREFs of MiCombiningInProgress @ 0x1400CF508
 * Callers:
 *     MiCombineIdenticalPages @ 0x140509D90 (MiCombineIdenticalPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlRemoveNode @ 0x140058B30 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x1400A2A10 (RtlAvlInsertNodeEx.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1400ED79C (MiFlushEntireTbDueToAttributeChange.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall MiCombiningInProgress(__int64 *a1, _QWORD *a2, int a3)
{
  __int64 v3; // rbp
  KIRQL v7; // r14
  __int64 v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v15; // rcx
  __int64 v16; // rax
  bool v17; // al
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx

  v3 = *a1;
  v7 = ExAcquireSpinLockExclusive(&dword_140388A80);
  if ( a3 == 1 )
  {
    ++*((_DWORD *)a1 + 16);
    ++dword_140388A84;
    CurrentThread = KeGetCurrentThread();
    memset(a2, 0, 0x50uLL);
    v15 = (_QWORD *)(v3 + 5296);
    a2[5] = CurrentThread;
    v16 = *(_QWORD *)(v3 + 5296);
    if ( *(_QWORD *)(v16 + 8) != v3 + 5296 )
      __fastfail(3u);
    *a2 = v16;
    a2[1] = v15;
    *(_QWORD *)(v16 + 8) = a2;
    v17 = 0;
    *v15 = a2;
    v18 = (_QWORD *)qword_140388A88;
    if ( qword_140388A88 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)CurrentThread < v18[3] )
        {
          v19 = (_QWORD *)*v18;
          if ( !*v18 )
            break;
        }
        else
        {
          v19 = (_QWORD *)v18[1];
          if ( !v19 )
          {
            v17 = 1;
            break;
          }
        }
        v18 = v19;
      }
    }
    RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140388A88, (unsigned __int64)v18, v17, (unsigned __int64)(a2 + 2));
  }
  else
  {
    v8 = *a2;
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v9 = (_QWORD *)a2[1], (_QWORD *)*v9 != a2) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140388A88, (__int64)(a2 + 2));
    --*((_DWORD *)a1 + 16);
    if ( dword_140388A84 == 1 )
      MiFlushEntireTbDueToAttributeChange(v11, v10, v12);
    --dword_140388A84;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388A80);
  result = v7;
  __writecr8(v7);
  return result;
}
