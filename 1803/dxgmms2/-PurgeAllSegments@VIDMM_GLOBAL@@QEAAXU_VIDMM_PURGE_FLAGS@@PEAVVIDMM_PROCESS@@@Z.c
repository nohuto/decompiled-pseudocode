/*
 * XREFs of ?PurgeAllSegments@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00A27D4
 * Callers:
 *     VidMmPurgeAllSegments @ 0x1C00233B0 (VidMmPurgeAllSegments.c)
 * Callees:
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0065330 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C00ADED8 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::PurgeAllSegments(VIDMM_GLOBAL *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  _QWORD *v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  _QWORD *v12; // rax
  _QWORD v13[12]; // [rsp+20h] [rbp-68h] BYREF

  v4 = (unsigned int)a2;
  if ( *((_DWORD *)a1 + 10166) )
  {
    memset(v13, 0, 0x58uLL);
    v13[0] = -4294967194LL;
    LODWORD(v13[5]) = v4;
    v13[6] = a3;
    v7 = VIDMM_GLOBAL::QueueSystemCommandAndWait(a1, (struct _VIDMM_SYSTEM_COMMAND *)v13, 1);
    v11 = v7;
    if ( v7 < 0 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8, v10);
      v12[3] = 270LL;
      v12[4] = 23LL;
      v12[5] = v11;
      v12[6] = 0LL;
      v12[7] = 0LL;
      WdLogEvent5_WdCriticalError(v12);
    }
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(0);
  }
  else
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2);
    v6[3] = a1;
    v6[4] = v4;
    v6[5] = a3;
    WdLogEvent5_WdWarning(v6);
  }
}
