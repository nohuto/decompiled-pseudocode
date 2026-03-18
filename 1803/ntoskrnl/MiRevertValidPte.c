/*
 * XREFs of MiRevertValidPte @ 0x140125BF0
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140124DF0 (MiSetReadOnlyOnSectionView.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiGetPagePrivilege @ 0x1400303C0 (MiGetPagePrivilege.c)
 *     MiRotatedToFrameBuffer @ 0x14004F064 (MiRotatedToFrameBuffer.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1400AE1C8 (MiCaptureWriteWatchDirtyBit.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x140124940 (MiCaptureDirtyBitToPfn.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x140125D90 (MI_TIGHTER_PERMISSIONS.c)
 *     MiWriteValidPteNewProtection @ 0x140125DC0 (MiWriteValidPteNewProtection.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiMarkPfnVerified @ 0x1401380B4 (MiMarkPfnVerified.c)
 */

char __fastcall MiRevertValidPte(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rbx
  unsigned __int64 v10; // r14
  int v11; // eax
  int v12; // ecx
  __int64 v13; // r9
  struct _KEVENT *v14; // r12
  __int64 v15; // rsi
  unsigned __int64 ValidPte; // rax
  __int64 v17; // rdi
  int v18; // eax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx

  v9 = *(_QWORD *)a2;
  v10 = (__int64)(a2 << 25) >> 16;
  if ( MiPteInShadowRange(a2)
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    v20 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v20 )
    {
      v21 = *(_QWORD *)(v20 + 8 * ((a2 >> 3) & 0x1FF));
      v22 = v9 | 0x20;
      if ( (v21 & 0x20) == 0 )
        v22 = v9;
      v9 = v22;
      if ( (v21 & 0x42) != 0 )
        v9 = v22 | 0x42;
    }
  }
  v11 = a3 & 0x18;
  if ( (v9 & 0x18) == 8 )
  {
    v12 = a3 | 0x18;
    if ( v11 == 24 )
      v12 = a3;
    a3 = v12;
  }
  else if ( (v9 & 0x10) != 0 )
  {
    if ( v11 != 8 )
      a3 = a3 & 0xFFFFFFE7 | 8;
  }
  else if ( (a3 & 0x18) != 0 )
  {
    a3 &= 0xFFFFFFE7;
  }
  v14 = 0LL;
  if ( (unsigned int)MiIsPfnInline(a4) )
  {
    v15 = 48 * v13 - 0x58000000000LL;
    if ( (MiFlags & 0x40000) != 0 && (a3 & 2) != 0 )
    {
      MiLockPageAtDpcInline(48 * v13 - 0x58000000000LL);
      if ( !(unsigned int)MiGetPagePrivilege(v15, 1, 0LL) )
        MiMarkPfnVerified(v15);
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  else
  {
    v15 = 0LL;
  }
  ValidPte = MiMakeValidPte(a2, a4, a3, v13);
  v17 = ValidPte;
  if ( !v15 && (a3 & 4) != 0 )
    v17 = ValidPte | 0x42;
  MiWriteValidPteNewProtection(a2, v17);
  if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 || (v18 = MI_TIGHTER_PERMISSIONS(v9)) != 0 )
    LOBYTE(v18) = MiInsertTbFlushEntry(a5, v10, 1LL, 0);
  if ( (v9 & 0x42) != 0 )
  {
    if ( v15 && ((*(_BYTE *)(a1 + 48) & 7) != 6 || MiRotatedToFrameBuffer(a2)) )
    {
      MiLockPageAtDpcInline(v15);
      v19 = MiCaptureDirtyBitToPfn(v15);
      if ( v19 )
        v14 = *(struct _KEVENT **)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v15 + 40) >> 40) & 0x3FFLL));
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v19 )
        MiReleasePageFileInfo(v14, v19, 1);
    }
    LOBYTE(v18) = *(_DWORD *)(a1 + 48) & 7;
    if ( (_BYTE)v18 == 4 )
      LOBYTE(v18) = MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, v10, a1);
  }
  return v18;
}
