/*
 * XREFs of MiRevertValidPte @ 0x140036C60
 * Callers:
 *     MiProtectPrivateMemory @ 0x1400371A0 (MiProtectPrivateMemory.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400E9820 (MiSetReadOnlyOnSectionView.c)
 * Callees:
 *     MiRotatedToFrameBuffer @ 0x140008950 (MiRotatedToFrameBuffer.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiCaptureDirtyBitToPfn @ 0x140032400 (MiCaptureDirtyBitToPfn.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiGetPagePrivilege @ 0x14005AE80 (MiGetPagePrivilege.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiMarkPfnVerified @ 0x1400CCEFC (MiMarkPfnVerified.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1400E9684 (MiCaptureWriteWatchDirtyBit.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

char __fastcall MiRevertValidPte(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 PteShadow; // rbx
  __int64 v10; // rbp
  int v11; // ecx
  __int64 v12; // r9
  __int64 v13; // r12
  __int64 v14; // rsi
  __int64 ValidPte; // rax
  __int64 v16; // r10
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rdx
  char result; // al
  __int64 v22; // rax

  PteShadow = *(_QWORD *)a2;
  v10 = (__int64)(a2 << 25) >> 16;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a2, *(_QWORD *)a2);
  if ( (PteShadow & 0x10) != 0 )
  {
    if ( (a3 & 0x18) != 8 )
      a3 = a3 & 0xFFFFFFE7 | 8;
  }
  else if ( (PteShadow & 8) != 0 )
  {
    v11 = a3 | 0x18;
    if ( (a3 & 0x18) == 0x18 )
      v11 = a3;
    a3 = v11;
  }
  else if ( (a3 & 0x18) != 0 )
  {
    a3 &= 0xFFFFFFE7;
  }
  v13 = 0LL;
  if ( (unsigned int)MiIsPfnInline(a4) )
  {
    v14 = 48 * v12 - 0x58000000000LL;
    if ( (MiFlags & 0x40000) != 0 && (a3 & 2) != 0 )
    {
      MiLockPageAtDpcInline(48 * v12 - 0x58000000000LL);
      if ( !(unsigned int)MiGetPagePrivilege(v14, 1LL, 0LL) )
        MiMarkPfnVerified(v14, 7LL);
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  else
  {
    v14 = 0LL;
  }
  ValidPte = MiMakeValidPte(a2, a4, a3);
  v16 = ValidPte;
  if ( !v14 && (a3 & 4) != 0 )
    v16 = ValidPte | 0x42;
  v17 = *(_QWORD *)a2;
  v18 = 0xFFFFF6FB7DBED000uLL;
  v19 = 0xFFFFF6FB7DBED7F8uLL;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    v17 = MiReadPteShadow(a2, *(_QWORD *)a2);
  v20 = v16 & 0x80FFFFFFFFFFFFFFuLL | ((HIBYTE(v17) & 0xF | (16 * ((v17 >> 60) & 7))) << 56);
  *(_QWORD *)a2 = v20;
  if ( a2 >= v18 && a2 <= v19 )
    MiWritePteShadow(a2, v20);
  result = MiFlags;
  if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0
    || (v16 & 0x40) == 0 && (PteShadow & 0x40) != 0
    || (v16 & 2) == 0 && (PteShadow & 2) != 0
    || v16 < 0 && PteShadow >= 0 )
  {
    result = MiInsertTbFlushEntry(a5, v10, 1LL, 0LL);
  }
  if ( (PteShadow & 0x42) != 0 )
  {
    if ( v14 && ((*(_BYTE *)(a1 + 48) & 7) != 6 || MiRotatedToFrameBuffer((__int64 *)a2)) )
    {
      MiLockPageAtDpcInline(v14);
      v22 = MiCaptureDirtyBitToPfn(v14);
      if ( v22 )
        v13 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v14 + 40) >> 40) & 0x3FFLL));
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v22 )
        MiReleasePageFileInfo(v13, v22, 1LL);
    }
    result = *(_DWORD *)(a1 + 48) & 7;
    if ( result == 4 )
      return MiCaptureWriteWatchDirtyBit(KeGetCurrentThread()->ApcState.Process, v10, a1, v19);
  }
  return result;
}
