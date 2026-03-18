/*
 * XREFs of ?RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00751F0
 * Callers:
 *     VidMmRestoreFromPurge @ 0x1C0015F60 (VidMmRestoreFromPurge.c)
 * Callees:
 *     memset @ 0x1C0018400 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0060F60 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?MapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0074D3C (-MapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C007B468 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RestoreFromPurge(VIDMM_GLOBAL *this, __int64 a2)
{
  bool v2; // zf
  unsigned int i; // edi
  __int64 v5; // rsi
  int inited; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r14
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _DWORD v19[24]; // [rsp+20h] [rbp-68h] BYREF

  v2 = *((_DWORD *)this + 10022) == 0;
  *((_BYTE *)this + 6496) = 0;
  if ( v2 )
  {
    VIDMM_GLOBAL::MapAllPagingBuffers(this);
    for ( i = 0; i < *((_DWORD *)this + 1604); ++i )
    {
      v5 = *((_QWORD *)this + 5021) + 1552LL * i;
      if ( (*(_BYTE *)(v5 + 436) & 0x20) != 0 )
      {
        inited = VIDMM_GLOBAL::InitPagingProcessVaSpace(this, i, 0);
        v10 = inited;
        if ( inited < 0 )
        {
          v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7, v9);
          v17[3] = 270LL;
          v17[4] = 23LL;
          v17[5] = this;
          v17[6] = i;
          v17[7] = v10;
          WdLogEvent5_WdCriticalError(v17);
        }
        *(_BYTE *)(v5 + 436) &= ~0x20u;
      }
    }
    memset(v19, 0, 0x58uLL);
    v19[1] = -1;
    v19[0] = 101;
    v11 = VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v19, 1);
    v15 = v11;
    if ( v11 < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v12, v14);
      v18[3] = 270LL;
      v18[4] = 23LL;
      v18[5] = v15;
      v18[6] = 0LL;
      v18[7] = 0LL;
      WdLogEvent5_WdCriticalError(v18);
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v16 + 24) = 8764LL;
    WdLogEvent5_WdAssertion(v16);
  }
}
