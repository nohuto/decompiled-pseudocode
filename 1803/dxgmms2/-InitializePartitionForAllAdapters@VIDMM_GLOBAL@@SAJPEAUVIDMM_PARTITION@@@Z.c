/*
 * XREFs of ?InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z @ 0x1C0085C60
 * Callers:
 *     ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x1C0002574 (-VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z.c)
 * Callees:
 *     ??0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1C0003850 (--0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0015DC8 (-EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitializePartitionForAllAdapters(struct VIDMM_PARTITION *this)
{
  __int64 v2; // rdi
  struct _LIST_ENTRY *i; // rbx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  LODWORD(v2) = 0;
  DXGAUTOEXPUSHLOCKSHARED::DXGAUTOEXPUSHLOCKSHARED(
    (DXGAUTOEXPUSHLOCKSHARED *)&v9,
    (struct _EX_PUSH_LOCK *const)&VIDMM_GLOBAL::_AdapterListLock);
  for ( i = VIDMM_GLOBAL::_AdapterListHead.Flink; i != &VIDMM_GLOBAL::_AdapterListHead; i = i->Flink )
  {
    v5 = VIDMM_PARTITION::EnsureAdapter(this, (struct VIDMM_GLOBAL *)&i[-2627]);
    v2 = v5;
    if ( v5 < 0 )
    {
      v8 = (_QWORD *)WdLogNewEntry5_WdAssertion(v7, v6);
      v8[3] = i - 2627;
      v8[4] = this;
      v8[5] = v2;
      WdLogEvent5_WdAssertion(v8);
      break;
    }
  }
  if ( v11 == 1 )
  {
    ExReleasePushLockSharedEx(v10, 0LL);
  }
  else if ( v11 == 2 )
  {
    ExReleasePushLockExclusiveEx(v10, 0LL);
  }
  return (unsigned int)v2;
}
