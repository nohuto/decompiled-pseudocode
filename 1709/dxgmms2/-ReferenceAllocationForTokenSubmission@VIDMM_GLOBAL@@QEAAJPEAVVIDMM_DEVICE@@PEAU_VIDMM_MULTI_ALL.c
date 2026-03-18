/*
 * XREFs of ?ReferenceAllocationForTokenSubmission@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C007387C
 * Callers:
 *     VidMmReferenceAllocationForTokenSubmission @ 0x1C0014BE0 (VidMmReferenceAllocationForTokenSubmission.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::ReferenceAllocationForTokenSubmission(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        __int64 **a3,
        __int64 ***a4)
{
  __int64 v6; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // rax

  *a4 = 0LL;
  v6 = **a3;
  if ( *(_BYTE *)(v6 + 96) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(this);
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v8) + 24) = v6;
    }
    return 3223191814LL;
  }
  else if ( *(_DWORD *)(v6 + 164) )
  {
    if ( a2 && a3[1] != (__int64 *)a2 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdAssertion(this, a2);
      v10[3] = a2;
      v10[4] = a3;
      v10[5] = a3[1];
      WdLogEvent5_WdAssertion(v10);
      return 3223191829LL;
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)a3 + 26);
      *a4 = a3;
      return 0LL;
    }
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(this);
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9) + 24) = v6;
    }
    return 3223191812LL;
  }
}
