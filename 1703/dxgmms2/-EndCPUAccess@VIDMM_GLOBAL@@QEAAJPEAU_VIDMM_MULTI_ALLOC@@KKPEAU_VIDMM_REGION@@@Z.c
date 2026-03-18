/*
 * XREFs of ?EndCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REGION@@@Z @ 0x1C00614B4
 * Callers:
 *     VidMmEndCPUAccess @ 0x1C0012A80 (VidMmEndCPUAccess.c)
 * Callees:
 *     Template_ppq @ 0x1C001F838 (Template_ppq.c)
 */

__int64 __fastcall VIDMM_GLOBAL::EndCPUAccess(VIDMM_GLOBAL *this, __int64 **a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rax
  int v14; // [rsp+28h] [rbp-10h]

  v4 = 0LL;
  v5 = a4;
  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v9 + 24) = a2;
    *(_QWORD *)(v9 + 32) = v5;
  }
  if ( (v5 & 0xFFFFFFFE) != 0 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v10 + 24) = 7279LL;
    WdLogEvent5_WdAssertion(v10);
    return 3221225712LL;
  }
  v7 = **a2;
  if ( !*(_DWORD *)(v7 + 344) )
  {
    v11 = WdLogNewEntry5_WdWarning(v7, a2);
    WdLogEvent5_WdWarning(v11);
    return 3221225485LL;
  }
  if ( (*(_DWORD *)(v7 + 84) & 0x20) != 0 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v7, a2);
    *(_QWORD *)(v12 + 24) = 7295LL;
    WdLogEvent5_WdAssertion(v12);
    return 3221225485LL;
  }
  _InterlockedDecrement((volatile signed __int32 *)(v7 + 344));
  if ( bTracingEnabled )
  {
    v13 = a2[1];
    if ( v13 )
      v4 = v13[3];
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      v14 = v5;
      Template_ppq(v7, &EventUnlock, a3, v4, a2, v14);
    }
  }
  return 0LL;
}
