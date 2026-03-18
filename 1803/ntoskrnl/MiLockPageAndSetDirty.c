/*
 * XREFs of MiLockPageAndSetDirty @ 0x1401248B8
 * Callers:
 *     MiValidFault @ 0x14001ECF0 (MiValidFault.c)
 *     MiCopyToUserVa @ 0x14003C7F0 (MiCopyToUserVa.c)
 *     MiIssueHardFault @ 0x140059D80 (MiIssueHardFault.c)
 *     MmSetPageProtection @ 0x1400C7020 (MmSetPageProtection.c)
 *     MiProtectPrivateMemory @ 0x1401139F0 (MiProtectPrivateMemory.c)
 *     NtLockVirtualMemory @ 0x14013B8F4 (NtLockVirtualMemory.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiCaptureDirtyBitToPfn @ 0x140124940 (MiCaptureDirtyBitToPfn.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 */

int __fastcall MiLockPageAndSetDirty(__int64 a1, int a2)
{
  struct _KEVENT *v2; // rsi
  unsigned __int8 v4; // di
  unsigned __int64 v5; // rax

  v2 = 0LL;
  if ( a2 == 1 )
  {
    v4 = 17;
    MiLockPageAtDpcInline(a1);
  }
  else
  {
    v4 = MiLockPageInline(a1);
  }
  v5 = MiCaptureDirtyBitToPfn(a1);
  if ( v5 )
    v2 = *(struct _KEVENT **)(qword_1403CBD88 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v5 )
    LODWORD(v5) = MiReleasePageFileInfo(v2, v5, 1);
  if ( v4 != 17 )
  {
    LODWORD(v5) = v4;
    __writecr8(v4);
  }
  return v5;
}
