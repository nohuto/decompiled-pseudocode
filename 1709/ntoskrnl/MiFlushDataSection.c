/*
 * XREFs of MiFlushDataSection @ 0x1400B71B4
 * Callers:
 *     MiCreateImageFileMap @ 0x1404F8B90 (MiCreateImageFileMap.c)
 * Callees:
 *     CcFlushCachePriv @ 0x140062D40 (CcFlushCachePriv.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmFlushSection @ 0x1400A49CC (MmFlushSection.c)
 *     MiLockSectionControlArea @ 0x1400A4BCC (MiLockSectionControlArea.c)
 */

__int64 __fastcall MiFlushDataSection(__int64 a1)
{
  unsigned int v2; // edi
  __int64 result; // rax
  int v4; // ebx
  __int64 v5; // rcx
  int v6[6]; // [rsp+30h] [rbp-18h] BYREF
  KIRQL v7; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  result = MiLockSectionControlArea(*(__int64 **)(a1 + 40), 1, &v7);
  if ( result )
  {
    if ( *(_DWORD *)(result + 92) || *(_QWORD *)(result + 112) > 1uLL )
      v2 = 1;
    v4 = *(_DWORD *)(result + 88);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(result + 72));
    __writecr8(v7);
    v5 = *(_QWORD *)(a1 + 40);
    if ( v4 )
      CcFlushCachePriv(v5, 0LL, 0, 0LL, 0, v6);
    else
      MmFlushSection(v5, 0LL, 0LL);
    return v2;
  }
  return result;
}
