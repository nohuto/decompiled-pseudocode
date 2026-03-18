/*
 * XREFs of FsRtlpReleaseIrpsWaitingForRH @ 0x140019240
 * Callers:
 *     FsRtlpCancelOplockRHIrp @ 0x140019134 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x14004E3D0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x1400507C0 (FsRtlpOplockCleanup.c)
 *     FsRtlCheckOplockEx @ 0x1400FE350 (FsRtlCheckOplockEx.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140151410 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockFsctrlInternal @ 0x14048C37C (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpOplockKeysEqual @ 0x140050C14 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140136A3C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 */

void __fastcall FsRtlpReleaseIrpsWaitingForRH(__int64 a1)
{
  __int64 *v1; // rsi
  char v2; // bp
  __int64 *v3; // rbx
  _QWORD *v4; // r14
  _QWORD *v5; // rdi
  __int64 *v6; // r15

  v1 = (__int64 *)(a1 + 88);
  v2 = 1;
  v3 = *(__int64 **)(a1 + 88);
  if ( v3 != (__int64 *)(a1 + 88) )
  {
    v4 = (_QWORD *)(a1 + 72);
    do
    {
      v5 = (_QWORD *)*v4;
      v6 = v3;
      if ( (_QWORD *)*v4 == v4 )
        goto LABEL_5;
      if ( !*((_BYTE *)v3 + 52) )
      {
        while ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(*(_QWORD *)(v3[2] + 184) + 48LL), v5[3], 0LL) )
        {
          v5 = (_QWORD *)*v5;
          if ( v5 == v4 )
            goto LABEL_13;
        }
        v2 = 0;
LABEL_13:
        if ( v2 )
        {
LABEL_5:
          v3 = (__int64 *)v3[1];
          FsRtlpRemoveAndCompleteWaitingIrp(v6);
        }
      }
      v3 = (__int64 *)*v3;
    }
    while ( v3 != v1 );
  }
}
