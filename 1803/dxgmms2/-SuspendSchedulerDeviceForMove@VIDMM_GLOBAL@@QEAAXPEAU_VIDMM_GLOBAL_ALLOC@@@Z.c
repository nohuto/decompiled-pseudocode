/*
 * XREFs of ?SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A3B80
 * Callers:
 *     ?SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00A36C0 (-SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1C00B0C0C (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00B2D80 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00767CC (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::SuspendSchedulerDeviceForMove(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v3; // rax
  __int64 **v4; // rcx
  char *v5; // rbp
  char *v6; // rbx
  char *v7; // r15
  char *v8; // r15
  char *v9; // rdi
  __int64 v10; // r14
  __int64 *v11; // rsi
  __int64 v12; // rax

  v3 = WdLogNewEntry5_WdEvent(this, a2);
  *(_QWORD *)(v3 + 24) = a2;
  WdLogEvent5_WdEvent(v3);
  v5 = (char *)a2 + 296;
  v6 = (char *)*((_QWORD *)a2 + 37);
  while ( v6 != v5 )
  {
    v7 = v6;
    v6 = *(char **)v6;
    v8 = v7 - 16;
    v9 = *(char **)v8;
    while ( v9 != v8 )
    {
      v10 = *((_QWORD *)v9 - 4);
      v9 = *(char **)v9;
      if ( (*(_DWORD *)(v10 + 52) & 7) == 0 )
      {
        v11 = (__int64 *)(v10 + 288);
        if ( !*(_QWORD *)(v10 + 288) )
        {
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v4) + 24) = v10;
          VIDMM_DEVICE::SuspendSchedulerDevice((VIDMM_DEVICE *)v10);
          v12 = *(_QWORD *)v10 + 42000LL;
          v4 = *(__int64 ***)(*(_QWORD *)v10 + 42008LL);
          if ( *v4 != (__int64 *)v12 )
            __fastfail(3u);
          *v11 = v12;
          *(_QWORD *)(v10 + 296) = v4;
          *v4 = v11;
          *(_QWORD *)(v12 + 8) = v11;
        }
      }
    }
  }
}
