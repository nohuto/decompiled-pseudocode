/*
 * XREFs of FsRtlpReleaseIrpsWaitingForRH @ 0x1400B7088
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400655BC (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlCheckOplockEx @ 0x140066340 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockCleanup @ 0x140067180 (FsRtlpOplockCleanup.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1400B6F7C (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14015D818 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1404E2ABC (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpOplockKeysEqual @ 0x140066EE0 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14015F014 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 */

void __fastcall FsRtlpReleaseIrpsWaitingForRH(__int64 a1)
{
  _QWORD *v1; // r14
  _QWORD *v3; // rbx
  char v4; // bp
  _QWORD **v5; // r13
  _QWORD *v6; // rsi
  void *v7; // r15
  __int64 v8; // r12
  _QWORD *v9; // rax

  v1 = (_QWORD *)(a1 + 88);
  v3 = *(_QWORD **)(a1 + 88);
  v4 = 1;
  if ( v3 != (_QWORD *)(a1 + 88) )
  {
    v5 = (_QWORD **)(a1 + 72);
    do
    {
      v6 = *v5;
      v7 = v3;
      if ( *v5 == v5 && (*(_DWORD *)(a1 + 144) & 0x10000) == 0 )
        goto LABEL_6;
      if ( !*((_BYTE *)v3 + 52) )
      {
        if ( (*(_DWORD *)(a1 + 144) & 0x10000) != 0 )
          v6 = *(_QWORD **)(a1 + 120);
        v8 = ((*(_DWORD *)(a1 + 144) & 0x10000) != 0 ? 0x30 : 0) + a1 + 72;
        while ( v6 != (_QWORD *)v8 )
        {
          v9 = v6 - 7;
          if ( (*(_DWORD *)(a1 + 144) & 0x10000) == 0 )
            v9 = v6;
          if ( !FsRtlpOplockKeysEqual(v3[7], v9[3], 0) )
          {
            v4 = 0;
            break;
          }
          v6 = (_QWORD *)*v6;
        }
        if ( v4 )
        {
LABEL_6:
          v3 = (_QWORD *)v3[1];
          FsRtlpRemoveAndCompleteWaitingIrp(v7);
        }
      }
      v3 = (_QWORD *)*v3;
    }
    while ( v3 != v1 );
  }
}
