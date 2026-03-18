/*
 * XREFs of MiInsertUnusedSegment @ 0x140098DC0
 * Callers:
 *     MiCheckControlArea @ 0x14009B950 (MiCheckControlArea.c)
 *     MiCleanSection @ 0x140149074 (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x140209CC8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140209E24 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x14020A348 (MiFlushControlArea.c)
 *     MiProcessDeleteOnClose @ 0x14020A790 (MiProcessDeleteOnClose.c)
 *     MiSetDeleteOnClose @ 0x14020AD08 (MiSetDeleteOnClose.c)
 * Callees:
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 *     MiConvertStaticSubsections @ 0x140098A60 (MiConvertStaticSubsections.c)
 *     MiReleaseControlAreaCharges @ 0x1400990E0 (MiReleaseControlAreaCharges.c)
 *     ExpAcquireSpinLockExclusive @ 0x14009B290 (ExpAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiInsertUnusedSegment(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  int v5; // eax
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  _QWORD *v8; // rcx
  _QWORD *v10; // rbx
  _QWORD *v11; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0LL;
  v4 = *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v5 = *(_DWORD *)(a1 + 56);
  if ( (v5 & 0x100) != 0 )
    return 0LL;
  if ( (v5 & 0x20) == 0 && *(_QWORD *)(a1 + 64) && (v5 & 0x400) == 0 )
    v3 = MiConvertStaticSubsections(a1);
  v6 = v4 + 1344;
  LOBYTE(a2) = -1;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v6, a2);
  else
    ExpAcquireSpinLockExclusive(v6, a2);
  if ( !v3 )
    v3 = MiReleaseControlAreaCharges(a1, 1LL);
  *(_DWORD *)(a1 + 56) |= 0x8000000u;
  if ( (*(_DWORD *)(a1 + 56) & 0x40000) != 0 )
  {
    v10 = (_QWORD *)(a1 + 8);
    v11 = *(_QWORD **)(v4 + 1480);
    if ( *v11 != v4 + 1472 )
      __fastfail(3u);
    *v10 = v4 + 1472;
    v10[1] = v11;
    *v11 = v10;
    *(_QWORD *)(v4 + 1480) = v10;
    ++*(_DWORD *)(v4 + 1348);
    if ( !*(_BYTE *)(v4 + 1552) && (*(_DWORD *)(v4 + 4) & 1) == 0 )
    {
      *(_BYTE *)(v4 + 1552) = 1;
      KiSetTimerEx(v4 + 1488, Mi10Milliseconds.QuadPart, 0, 0, 0LL);
    }
  }
  else
  {
    v7 = (_QWORD *)(a1 + 8);
    v8 = *(_QWORD **)(v4 + 1568);
    if ( *v8 != v4 + 1560 )
      __fastfail(3u);
    *v7 = v4 + 1560;
    v7[1] = v8;
    *v8 = v7;
    *(_QWORD *)(v4 + 1568) = v7;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4 + 1344, retaddr);
  else
    *(_DWORD *)(v4 + 1344) = 0;
  return v3;
}
