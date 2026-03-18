/*
 * XREFs of MiCompleteSecureProcessFault @ 0x14021BE20
 * Callers:
 *     MiAllocateWsle @ 0x1400BCCF0 (MiAllocateWsle.c)
 *     MiValidVirtualizationFault @ 0x14021C39C (MiValidVirtualizationFault.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x140005D80 (MiMarkPfnVerified.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x140100BFC (MiCaptureDirtyBitToPfn.c)
 *     MiAbortCombineScan @ 0x140103628 (MiAbortCombineScan.c)
 */

void __fastcall MiCompleteSecureProcessFault(__int64 a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  struct _KEVENT *v4; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  if ( (v2 & 0x200000000000000LL) == 0 && ((v2 >> 54) & 7) != 3 )
  {
    MiLockPageAtDpcInline(a1);
    if ( ((*(_QWORD *)(a1 + 40) >> 54) & 7) != 3 )
    {
      MiAbortCombineScan(a1);
      MiMarkPfnVerified(a1, 4);
    }
    v3 = MiCaptureDirtyBitToPfn(a1);
    v4 = *(struct _KEVENT **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v3 )
      MiReleasePageFileInfo(v4, v3, 1);
  }
}
