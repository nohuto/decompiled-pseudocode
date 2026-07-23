/*
 * XREFs of MiReloadBootLoadedDrivers @ 0x140837458
 * Callers:
 *     MiInitializeDriverImages @ 0x14082EE90 (MiInitializeDriverImages.c)
 * Callees:
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiClearPfnImageVerified @ 0x140050290 (MiClearPfnImageVerified.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiCopyPage @ 0x14005A3E0 (MiCopyPage.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     RtlImageNtHeader @ 0x1400AE3B0 (RtlImageNtHeader.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiCopyPfnEntry @ 0x1400CA320 (MiCopyPfnEntry.c)
 *     MiMarkPfnVerified @ 0x1400CCEFC (MiMarkPfnVerified.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiDecrementShareCount @ 0x1400EB4C0 (MiDecrementShareCount.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x1400F96A8 (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgLoadImageSymbolsUnicode @ 0x1400F9718 (DbgLoadImageSymbolsUnicode.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011C690 (MiLockNestedPageAtDpcInline.c)
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     KeSetPagePrivilege @ 0x14015130C (KeSetPagePrivilege.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiAllocateDriverPage @ 0x140509740 (MiAllocateDriverPage.c)
 *     MiReleaseDriverPtes @ 0x1405413F0 (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x140541558 (MiReserveDriverPtes.c)
 *     MiUseLargeDriverPage @ 0x140542AC8 (MiUseLargeDriverPage.c)
 *     MiReservePrivilegedPtes @ 0x140542DC8 (MiReservePrivilegedPtes.c)
 *     MiProcessLoadConfigForDriver @ 0x140542FB0 (MiProcessLoadConfigForDriver.c)
 *     MiReleasePrivilegedPtes @ 0x14059F1D8 (MiReleasePrivilegedPtes.c)
 *     LdrRelocateImage @ 0x1405BE5F8 (LdrRelocateImage.c)
 *     VslReserveProtectedPages @ 0x1406B40C0 (VslReserveProtectedPages.c)
 *     MiFreeBootDriverPage @ 0x140837C4C (MiFreeBootDriverPage.c)
 *     MiInitializeSystemImagePage @ 0x140837D74 (MiInitializeSystemImagePage.c)
 *     MiUpdateThunks @ 0x140837E10 (MiUpdateThunks.c)
 *     MiReturnDriverLoadPages @ 0x14086BF50 (MiReturnDriverLoadPages.c)
 */

