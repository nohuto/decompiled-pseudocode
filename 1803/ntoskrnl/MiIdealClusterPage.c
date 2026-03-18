/*
 * XREFs of MiIdealClusterPage @ 0x140269D08
 * Callers:
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x14001E7D0 (MiGetProtoPteAddress.c)
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030AF8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiRemoveLockedPageCharge @ 0x140031840 (MiRemoveLockedPageCharge.c)
 *     MiReturnPfnReferenceCount @ 0x14004CD68 (MiReturnPfnReferenceCount.c)
 *     MiGet64KPage @ 0x140055A00 (MiGet64KPage.c)
 *     MiInitializePageColorBase @ 0x140057920 (MiInitializePageColorBase.c)
 *     MiReleaseFaultState @ 0x140057E38 (MiReleaseFaultState.c)
 *     MiObtainProtoReference @ 0x140057FC0 (MiObtainProtoReference.c)
 *     MiAddLockedPageCharge @ 0x140058004 (MiAddLockedPageCharge.c)
 *     MiRelockProtoPoolPage @ 0x140059A10 (MiRelockProtoPoolPage.c)
 *     MiRelockFaultState @ 0x140059A7C (MiRelockFaultState.c)
 *     MiIsFaultPteIntact @ 0x140059B20 (MiIsFaultPteIntact.c)
 *     MiPageToNode @ 0x140122B50 (MiPageToNode.c)
 *     MiFindContiguousPages @ 0x140123CF0 (MiFindContiguousPages.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiReleaseNonPagedResources @ 0x14013A6A0 (MiReleaseNonPagedResources.c)
 *     MiReleaseFreshPage @ 0x14013A6E0 (MiReleaseFreshPage.c)
 *     MiAcquireNonPagedResources @ 0x14013A8EC (MiAcquireNonPagedResources.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     MiArePageContentsZero @ 0x140264DE4 (MiArePageContentsZero.c)
 *     MiSwapHardFaultPage @ 0x14026D914 (MiSwapHardFaultPage.c)
 */

