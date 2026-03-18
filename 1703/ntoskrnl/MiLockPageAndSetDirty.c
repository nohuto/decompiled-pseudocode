/*
 * XREFs of MiLockPageAndSetDirty @ 0x140100B80
 * Callers:
 *     NtLockVirtualMemory @ 0x14007687C (NtLockVirtualMemory.c)
 *     MiIssueHardFault @ 0x140096E10 (MiIssueHardFault.c)
 *     MiCopyToUserVa @ 0x1400A6BD0 (MiCopyToUserVa.c)
 *     MiValidFault @ 0x1400FCBC0 (MiValidFault.c)
 *     NtGetWriteWatch @ 0x140101A00 (NtGetWriteWatch.c)
 *     MmSetPageProtection @ 0x140135210 (MmSetPageProtection.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x140100BFC (MiCaptureDirtyBitToPfn.c)
 */

void __fastcall MiLockPageAndSetDirty(__int64 a1, int a2)
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
    v2 = *(struct _KEVENT **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v5 )
    MiReleasePageFileInfo(v2, v5, 1);
  if ( v4 != 17 )
    __writecr8(v4);
}
