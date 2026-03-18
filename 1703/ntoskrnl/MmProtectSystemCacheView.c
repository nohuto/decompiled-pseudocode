/*
 * XREFs of MmProtectSystemCacheView @ 0x1402126D8
 * Callers:
 *     HvpViewMapPinForFileOffset @ 0x1401E10D0 (HvpViewMapPinForFileOffset.c)
 *     HvpViewMapUnpinViewOfPrimaryFile @ 0x1401E1420 (HvpViewMapUnpinViewOfPrimaryFile.c)
 *     HvpViewMapViewOfPrimaryFile @ 0x140676330 (HvpViewMapViewOfPrimaryFile.c)
 *     HvpViewRemapViewOfPrimaryFile @ 0x140676464 (HvpViewRemapViewOfPrimaryFile.c)
 *     HvpViewUnmapViewOfPrimaryFile @ 0x14067666C (HvpViewUnmapViewOfPrimaryFile.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x14006C6F4 (MI_TIGHTER_PERMISSIONS.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiMakeProtectionMask @ 0x1400CE440 (MiMakeProtectionMask.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiCaptureDirtyBitToPfn @ 0x140100BFC (MiCaptureDirtyBitToPfn.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     MiSystemCacheVaControlArea @ 0x140102068 (MiSystemCacheVaControlArea.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MmProtectSystemCacheView(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r8
  char *AnyMultiplexedVm; // rax
  LONG *SharedVm; // rbx
  unsigned __int64 v10; // r12
  int v11; // r13d
  __int64 v12; // rax
  _KPROCESS *v13; // rdx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r14
  unsigned __int64 ValidPte; // rdi
  __int64 v17; // rbx
  unsigned __int64 v18; // rax
  struct _KEVENT *v19; // rcx
  unsigned __int64 v20; // rbx
  LONG *v21; // rax
  KIRQL v22; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v23; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v24; // [rsp+30h] [rbp-D0h]
  __int64 v25; // [rsp+38h] [rbp-C8h]
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v27; // [rsp+44h] [rbp-BCh]
  __int64 v28; // [rsp+48h] [rbp-B8h]
  __int64 v29; // [rsp+50h] [rbp-B0h]
  __int64 v30; // [rsp+58h] [rbp-A8h]
  void *retaddr; // [rsp+148h] [rbp+48h]

  if ( ((a3 - 2) & 0xFFFFFFFD) != 0 )
    return 3221225713LL;
  LODWORD(v23) = MiMakeProtectionMask(a3);
  v28 = 20LL;
  v26 = 0;
  v27 = 0;
  v29 = 0LL;
  v30 = 0LL;
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v24 = v6 + 8 * (((v7 & 0xFFF) != 0) + (v7 >> 12));
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v22 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v10 = v24;
  v25 = *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(MiSystemCacheVaControlArea(a1) + 60) & 0x3FF)) + 5888LL;
  v11 = v23;
  do
  {
    v12 = MI_READ_PTE_LOCK_FREE(v6);
    v23 = v12;
    v14 = v12;
    if ( (v12 & 1) != 0 )
    {
      if ( a3 == 2 && (v12 & 0x800) != 0 || a3 == 4 && (v12 & 0x800) == 0 )
      {
        v15 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v23) >> 12) & 0xFFFFFFFFFLL;
        ValidPte = MiMakeValidPte(v6, v15, v11 | 0x20000000u);
        if ( (v14 & 0x42) != 0 )
        {
          v17 = 48 * v15 - 0x58000000000LL;
          MiLockPageAtDpcInline(v17);
          v18 = MiCaptureDirtyBitToPfn(v17);
          v19 = *(struct _KEVENT **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v17 + 40) >> 40) & 0x3FFLL));
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v18 )
            MiReleasePageFileInfo(v19, v18, 1);
          v14 = v23;
        }
        MiWriteValidPteNewProtection(v6);
        if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 || MI_TIGHTER_PERMISSIONS(v14, ValidPte) )
          MiInsertTbFlushEntry((__int64)&v26, (__int64)(v6 << 25) >> 16, 1LL, 0);
      }
    }
    else
    {
      if ( a3 == 2 )
      {
        if ( (v12 & 8) != 0 )
          goto LABEL_24;
        v20 = v12 | 8;
      }
      else
      {
        if ( (v12 & 8) == 0 )
          goto LABEL_24;
        v20 = v12 & 0xFFFFFFFFFFFFFFF7uLL;
      }
      v23 = v20;
      *(_QWORD *)v6 = v20;
      if ( MiPteInShadowRange(v6) )
        MiWritePteShadow();
    }
LABEL_24:
    v6 += 8LL;
  }
  while ( v6 < v10 );
  MiFlushTbList((__int64)&v26, v13);
  MiPreUnlockWorkingSetExclusive(v25, v22);
  v21 = MiGetSharedVm(v25);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v21, retaddr);
  else
    *v21 = 0;
  __writecr8(v22);
  return 0LL;
}
