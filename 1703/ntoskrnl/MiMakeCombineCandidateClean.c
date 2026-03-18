/*
 * XREFs of MiMakeCombineCandidateClean @ 0x140100A60
 * Callers:
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MiCrcStillIntact @ 0x1400FF430 (MiCrcStillIntact.c)
 * Callees:
 *     MiCaptureWriteWatchDirtyBit @ 0x14002CA88 (MiCaptureWriteWatchDirtyBit.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x140100BFC (MiCaptureDirtyBitToPfn.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiMakeCombineCandidateClean(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rdi
  struct _KEVENT *v7; // rbp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = MI_READ_PTE_LOCK_FREE(a1);
  v4 = MI_READ_PTE_LOCK_FREE(&v9);
  v9 = v5 & 0xFFFFFFFFFFFFFFBDuLL;
  v6 = 48 * ((v4 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  MiWriteValidPteNewProtection(a1, v5 & 0xFFFFFFFFFFFFFFBDuLL);
  v7 = 0LL;
  MiLockPageAtDpcInline(v6);
  v8 = MiCaptureDirtyBitToPfn(v6);
  if ( v8 )
    v7 = *(struct _KEVENT **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v6 + 40) >> 40) & 0x3FFLL));
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v8 )
    MiReleasePageFileInfo(v7, v8, 1);
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 48) & 7) == 4 )
      MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, a1 << 25 >> 16, a2);
  }
}
