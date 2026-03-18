/*
 * XREFs of MmStoreProbeAndLockPages @ 0x1400266C0
 * Callers:
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x140121E64 (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 * Callees:
 *     MiStoreMarkLockedPagesModified @ 0x140026814 (MiStoreMarkLockedPagesModified.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140026948 (MiUnlockProbePacketWorkingSet.c)
 *     MiUnlockStoreLockedPages @ 0x14002E4F4 (MiUnlockStoreLockedPages.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiProbeLeafFrame @ 0x1400B44D0 (MiProbeLeafFrame.c)
 *     MiProbeAndLockPrepare @ 0x1400B4C90 (MiProbeAndLockPrepare.c)
 *     MiReferencePageForModifiedWrite @ 0x14010EC0C (MiReferencePageForModifiedWrite.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall MmStoreProbeAndLockPages(_DWORD *BugCheckParameter4, int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v4; // eax
  unsigned int v5; // eax
  _QWORD *v6; // rcx
  int v7; // eax
  int v8; // ebx
  ULONG_PTR v9; // r14
  _QWORD *v10; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+48h] [rbp-49h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp-39h]
  unsigned __int64 v14; // [rsp+60h] [rbp-31h]
  _QWORD *v15; // [rsp+68h] [rbp-29h]
  __int64 v16; // [rsp+B8h] [rbp+27h]

  CurrentThread = KeGetCurrentThread();
  v4 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  if ( a2 )
    v5 = v4 & 0xFFFFFFF3 | 8;
  else
    v5 = v4 & 0xFFFFFFF3 | 4;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) = v5;
  MiProbeAndLockPrepare(
    (unsigned int)BugCheckParameter3,
    (_DWORD)BugCheckParameter4,
    BugCheckParameter4[8] + BugCheckParameter4[11],
    BugCheckParameter4[10],
    1,
    0,
    0);
  v6 = v15;
  do
  {
    *v6 = -1LL;
    v7 = MiProbeLeafFrame(BugCheckParameter3);
    v8 = v7;
    if ( v7 == -1073741801 )
      break;
    if ( v7 < 0 )
      KeBugCheckEx(0x1Au, 0x6001uLL, v7, BugCheckParameter3[0], (ULONG_PTR)BugCheckParameter4);
    v9 = 48 * v16 - 0x58000000000LL;
    MiLockPageAtDpcInline(v9);
    if ( (*(_BYTE *)(v9 + 34) & 8) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v8 = -1073740749;
      break;
    }
    MiReferencePageForModifiedWrite(v9);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v10 = v15;
    BugCheckParameter3[0] += 4096LL;
    *v15 = v16;
    v6 = v10 + 1;
    v15 = v6;
    v13 += 8LL;
  }
  while ( v13 <= v14 );
  MiUnlockProbePacketWorkingSet(BugCheckParameter3);
  if ( v8 < 0 )
    MiUnlockStoreLockedPages(BugCheckParameter4);
  else
    MiStoreMarkLockedPagesModified(BugCheckParameter4);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= 0xFFFFFFF3;
  return (unsigned int)v8;
}
