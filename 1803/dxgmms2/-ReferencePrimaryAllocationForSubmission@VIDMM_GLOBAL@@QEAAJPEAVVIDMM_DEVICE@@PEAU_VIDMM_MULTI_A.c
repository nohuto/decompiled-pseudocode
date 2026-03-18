/*
 * XREFs of ?ReferencePrimaryAllocationForSubmission@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0069430
 * Callers:
 *     VidMmReferencePrimaryAllocationForSubmission @ 0x1C0002E90 (VidMmReferencePrimaryAllocationForSubmission.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::ReferencePrimaryAllocationForSubmission(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        struct VIDMM_ALLOC **a4)
{
  __int64 v6; // rdi
  int *v7; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax

  *a4 = 0LL;
  v6 = **(_QWORD **)a3;
  if ( !*(_BYTE *)(v6 + 96) )
  {
    v7 = *(int **)(v6 + 504);
    if ( (*v7 & 0x40000100) != 0 || *v7 < 0 )
    {
      if ( v7[3] )
      {
        if ( *((struct VIDMM_DEVICE **)a3 + 1) == a2 )
        {
          _InterlockedIncrement((volatile signed __int32 *)a3 + 26);
          *a4 = a3;
          return 0LL;
        }
        else
        {
          v15 = (_QWORD *)WdLogNewEntry5_WdAssertion(v7, a2);
          v15[3] = a2;
          v15[4] = a3;
          v15[5] = *((_QWORD *)a3 + 1);
          WdLogEvent5_WdAssertion(v15);
          return 3223191829LL;
        }
      }
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v7);
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v14) + 24) = v6;
      }
    }
    else
    {
      v10 = WdLogNewEntry5_WdAssertion(v7, a2);
      *(_QWORD *)(v10 + 24) = 8498LL;
      WdLogEvent5_WdAssertion(v10);
      v13 = WdLogNewEntry5_WdAssertion(v12, v11);
      *(_QWORD *)(v13 + 24) = v6;
      WdLogEvent5_WdAssertion(v13);
    }
    return 3221225485LL;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v9) + 24) = v6;
  }
  return 3223191814LL;
}