volatile signed __int64 *__fastcall MiIdealClusterPage(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        volatile signed __int64 *a5,
        void *a6,
        char *a7)
{
  volatile signed __int64 *v8; // rbx
  __int64 v9; // r13
  volatile signed __int64 *v10; // rdi
  char v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // r12
  bool v15; // zf
  __int64 ProtoPteAddress; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 *v25; // r10
  __int64 v26; // r11
  ULONG_PTR *v27; // rsi
  unsigned int v28; // r9d
  __int64 *v29; // rcx
  __int64 v30; // rdx
  unsigned __int64 v31; // r15
  char v32; // r8
  unsigned __int64 v33; // rax
  unsigned int v35; // r11d
  int v36; // r8d
  unsigned int v37; // edx
  __int16 v38; // cx
  int v39; // r14d
  __int64 v40; // r11
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int64 v43; // rdx
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // r9
  int ContiguousPages; // r12d
  __int64 v52; // rbx
  ULONG_PTR v53; // r14
  ULONG_PTR v54; // rsi
  ULONG_PTR v55; // r13
  volatile signed __int64 *v56; // rax
  int v57; // r8d
  int v58; // eax
  bool v59; // r14
  void *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  char v64; // [rsp+60h] [rbp-A0h]
  char v65; // [rsp+61h] [rbp-9Fh]
  char v66[6]; // [rsp+62h] [rbp-9Eh] BYREF
  __int64 v67; // [rsp+68h] [rbp-98h]
  void *Buf2; // [rsp+70h] [rbp-90h]
  __int64 CurrentIrql; // [rsp+78h] [rbp-88h]
  ULONG_PTR *v70; // [rsp+80h] [rbp-80h]
  unsigned __int64 v71; // [rsp+88h] [rbp-78h] BYREF
  char *v72; // [rsp+90h] [rbp-70h]
  __int64 v73; // [rsp+98h] [rbp-68h]
  unsigned __int64 *v74; // [rsp+A0h] [rbp-60h]
  ULONG_PTR v75; // [rsp+A8h] [rbp-58h]
  __int64 v76; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v77; // [rsp+B8h] [rbp-48h] BYREF
  volatile signed __int64 *v78; // [rsp+C0h] [rbp-40h]
  __int64 v79; // [rsp+C8h] [rbp-38h]
  ULONG_PTR v80; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v81; // [rsp+D8h] [rbp-28h]
  unsigned __int64 *v82; // [rsp+E0h] [rbp-20h]
  volatile signed __int32 *v83; // [rsp+E8h] [rbp-18h] BYREF
  __int16 v84; // [rsp+F0h] [rbp-10h]
  unsigned __int16 v85; // [rsp+F2h] [rbp-Eh]
  __int128 Buf1; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v87; // [rsp+108h] [rbp+8h]
  __int128 v88; // [rsp+118h] [rbp+18h]
  _OWORD v89[3]; // [rsp+128h] [rbp+28h] BYREF
  char v90; // [rsp+160h] [rbp+60h] BYREF

  v8 = a5;
  v9 = a3;
  Buf2 = a6;
  v10 = 0LL;
  CurrentIrql = a2;
  v82 = a1;
  v79 = a3;
  v72 = a7;
  v11 = *((_BYTE *)a1 + 80);
  v12 = *a1;
  v74 = a1 + 7;
  v13 = a1[7];
  *a7 = 0;
  v65 = v11;
  v71 = a4;
  v14 = ((v12 & 0xFFFFFFFFFFFFF000uLL) - (v12 & 0xFFFFFFFFFFFF0000uLL)) >> 12;
  v15 = (*(_DWORD *)(a2 + 48) & 0x4000) == 0;
  v78 = a5;
  v67 = v13;
  if ( v15 )
  {
    ProtoPteAddress = MiGetProtoPteAddress(a2, v12 >> 12, 4, &v76);
    if ( !ProtoPteAddress || !v76 || ProtoPteAddress != v9 )
      return v8;
    v17 = *(_QWORD *)(v76 + 8);
    v18 = v17 + 8 * (*(unsigned int *)(v76 + 44) - (unsigned __int64)(*(_DWORD *)(v76 + 52) & 0x3FFFFFFF));
    if ( (v9 & 0xFFFFFFFFFFFFF000uLL) > v17 )
      v17 = v9 & 0xFFFFFFFFFFFFF000uLL;
    v19 = (v9 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( v18 <= v19 )
      v19 = v18;
    if ( v17 >= v19 || v9 - 8 * v14 < v17 || v9 - 8 * v14 + 128 > v19 )
      return v8;
    v20 = *(_WORD *)(*(_QWORD *)v76 + 60LL) & 0x3FF;
  }
  else
  {
    v21 = *((_QWORD *)a5 + 1) | 0x8000000000000000uLL;
    if ( v21 < 0xFFFFF68000000000uLL || v21 > 0xFFFFF6FFFFFFFFFFuLL )
      return v8;
    v20 = *(unsigned __int16 *)(v13 + 174);
  }
  v73 = 16LL;
  v70 = *(ULONG_PTR **)(qword_1403CBD88 + 8 * v20);
  v22 = v9 - 8 * v14;
  do
  {
    v23 = MI_READ_PTE_LOCK_FREE(v22);
    v22 = v24 + 8;
    *v25 = v23;
  }
  while ( v26 != 1 );
  v27 = v70;
  v28 = 0;
  v29 = (__int64 *)&v90;
  v30 = (__int64)(a5 + 0xB000000000LL) / 48;
  v31 = -1LL;
  v75 = v30;
  v32 = 1;
  while ( 1 )
  {
    v77 = *v29;
    if ( (v77 & 1) != 0 )
      break;
    ++v28;
    ++v29;
    if ( v28 >= 0x10 )
      goto LABEL_24;
  }
  v33 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v77);
  v31 = (v33 >> 12) & 0xFFFFFFFFFLL;
  if ( (unsigned __int16)v33 >> 12 != (unsigned __int64)v28 )
    return v8;
  LOBYTE(v30) = v75;
  v32 = 1;
LABEL_24:
  v64 = 0;
  if ( v28 == 16 )
  {
    if ( (v30 & 0xF) == v14 )
    {
LABEL_26:
      *v72 = v32;
      return v8;
    }
    if ( !(unsigned int)MiAcquireNonPagedResources(v70, 1uLL) )
      return v8;
    v64 = 1;
    MiInitializePageColorBase(v67, (*(_DWORD *)(CurrentIrql + 48) >> 8) & 0x3F, (__int64)&v83);
    v36 = v85;
    v37 = v85 >> byte_1403CB699;
    v38 = _InterlockedExchangeAdd(v83, v35);
    v39 = v36 | (unsigned __int16)(v38 & v84);
  }
  else
  {
    v31 += v14 - v28;
    if ( !MiIsPfnInline(v31) )
      return v8;
    v10 = (volatile signed __int64 *)(v40 + 48 * v31);
    if ( v10 == a5 )
      goto LABEL_26;
    v37 = MiPageToNode(v31, 0);
    v39 = dword_1403CB6D8 & v31;
    LOBYTE(v35) = 1;
  }
  LODWORD(v67) = v37;
  *(_BYTE *)(1984LL * v37 + v70[2] + 851) = v35;
  *((_QWORD *)a5 + 3) &= 0xC000000000000000uLL;
  if ( !(unsigned int)MiAddLockedPageCharge((__int64)a5, 0) )
    return v8;
  v41 = *((_OWORD *)a5 + 1);
  v89[0] = *(_OWORD *)a5;
  v42 = *((_OWORD *)a5 + 2);
  v89[1] = v41;
  v89[2] = v42;
  _InterlockedAnd64(a5 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  if ( Buf2 )
  {
    MiObtainProtoReference((__int64)Buf2, 0);
    LOBYTE(v43) = 17;
    v44 = *((_OWORD *)Buf2 + 1);
    Buf1 = *(_OWORD *)Buf2;
    v45 = *((_OWORD *)Buf2 + 2);
    v87 = v44;
    v88 = v45;
    MiUnlockProtoPoolPage((ULONG_PTR)Buf2, v43, v46, v47);
  }
  v81 = MiReleaseFaultState((__int64)v74, 1u, v66);
  if ( v64 == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v48 = MiGet64KPage((__int64)v27, v67, (v71 >> 5) & 0x1F, v39);
    if ( v48 )
    {
      v52 = v48;
      v53 = (v48 + 0x58000000000LL) / 48;
      v54 = v53;
      do
      {
        if ( (MiFlags & 0x80u) != 0 && (++dword_1403CBEAC & MmPageValidationFrequency) == 0 )
          MiArePageContentsZero(v53, 1LL, v49, v50);
        v55 = v54 & 0xF;
        if ( v55 == v14 )
          v31 = v53;
        else
          MiReleaseFreshPage(v52);
        v53 = v54 + 1;
        v56 = (volatile signed __int64 *)v52;
        ++v54;
        if ( v55 != v14 )
          v56 = v10;
        v52 += 48LL;
        v15 = v73-- == 1;
        v10 = v56;
      }
      while ( !v15 );
      v80 = v53;
      __writecr8((unsigned __int8)CurrentIrql);
      v8 = v78;
      ContiguousPages = 0;
      v27 = v70;
      v9 = v79;
    }
    else
    {
      __writecr8((unsigned __int8)CurrentIrql);
      MiReleaseNonPagedResources((__int64)v27, 1uLL);
      ContiguousPages = -1073741801;
    }
  }
  else
  {
    v10 = (volatile signed __int64 *)(48 * v31 - 0x58000000000LL);
    v57 = 1073872896;
    if ( v65 == 1 )
      v57 = 0x40000000;
    v58 = v57 | 8;
    if ( (void (__noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[0].Blink != KeSwapProcessOrStack )
      v58 = v57;
    ContiguousPages = MiFindContiguousPages(
                        (__int64)v27,
                        v31,
                        v31,
                        0LL,
                        1uLL,
                        *((unsigned __int8 *)a5 + 34) >> 6,
                        v67,
                        0x80000000,
                        v58,
                        0LL,
                        (__int64 *)&v80);
  }
  v59 = 0;
  MiRelockFaultState((__int64)v74, v81);
  if ( Buf2 )
  {
    *((_QWORD *)&v87 + 1) |= 0x8000000000000000uLL;
    MiRelockProtoPoolPage((__int64)Buf2, 0LL);
    MiLockPageAtDpcInline((__int64)Buf2);
    v59 = memcmp(&Buf1, Buf2, 0x30uLL) != 0;
    v60 = Buf2;
    _InterlockedAnd64((volatile signed __int64 *)Buf2 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    MiReturnPfnReferenceCount((ULONG_PTR)v60);
  }
  MiLockPageAtDpcInline((__int64)v8);
  if ( v59
    || memcmp(v89, (const void *)v8, 0x30uLL)
    || (v8[3] & 0x4000000000000000LL) != 0
    || !(unsigned int)MiIsFaultPteIntact((__int64)v82, *v82, v9, &v71) )
  {
    if ( ContiguousPages >= 0 )
    {
      _InterlockedAnd64(v8 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      MiReleaseFreshPage((__int64)v10);
      if ( v27 == &MiSystemPartition )
        MiReturnResidentAvailable(1uLL);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 888, 1uLL);
      MiReturnCommit((__int64)v27, 1uLL);
      MiLockPageAtDpcInline((__int64)v8);
    }
    MiRemoveLockedPageChargeAndDecRef((ULONG_PTR)v8, v61, v62, v63);
    return 0LL;
  }
  else
  {
    if ( ContiguousPages < 0 )
    {
      MiRemoveLockedPageCharge((__int64)v8);
      return v8;
    }
    MiCopyPage(v31, v75, 0LL, (v71 & 0x40) != 0 ? 16 : 8);
    MiSwapHardFaultPage(v9, v8, v10);
    *((_WORD *)v10 + 16) = 0;
    if ( v27 == &MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 888, 1uLL);
    *v72 = 1;
    return v10;
  }
}
