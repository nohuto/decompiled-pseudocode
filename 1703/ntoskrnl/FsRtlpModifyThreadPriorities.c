/*
 * XREFs of FsRtlpModifyThreadPriorities @ 0x140019D84
 * Callers:
 *     FsRtlpRemoveAndBreakRHIrp @ 0x140019A38 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlUninitializeOplock @ 0x140029950 (FsRtlUninitializeOplock.c)
 *     FsRtlpOplockBreakToII @ 0x14002FB30 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x14003BE58 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x14004E3D0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x1400507C0 (FsRtlpOplockCleanup.c)
 *     FsRtlpCancelExclusiveIrp @ 0x1401318A4 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140151410 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1401E3940 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x140685770 (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x1406858A8 (FsRtlpOplockBreakNotify.c)
 * Callees:
 *     FsRtlpDoBoost @ 0x140019E4C (FsRtlpDoBoost.c)
 *     PsBoostThreadIoEx @ 0x14008D210 (PsBoostThreadIoEx.c)
 */

__int64 __fastcall FsRtlpModifyThreadPriorities(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdi
  unsigned int CurrentThread; // ebp
  __int64 v7; // rcx
  int v8; // r9d
  __int64 v9; // rcx
  _QWORD *i; // rdi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v4 = a2;
  if ( (_BYTE)a3 )
  {
    CurrentThread = (unsigned int)KeGetCurrentThread();
    v7 = *(_QWORD *)(a1 + 24);
    if ( v7 )
    {
      v8 = a1 + 144;
    }
    else
    {
      if ( !a2 )
      {
LABEL_12:
        for ( i = *(_QWORD **)(a1 + 72); i != (_QWORD *)(a1 + 72); i = (_QWORD *)*i )
          result = FsRtlpDoBoost(i[5], CurrentThread, (int)a1 + 32, (int)i + 48, a1);
        return result;
      }
      v7 = *(_QWORD *)(a2 + 40);
      v8 = a2 + 48;
    }
    if ( v7 )
      return FsRtlpDoBoost(v7, CurrentThread, (int)a1 + 32, v8, a1);
    goto LABEL_12;
  }
  if ( a2 )
  {
    result = *(unsigned int *)(a2 + 48);
    if ( (result & 0x20) != 0 )
    {
      v9 = *(_QWORD *)(a2 + 40);
      LOBYTE(a3) = 1;
      LOBYTE(a2) = 1;
      result = PsBoostThreadIoEx(v9, a2, a3, a1);
      *(_DWORD *)(v4 + 48) &= ~0x20u;
    }
  }
  else
  {
    result = *(unsigned int *)(a1 + 144);
    if ( (result & 0x20) != 0 )
    {
      LOBYTE(a3) = 1;
      LOBYTE(a2) = 1;
      result = PsBoostThreadIoEx(*(_QWORD *)(a1 + 24), a2, a3, a1);
      *(_DWORD *)(a1 + 144) &= ~0x20u;
    }
  }
  return result;
}
