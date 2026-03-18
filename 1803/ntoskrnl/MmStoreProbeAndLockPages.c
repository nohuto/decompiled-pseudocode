/*
 * XREFs of MmStoreProbeAndLockPages @ 0x140136640
 * Callers:
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x140097D68 (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 * Callees:
 *     MiProbeAndLockPrepare @ 0x140022150 (MiProbeAndLockPrepare.c)
 *     MiStoreMarkLockedPagesModified @ 0x1400BEF58 (MiStoreMarkLockedPagesModified.c)
 *     MiUnlockStoreLockedPages @ 0x1400BF3E0 (MiUnlockStoreLockedPages.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiReferencePageForModifiedWrite @ 0x140131E00 (MiReferencePageForModifiedWrite.c)
 *     MiProbeLeafFrame @ 0x140136DB0 (MiProbeLeafFrame.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140138D9C (MiUnlockProbePacketWorkingSet.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall MmStoreProbeAndLockPages(ULONG_PTR BugCheckParameter4, int a2)
{
  struct _KTHREAD *CurrentThread; // r14
  int v4; // eax
  unsigned int v5; // eax
  _QWORD *v6; // rcx
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+48h] [rbp-59h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-49h]
  unsigned __int64 v16; // [rsp+60h] [rbp-41h]
  _QWORD *v17; // [rsp+78h] [rbp-29h]
  __int64 v18; // [rsp+C8h] [rbp+27h]

  CurrentThread = KeGetCurrentThread();
  v4 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  if ( a2 )
    v5 = v4 & 0xFFFFFFF3 | 8;
  else
    v5 = v4 & 0xFFFFFFF3 | 4;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) = v5;
  MiProbeAndLockPrepare(
    (__int64)BugCheckParameter3,
    BugCheckParameter4,
    *(_QWORD *)(BugCheckParameter4 + 32) + *(unsigned int *)(BugCheckParameter4 + 44),
    *(_DWORD *)(BugCheckParameter4 + 40),
    1,
    0,
    0);
  v6 = v17;
  do
  {
    *v6 = -1LL;
    v7 = MiProbeLeafFrame(BugCheckParameter3);
    v8 = v7;
    if ( v7 == -1073741801 )
      break;
    if ( v7 < 0 )
      KeBugCheckEx(0x1Au, 0x6001uLL, v7, BugCheckParameter3[0], BugCheckParameter4);
    v9 = 48 * v18 - 0x58000000000LL;
    MiLockPageAtDpcInline(v9);
    if ( (*(_BYTE *)(v9 + 34) & 8) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v8 = -1073740749;
      break;
    }
    MiReferencePageForModifiedWrite(v9, 13, v10, v11);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v12 = v17;
    BugCheckParameter3[0] += 4096LL;
    *v17 = v18;
    v6 = v12 + 1;
    v17 = v6;
    v15 += 8LL;
  }
  while ( v15 <= v16 );
  MiUnlockProbePacketWorkingSet(BugCheckParameter3);
  if ( v8 < 0 )
    MiUnlockStoreLockedPages(BugCheckParameter4);
  else
    MiStoreMarkLockedPagesModified((_DWORD *)BugCheckParameter4);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= 0xFFFFFFF3;
  return (unsigned int)v8;
}
