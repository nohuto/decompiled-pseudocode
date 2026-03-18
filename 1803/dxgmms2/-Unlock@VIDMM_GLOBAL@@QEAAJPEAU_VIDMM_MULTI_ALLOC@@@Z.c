/*
 * XREFs of ?Unlock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C006B210
 * Callers:
 *     ?VidMmUnlock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00053E0 (-VidMmUnlock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00053A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     McTemplateK0p @ 0x1C0023F00 (McTemplateK0p.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0065330 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A3FE4 (-UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Unlock(VIDMM_GLOBAL *this, __int64 **a2)
{
  __int64 *v2; // rdi
  __int64 v5; // rbx
  bool v6; // bp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 CurrentProcess; // rax
  _QWORD v16[12]; // [rsp+20h] [rbp-78h] BYREF

  v2 = *a2;
  v5 = **a2;
  if ( DXGPROCESS::GetCurrent() )
    DXGPROCESS::GetCurrent();
  v6 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v5 + 480, 0LL);
  if ( *((_DWORD *)v2 + 19) )
  {
    if ( (*(_DWORD *)(v5 + 84) & 0x20) != 0 )
    {
      --*(_DWORD *)(v5 + 344);
      if ( (*((_DWORD *)v2 + 19))-- == 1 )
      {
        if ( (*(_DWORD *)(v5 + 80) & 0x1000) != 0 )
        {
          UnlockParavirtualizedAllocationOnHost((struct _VIDMM_GLOBAL_ALLOC *)v5);
        }
        else
        {
          v8 = **(unsigned int **)(v5 + 504);
          if ( (v8 & 0x40000) != 0 )
          {
            if ( (v8 & 0x20000000) != 0 )
            {
              CurrentProcess = PsGetCurrentProcess(v8, v7, v9, v10);
              MmUnmapViewOfSection(CurrentProcess, v2[2]);
            }
            else
            {
              (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v2[1] + 24) + 80LL))(
                *(_QWORD *)(v2[1] + 24),
                v2[3],
                v2[2]);
            }
            v2[2] = 0LL;
          }
          else
          {
            v6 = *(_QWORD *)(v5 + 448) != 0LL;
          }
        }
      }
      if ( !*(_DWORD *)(v5 + 344) )
        *(_DWORD *)(v5 + 84) &= ~0x20u;
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0p(v8, &EventUnlock2, v9, a2);
    }
    else
    {
      v14 = WdLogNewEntry5_WdAssertion(v8, v7);
      *(_QWORD *)(v14 + 24) = 22412LL;
      WdLogEvent5_WdAssertion(v14);
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v13 + 24) = a2;
    WdLogEvent5_WdAssertion(v13);
  }
  ExReleasePushLockExclusiveEx(v5 + 480, 0LL);
  KeLeaveCriticalRegion();
  if ( v6 )
  {
    memset(v16, 0, 0x58uLL);
    LODWORD(v16[0]) = 129;
    v16[5] = v5;
    VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v16, 1);
  }
  return 0LL;
}
