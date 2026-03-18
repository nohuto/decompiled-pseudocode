/*
 * XREFs of MmProtectSystemCacheView @ 0x14021A1C8
 * Callers:
 *     HvpViewMapPinForFileOffset @ 0x1401E5208 (HvpViewMapPinForFileOffset.c)
 *     HvpViewMapUnpinViewOfPrimaryFile @ 0x1401E553C (HvpViewMapUnpinViewOfPrimaryFile.c)
 *     HvpViewMapViewOfPrimaryFile @ 0x1406A0870 (HvpViewMapViewOfPrimaryFile.c)
 *     HvpViewRemapViewOfPrimaryFile @ 0x1406A09A4 (HvpViewRemapViewOfPrimaryFile.c)
 *     HvpViewUnmapViewOfPrimaryFile @ 0x1406A0BAC (HvpViewUnmapViewOfPrimaryFile.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x140032400 (MiCaptureDirtyBitToPfn.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiMakeProtectionMask @ 0x14003D3F0 (MiMakeProtectionMask.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiGetMultiplexedVm @ 0x1400A344C (MiGetMultiplexedVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1400DC79C (MI_TIGHTER_PERMISSIONS.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MmProtectSystemCacheView(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r8
  char *AnyMultiplexedVm; // rax
  LONG *SharedVm; // rbx
  __int64 v10; // rcx
  int v11; // r12d
  _KPROCESS *v12; // rdx
  unsigned __int64 PteShadow; // rbx
  __int64 v14; // rsi
  unsigned __int64 ValidPte; // rdi
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  struct _KEVENT *v18; // rcx
  unsigned __int64 v19; // rbx
  LONG *v20; // rax
  KIRQL v21; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v22; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v23; // [rsp+30h] [rbp-D0h]
  __int64 MultiplexedVm; // [rsp+38h] [rbp-C8h]
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v26; // [rsp+44h] [rbp-BCh]
  __int64 v27; // [rsp+48h] [rbp-B8h]
  __int64 v28; // [rsp+50h] [rbp-B0h]
  __int64 v29; // [rsp+58h] [rbp-A8h]
  void *retaddr; // [rsp+148h] [rbp+48h]

  if ( ((a3 - 2) & 0xFFFFFFFD) != 0 )
    return 3221225713LL;
  LODWORD(v22) = MiMakeProtectionMask(a3);
  v27 = 20LL;
  v25 = 0;
  v26 = 0;
  v28 = 0LL;
  v29 = 0LL;
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v23 = v6 + 8 * ((v7 >> 12) + ((v7 & 0xFFF) != 0));
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v21 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v11 = v22;
  MultiplexedVm = MiGetMultiplexedVm(v10, a1);
  do
  {
    PteShadow = *(_QWORD *)v6;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow();
    v22 = PteShadow;
    if ( (PteShadow & 1) != 0 )
    {
      if ( a3 == 2 && (PteShadow & 0x800) != 0 || a3 == 4 && (PteShadow & 0x800) == 0 )
      {
        v14 = MI_GET_PAGE_FRAME_FROM_PTE(&v22);
        ValidPte = MiMakeValidPte(v6, v14, v11 | 0x20000000u);
        if ( (PteShadow & 0x42) != 0 )
        {
          v16 = 48 * v14 - 0x58000000000LL;
          MiLockPageAtDpcInline(v16);
          v17 = MiCaptureDirtyBitToPfn(v16);
          v18 = *(struct _KEVENT **)(qword_140388AF0 + 8 * ((*(_QWORD *)(v16 + 40) >> 40) & 0x3FFLL));
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v17 )
            MiReleasePageFileInfo(v18, v17, 1);
        }
        MiWriteValidPteNewPage((unsigned __int64 *)v6, ValidPte);
        if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 || MI_TIGHTER_PERMISSIONS(PteShadow, ValidPte) )
          MiInsertTbFlushEntry(&v25, (__int64)(v6 << 25) >> 16, 1LL, 0);
      }
    }
    else
    {
      if ( a3 == 2 )
      {
        if ( (PteShadow & 8) != 0 )
          goto LABEL_27;
        v19 = PteShadow | 8;
      }
      else
      {
        if ( (PteShadow & 8) == 0 )
          goto LABEL_27;
        v19 = PteShadow & 0xFFFFFFFFFFFFFFF7uLL;
      }
      v22 = v19;
      *(_QWORD *)v6 = v19;
      if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow();
    }
LABEL_27:
    v6 += 8LL;
  }
  while ( v6 < v23 );
  MiFlushTbList((__int64)&v25, v12);
  MiPreUnlockWorkingSetExclusive(MultiplexedVm, v21);
  v20 = MiGetSharedVm(MultiplexedVm);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v20, retaddr);
  else
    *v20 = 0;
  __writecr8(v21);
  return 0LL;
}
