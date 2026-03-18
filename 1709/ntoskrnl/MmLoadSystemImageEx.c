/*
 * XREFs of MmLoadSystemImageEx @ 0x1405431E0
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x14014F920 (IopLoadCrashdumpDriver.c)
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 *     IopLoadUnloadDriver @ 0x14046F260 (IopLoadUnloadDriver.c)
 *     IopLoadDriver @ 0x140517490 (IopLoadDriver.c)
 *     MiLoadImportDll @ 0x1405C9014 (MiLoadImportDll.c)
 *     IopLoadCrashdmpImage @ 0x1405F1FB0 (IopLoadCrashdmpImage.c)
 *     PnprLoadPluginDriver @ 0x1406CCED8 (PnprLoadPluginDriver.c)
 *     MmLoadSystemImage @ 0x1406E22A0 (MmLoadSystemImage.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14009F9C0 (MiCheckPurgeAndUpMapCount.c)
 *     MiReferenceActiveSubsection @ 0x1400A1320 (MiReferenceActiveSubsection.c)
 *     MiSectionControlArea @ 0x1400A1610 (MiSectionControlArea.c)
 *     MiControlAreaRequiresCharge @ 0x1400A27AC (MiControlAreaRequiresCharge.c)
 *     RtlImageDirectoryEntryToData @ 0x1400AE2A0 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x1400AE3B0 (RtlImageNtHeader.c)
 *     MiSessionLookupImage @ 0x1400D5620 (MiSessionLookupImage.c)
 *     MiSetImageProtection @ 0x1400DC1BC (MiSetImageProtection.c)
 *     MiSessionInsertImage @ 0x1401550D4 (MiSessionInsertImage.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140211AE8 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiValidateStrongCodeDriverImage @ 0x140219344 (MiValidateStrongCodeDriverImage.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MiConstructLoaderEntry @ 0x140471244 (MiConstructLoaderEntry.c)
 *     MiResolveImageReferences @ 0x1404DC360 (MiResolveImageReferences.c)
 *     MiMapSystemImage @ 0x1404F5F10 (MiMapSystemImage.c)
 *     MiRelocateAmount @ 0x1404F615C (MiRelocateAmount.c)
 *     MmReleaseLoadLock @ 0x140515720 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140515A20 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x140515B1C (MiUnloadSystemImage.c)
 *     MiUseLargeDriverPage @ 0x140542AC8 (MiUseLargeDriverPage.c)
 *     MiGetSystemAddressForImage @ 0x140542BF0 (MiGetSystemAddressForImage.c)
 *     MiProcessLoadConfigForDriver @ 0x140542FB0 (MiProcessLoadConfigForDriver.c)
 *     MiObtainSectionForDriver @ 0x140543848 (MiObtainSectionForDriver.c)
 *     MiGenerateSystemImageNames @ 0x1405439F8 (MiGenerateSystemImageNames.c)
 *     MiDriverLoadSucceeded @ 0x140543B6C (MiDriverLoadSucceeded.c)
 *     MiHandleDriverNonPagedSections @ 0x140543D68 (MiHandleDriverNonPagedSections.c)
 *     KseDriverLoadImage @ 0x140546568 (KseDriverLoadImage.c)
 *     MiCompactServiceTable @ 0x1405B9B54 (MiCompactServiceTable.c)
 *     MiBackSingleImageWithPagefile @ 0x1405C87A4 (MiBackSingleImageWithPagefile.c)
 *     MiApplyDriverHotPatch @ 0x1406E15C8 (MiApplyDriverHotPatch.c)
 *     MiLocateHotPatchBase @ 0x1406E1898 (MiLocateHotPatchBase.c)
 *     MiLogFailedDriverLoad @ 0x1406E1928 (MiLogFailedDriverLoad.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1406E1B44 (MiLogStrongCodeDriverLoadFailure.c)
 *     VfDriverLoadImage @ 0x1407A2174 (VfDriverLoadImage.c)
 */

