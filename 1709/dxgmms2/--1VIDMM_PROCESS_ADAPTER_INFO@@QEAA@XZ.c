/*
 * XREFs of ??1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C00509FC
 * Callers:
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C00017B0 (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C0050E60 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 */

void __fastcall VIDMM_PROCESS_ADAPTER_INFO::~VIDMM_PROCESS_ADAPTER_INFO(void **this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int i; // r14d
  __int64 v6; // r15
  __int64 *v7; // rbp
  __int64 *v8; // rsi
  void **v9; // rcx
  __int64 v10; // rbx
  _QWORD *v11; // rax
  unsigned __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // rax
  __int64 v17; // rbx
  _QWORD *v18; // rax

  operator delete(this[2]);
  for ( i = 0; i < *((_DWORD *)*this + 1604); ++i )
  {
    v6 = 2LL;
    v7 = (__int64 *)((char *)this[6] + 296 * i);
    v8 = v7 + 25;
    do
    {
      if ( *(v8 - 8) || *(v8 - 16) || *v8 )
      {
        v10 = *v8;
        v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v3, v2, v4);
        v11[7] = 0LL;
        v11[3] = 270LL;
        v11[4] = 51LL;
        v11[5] = this;
        v11[6] = v10;
        WdLogEvent5_WdCriticalError(v11);
      }
      ++v8;
      --v6;
    }
    while ( v6 );
    if ( VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment((VIDMM_PROCESS_BUDGET_STATE *)v7) )
    {
      v12 = VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment((VIDMM_PROCESS_BUDGET_STATE *)v7);
      v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v13, v15);
      v16[7] = 0LL;
      v16[3] = 270LL;
      v16[4] = 51LL;
      v16[5] = this;
      v16[6] = v12;
      WdLogEvent5_WdCriticalError(v16);
    }
    if ( v7[27] )
    {
      v17 = v7[27];
      v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v3, v2, v4);
      v18[7] = 0LL;
      v18[3] = 270LL;
      v18[4] = 51LL;
      v18[5] = this;
      v18[6] = v17;
      WdLogEvent5_WdCriticalError(v18);
    }
  }
  v9 = (void **)this[6];
  if ( v9 != this + 7 )
  {
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
  }
}
