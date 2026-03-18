/*
 * XREFs of MmStoreProbeAndLockPages @ 0x14022DB24
 * Callers:
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x1402729FC (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiProbeLeafFrame @ 0x1400BE690 (MiProbeLeafFrame.c)
 *     MiProbeAndLockPrepare @ 0x1400BEF50 (MiProbeAndLockPrepare.c)
 *     MiReferencePageForModifiedWrite @ 0x1400EF550 (MiReferencePageForModifiedWrite.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14010030C (MiUnlockProbePacketWorkingSet.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiStoreMarkLockedPagesModified @ 0x14022C9B0 (MiStoreMarkLockedPagesModified.c)
 *     MiUnlockStoreLockedPages @ 0x14022D744 (MiUnlockStoreLockedPages.c)
 */

__int64 __fastcall MmStoreProbeAndLockPages(ULONG_PTR BugCheckParameter4, int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v4; // eax
  unsigned int v5; // eax
  _QWORD *v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // r14
  _QWORD *v11; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+48h] [rbp-49h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp-39h]
  unsigned __int64 v15; // [rsp+60h] [rbp-31h]
  _QWORD *v16; // [rsp+68h] [rbp-29h]
  __int64 v17; // [rsp+B8h] [rbp+27h]

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
  v6 = v16;
  do
  {
    *v6 = -1LL;
    v7 = MiProbeLeafFrame((__int64)BugCheckParameter3);
    v9 = v7;
    if ( v7 == -1073741801 )
      break;
    if ( v7 < 0 )
      KeBugCheckEx(0x1Au, 0x6001uLL, v7, BugCheckParameter3[0], BugCheckParameter4);
    v10 = 48 * v17 - 0x58000000000LL;
    MiLockPageAtDpcInline(v10);
    if ( (*(_BYTE *)(v10 + 34) & 8) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v9 = -1073740749;
      break;
    }
    MiReferencePageForModifiedWrite(v10, 13);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v11 = v16;
    BugCheckParameter3[0] += 4096LL;
    *v16 = v17;
    v6 = v11 + 1;
    v16 = v6;
    v14 += 8LL;
  }
  while ( v14 <= v15 );
  MiUnlockProbePacketWorkingSet((__int64)BugCheckParameter3, v8);
  if ( v9 >= 0 )
    MiStoreMarkLockedPagesModified((_DWORD *)BugCheckParameter4);
  else
    MiUnlockStoreLockedPages(BugCheckParameter4);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= 0xFFFFFFF3;
  return (unsigned int)v9;
}
