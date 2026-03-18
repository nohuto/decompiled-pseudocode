/*
 * XREFs of MiMakeCombineCandidateClean @ 0x1400AE0C0
 * Callers:
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MiCrcStillIntact @ 0x1400ADE10 (MiCrcStillIntact.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1400AE1C8 (MiCaptureWriteWatchDirtyBit.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x140124940 (MiCaptureDirtyBitToPfn.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiWriteValidPteNewProtection @ 0x140125DC0 (MiWriteValidPteNewProtection.c)
 */

char __fastcall MiMakeCombineCandidateClean(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // r9
  unsigned __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  if ( MiPteInShadowRange(a1)
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    v10 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 8 * ((a1 >> 3) & 0x1FF));
      v12 = v4 | 0x20;
      if ( (v11 & 0x20) == 0 )
        v12 = v4;
      v4 = v12;
      if ( (v11 & 0x42) != 0 )
        v4 = v12 | 0x42;
    }
  }
  v14 = v4;
  v5 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v14);
  v14 = v6 & 0xFFFFFFFFFFFFFFBDuLL;
  v7 = 48 * ((v5 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  MiWriteValidPteNewProtection(a1, v6 & 0xFFFFFFFFFFFFFFBDuLL);
  v8 = 0LL;
  MiLockPageAtDpcInline(v7);
  v9 = MiCaptureDirtyBitToPfn(v7);
  if ( v9 )
    v8 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v7 + 40) >> 40) & 0x3FFLL));
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v9 )
    LOBYTE(v9) = MiReleasePageFileInfo(v8, v9, 1LL);
  if ( a2 )
  {
    LOBYTE(v9) = *(_DWORD *)(a2 + 48) & 7;
    if ( (_BYTE)v9 == 4 )
      LOBYTE(v9) = MiCaptureWriteWatchDirtyBit(KeGetCurrentThread()->ApcState.Process, (__int64)(a1 << 25) >> 16, a2);
  }
  return v9;
}
