/*
 * XREFs of MiReloadBootLoadedDrivers @ 0x140815898
 * Callers:
 *     MiInitializeDriverImages @ 0x140814868 (MiInitializeDriverImages.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x140005D80 (MiMarkPfnVerified.c)
 *     MiLockNestedPageAtDpcInline @ 0x14002126C (MiLockNestedPageAtDpcInline.c)
 *     MiWriteValidPteNewPage @ 0x14002820C (MiWriteValidPteNewPage.c)
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     DbgLoadImageSymbolsUnicode @ 0x14007009C (DbgLoadImageSymbolsUnicode.c)
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 *     MiCopyPage @ 0x1400A0320 (MiCopyPage.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiClearPfnImageVerified @ 0x1400C7700 (MiClearPfnImageVerified.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 *     MiCopyPfnEntry @ 0x14010C150 (MiCopyPfnEntry.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x140148EB4 (DbgUnLoadImageSymbolsUnicode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     KeSetPagePrivilege @ 0x1401FC9E8 (KeSetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUseLargeDriverPage @ 0x1404B0F54 (MiUseLargeDriverPage.c)
 *     MiReservePrivilegedPtes @ 0x1404B1224 (MiReservePrivilegedPtes.c)
 *     MiProcessLoadConfigForDriver @ 0x1404B13E8 (MiProcessLoadConfigForDriver.c)
 *     MiAllocateDriverPage @ 0x14053D888 (MiAllocateDriverPage.c)
 *     MiReserveDriverPtes @ 0x14055D0C4 (MiReserveDriverPtes.c)
 *     MiReleaseDriverPtes @ 0x140583170 (MiReleaseDriverPtes.c)
 *     LdrRelocateImage @ 0x1405BAA60 (LdrRelocateImage.c)
 *     VslReserveProtectedPages @ 0x140688190 (VslReserveProtectedPages.c)
 *     MiReleasePrivilegedPtes @ 0x1406B5CE8 (MiReleasePrivilegedPtes.c)
 *     MiFreeBootDriverPage @ 0x140816020 (MiFreeBootDriverPage.c)
 *     MiInitializeSystemImagePage @ 0x140816130 (MiInitializeSystemImagePage.c)
 *     MiUpdateThunks @ 0x1408161C0 (MiUpdateThunks.c)
 *     MiReturnDriverLoadPages @ 0x140834DD4 (MiReturnDriverLoadPages.c)
 */

