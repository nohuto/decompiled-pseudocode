/*
 * XREFs of FsRtlpReleaseIrpsWaitingForRH @ 0x140108B78
 * Callers:
 *     FsRtlpOplockCleanup @ 0x140024868 (FsRtlpOplockCleanup.c)
 *     FsRtlCheckOplockEx @ 0x140085CC0 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400868E0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpCancelOplockRHIrp @ 0x140108A6C (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140154410 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockFsctrlInternal @ 0x14049062C (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14000EFA8 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpOplockKeysEqual @ 0x1400874F0 (FsRtlpOplockKeysEqual.c)
 */

void __fastcall FsRtlpReleaseIrpsWaitingForRH(__int64 a1)
{
  __int64 *v1; // r14
  __int64 *v3; // rbx
  char v4; // bp
  _QWORD *v5; // r13
  __int64 *v6; // r12
  _QWORD **v7; // r15
  _QWORD *i; // rsi
  _QWORD *v9; // rdx

  v1 = (__int64 *)(a1 + 88);
  v3 = *(__int64 **)(a1 + 88);
  v4 = 1;
  if ( v3 != (__int64 *)(a1 + 88) )
  {
    v5 = (_QWORD *)(a1 + 72);
    do
    {
      v6 = v3;
      if ( (_QWORD *)*v5 == v5 && (*(_DWORD *)(a1 + 144) & 0x10000) == 0 )
        goto LABEL_6;
      if ( !*((_BYTE *)v3 + 52) )
      {
        v7 = (_QWORD **)(((*(_DWORD *)(a1 + 144) & 0x10000) != 0 ? 0x30 : 0) + a1 + 72);
        for ( i = *v7; i != v7; i = (_QWORD *)*i )
        {
          v9 = i - 7;
          if ( (*(_DWORD *)(a1 + 144) & 0x10000) == 0 )
            v9 = i;
          if ( !FsRtlpOplockKeysEqual(v3[7], v9[3], 0) )
          {
            v4 = 0;
            break;
          }
        }
        if ( v4 )
        {
LABEL_6:
          v3 = (__int64 *)v3[1];
          FsRtlpRemoveAndCompleteWaitingIrp(v6);
        }
      }
      v3 = (__int64 *)*v3;
    }
    while ( v3 != v1 );
  }
}
