/*
 * XREFs of ?PurgeAllSegments@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0075164
 * Callers:
 *     VidMmPurgeAllSegments @ 0x1C0015F40 (VidMmPurgeAllSegments.c)
 * Callees:
 *     memset @ 0x1C0018400 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0060F60 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C0075484 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::PurgeAllSegments(VIDMM_GLOBAL *a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD v13[12]; // [rsp+20h] [rbp-68h] BYREF

  v4 = a2;
  if ( *((_DWORD *)a1 + 10022) )
  {
    memset(v13, 0, 0x58uLL);
    v13[0] = -4294967194LL;
    LODWORD(v13[5]) = v4;
    v13[6] = a3;
    v6 = VIDMM_GLOBAL::QueueSystemCommandAndWait(a1, (struct _VIDMM_SYSTEM_COMMAND *)v13, 1);
    v10 = v6;
    if ( v6 < 0 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7, v9);
      v12[3] = 270LL;
      v12[4] = 23LL;
      v12[5] = v10;
      v12[6] = 0LL;
      v12[7] = 0LL;
      WdLogEvent5_WdCriticalError(v12);
    }
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(0);
  }
  else
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdWarning(a1);
    v11[3] = a1;
    v11[4] = v4;
    v11[5] = a3;
    WdLogEvent5_WdWarning(v11);
  }
}