void __fastcall MiReloadBootLoadedDrivers(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  __int64 v4; // r14
  unsigned int v5; // ecx
  unsigned __int64 v6; // r12
  ULONG v7; // r8d
  ULONG v8; // r9d
  PIMAGE_NT_HEADERS v9; // r15
  PVOID v10; // rcx
  unsigned __int64 v11; // r13
  unsigned int VirtualAddress; // ecx
  __int64 v13; // rcx
  unsigned __int64 v14; // r11
  __int64 v15; // rax
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rsi
  unsigned int v19; // ebx
  const CHAR *v20; // rdx
  __int64 v21; // r15
  int v22; // edi
  int v23; // r15d
  __int64 v24; // rbx
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // r14
  __int64 v27; // rdi
  __int64 v28; // r9
  __int64 v29; // r13
  char v30; // r9
  _KPROCESS *v31; // rdx
  __int64 v32; // rdi
  int v33; // eax
  __int64 v34; // r9
  __int64 v35; // rcx
  unsigned __int64 v36; // rsi
  unsigned __int64 v37; // r12
  unsigned int v38; // esi
  ULONG v39; // [rsp+28h] [rbp-E0h]
  unsigned int v40; // [rsp+38h] [rbp-D0h]
  unsigned __int8 v41; // [rsp+3Ch] [rbp-CCh]
  unsigned int v42; // [rsp+40h] [rbp-C8h]
  __int64 DriverPage; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v44; // [rsp+50h] [rbp-B8h]
  __int64 v45; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v46; // [rsp+60h] [rbp-A8h]
  ULONG_PTR v47; // [rsp+68h] [rbp-A0h]
  __int64 v48; // [rsp+70h] [rbp-98h]
  __int64 v49; // [rsp+78h] [rbp-90h]
  PIMAGE_NT_HEADERS v50; // [rsp+80h] [rbp-88h]
  __int64 v51; // [rsp+88h] [rbp-80h]
  unsigned __int64 v52; // [rsp+90h] [rbp-78h]
  unsigned __int64 v53; // [rsp+98h] [rbp-70h]
  __int64 v54; // [rsp+A0h] [rbp-68h]
  __int64 v55; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v56; // [rsp+B0h] [rbp-58h]
  __int128 v57; // [rsp+B8h] [rbp-50h] BYREF
  int v58; // [rsp+C8h] [rbp-40h] BYREF
  __int16 v59; // [rsp+CCh] [rbp-3Ch]
  __int64 v60; // [rsp+D0h] [rbp-38h]
  __int64 v61; // [rsp+D8h] [rbp-30h]
  __int64 v62; // [rsp+E0h] [rbp-28h]
  char v63[8]; // [rsp+188h] [rbp+80h] BYREF
  unsigned __int64 v64; // [rsp+190h] [rbp+88h]
  __int64 v65; // [rsp+198h] [rbp+90h]
  __int64 v66; // [rsp+1A0h] [rbp+98h]
  char v67[8]; // [rsp+1F8h] [rbp+F0h] BYREF
  unsigned __int64 v68; // [rsp+200h] [rbp+F8h]
  __int64 v69; // [rsp+208h] [rbp+100h]
  __int64 v70; // [rsp+210h] [rbp+108h]

  v55 = a1;
  *((_QWORD *)&v57 + 1) = 0LL;
  v60 = 20LL;
  v2 = 0;
  v3 = ((unsigned int)dword_1403E3168 >> 12) + ((dword_1403E3168 & 0xFFF) != 0);
  v58 = 0;
  v42 = v3;
  v4 = *(_QWORD *)(a1 + 16);
  v59 = 0;
  v61 = 0LL;
  v62 = 0LL;
  v54 = v4;
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
      v53 = v6;
      v9 = RtlImageNtHeader((PVOID)v6);
      v10 = *(PVOID *)(v4 + 48);
      v11 = ((unsigned __int64)*(unsigned int *)(v4 + 64) + 4095) >> 12;
      v50 = v9;
      v56 = v11;
      if ( PsNtosImageBase != v10 )
        MiProcessLoadConfigForDriver(v4, 0, 0LL, 0LL);
      if ( (v9->FileHeader.Characteristics & 1) != 0 || v9->OptionalHeader.NumberOfRvaAndSizes <= 5 )
        goto LABEL_81;
      VirtualAddress = v9->OptionalHeader.DataDirectory[5].VirtualAddress;
      if ( VirtualAddress )
      {
        if ( v9->OptionalHeader.DataDirectory[5].Size + VirtualAddress > *(_DWORD *)(v4 + 64) )
          goto LABEL_81;
        v2 |= 2u;
      }
      else
      {
        v2 &= ~2u;
      }
      v13 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v44 = v13;
      v46 = (unsigned int)v11;
      v52 = v13 + 8LL * (unsigned int)v11;
      if ( v3 )
      {
        if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v6) )
        {
          v15 = v3;
          v16 = v14;
          v17 = v14 + 8 * v15;
          if ( v14 < v17 )
          {
            do
            {
              MiFreeBootDriverPage(v16, &v58);
              v16 += 8LL;
            }
            while ( v16 < v17 );
          }
          v3 = v42;
        }
        v13 = v44;
      }
      if ( (PVOID)v6 == PsNtosImageBase || (PVOID)v6 == PsHalImageBase )
      {
LABEL_81:
        v38 = v40;
        goto LABEL_82;
      }
      v9->OptionalHeader.ImageBase = v6;
      v18 = v13;
      if ( (*(_DWORD *)(v4 + 104) & 0x800000) != 0 )
      {
        v19 = v2 & 0xFFFFFFFB;
      }
      else
      {
        v19 = v2 | 4;
        DbgUnLoadImageSymbolsUnicode((PCUNICODE_STRING)(v4 + 88), v6, 0xFFFFFFFFLL);
        if ( v3 )
        {
          v21 = (__int64)MiUseLargeDriverPage(0LL, v11, (const void *)v6, (const UNICODE_STRING *)(v4 + 88));
          if ( v21 )
          {
            v2 = v19 | 1;
            goto LABEL_59;
          }
        }
        v13 = v44;
      }
      v2 = v19 & 0xFFFFFFFE;
      LODWORD(v48) = v2;
      if ( (v2 & 4) == 0 )
        break;
      v22 = v11 + v3;
      v18 = MiReserveDriverPtes(0, v22);
      if ( v18 )
      {
        if ( (int)MiReservePrivilegedPtes() < 0 )
        {
LABEL_32:
          MiReleaseDriverPtes(0, v18, v22);
          goto LABEL_84;
        }
        v21 = (__int64)(v18 << 25) >> 16;
        v51 = v21;
        if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 )
        {
          v66 = 0LL;
          v64 = v6;
          v65 = (__int64)(v18 << 25) >> 16;
          if ( VslpEnterIumSecureMode(1, 216LL, 0LL, (__int64)v63) < 0 )
          {
LABEL_36:
            MiReleasePrivilegedPtes();
            goto LABEL_32;
          }
        }
