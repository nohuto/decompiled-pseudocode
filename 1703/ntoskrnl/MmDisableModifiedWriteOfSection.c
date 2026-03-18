/*
 * XREFs of MmDisableModifiedWriteOfSection @ 0x14002BA80
 * Callers:
 *     CcInitializeCacheMapEx @ 0x1400AD640 (CcInitializeCacheMapEx.c)
 *     CcSetPrivateWriteFile @ 0x1401DE2BC (CcSetPrivateWriteFile.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockSectionControlArea @ 0x140099610 (MiLockSectionControlArea.c)
 */

char __fastcall MmDisableModifiedWriteOfSection(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // rax
  unsigned __int8 v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = 1;
  v2 = MiLockSectionControlArea(a1, 1LL, &v4);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 40) )
      v1 = (*(_DWORD *)(v2 + 56) & 8) != 0;
    else
      *(_DWORD *)(v2 + 56) |= 8u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
    __writecr8(v4);
    LOBYTE(v2) = v1;
  }
  return v2;
}