void __fastcall MiReloadBootLoadedDrivers(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // esi
  __int64 v4; // r15
  unsigned int v5; // ecx
  unsigned __int64 v6; // rdi
  ULONG v7; // r8d
  ULONG v8; // r9d
  PIMAGE_NT_HEADERS v9; // r12
  PVOID v10; // rcx
  unsigned __int64 v11; // r13
  unsigned int VirtualAddress; // ecx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r14
  unsigned int v18; // ebx
  const CHAR *v19; // rdx
  __int64 v20; // r12
  int v21; // esi
  int v22; // r8d
  int v23; // r12d
  __int64 *v24; // r13
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rbx
  __int64 DriverPage; // rax
  __int64 PteShadow; // rsi
  ULONG_PTR v29; // rdi
  __int64 v30; // r13
  char v31; // r9
  _KPROCESS *v32; // rdx
  __int64 v33; // rsi
  char *v34; // rcx
  int v35; // eax
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // rdi
  unsigned int v38; // r14d
  ULONG v39; // [rsp+28h] [rbp-E0h]
  unsigned int v40; // [rsp+38h] [rbp-D0h]
  unsigned __int8 v41; // [rsp+3Ch] [rbp-CCh]
  unsigned int v42; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v43; // [rsp+48h] [rbp-C0h]
  __int64 v44; // [rsp+50h] [rbp-B8h]
  PIMAGE_NT_HEADERS v45; // [rsp+58h] [rbp-B0h]
  char *v46; // [rsp+58h] [rbp-B0h]
  __int64 v47; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v48; // [rsp+68h] [rbp-A0h]
  ULONG_PTR v49; // [rsp+70h] [rbp-98h]
  __int64 v50; // [rsp+78h] [rbp-90h]
  unsigned __int64 v51; // [rsp+80h] [rbp-88h]
  __int64 *v52; // [rsp+88h] [rbp-80h]
  __int64 v53; // [rsp+90h] [rbp-78h]
  unsigned __int64 v54; // [rsp+98h] [rbp-70h]
  __int64 v55; // [rsp+A0h] [rbp-68h]
  __int64 v56; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v57; // [rsp+B0h] [rbp-58h]
  __int128 v58; // [rsp+B8h] [rbp-50h] BYREF
  int v59; // [rsp+C8h] [rbp-40h] BYREF
  __int16 v60; // [rsp+CCh] [rbp-3Ch]
  __int64 v61; // [rsp+D0h] [rbp-38h]
  __int64 v62; // [rsp+D8h] [rbp-30h]
  __int64 v63; // [rsp+E0h] [rbp-28h]
  char v64[8]; // [rsp+188h] [rbp+80h] BYREF
  unsigned __int64 v65; // [rsp+190h] [rbp+88h]
  __int64 v66; // [rsp+198h] [rbp+90h]
  __int64 v67; // [rsp+1A0h] [rbp+98h]
  char v68[8]; // [rsp+1F8h] [rbp+F0h] BYREF
  unsigned __int64 v69; // [rsp+200h] [rbp+F8h]
  __int64 v70; // [rsp+208h] [rbp+100h]
  __int64 v71; // [rsp+210h] [rbp+108h]

  v56 = a1;
  *((_QWORD *)&v58 + 1) = 0LL;
  v61 = 20LL;
  v2 = 0;
  v3 = ((unsigned int)dword_140400168 >> 12) + ((dword_140400168 & 0xFFF) != 0);
  v59 = 0;
  v42 = v3;
  v4 = *(_QWORD *)(a1 + 16);
  v60 = 0;
  v62 = 0LL;
  v63 = 0LL;
  v55 = v4;
  if ( v4 != a1 + 16 )
  {
    LODWORD(a2) = 2;
    while ( 1 )
    {
      v5 = 0;
      v40 = 0;
      if ( (MiFlags & 0x10000) != 0 )
      {
        if ( (MiFlags & 0x8000) != 0 )
          v5 = a2;
        v40 = v5;
      }
      v6 = *(_QWORD *)(v4 + 48);
      v54 = v6;
      v9 = RtlImageNtHeader((PVOID)v6);
      v10 = *(PVOID *)(v4 + 48);
      v11 = ((unsigned __int64)*(unsigned int *)(v4 + 64) + 4095) >> 12;
      v45 = v9;
      v57 = v11;
      if ( PsNtosImageBase != v10 )
        MiProcessLoadConfigForDriver(v4, 0, 0LL, 0LL);
      if ( (v9->FileHeader.Characteristics & 1) != 0 || v9->OptionalHeader.NumberOfRvaAndSizes <= 5 )
        goto LABEL_87;
      VirtualAddress = v9->OptionalHeader.DataDirectory[5].VirtualAddress;
      if ( VirtualAddress )
      {
        if ( v9->OptionalHeader.DataDirectory[5].Size + VirtualAddress > *(_DWORD *)(v4 + 64) )
          goto LABEL_87;
        v2 |= 2u;
      }
      else
      {
        v2 &= ~2u;
      }
      v13 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v48 = (unsigned int)v11;
      v43 = v13;
      v51 = v13 + 8LL * (unsigned int)v11;
      if ( v3 )
      {
        if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v6) )
        {
          v14 = v3;
          v15 = v51;
          v16 = v51 + 8 * v14;
          if ( v51 < v16 )
          {
            do
            {
              MiFreeBootDriverPage(v15, &v59);
              v15 += 8LL;
            }
            while ( v15 < v16 );
          }
          v3 = v42;
        }
        v13 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      if ( (PVOID)v6 == PsNtosImageBase || (PVOID)v6 == PsHalImageBase )
      {
LABEL_87:
        v38 = v40;
        goto LABEL_88;
      }
      v9->OptionalHeader.ImageBase = v6;
      v17 = v13;
      if ( (*(_DWORD *)(v4 + 104) & 0x800000) != 0 )
      {
        v18 = v2 & 0xFFFFFFFB;
      }
      else
      {
        v18 = v2 | 4;
        DbgUnLoadImageSymbolsUnicode((PCUNICODE_STRING)(v4 + 88), v6, 0xFFFFFFFFLL);
        if ( !v3 )
        {
          v20 = (__int64)MiUseLargeDriverPage(0LL, v11, (const void *)v6, (const UNICODE_STRING *)(v4 + 88));
          if ( v20 )
          {
            v2 = v18 | 1;
            goto LABEL_64;
          }
        }
        v13 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      v2 = v18 & 0xFFFFFFFE;
      LODWORD(v50) = v2;
      if ( (v2 & 4) == 0 )
      {
        v17 = v13;
        v53 = v6;
        v20 = v6;
        goto LABEL_39;
      }
      v21 = v11 + v3;
      v17 = MiReserveDriverPtes(0, v21);
      if ( v17 )
        break;
LABEL_90:
      v4 = *(_QWORD *)v4;
      a2 = 2LL;
      v3 = v42;
      v55 = v4;
      if ( v4 == v56 + 16 )
        goto LABEL_91;
    }
    if ( (int)MiReservePrivilegedPtes() < 0 )
      goto LABEL_32;
    v20 = (__int64)(v17 << 25) >> 16;
    v53 = v20;
    if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 )
    {
      v67 = 0LL;
      v65 = v6;
      v66 = (__int64)(v17 << 25) >> 16;
      if ( VslpEnterIumSecureMode(2u, 216LL, 0, (__int64)v64) < 0 )
      {
        MiReleasePrivilegedPtes();
LABEL_32:
        v22 = v21;
LABEL_33:
        MiReleaseDriverPtes(0, v17, v22);
        goto LABEL_90;
      }
    }
LABEL_39:
    v19 = (const CHAR *)(v17 + 8 * v48);
    if ( v17 < (unsigned __int64)v19 )
    {
      v23 = v2 & 4;
      v24 = (__int64 *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v52 = v24;
      v25 = (__int64)(v17 << 25) >> 16;
      v26 = v17 + 8 * v48;
      do
      {
        DriverPage = MiAllocateDriverPage(&MiSystemPartition);
        PteShadow = *v24;
        v29 = DriverPage;
        if ( (unsigned __int64)v24 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v24 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow();
        v47 = PteShadow;
        v49 = MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)&v47);
        v30 = 48 * v49 - 0x58000000000LL;
        if ( v23 )
        {
          v33 = MiInitializeSystemImagePage(v29, v17, (*(_DWORD *)(v30 + 16) >> 5) & 0x1F);
          v47 = v33;
          if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 )
          {
            *(_QWORD *)&v58 = v25;
            KeSetPagePrivilege(v29, &v58, 256);
            if ( ((*(_QWORD *)(v30 + 40) >> 54) & 7) == 3 )
              MiMarkPfnVerified(48 * v29 - 0x58000000000LL, 0);
          }
          else
          {
            MiCopyPage(v29, v49, 0LL, 1);
          }
          *(_QWORD *)v17 = v33;
          if ( v17 >= 0xFFFFF6FB7DBED000uLL && v17 <= 0xFFFFF6FB7DBED7F8uLL )
            MiWritePteShadow();
        }
        else
        {
          v44 = 48 * v29 - 0x58000000000LL;
          v41 = MiLockPageInline(v30);
          MiLockNestedPageAtDpcInline(v44);
          MiCopyPfnEntry(v44, v30);
          v31 = 4;
          if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 )
            v31 = 6;
          MiCopyPage(v29, v49, 0LL, v31);
          v47 = PteShadow ^ (PteShadow ^ (v29 << 12)) & 0xFFFFFFFFF000LL;
          MiWriteValidPteNewPage((unsigned __int64 *)v17, v47);
          _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          *(_QWORD *)(v30 + 24) |= 0x4000000000000000uLL;
          MiInsertTbFlushEntry(&v59, v25, 1LL, 0);
          MiFlushTbList((__int64)&v59, v32);
          if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) == 0 && ((*(_QWORD *)(v30 + 40) >> 54) & 7) == 3 )
            MiClearPfnImageVerified(v30, 12);
          MiDecrementShareCount(v30);
          _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v41);
        }
        v17 += 8LL;
        v24 = v52 + 1;
        v25 += 4096LL;
        ++v52;
      }
      while ( v17 < v26 );
      v2 = v50;
      v4 = v55;
      v20 = v53;
      v6 = v54;
      LODWORD(v11) = v57;
    }
    v3 = v42;
    v17 -= 8 * v48;
