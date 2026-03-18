/*
 * XREFs of MiCompleteSecureProcessFault @ 0x14022870C
 * Callers:
 *     MiAllocateWsle @ 0x140047A60 (MiAllocateWsle.c)
 *     MiValidVirtualizationFault @ 0x140228F84 (MiValidVirtualizationFault.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiCaptureDirtyBitToPfn @ 0x140032400 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiMarkPfnVerified @ 0x1400CCEFC (MiMarkPfnVerified.c)
 *     MiAbortCombineScan @ 0x1400ED698 (MiAbortCombineScan.c)
 */

int __fastcall MiCompleteSecureProcessFault(__int64 a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  struct _KEVENT *v4; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  v3 = v2 >> 57;
  if ( (v2 & 0x200000000000000LL) == 0 && ((v2 >> 54) & 7) != 3 )
  {
    MiLockPageAtDpcInline(a1);
    if ( ((*(_QWORD *)(a1 + 40) >> 54) & 7) != 3 )
    {
      MiAbortCombineScan(a1);
      MiMarkPfnVerified(a1, 4);
    }
    v3 = MiCaptureDirtyBitToPfn(a1);
    v4 = *(struct _KEVENT **)(qword_140388AF0 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v3 )
      LODWORD(v3) = MiReleasePageFileInfo(v4, v3, 1);
  }
  return v3;
}