__int64 __fastcall MmLoadSystemImageEx(__int64 a1, const UNICODE_STRING *a2, __int64 a3, int a4, _QWORD *a5, char **a6)
{
  int v7; // r14d
  __int64 result; // rax
  char v9; // r13
  PVOID v10; // rdi
  signed int ConfigForDriver; // ebx
  void *v12; // r13
  __int64 *v13; // rax
  unsigned int v14; // esi
  char *v15; // r12
  int v16; // eax
  __int64 v17; // r11
  char *v18; // r12
  char *v19; // rax
  PIMAGE_NT_HEADERS v20; // rsi
  unsigned int v21; // r12d
  PVOID v22; // rax
  unsigned int *v23; // rsi
  unsigned __int64 v24; // r13
  int v25; // r14d
  __int64 v26; // r12
  __int64 *v27; // r14
  char *v28; // rsi
  int v29; // eax
  __int64 v30; // r15
  __int64 v31; // r14
  int inserted; // eax
  unsigned int TimeDateStamp; // eax
  char *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  unsigned __int64 v38; // rdx
  int v39; // r14d
  unsigned int *i; // rsi
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // r8d
  _QWORD *j; // rcx
  char *v45; // rbx
  __int64 v46; // rdx
  unsigned __int64 v47; // rax
  char v48; // [rsp+30h] [rbp-D0h]
  int v49; // [rsp+34h] [rbp-CCh]
  char v50; // [rsp+38h] [rbp-C8h]
  char v51; // [rsp+3Ch] [rbp-C4h]
  struct _KTHREAD *Lock; // [rsp+40h] [rbp-C0h]
  int v53; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 *v54; // [rsp+50h] [rbp-B0h]
  char *SystemAddressForImage; // [rsp+58h] [rbp-A8h]
  PVOID P; // [rsp+60h] [rbp-A0h]
  ULONG Size; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v58; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v59; // [rsp+70h] [rbp-90h] BYREF
  __int64 v60; // [rsp+78h] [rbp-88h]
  __int64 v61; // [rsp+80h] [rbp-80h] BYREF
  _QWORD **v62; // [rsp+88h] [rbp-78h]
  UNICODE_STRING v63; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING String1; // [rsp+A0h] [rbp-60h] BYREF
  ULONG v65; // [rsp+B0h] [rbp-50h] BYREF
  void *v66; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v67[56]; // [rsp+C0h] [rbp-40h] BYREF
  char v70; // [rsp+1C8h] [rbp+C8h]

  v59 = 0LL;
  v53 = 1;
  *a6 = 0LL;
  v7 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    if ( (a4 & 2) != 0 || (a4 & 0x80000004) == 4 || (a4 & 0x10) != 0 )
      return 3221225714LL;
    if ( (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
      return 3221225495LL;
  }
  else if ( (a4 & 4) != 0 )
  {
    return 3221225714LL;
  }
  if ( (a4 & 0x10) != 0 && ((MiFlags & 0x10000) == 0 || (MiFlags & 0x8000) == 0 || !dword_140400168 || a4 >= 0) )
    return 3221225714LL;
  result = MiGenerateSystemImageNames(a1, a2, a3, &v63, v67, &String1);
  if ( (int)result < 0 )
    return result;
  v49 = 1;
  v9 = 0;
  v50 = 0;
  v51 = 0;
  P = 0LL;
  v48 = 0;
  Lock = MmAcquireLoadLock();
  v10 = 0LL;
  ConfigForDriver = MiObtainSectionForDriver(&String1);
  if ( ConfigForDriver < 0 )
  {
    v16 = 1;
    goto LABEL_74;
  }
  v12 = (void *)*((_QWORD *)P + 14);
  v60 = (__int64)v12;
  if ( v12 )
  {
    v13 = (__int64 *)MiSectionControlArea((__int64)v12);
    v14 = *(_DWORD *)(*v13 + 8);
  }
  else
  {
    v13 = 0LL;
    v14 = 0;
  }
  v54 = v13;
  if ( ConfigForDriver )
  {
    if ( (a4 & 0x10) != 0 )
    {
      ConfigForDriver = -1073741554;
    }
    else
    {
      v70 = 0;
      v15 = (char *)MEMORY[0x30];
      SystemAddressForImage = (char *)MEMORY[0x30];
      if ( !v7 )
        goto LABEL_66;
      inserted = MiSessionInsertImage(MEMORY[0x30], v13);
      ConfigForDriver = inserted;
      if ( inserted >= 0 )
      {
        if ( inserted == 272 )
        {
LABEL_67:
          *a5 = 0LL;
          *a6 = v15;
          if ( (MEMORY[0x68] & 0x4000000) != 0 )
            ConfigForDriver = -1073741411;
          else
            ConfigForDriver = v7 == 0 ? 0xC000010E : 0;
          goto LABEL_69;
        }
        v48 = 1;
LABEL_66:
        if ( ConfigForDriver != 272 )
        {
          ++MEMORY[0x6C];
          goto LABEL_11;
        }
        goto LABEL_67;
      }
    }
LABEL_69:
    MmReleaseLoadLock((__int64)Lock);
    goto LABEL_55;
  }
  v70 = 1;
  MEMORY[0x40] = v14 << 12;
  SystemAddressForImage = (char *)MiGetSystemAddressForImage((__int64)v12, a4, &v53);
  v15 = SystemAddressForImage;
  if ( !SystemAddressForImage )
  {
    ObDereferenceObjectDeferDelete(v12);
    ExFreePoolWithTag(0LL, 0);
    v31 = (__int64)Lock;
    ConfigForDriver = -1073741670;
    v30 = a1;
LABEL_76:
    MmReleaseLoadLock(v31);
    if ( v50 == 1 )
      MiLogFailedDriverLoad(v30, 0LL, 0LL, (unsigned int)ConfigForDriver);
    goto LABEL_55;
  }
  MiCheckPurgeAndUpMapCount((__int64)v54);
  v48 = v7;
  MEMORY[0x30] = v15;
LABEL_11:
  v58 = 0;
  if ( (a4 & 0x10) != 0 )
  {
    ConfigForDriver = MiLocateHotPatchBase(v60, &v59, &v58);
    if ( ConfigForDriver < 0 )
      goto LABEL_95;
    if ( !v59 )
    {
      ConfigForDriver = 0;
      goto LABEL_95;
    }
  }
  if ( v48 || v70 != 1 )
    goto LABEL_16;
  v16 = MiControlAreaRequiresCharge((__int64)v54);
  v49 = v16;
  if ( !v16 )
  {
    v9 = 0;
    ConfigForDriver = -1073740277;
    goto LABEL_74;
  }
  if ( v16 != 2
    || (ConfigForDriver = MiReferenceActiveSubsection((__int64 *)(v17 + 128), 136, 0x11u), ConfigForDriver >= 0) )
  {
LABEL_16:
    ConfigForDriver = MiMapSystemImage(v60, (unsigned __int64)v15);
    if ( ConfigForDriver < 0 )
      goto LABEL_95;
    if ( !v7 )
    {
      _InterlockedExchangeAdd(&dword_140389400, v14);
      v10 = P;
    }
    v18 = 0LL;
    v51 = 1;
    if ( !v7 && SystemAddressForImage == *(char **)(*v54 + 32) )
    {
      v19 = (char *)MiUseLargeDriverPage(v60, v14, SystemAddressForImage, &v63);
      v18 = v19;
      if ( v19 )
      {
        _InterlockedExchangeAdd((_DWORD *)&xmmword_140388420 + 3, -v14);
        v10 = P;
        SystemAddressForImage = v19;
        MEMORY[0x30] = v19;
      }
    }
    v50 = 1;
    v62 = (_QWORD **)(v54 + 16);
    if ( v70 == 1 )
    {
      v20 = RtlImageNtHeader(MEMORY[0x30]);
      if ( !v20 )
      {
        ConfigForDriver = -1073741279;
        goto LABEL_95;
      }
      if ( v20->FileHeader.Machine != 0x8664 || v20->OptionalHeader.Magic != 523 )
      {
        ConfigForDriver = -1073741520;
        goto LABEL_95;
      }
      if ( (MiFlags & 0x10000) != 0 && (a4 & 0x10) == 0 )
      {
        ConfigForDriver = MiValidateStrongCodeDriverImage((__int64)v20);
        if ( ConfigForDriver < 0 )
        {
          memset(&v67[4], 0, 0xA0uLL);
          v67[34] = v20->OptionalHeader.CheckSum;
          TimeDateStamp = v20->FileHeader.TimeDateStamp;
          *(UNICODE_STRING *)&v67[26] = v63;
          v67[43] = TimeDateStamp;
          MiLogStrongCodeDriverLoadFailure("SectionWXable");
LABEL_104:
          v9 = v51;
          v31 = (__int64)Lock;
          v30 = a1;
LABEL_53:
          v16 = v49;
          goto LABEL_54;
        }
      }
      ConfigForDriver = MiConstructLoaderEntry(
                          (__int64)v10,
                          (const void **)&v63,
                          (const void **)&String1,
                          a4,
                          v53,
                          &v66);
      if ( ConfigForDriver < 0 )
        goto LABEL_95;
      ExFreePoolWithTag(v10, 0);
      v10 = v66;
      P = v66;
    }
    v51 = 5;
    if ( v49 == 2 )
      *((_DWORD *)v10 + 49) = *((_DWORD *)v10 + 49) & 0x1F | 0x20;
    if ( !v53 && !v18 && !v7 )
      MiBackSingleImageWithPagefile(v10);
    v21 = 0;
    if ( (a4 & 0x10) == 0 )
    {
      v22 = RtlImageDirectoryEntryToData(*((PVOID *)v10 + 6), 1u, 0xCu, &Size);
      v23 = 0LL;
      v24 = (unsigned __int64)v22;
      if ( v22 && (v25 = Size) != 0 )
      {
        if ( !(unsigned int)MiSetImageProtection((__int64)v10, (unsigned __int64)v22, Size) )
        {
          v34 = "UnwritableIAT";
LABEL_111:
          MiLogStrongCodeDriverLoadFailure(v34);
          dword_1403882F8 = 192;
          ConfigForDriver = -1073741701;
          goto LABEL_95;
        }
        v21 = 1;
      }
      else
      {
        v24 = 0LL;
        v25 = 0;
        v23 = (unsigned int *)RtlImageDirectoryEntryToData(*((PVOID *)v10 + 6), 1u, 1u, &v65);
        if ( !v23 )
          goto LABEL_44;
        do
        {
          v35 = *v23;
          if ( !(_DWORD)v35 )
            break;
          v36 = *((_QWORD *)v10 + 6);
          v37 = (_QWORD *)(v36 + v35);
          v38 = v36 + v23[4];
          v39 = 0;
          while ( *v37 )
          {
            ++v37;
            ++v39;
          }
          v25 = 8 * v39;
          Size = v25;
          if ( !(unsigned int)MiSetImageProtection((__int64)v10, v38, v25) )
          {
            v34 = "UnwritableImportDirectory";
            goto LABEL_111;
          }
          ++v21;
          v23 += 5;
        }
        while ( v23 );
        if ( !v21 )
          goto LABEL_44;
      }
      *((_DWORD *)v10 + 26) |= 0x1000u;
      v61 = -2LL;
      ConfigForDriver = MiResolveImageReferences(
                          SystemAddressForImage,
                          (__int64)&v63,
                          v67,
                          a2,
                          (_QWORD *)((unsigned __int64)&v61 & -(__int64)(v70 != 0)));
      if ( v62[2] )
      {
        if ( v24 )
        {
          MiSetImageProtection((__int64)v10, v24, v25);
        }
        else
        {
          for ( i = &v23[-5 * v21]; i; i += 5 )
          {
            v41 = *i;
            if ( !(_DWORD)v41 )
              break;
            v42 = *((_QWORD *)v10 + 6);
            v43 = 0;
            for ( j = (_QWORD *)(v42 + v41); *j; ++v43 )
              ++j;
            MiSetImageProtection((__int64)v10, v42 + i[4], 8 * v43);
          }
        }
      }
      *((_DWORD *)v10 + 26) &= ~0x1000u;
      if ( ConfigForDriver < 0 )
      {
        v50 = 0;
        goto LABEL_104;
      }
      if ( v70 == 1 )
        *((_QWORD *)v10 + 17) = v61;
    }
LABEL_44:
    v26 = (__int64)v62;
    ConfigForDriver = MiProcessLoadConfigForDriver((__int64)v10, a4, (__int64)v62, v59);
    if ( ConfigForDriver >= 0 )
    {
      v27 = v54;
      v9 = 21;
      v28 = SystemAddressForImage;
      if ( (*(_BYTE *)(*(_QWORD *)(*v54 + 56) + 46LL) & 0x40) == 0 )
      {
        v45 = &SystemAddressForImage[*(unsigned int *)(*(_QWORD *)v54[12] + 64LL)];
        MiSetImageProtection((__int64)v10, (unsigned __int64)v45, 8u);
        *(_QWORD *)v45 = &v28[-MiRelocateAmount((__int64)v27, 0)];
        if ( *(_QWORD *)(v26 + 16) != v46 )
          MiSetImageProtection((__int64)v10, (unsigned __int64)v45, v46 + 8);
      }
      if ( (a4 & 0x10) == 0 )
      {
        VfDriverLoadImage(v10, 0LL, 0LL, 0LL);
        KseDriverLoadImage(v10);
        if ( v48 == 1 && (a4 & 4) != 0 )
        {
          ConfigForDriver = MiCompactServiceTable(v10);
          if ( ConfigForDriver < 0 )
            goto LABEL_72;
        }
        v29 = MiHandleDriverNonPagedSections(v10, (unsigned int)a4, 1LL);
LABEL_49:
        ConfigForDriver = v29;
        if ( v29 >= 0 )
        {
          v9 = 29;
          if ( v48 == 1 )
            *((_BYTE *)MiSessionLookupImage((unsigned __int64)v28) + 64) = 1;
          v30 = a1;
          MiDriverLoadSucceeded((_DWORD)v10, v60, a1, (unsigned int)&String1, (__int64)&v63, v70);
          v31 = (__int64)Lock;
          MmReleaseLoadLock((__int64)Lock);
          ConfigForDriver = 0;
          *a5 = v10;
          *a6 = v28;
          goto LABEL_53;
        }
        goto LABEL_72;
      }
      ConfigForDriver = MiHandleDriverNonPagedSections(v10, (unsigned int)a4, 1LL);
      if ( ConfigForDriver >= 0 )
      {
        v29 = MiApplyDriverHotPatch(v10, v59, v58);
        goto LABEL_49;
      }
LABEL_72:
      v16 = v49;
LABEL_74:
      v31 = (__int64)Lock;
      v30 = a1;
LABEL_75:
      if ( v10 )
      {
        if ( v16 == 2 && (v9 & 4) == 0 )
        {
          v47 = MiSectionControlArea(*((_QWORD *)v10 + 14));
          MiReturnCrossPartitionControlAreaCharges(v47);
        }
        MiUnloadSystemImage((ULONG_PTR)v10, v9);
      }
      goto LABEL_76;
    }
LABEL_95:
    v9 = v51;
    goto LABEL_72;
  }
  v9 = 0;
  v16 = 1;
  v31 = (__int64)Lock;
  v30 = a1;
LABEL_54:
  if ( ConfigForDriver < 0 )
    goto LABEL_75;
LABEL_55:
  if ( a2 )
    ExFreePoolWithTag(String1.Buffer, 0);
  return (unsigned int)ConfigForDriver;
}
