/*
 * XREFs of MiRevertValidPte @ 0x1400F9CF0
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x1400FA3B0 (MiSetReadOnlyOnSectionView.c)
 *     MiProtectPrivateMemory @ 0x140106A80 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x140005D80 (MiMarkPfnVerified.c)
 *     MiUserPdeOrAbove @ 0x14001D68C (MiUserPdeOrAbove.c)
 *     MiCapturePageFileInfoInline @ 0x14001DE1C (MiCapturePageFileInfoInline.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14002CA88 (MiCaptureWriteWatchDirtyBit.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiRotatedToFrameBuffer @ 0x14007C2AC (MiRotatedToFrameBuffer.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiGetPagePrivilege @ 0x1400A3660 (MiGetPagePrivilege.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiIsAddressGlobal @ 0x1400B6550 (MiIsAddressGlobal.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

char __fastcall MiRevertValidPte(__int64 a1, unsigned __int64 a2, signed int a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v8; // r13
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  int v11; // ecx
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // r12
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // r10
  char result; // al
  struct _KEVENT *v21; // rbx
  char v22; // r8
  unsigned __int64 v23; // rax
  int v25; // [rsp+70h] [rbp+18h] BYREF

  v8 = (__int64)(a2 << 25) >> 16;
  v9 = MI_READ_PTE_LOCK_FREE(a2);
  v10 = v9;
  if ( (v9 & 0x10) != 0 )
  {
    if ( (a3 & 0x18) != 8 )
      a3 = a3 & 0xFFFFFFE7 | 8;
  }
  else if ( (v9 & 8) != 0 )
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
  if ( MiIsPfnInline(a4) )
  {
    v13 = 48 * v12 - 0x58000000000LL;
    if ( (MiFlags & 0x40000) != 0 && (a3 & 2) != 0 )
    {
      MiLockPageAtDpcInline(48 * v12 - 0x58000000000LL);
      if ( !(unsigned int)MiGetPagePrivilege(v13, 1, 0LL) )
        MiMarkPfnVerified(v13, 7);
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  else
  {
    v13 = 0LL;
  }
  v14 = a3 & 0x1F;
  v15 = ((a4 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v14] & 0xFFFF000000000E7FuLL | 0x21;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_30;
  if ( a2 >= 0xFFFFF6FB40000000uLL && a2 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v15 = ((a4 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v14] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL;
    }
    else if ( (a3 & 0x4000000) == 0 )
    {
      v15 = ((a4 & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v14] & 0x7FFF000000000E7FLL | 0x21;
    }
    if ( (unsigned int)MiUserPdeOrAbove(a2) )
      v15 |= 4uLL;
  }
  if ( a2 <= 0xFFFFF6BFFFFFFF78uLL )
    v15 |= 4uLL;
  if ( (unsigned int)MiIsAddressGlobal(v8) )
LABEL_30:
    v15 |= 0x100uLL;
  if ( a3 < 0 && (a3 & 5) == 4 )
    v15 |= 0x42uLL;
  if ( (a3 & 0x40000000) != 0 )
    v15 &= ~4uLL;
  if ( (a3 & 0x20000000) != 0 )
    v15 ^= ((unsigned __int16)v15 ^ (unsigned __int16)((unsigned __int8)word_14036C2A8 << 8)) & 0x100;
  if ( (a3 & 0x8000000) != 0 )
    v15 &= ~0x100uLL;
  if ( (a3 & 0x4000000) != 0 )
    v15 |= 0x80uLL;
  v16 = v15 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( !v13 && (a3 & 4) != 0 )
    v16 |= 0x42uLL;
  v17 = MI_READ_PTE_LOCK_FREE(a2);
  *(_QWORD *)a2 = v16 & 0x80FFFFFFFFFFFFFFuLL | ((HIBYTE(v17) & 0xF | (16 * ((v17 >> 60) & 7))) << 56);
  if ( (unsigned int)MiPteInShadowRange(a2) )
    MiWritePteShadow(v18);
  result = MiFlags;
  if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0
    || (v16 & 0x40) == 0 && (v10 & 0x40) != 0
    || (v16 & 2) == 0 && (v10 & 2) != 0
    || v16 >= v19 && v10 < v19 )
  {
    result = MiInsertTbFlushEntry(a5, v8, 1LL, 0LL);
  }
  if ( (v10 & 0x42) != 0 )
  {
    if ( v13 && ((*(_BYTE *)(a1 + 48) & 7) != 6 || MiRotatedToFrameBuffer(a2)) )
    {
      v21 = 0LL;
      v25 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v25);
        while ( *(__int64 *)(v13 + 24) < 0 );
      }
      v22 = *(_BYTE *)(v13 + 34);
      v23 = 0LL;
      if ( (v22 & 0x10) == 0 )
      {
        if ( (*(_DWORD *)(v13 + 16) & 0x400LL) == 0 && (v22 & 8) == 0 )
          v23 = MiCapturePageFileInfoInline((_QWORD *)(v13 + 16), 1, 0);
        *(_BYTE *)(v13 + 34) |= 0x10u;
        if ( v23 )
          v21 = *(struct _KEVENT **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v13 + 40) >> 40) & 0x3FFLL));
      }
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v23 )
        MiReleasePageFileInfo(v21, v23, 1);
    }
    result = *(_DWORD *)(a1 + 48) & 7;
    if ( result == 4 )
      return MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, v8, a1);
  }
  return result;
}
