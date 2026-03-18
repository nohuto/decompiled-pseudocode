/*
 * XREFs of MmLoadSystemImageEx @ 0x1405F9AF4
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x14016E3B0 (IopLoadCrashdumpDriver.c)
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 *     IopLoadUnloadDriver @ 0x1405F6C00 (IopLoadUnloadDriver.c)
 *     IopLoadDriver @ 0x1405F7CAC (IopLoadDriver.c)
 *     MiLoadImportDll @ 0x1406113D4 (MiLoadImportDll.c)
 *     IopLoadCrashdmpImage @ 0x140614430 (IopLoadCrashdmpImage.c)
 *     PnprLoadPluginDriver @ 0x140734878 (PnprLoadPluginDriver.c)
 *     MmLoadSystemImage @ 0x14074CEE0 (MmLoadSystemImage.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14003EEB0 (RtlImageNtHeader.c)
 *     RtlImageDirectoryEntryToData @ 0x140040D20 (RtlImageDirectoryEntryToData.c)
 *     MiControlAreaRequiresCharge @ 0x1400E481C (MiControlAreaRequiresCharge.c)
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 *     MiReferenceActiveSubsection @ 0x1400E5D50 (MiReferenceActiveSubsection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1400E5FE0 (MiCheckPurgeAndUpMapCount.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 *     MiSessionLookupImage @ 0x14012B754 (MiSessionLookupImage.c)
 *     MiSetImageProtection @ 0x14013EAF4 (MiSetImageProtection.c)
 *     MiSessionInsertImage @ 0x14016C34C (MiSessionInsertImage.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14024FF3C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiValidateStrongCodeDriverImage @ 0x140255FB0 (MiValidateStrongCodeDriverImage.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MmReleaseLoadLock @ 0x1405BC7A0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1405BC900 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 *     MiBackSingleImageWithPagefile @ 0x1405F65E0 (MiBackSingleImageWithPagefile.c)
 *     MiUseLargeDriverPage @ 0x1405F83BC (MiUseLargeDriverPage.c)
 *     MiGetSystemAddressForImage @ 0x1405F8C24 (MiGetSystemAddressForImage.c)
 *     MiConstructLoaderEntry @ 0x1405F8E14 (MiConstructLoaderEntry.c)
 *     MiObtainSectionForDriver @ 0x1405FA21C (MiObtainSectionForDriver.c)
 *     MiGenerateSystemImageNames @ 0x1405FA3CC (MiGenerateSystemImageNames.c)
 *     MiDriverLoadSucceeded @ 0x1405FA544 (MiDriverLoadSucceeded.c)
 *     MiHandleDriverNonPagedSections @ 0x1405FA75C (MiHandleDriverNonPagedSections.c)
 *     MiProcessLoadConfigForDriver @ 0x1405FA978 (MiProcessLoadConfigForDriver.c)
 *     MiResolveImageReferences @ 0x1405FABA8 (MiResolveImageReferences.c)
 *     MiMapSystemImage @ 0x1405FB30C (MiMapSystemImage.c)
 *     KseDriverLoadImage @ 0x1405FE1AC (KseDriverLoadImage.c)
 *     MiCompactServiceTable @ 0x14060E084 (MiCompactServiceTable.c)
 *     MiApplyDriverHotPatch @ 0x14074C3B8 (MiApplyDriverHotPatch.c)
 *     MiLocateHotPatchBase @ 0x14074C654 (MiLocateHotPatchBase.c)
 *     MiLogFailedDriverLoad @ 0x14074C6D0 (MiLogFailedDriverLoad.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x14074C8EC (MiLogStrongCodeDriverLoadFailure.c)
 *     VfDriverLoadImage @ 0x14080EEBC (VfDriverLoadImage.c)
 */