LABEL_38:
        v20 = (const CHAR *)(v18 + 8 * v46);
        if ( v18 < (unsigned __int64)v20 )
        {
          v23 = v2 & 4;
          v24 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - v18 - 0x98000000000LL;
          v25 = (__int64)(v18 << 25) >> 16;
          v26 = v18 + 8 * v46;
          do
          {
            DriverPage = MiAllocateDriverPage(&MiSystemPartition);
            v45 = MI_READ_PTE_LOCK_FREE(v24 + v18);
            v27 = v45;
            v47 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v45) >> 12) & 0xFFFFFFFFFLL;
            v29 = 48 * v47 - 0x58000000000LL;
            if ( v23 )
            {
              v32 = MiInitializeSystemImagePage(v28, v18, (*(_DWORD *)(v29 + 16) >> 5) & 0x1F);
              v45 = v32;
              if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 )
              {
                *(_QWORD *)&v57 = v25;
                KeSetPagePrivilege(DriverPage, &v57, 256);
                if ( ((*(_QWORD *)(v29 + 40) >> 54) & 7) == 3 )
                  MiMarkPfnVerified(48 * DriverPage - 0x58000000000LL, 0);
              }
              else
              {
                MiCopyPage(DriverPage, v47, 0LL, 1);
              }
              *(_QWORD *)v18 = v32;
              if ( MiPteInShadowRange(v18) )
                MiWritePteShadow();
            }
            else
            {
              v49 = 48 * v28 - 0x58000000000LL;
              v41 = MiLockPageInline(48 * v47 - 0x58000000000LL);
              MiLockNestedPageAtDpcInline(v49);
              MiCopyPfnEntry(v49, v29);
              v30 = 4;
              if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 )
                v30 = 6;
              MiCopyPage(DriverPage, v47, 0LL, v30);
              v45 = (v27 ^ (DriverPage << 12)) & 0xFFFFFFFFF000LL ^ v27;
              MiWriteValidPteNewPage(v18);
              _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              *(_QWORD *)(v29 + 24) |= 0x4000000000000000uLL;
              MiInsertTbFlushEntry((__int64)&v58, v25, 1LL, 0);
              MiFlushTbList((__int64)&v58, v31);
              if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) == 0 && ((*(_QWORD *)(v29 + 40) >> 54) & 7) == 3 )
                MiClearPfnImageVerified(v29, 12);
              MiDecrementShareCount(v29);
              _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(v41);
            }
            v18 += 8LL;
            v25 += 4096LL;
          }
          while ( v18 < v26 );
          v2 = v48;
          v4 = v54;
          v21 = v51;
          v6 = v53;
          LODWORD(v11) = v56;
        }
        v3 = v42;
        v18 -= 8 * v46;
LABEL_59:
        if ( (v2 & 4) == 0 )
        {
          v38 = v40;
          goto LABEL_79;
        }
        v50 = (PIMAGE_NT_HEADERS)((char *)v50 + v21 - v6);
        if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 )
        {
          v68 = v6;
          v69 = v21;
          v70 = 1LL;
          v33 = VslpEnterIumSecureMode(1, 216LL, 0LL, (__int64)v67);
        }
        else if ( (v2 & 2) == 0 || (v2 & 1) != 0 )
        {
          v33 = 0;
        }
        else
        {
          v33 = LdrRelocateImage((PVOID)v21, v20, v7, v8, v39);
        }
        if ( v33 >= 0 )
        {
          v34 = *(unsigned int *)(v4 + 64);
          v35 = v55;
          *(_QWORD *)(v4 + 48) = v21;
          MiUpdateThunks(v35, v6, v21, v34);
          *(_DWORD *)(v4 + 104) |= 0x1000000u;
          *(_QWORD *)(v4 + 56) = v21 + v50->OptionalHeader.AddressOfEntryPoint;
          *(_DWORD *)(v4 + 64) = (_DWORD)v11 << 12;
          if ( (unsigned int)DbgLoadImageSymbolsUnicode((PCUNICODE_STRING)(v4 + 88), (PVOID)v21) == 1 )
            *(_DWORD *)(v4 + 104) |= 0x100000u;
          v36 = v44;
          if ( v44 < v52 )
          {
            v37 = v52;
            do
            {
              MiFreeBootDriverPage(v36, &v58);
              v36 += 8LL;
            }
            while ( v36 < v37 );
            v6 = v53;
          }
          v38 = v40;
          if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 )
          {
            v38 = v40 | 1;
            VslReserveProtectedPages(0LL, v21, v3 + v11, 2u);
          }
LABEL_79:
          if ( (v2 & 1) != 0 )
          {
            MiReturnResidentAvailable(v46);
            MiReturnCommit((__int64)&MiSystemPartition, v46);
          }
LABEL_82:
          if ( v38 )
            VslReserveProtectedPages(0LL, v6, v3 + v11, v38);
          goto LABEL_84;
        }
        MiReturnDriverLoadPages(v18, v18 + 8 * v46 - 8);
        v22 = v11 + v3;
        goto LABEL_36;
      }
LABEL_84:
      v4 = *(_QWORD *)v4;
      v3 = v42;
      v54 = v4;
      a2 = 2LL;
      if ( v4 == v55 + 16 )
        goto LABEL_85;
    }
    v18 = v13;
    v51 = v6;
    v21 = v6;
    goto LABEL_38;
  }
LABEL_85:
  MiFlushTbList((__int64)&v58, (_KPROCESS *)a2);
}
