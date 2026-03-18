/*
 * XREFs of MiMakeDriverPagesPrivate @ 0x14006C72C
 * Callers:
 *     MiSetSystemCodeProtection @ 0x14006C1E0 (MiSetSystemCodeProtection.c)
 *     MiLockCode @ 0x140100CD0 (MiLockCode.c)
 *     MiSplitDriverPage @ 0x14020D2B4 (MiSplitDriverPage.c)
 *     MiLockHotPatchPages @ 0x140211784 (MiLockHotPatchPages.c)
 *     MiBackSingleImageWithPagefile @ 0x14058571C (MiBackSingleImageWithPagefile.c)
 * Callees:
 *     MiRemoveSystemImagePage @ 0x14002CDA4 (MiRemoveSystemImagePage.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiSessionLookupImage @ 0x14006B974 (MiSessionLookupImage.c)
 *     MiDriverPageMustStayResident @ 0x14006D348 (MiDriverPageMustStayResident.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MiAddLockedPageCharge @ 0x140109894 (MiAddLockedPageCharge.c)
 *     MiReleaseFreshPage @ 0x14010ADC8 (MiReleaseFreshPage.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiAllocateDriverPage @ 0x14053D888 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiMakeDriverPagesPrivate(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, KIRQL a4, char a5)
{
  char v5; // di
  unsigned __int64 v6; // rsi
  unsigned int v7; // r14d
  char v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11
  int v11; // edx
  __int64 AnyMultiplexedVm; // r15
  __int64 v13; // r12
  __int64 v14; // r12
  __int64 DriverPage; // r13
  __int64 SharedVm; // rbx
  KIRQL v17; // al
  __int64 v18; // r14
  __int64 v19; // rax
  ULONG_PTR v20; // rbx
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rbx
  KIRQL v24; // al
  __int64 v25; // rdx
  char v26; // r9
  __int64 v27; // r10
  int v28; // r11d
  unsigned __int64 v29; // r12
  _DWORD *v30; // rax
  __int64 v31; // rbx
  KIRQL v32; // al
  __int64 v33; // r8
  __int64 v34; // rbx
  ULONG_PTR v35; // rdx
  __int64 v36; // rdx
  _DWORD *v37; // rax
  KIRQL v39; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v41; // [rsp+48h] [rbp-B8h]
  _QWORD *v42; // [rsp+58h] [rbp-A8h]
  __int64 v44; // [rsp+68h] [rbp-98h] BYREF
  __int64 v45; // [rsp+70h] [rbp-90h]
  __int64 v46; // [rsp+78h] [rbp-88h]
  ULONG_PTR v47; // [rsp+80h] [rbp-80h]
  int v48; // [rsp+90h] [rbp-70h] BYREF
  __int16 v49; // [rsp+94h] [rbp-6Ch]
  __int64 v50; // [rsp+98h] [rbp-68h]
  __int64 v51; // [rsp+A0h] [rbp-60h]
  __int64 v52; // [rsp+A8h] [rbp-58h]
  void *retaddr; // [rsp+198h] [rbp+98h]

  v39 = a4;
  v5 = a4 == 17;
  v6 = a2;
  v42 = 0LL;
  v7 = 0;
  if ( (unsigned int)MiGetSystemRegionType((__int64)(a2 << 25) >> 16) == 1 )
  {
    v11 = 2;
    v41 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    AnyMultiplexedVm = v41 + 3008;
  }
  else
  {
    v41 = 0LL;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
    v11 = 0;
  }
  v13 = *(_QWORD *)(v9 + 48) >> 9;
  v45 = *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(AnyMultiplexedVm + 172));
  v14 = v10 + (v13 & 0x7FFFFFFFF8LL);
  v46 = *(_QWORD *)(v9 + 240);
  DriverPage = -1LL;
  v50 = 20LL;
  v48 = v11;
  v49 = 0;
  v51 = 0LL;
  v52 = 0LL;
  if ( v8 == 17 )
  {
    SharedVm = MiGetSharedVm(AnyMultiplexedVm);
    v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    v39 = v17;
  }
  if ( v6 <= a3 )
  {
    v18 = v6 - v14;
    while ( 1 )
    {
      v19 = MI_READ_PTE_LOCK_FREE(v6);
      v44 = v19;
      v20 = v19;
      if ( v19 )
      {
        if ( (v19 & 1) != 0 )
        {
          v29 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v44) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          if ( (*(_QWORD *)(v29 + 40) & 0x200000000000000LL) != 0
            && *(__int64 *)(v29 + 8) < 0
            && ((a5 & 1) == 0 || (v20 & 0x800) == 0 && (v20 & 0x200) != 0) )
          {
            if ( (MiFlags & 0x10000) != 0
              && (v41 || (a5 & 2) != 0)
              && (((unsigned __int8)*(_DWORD *)(v29 + 16) >> 5) & 2) != 0 )
            {
              v7 = -1073741755;
              break;
            }
            if ( !v28 || (*(_DWORD *)(v27 + 196) & 1) != 0 || (*(_BYTE *)(v29 + 35) & 8) == 0 )
            {
              if ( DriverPage == -1 )
              {
                LOBYTE(v25) = v26;
                MiPreUnlockWorkingSetExclusive(AnyMultiplexedVm, v25);
                v30 = (_DWORD *)MiGetSharedVm(AnyMultiplexedVm);
                if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                  ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v30, retaddr);
                else
                  *v30 = 0;
                __writecr8(v39);
                DriverPage = MiAllocateDriverPage(v45);
                v31 = MiGetSharedVm(AnyMultiplexedVm);
                v32 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v31);
                *(_DWORD *)(v31 + 4) = 0;
                v39 = v32;
                if ( DriverPage == -1 )
                {
                  v7 = -1073741801;
                  break;
                }
                goto LABEL_44;
              }
              MiFlushTbList(&v48);
              v47 = (__int64)(v6 << 25) >> 16;
              MiCopyOnWriteEx(v47, (a5 & 4) != 0);
              v33 = a1;
              if ( v41 )
              {
                if ( !v42 )
                {
                  v42 = MiSessionLookupImage(*(_QWORD *)(a1 + 48));
                  if ( *((_BYTE *)v42 + 64) )
                    v5 |= 2u;
                }
              }
              if ( (v5 & 2) != 0 && (unsigned __int8)MiDriverPageMustStayResident(v33, v6) )
              {
                MiLockPageAtDpcInline(v29);
                MiRemoveLockedPageChargeAndDecRef(v29);
                _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v34 = 48 * DriverPage - 0x58000000000LL;
                MiLockPageAtDpcInline(v34);
                MiAddLockedPageCharge(v34);
                _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
              else
              {
                v34 = 48 * DriverPage - 0x58000000000LL;
              }
              DriverPage = -1LL;
              if ( (MiFlags & 0x10000) != 0 && ((*(_QWORD *)(v34 + 40) >> 54) & 7) == 3 )
              {
                v35 = v47;
                _bittestandset(*(signed __int32 **)(v46 + 8), v18 >> 3);
                if ( (MiGetWsleContents(v18 >> 3, v35) & 0xF) != 9 )
                {
                  MiLockPageAtDpcInline(v34);
                  MiRemoveSystemImagePage(AnyMultiplexedVm, v6, v34);
                  _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                }
              }
            }
          }
        }
        else if ( (v19 & 0x400) != 0 )
        {
          MiFlushTbList(&v48);
          LOBYTE(v21) = v39;
          MiUnlockWorkingSetExclusive(AnyMultiplexedVm, v21);
          v22 = MmAccessFault(0LL, (__int64)(v6 << 25) >> 16);
          if ( v22 < 0 )
            KeBugCheckEx(0x1Au, 0x3000uLL, (__int64)(v6 << 25) >> 16, v20, v22);
          v23 = MiGetSharedVm(AnyMultiplexedVm);
          v24 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v23);
          *(_DWORD *)(v23 + 4) = 0;
          v39 = v24;
          goto LABEL_44;
        }
      }
      v6 += 8LL;
      v18 += 8LL;
LABEL_44:
      if ( v6 > a3 )
      {
        v7 = 0;
        break;
      }
    }
  }
  MiFlushTbList(&v48);
  if ( (v5 & 1) != 0 )
  {
    LOBYTE(v36) = v39;
    MiPreUnlockWorkingSetExclusive(AnyMultiplexedVm, v36);
    v37 = (_DWORD *)MiGetSharedVm(AnyMultiplexedVm);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v37, retaddr);
    else
      *v37 = 0;
    __writecr8(v39);
  }
  if ( DriverPage != -1 )
    MiReleaseFreshPage(48 * DriverPage - 0x58000000000LL);
  return v7;
}
