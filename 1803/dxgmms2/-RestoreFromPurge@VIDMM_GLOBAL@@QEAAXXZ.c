/*
 * XREFs of ?RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00A3464
 * Callers:
 *     VidMmRestoreFromPurge @ 0x1C00234F0 (VidMmRestoreFromPurge.c)
 * Callees:
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0065330 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C007E874 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?MapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00A187C (-MapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::RestoreFromPurge(VIDMM_GLOBAL *this, __int64 a2)
{
  bool v2; // zf
  __int64 v4; // rax
  unsigned int i; // edi
  __int64 v6; // rsi
  int inited; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r14
  _QWORD *v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rbx
  _QWORD *v18; // rax
  _DWORD v19[24]; // [rsp+20h] [rbp-68h] BYREF

  v2 = *((_DWORD *)this + 10166) == 0;
  *((_BYTE *)this + 7072) = 0;
  if ( v2 )
  {
    VIDMM_GLOBAL::MapAllPagingBuffers(this);
    for ( i = 0; i < *((_DWORD *)this + 1748); ++i )
    {
      v6 = *((_QWORD *)this + 5090) + 1560LL * i;
      if ( (*(_BYTE *)(v6 + 436) & 0x20) != 0 )
      {
        inited = VIDMM_GLOBAL::InitPagingProcessVaSpace(this, i, 0LL);
        v11 = inited;
        if ( inited < 0 )
        {
          v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8, v10);
          v12[3] = 270LL;
          v12[4] = 23LL;
          v12[5] = this;
          v12[6] = i;
          v12[7] = v11;
          WdLogEvent5_WdCriticalError(v12);
        }
        *(_BYTE *)(v6 + 436) &= ~0x20u;
      }
    }
    memset(v19, 0, 0x58uLL);
    v19[1] = -1;
    v19[0] = 101;
    v13 = VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v19, 1);
    v17 = v13;
    if ( v13 < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14, v16);
      v18[3] = 270LL;
      v18[4] = 23LL;
      v18[5] = v17;
      v18[6] = 0LL;
      v18[7] = 0LL;
      WdLogEvent5_WdCriticalError(v18);
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 8832LL;
    WdLogEvent5_WdAssertion(v4);
  }
}