__int64 __fastcall MmLoadSystemImageEx(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _QWORD *a5, char **a6)
{
  unsigned int v6; // esi
  int v8; // r14d
  int v9; // r12d
  __int64 result; // rax
  PVOID v11; // rdi
  signed int ConfigForDriver; // ebx
  void *v13; // r13
  __int64 *v14; // rdx
  bool v15; // zf
  __int64 v16; // r12
  int v17; // eax
  __int64 v18; // r11
  void *v19; // r12
  char *v20; // rax
  char v21; // bl
  PIMAGE_NT_HEADERS v22; // rsi
  int v23; // r14d
  unsigned int v24; // r12d
  PVOID v25; // rax
  unsigned int *v26; // rsi
  unsigned __int64 v27; // r13
  int v28; // r14d
  _QWORD *v29; // r13
  __int64 *v30; // r12
  int v31; // eax
  __int64 v32; // r15
  __int64 v33; // r14
  int inserted; // eax
  char *v35; // rbx
  __int64 v36; // rcx
  unsigned int TimeDateStamp; // eax
  char *v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  int v41; // r14d
  _QWORD *v42; // rax
  unsigned __int64 v43; // rdx
  int i; // ecx
  unsigned int *j; // rsi
  __int64 v46; // rcx
  __int64 v47; // rax
  int v48; // r8d
  _QWORD *v49; // rcx
  unsigned __int64 v50; // rdx
  int k; // eax
  unsigned __int64 v52; // rax
  char v53; // [rsp+30h] [rbp-D0h]
  char v54; // [rsp+34h] [rbp-CCh]
  int v55; // [rsp+38h] [rbp-C8h]
  char v56; // [rsp+3Ch] [rbp-C4h]
  struct _KTHREAD *Lock; // [rsp+40h] [rbp-C0h]
  int v58; // [rsp+48h] [rbp-B8h]
  char *SystemAddressForImage; // [rsp+50h] [rbp-B0h]
  int v60; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v61; // [rsp+60h] [rbp-A0h]
  PVOID P; // [rsp+68h] [rbp-98h]
  ULONG Size; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v64; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v65; // [rsp+78h] [rbp-88h] BYREF
  __int64 v66; // [rsp+80h] [rbp-80h]
  __int64 v67; // [rsp+88h] [rbp-78h] BYREF
  _QWORD *v68; // [rsp+90h] [rbp-70h]
  UNICODE_STRING v69; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING String1; // [rsp+A8h] [rbp-58h] BYREF
  ULONG v71; // [rsp+B8h] [rbp-48h] BYREF
  void *v72; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v73[14]; // [rsp+C8h] [rbp-38h] BYREF
  char v76; // [rsp+1D8h] [rbp+D8h]

  v6 = 0;
  v65 = 0LL;
  v60 = 1;
  *a6 = 0LL;
  v8 = a4 & 1;
  if ( (a4 & 1) == 0 )
  {
    if ( (a4 & 4) == 0 )
    {
      v58 = a4 & 0x10;
      v9 = v58;
      if ( (a4 & 0x10) == 0
        || (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 && dword_14044B1C8 && (a4 & 0x80000000) != 0 )
      {
        goto LABEL_4;
      }
    }
    return 3221225714LL;
  }
  if ( (a4 & 2) != 0 )
    return 3221225714LL;
  if ( (a4 & 0x80000004) == 4 )
    return 3221225714LL;
  v58 = a4 & 0x10;
  if ( (a4 & 0x10) != 0 )
    return 3221225714LL;
  if ( (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
    return 3221225495LL;
  v9 = 0;
LABEL_4:
  result = MiGenerateSystemImageNames(a1, a2, a3, &v69, v73, &String1);
  if ( (int)result < 0 )
    return result;
  P = 0LL;
  v55 = 1;
  v56 = 0;
  v54 = 0;
  v53 = 0;
  Lock = MmAcquireLoadLock();
  v11 = 0LL;
  ConfigForDriver = MiObtainSectionForDriver(&String1);
  if ( ConfigForDriver < 0 )
  {
    v17 = 1;
LABEL_79:
    v33 = (__int64)Lock;
    v32 = a1;
    goto LABEL_80;
  }
  v13 = (void *)*((_QWORD *)P + 14);
  v66 = (__int64)v13;
  if ( v13 )
  {
    v14 = (__int64 *)MiSectionControlArea((__int64)v13);
    v61 = v14;
    v6 = *(_DWORD *)(*v14 + 8);
  }
  else
  {
    v14 = 0LL;
    v61 = 0LL;
  }
  if ( ConfigForDriver )
  {
    if ( v9 )
    {
      ConfigForDriver = -1073741554;
    }
    else
    {
      v76 = 0;
      SystemAddressForImage = (char *)MEMORY[0x30];
      if ( !v8 )
        goto LABEL_61;
      inserted = MiSessionInsertImage(MEMORY[0x30], v14);
      ConfigForDriver = inserted;
      if ( inserted >= 0 )
      {
        if ( inserted == 272 )
        {
LABEL_62:
          *a5 = 0LL;
          *a6 = SystemAddressForImage;
          if ( (MEMORY[0x68] & 0x4000000) != 0 )
            ConfigForDriver = -1073741411;
          else
            ConfigForDriver = v8 == 0 ? 0xC000010E : 0;
          goto LABEL_64;
        }
        v53 = 1;
LABEL_61:
        if ( ConfigForDriver != 272 )
        {
          ++MEMORY[0x6C];
          goto LABEL_11;
        }
        goto LABEL_62;
      }
    }
LABEL_64:
    MmReleaseLoadLock((__int64)Lock);
    goto LABEL_55;
  }
  v76 = 1;
  MEMORY[0x40] = v6 << 12;
  SystemAddressForImage = (char *)MiGetSystemAddressForImage((__int64)v13, a4, &v60);
  if ( !SystemAddressForImage )
  {
    ObDereferenceObjectDeferDelete(v13);
    ExFreePoolWithTag(0LL, 0);
    v33 = (__int64)Lock;
    ConfigForDriver = -1073741670;
    v32 = a1;
LABEL_81:
    MmReleaseLoadLock(v33);
    if ( v56 == 1 )
      MiLogFailedDriverLoad(v32, 0LL, 0LL, (unsigned int)ConfigForDriver);
    goto LABEL_55;
  }
  MiCheckPurgeAndUpMapCount((__int64)v61);
  v53 = v8;
  MEMORY[0x30] = SystemAddressForImage;
LABEL_11:
  v64 = 0;
  v15 = v9 == 0;
  v16 = v66;
  if ( !v15 )
  {
    ConfigForDriver = MiLocateHotPatchBase(v66, &v65, &v64);
    if ( ConfigForDriver < 0 )
      goto LABEL_105;
    if ( !v65 )
    {
      ConfigForDriver = 0;
      goto LABEL_105;
    }
  }
  if ( v76 != 1 || v53 )
    goto LABEL_16;
  v17 = MiControlAreaRequiresCharge((__int64)v61, 3LL);
  v55 = v17;
  if ( !v17 )
  {
    LOBYTE(v6) = 0;
    ConfigForDriver = -1073740277;
    goto LABEL_79;
  }
  if ( v17 != 2
    || (ConfigForDriver = MiReferenceActiveSubsection((__int64 *)(v18 + 128), 136, 0x11u), ConfigForDriver >= 0) )
  {
LABEL_16:
    ConfigForDriver = MiMapSystemImage(v16, SystemAddressForImage, a4);
    if ( ConfigForDriver < 0 )
      goto LABEL_105;
    if ( !v8 )
    {
      _InterlockedExchangeAdd(&dword_1403CC678, v6);
      v11 = P;
    }
    v19 = 0LL;
    v54 = 1;
    if ( !v8 && SystemAddressForImage == *(char **)(*v61 + 32) )
    {
      v20 = (char *)MiUseLargeDriverPage(v66, v6, SystemAddressForImage, &v69);
      v19 = v20;
      if ( v20 )
      {
        _InterlockedExchangeAdd((_DWORD *)&xmmword_1403CB5A0 + 3, -v6);
        v11 = P;
        SystemAddressForImage = v20;
        MEMORY[0x30] = v20;
      }
    }
    v56 = 1;
    v21 = v76;
    v68 = v61 + 16;
    if ( v76 == 1 )
    {
      v22 = RtlImageNtHeader(MEMORY[0x30]);
      if ( !v22 )
      {
        ConfigForDriver = -1073741279;
        goto LABEL_105;
      }
      if ( v22->FileHeader.Machine != 0x8664 || v22->OptionalHeader.Magic != 523 )
      {
        ConfigForDriver = -1073741520;
        goto LABEL_105;
      }
      if ( (MiFlags & 0x10000) != 0 && !v58 )
      {
        ConfigForDriver = MiValidateStrongCodeDriverImage((__int64)v22);
        if ( ConfigForDriver < 0 )
        {
          memset((char *)&v73[1] + 8, 0, 0xA0uLL);
          LODWORD(v73[9]) = v22->OptionalHeader.CheckSum;
          TimeDateStamp = v22->FileHeader.TimeDateStamp;
          v73[7] = v69;
          DWORD1(v73[11]) = TimeDateStamp;
          MiLogStrongCodeDriverLoadFailure("SectionWXable");
LABEL_115:
          v33 = (__int64)Lock;
          v32 = a1;
LABEL_53:
          v17 = v55;
          goto LABEL_54;
        }
      }
      ConfigForDriver = MiConstructLoaderEntry(
                          (__int64)v11,
                          (const void **)&v69,
                          (const void **)&String1,
                          a4,
                          v60,
                          &v72);
      if ( ConfigForDriver < 0 )
        goto LABEL_105;
      ExFreePoolWithTag(v11, 0);
      v11 = v72;
      v21 = 1;
      P = v72;
    }
    LOBYTE(v6) = 5;
    v54 = 5;
    if ( v55 == 2 )
      *((_DWORD *)v11 + 49) = *((_DWORD *)v11 + 49) & 0x1F | 0x20;
    if ( !v60 && !v19 && !v8 )
      MiBackSingleImageWithPagefile((__int64)v11);
    v23 = v58;
    v24 = 0;
    if ( !v58 )
    {
      v25 = RtlImageDirectoryEntryToData(*((PVOID *)v11 + 6), 1u, 0xCu, &Size);
      v26 = 0LL;
      v27 = (unsigned __int64)v25;
      if ( v25 )
      {
        v28 = Size;
        if ( Size )
        {
          if ( !(unsigned int)MiSetImageProtection((__int64)v11, (unsigned __int64)v25, Size) )
          {
            v38 = "UnwritableIAT";
LABEL_119:
            MiLogStrongCodeDriverLoadFailure(v38);
            dword_1403CB498 = 192;
            ConfigForDriver = -1073741701;
            goto LABEL_105;
          }
          v24 = 1;
          goto LABEL_38;
        }
      }
      v27 = 0LL;
      v28 = 0;
      v26 = (unsigned int *)RtlImageDirectoryEntryToData(*((PVOID *)v11 + 6), 1u, 1u, &v71);
      if ( v26 )
      {
        do
        {
          v39 = *v26;
          if ( !(_DWORD)v39 )
            break;
          v40 = *((_QWORD *)v11 + 6);
          v41 = 0;
          v42 = (_QWORD *)(v40 + v39);
          v43 = v40 + v26[4];
          for ( i = 0; *v42; v41 = i )
          {
            ++i;
            ++v42;
          }
          v28 = 8 * v41;
          Size = v28;
          if ( !(unsigned int)MiSetImageProtection((__int64)v11, v43, v28) )
          {
            v38 = "UnwritableImportDirectory";
            goto LABEL_119;
          }
          ++v24;
          v26 += 5;
        }
        while ( v26 );
        if ( v24 )
        {
LABEL_38:
          *((_DWORD *)v11 + 26) |= 0x1000u;
          v67 = -2LL;
          ConfigForDriver = MiResolveImageReferences(
                              (_DWORD)SystemAddressForImage,
                              (unsigned int)&v69,
                              (unsigned int)v73,
                              a2,
                              (unsigned __int64)&v67 & -(__int64)(v21 != 0));
          if ( v68[2] )
          {
            if ( v27 )
            {
              MiSetImageProtection((__int64)v11, v27, v28);
            }
            else
            {
              for ( j = &v26[-5 * v24]; j; j += 5 )
              {
                v46 = *j;
                if ( !(_DWORD)v46 )
                  break;
                v47 = *((_QWORD *)v11 + 6);
                v48 = 0;
                v49 = (_QWORD *)(v47 + v46);
                v50 = v47 + j[4];
                for ( k = 0; *v49; v48 = k )
                {
                  ++k;
                  ++v49;
                }
                MiSetImageProtection((__int64)v11, v50, 8 * v48);
              }
            }
          }
          *((_DWORD *)v11 + 26) &= ~0x1000u;
          if ( ConfigForDriver < 0 )
          {
            v56 = 0;
            goto LABEL_115;
          }
          v23 = 0;
          LOBYTE(v6) = 5;
          if ( v76 == 1 )
            *((_QWORD *)v11 + 17) = v67;
          goto LABEL_44;
        }
      }
      LOBYTE(v6) = 5;
      v23 = 0;
    }
LABEL_44:
    v29 = v68;
    ConfigForDriver = MiProcessLoadConfigForDriver(v11, a4, v68, v65);
    if ( ConfigForDriver < 0 )
    {
LABEL_106:
      v17 = v55;
      goto LABEL_79;
    }
    v30 = v61;
    v54 = 21;
    if ( (*(_BYTE *)(*(_QWORD *)(*v61 + 56) + 46LL) & 0x40) == 0 )
    {
      v35 = &SystemAddressForImage[*(unsigned int *)(*(_QWORD *)(v61[12] + 32) + 64LL)];
      MiSetImageProtection((__int64)v11, (unsigned __int64)v35, 8u);
      v36 = *(_QWORD *)(v30[12] + 32);
      if ( v36 )
        v36 = *(_QWORD *)(v36 + 40);
      *(_QWORD *)v35 = &SystemAddressForImage[-v36];
      if ( v29[2] )
        MiSetImageProtection((__int64)v11, (unsigned __int64)v35, 8u);
    }
    if ( !v23 )
    {
      VfDriverLoadImage(v11, 0LL, 0LL, 0LL);
      KseDriverLoadImage(v11);
      if ( v53 == 1 && (a4 & 4) != 0 )
      {
        ConfigForDriver = MiCompactServiceTable(v11);
        if ( ConfigForDriver < 0 )
          goto LABEL_105;
      }
      v31 = MiHandleDriverNonPagedSections(v11, a4, 1LL);
LABEL_49:
      ConfigForDriver = v31;
      if ( v31 >= 0 )
      {
        v54 = 29;
        if ( v53 == 1 )
          *((_BYTE *)MiSessionLookupImage((unsigned __int64)SystemAddressForImage) + 64) = 1;
        v32 = a1;
        MiDriverLoadSucceeded((_DWORD)v11, v66, a1, (unsigned int)&String1, (__int64)&v69, v76);
        v33 = (__int64)Lock;
        MmReleaseLoadLock((__int64)Lock);
        ConfigForDriver = 0;
        *a5 = v11;
        *a6 = SystemAddressForImage;
        goto LABEL_53;
      }
      goto LABEL_105;
    }
    ConfigForDriver = MiHandleDriverNonPagedSections(v11, a4, 1LL);
    if ( ConfigForDriver >= 0 )
    {
      v31 = MiApplyDriverHotPatch(v11, v65, v64);
      goto LABEL_49;
    }
LABEL_105:
    LOBYTE(v6) = v54;
    goto LABEL_106;
  }
  v33 = (__int64)Lock;
  v17 = 1;
  v32 = a1;
LABEL_54:
  if ( ConfigForDriver < 0 )
  {
    LOBYTE(v6) = v54;
LABEL_80:
    if ( v11 )
    {
      if ( v17 == 2 && (v6 & 4) == 0 )
      {
        v52 = MiSectionControlArea(*((_QWORD *)v11 + 14));
        MiReturnCrossPartitionControlAreaCharges(v52);
      }
      MiUnloadSystemImage((ULONG_PTR)v11, v6);
    }
    goto LABEL_81;
  }
LABEL_55:
  if ( a2 )
    ExFreePoolWithTag(String1.Buffer, 0);
  return (unsigned int)ConfigForDriver;
}
