/*
 * XREFs of MiMakeDriverPagesPrivate @ 0x14013F254
 * Callers:
 *     MiProbeLeafPteAccess @ 0x140021D80 (MiProbeLeafPteAccess.c)
 *     MiLockCode @ 0x14013AB00 (MiLockCode.c)
 *     MiSetSystemCodeProtection @ 0x14013EB40 (MiSetSystemCodeProtection.c)
 *     MiLockHotPatchPages @ 0x140255CEC (MiLockHotPatchPages.c)
 *     MiBackSingleImageWithPagefile @ 0x1405F65E0 (MiBackSingleImageWithPagefile.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030AF8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiAddLockedPageCharge @ 0x140058004 (MiAddLockedPageCharge.c)
 *     MiGetSessionVm @ 0x14007FBD8 (MiGetSessionVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiGetWsleContents @ 0x140125350 (MiGetWsleContents.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MiSessionLookupImage @ 0x14012B754 (MiSessionLookupImage.c)
 *     MiReleaseFreshPage @ 0x14013A6E0 (MiReleaseFreshPage.c)
 *     MiRemoveSystemImagePage @ 0x14013B5D0 (MiRemoveSystemImagePage.c)
 *     MiDriverPageMustStayResident @ 0x14013FA30 (MiDriverPageMustStayResident.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiAllocateDriverPage @ 0x1405BB3F0 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiMakeDriverPagesPrivate(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, KIRQL a4, char a5)
{
  unsigned int v5; // esi
  char v6; // di
  unsigned __int64 v8; // r14
  unsigned __int64 SessionVm; // rax
  char v10; // r10
  __int64 v11; // r11
  __int64 v12; // rdx
  __int64 v13; // r9
  unsigned __int64 v14; // r12
  __int64 v15; // r12
  char v16; // cl
  __int64 v17; // r8
  char v18; // al
  ULONG_PTR DriverPage; // r13
  LONG *SharedVm; // rbx
  __int64 v21; // r15
  __int64 v22; // rax
  ULONG_PTR v23; // rbx
  __int64 v24; // r9
  unsigned __int8 v25; // r10
  __int64 v26; // r11
  unsigned __int64 v27; // r12
  __int64 v28; // rbx
  int v30; // eax
  LONG *v31; // rbx
  LONG *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 v36; // rdx
  KIRQL v37; // [rsp+30h] [rbp-D0h]
  __int64 v38; // [rsp+38h] [rbp-C8h]
  char v40; // [rsp+4Ch] [rbp-B4h]
  unsigned __int64 v41; // [rsp+50h] [rbp-B0h]
  _QWORD *v42; // [rsp+60h] [rbp-A0h]
  __int64 v43; // [rsp+68h] [rbp-98h] BYREF
  __int64 v44; // [rsp+70h] [rbp-90h]
  __int64 v45; // [rsp+78h] [rbp-88h]
  ULONG_PTR v46; // [rsp+80h] [rbp-80h]
  unsigned __int64 v47; // [rsp+88h] [rbp-78h]
  int v48; // [rsp+90h] [rbp-70h] BYREF
  __int16 v49; // [rsp+94h] [rbp-6Ch]
  __int64 v50; // [rsp+98h] [rbp-68h]
  __int64 v51; // [rsp+A0h] [rbp-60h]
  __int64 v52; // [rsp+A8h] [rbp-58h]

  v5 = 0;
  v37 = a4;
  v47 = a3;
  v6 = a4 == 17;
  v42 = 0LL;
  v8 = a2;
  if ( (unsigned int)MiGetSystemRegionType((__int64)(a2 << 25) >> 16) == 1 )
  {
    v41 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    SessionVm = MiGetSessionVm();
    v12 = 2LL;
  }
  else
  {
    v41 = 0LL;
    SessionVm = (unsigned __int64)MiGetAnyMultiplexedVm(1);
    v12 = 0LL;
  }
  v13 = SessionVm;
  v14 = *(_QWORD *)(v11 + 48);
  v38 = SessionVm;
  v44 = *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(SessionVm + 174));
  v15 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v16 = 0;
  v45 = *(_QWORD *)(v11 + 264);
  if ( (a5 & 3) == 0 && (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 )
    v16 = 16;
  v17 = a5 & 4;
  v50 = 20LL;
  v18 = v16 | 1;
  v48 = v12;
  v49 = 0;
  if ( (a5 & 4) == 0 )
    v18 = v16;
  v51 = 0LL;
  DriverPage = -1LL;
  v40 = v18;
  v52 = 0LL;
  if ( v10 == 17 )
  {
    SharedVm = MiGetSharedVm(v13);
    v37 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
  }
  if ( v8 <= a3 )
  {
    v21 = v8 - v15;
    while ( 1 )
    {
      v22 = MI_READ_PTE_LOCK_FREE(v8);
      v43 = v22;
      v23 = v22;
      if ( !v22 )
        goto LABEL_14;
      if ( (v22 & 1) == 0 )
        break;
      v27 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v43) >> 12) & 0xFFFFFFFFFLL)
          - 0x58000000000LL;
      if ( (*(_QWORD *)(v27 + 40) & 0x200000000000000LL) == 0
        || *(__int64 *)(v27 + 8) >= 0
        || (a5 & 1) != 0 && ((v23 & 0x800) != 0 || (v23 & 0x200) == 0) )
      {
        goto LABEL_14;
      }
      if ( (MiFlags & 0x10000) != 0
        && (v41 || (a5 & 2) != 0)
        && (((unsigned __int8)*(_DWORD *)(v27 + 16) >> 5) & 2) != 0 )
      {
        v5 = -1073741755;
        goto LABEL_29;
      }
      if ( (a5 & 4) != 0 && (*(_DWORD *)(v26 + 196) & 1) == 0 && (*(_BYTE *)(v27 + 35) & 8) != 0 )
        goto LABEL_14;
      if ( DriverPage != -1LL )
      {
        MiFlushTbList((__int64)&v48, v12, v17);
        v46 = (__int64)(v8 << 25) >> 16;
        MiCopyOnWrite(v46, v8, DriverPage, v40);
        v17 = a1;
        if ( v41 )
        {
          if ( !v42 )
          {
            v42 = MiSessionLookupImage(*(_QWORD *)(a1 + 48));
            if ( *((_BYTE *)v42 + 64) )
              v6 |= 2u;
          }
        }
        if ( (v6 & 2) != 0 && (unsigned __int8)MiDriverPageMustStayResident(v17, v8) )
        {
          MiLockPageAtDpcInline(v27);
          MiRemoveLockedPageChargeAndDecRef(v27, v33, v34, v35);
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v28 = 48 * DriverPage - 0x58000000000LL;
          MiLockPageAtDpcInline(v28);
          MiAddLockedPageCharge(v28, 1);
          _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          v28 = 48 * DriverPage - 0x58000000000LL;
        }
        DriverPage = -1LL;
        if ( (MiFlags & 0x10000) != 0 && ((*(_QWORD *)(v28 + 40) >> 54) & 7) == 3 )
        {
          v36 = v46;
          _bittestandset(*(signed __int32 **)(v45 + 8), v21 >> 3);
          if ( (MiGetWsleContents(v21 >> 3, v36) & 0xF) != 9 )
          {
            MiLockPageAtDpcInline(v28);
            MiRemoveSystemImagePage(v38, v8, v28);
            _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
LABEL_14:
        v8 += 8LL;
        v21 += 8LL;
        goto LABEL_15;
      }
      MiUnlockWorkingSetExclusive(v24, v25);
      DriverPage = MiAllocateDriverPage(v44);
      v32 = MiGetSharedVm(v38);
      v37 = ExAcquireSpinLockExclusive(v32);
      v32[1] = 0;
      if ( DriverPage == -1LL )
      {
        v5 = -1073741801;
        goto LABEL_29;
      }
LABEL_15:
      if ( v8 > v47 )
        goto LABEL_29;
    }
    if ( (v22 & 0x400) != 0 )
    {
      MiFlushTbList((__int64)&v48, v12, v17);
      MiUnlockWorkingSetExclusive(v38, v37);
      v30 = MmAccessFault(0LL, (__int64)(v8 << 25) >> 16, 0, 0LL);
      if ( v30 < 0 )
        KeBugCheckEx(0x1Au, 0x3000uLL, (__int64)(v8 << 25) >> 16, v23, v30);
      v31 = MiGetSharedVm(v38);
      v37 = ExAcquireSpinLockExclusive(v31);
      v31[1] = 0;
      goto LABEL_15;
    }
    goto LABEL_14;
  }
LABEL_29:
  MiFlushTbList((__int64)&v48, v12, v17);
  if ( (v6 & 1) != 0 )
    MiUnlockWorkingSetExclusive(v38, v37);
  if ( DriverPage != -1LL )
    MiReleaseFreshPage(48 * DriverPage - 0x58000000000LL);
  return v5;
}
