/*
 * XREFs of MmDisableModifiedWriteOfSection @ 0x1400BA510
 * Callers:
 *     CcInitializeCacheMapEx @ 0x1400DF8F0 (CcInitializeCacheMapEx.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x1400E1590 (MiLockSectionControlArea.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

char __fastcall MmDisableModifiedWriteOfSection(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // eax
  unsigned __int8 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 1;
  v2 = MiLockSectionControlArea(a1, 1LL, &v6);
  v3 = v2;
  if ( v2 )
  {
    v4 = *(_DWORD *)(v2 + 56);
    if ( *(_QWORD *)(v3 + 40) )
      v1 = (v4 & 8) != 0;
    else
      *(_DWORD *)(v3 + 56) = v4 | 8;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    __writecr8(v6);
    LOBYTE(v2) = v1;
  }
  return v2;
}