LABEL_64:
    if ( (v2 & 4) == 0 )
    {
      v38 = v40;
      goto LABEL_85;
    }
    v34 = (char *)v45 + v20 - v6;
    v46 = v34;
    if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 )
    {
      v69 = v6;
      v70 = v20;
      v71 = 1LL;
      v35 = VslpEnterIumSecureMode(2u, 216LL, 0, (__int64)v68);
    }
    else
    {
      if ( (v2 & 2) == 0 || (v2 & 1) != 0 )
      {
        v35 = 0;
        goto LABEL_73;
      }
      v35 = LdrRelocateImage((PVOID)v20, v19, v7, v8, v39);
    }
    v34 = v46;
LABEL_73:
    if ( v35 >= 0 )
    {
      *(_QWORD *)(v4 + 48) = v20;
      *((_QWORD *)v34 + 6) = v20;
      MiUpdateThunks(v56, v6, v20, *(unsigned int *)(v4 + 64));
      *(_DWORD *)(v4 + 104) |= 0x1000000u;
      *(_QWORD *)(v4 + 56) = v20 + *((unsigned int *)v46 + 10);
      *(_DWORD *)(v4 + 64) = (_DWORD)v11 << 12;
      if ( (unsigned int)DbgLoadImageSymbolsUnicode((PCUNICODE_STRING)(v4 + 88), (PVOID)v20) == 1 )
        *(_DWORD *)(v4 + 104) |= 0x100000u;
      v36 = v43;
      if ( v43 < v51 )
      {
        v37 = v51;
        do
        {
          MiFreeBootDriverPage(v36, &v59);
          v36 += 8LL;
        }
        while ( v36 < v37 );
        v6 = v54;
      }
      v38 = v40;
      if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 )
      {
        v38 = v40 | 1;
        VslReserveProtectedPages(0LL, v20, v3 + v11, 2u);
      }
LABEL_85:
      if ( (v2 & 1) != 0 )
      {
        MiReturnResidentAvailable(v48);
        MiReturnCommit((__int64)&MiSystemPartition, v48);
      }
LABEL_88:
      if ( v38 )
        VslReserveProtectedPages(0LL, v6, v3 + v11, v38);
      goto LABEL_90;
    }
    MiReturnDriverLoadPages(v17, v17 + 8 * v48 - 8);
    MiReleasePrivilegedPtes();
    v22 = v3 + v11;
    goto LABEL_33;
  }
LABEL_91:
  MiFlushTbList((__int64)&v59, (_KPROCESS *)a2);
}
