/*
 * XREFs of MiCompleteSecureProcessFault @ 0x1402618AC
 * Callers:
 *     MiAllocateWsle @ 0x1400161C0 (MiAllocateWsle.c)
 *     MiValidVirtualizationFault @ 0x140262110 (MiValidVirtualizationFault.c)
 * Callees:
 *     MiAbortCombineScan @ 0x140051BE8 (MiAbortCombineScan.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x140124940 (MiCaptureDirtyBitToPfn.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiMarkPfnVerified @ 0x1401380B4 (MiMarkPfnVerified.c)
 */

int __fastcall MiCompleteSecureProcessFault(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  struct _KEVENT *v4; // rcx

  v2 = *(_QWORD *)(BugCheckParameter2 + 40);
  v3 = v2 >> 57;
  if ( (v2 & 0x200000000000000LL) == 0 && ((v2 >> 54) & 7) != 3 )
  {
    MiLockPageAtDpcInline(BugCheckParameter2);
    if ( ((*(_QWORD *)(BugCheckParameter2 + 40) >> 54) & 7) != 3 )
    {
      MiAbortCombineScan(BugCheckParameter2);
      MiMarkPfnVerified(BugCheckParameter2, 4);
    }
    v3 = MiCaptureDirtyBitToPfn(BugCheckParameter2);
    v4 = *(struct _KEVENT **)(qword_1403CBD88 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v3 )
      LODWORD(v3) = MiReleasePageFileInfo(v4, v3, 1);
  }
  return v3;
}
