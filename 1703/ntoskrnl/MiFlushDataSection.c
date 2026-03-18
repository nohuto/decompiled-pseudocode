/*
 * XREFs of MiFlushDataSection @ 0x14005E1F4
 * Callers:
 *     MiCreateImageFileMap @ 0x1404921D4 (MiCreateImageFileMap.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     CcFlushCachePriv @ 0x140097F80 (CcFlushCachePriv.c)
 *     MmFlushSection @ 0x140098844 (MmFlushSection.c)
 *     MiLockSectionControlArea @ 0x140099610 (MiLockSectionControlArea.c)
 */

__int64 __fastcall MiFlushDataSection(__int64 a1)
{
  unsigned int v2; // edi
  __int64 result; // rax
  int v4; // ebx
  int v5; // r9d
  __int64 v6; // rcx
  _BYTE v7[24]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int8 v8; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  result = MiLockSectionControlArea(*(_QWORD *)(a1 + 40), 1LL, &v8);
  if ( result )
  {
    if ( *(_DWORD *)(result + 92) || *(_QWORD *)(result + 112) > 1uLL )
      v2 = 1;
    v4 = *(_DWORD *)(result + 88);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(result + 72));
    __writecr8(v8);
    v6 = *(_QWORD *)(a1 + 40);
    if ( v4 )
      CcFlushCachePriv(v6, 0, 0, 0, 0, (__int64)v7);
    else
      MmFlushSection(v6, 0, 0, v5, (__int64)v7, 1);
    return v2;
  }
  return result;
}
