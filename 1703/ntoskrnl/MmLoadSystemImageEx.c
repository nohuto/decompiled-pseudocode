/*
 * XREFs of MmLoadSystemImageEx @ 0x1404B191C
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x14014B238 (IopLoadCrashdumpDriver.c)
 *     IopLoadUnloadDriver @ 0x14044DA20 (IopLoadUnloadDriver.c)
 *     IopLoadDriver @ 0x1404D8F84 (IopLoadDriver.c)
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 *     IopLoadCrashdmpImage @ 0x1405863C0 (IopLoadCrashdmpImage.c)
 *     MiLoadImportDll @ 0x140586D2C (MiLoadImportDll.c)
 *     PnprLoadPluginDriver @ 0x1406A2638 (PnprLoadPluginDriver.c)
 *     MmLoadSystemImage @ 0x1406B5F20 (MmLoadSystemImage.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14006B974 (MiSessionLookupImage.c)
 *     MiSetImageProtection @ 0x14006C19C (MiSetImageProtection.c)
 *     RtlImageDirectoryEntryToData @ 0x14008B8F0 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 *     MiControlAreaRequiresCharge @ 0x1400996E8 (MiControlAreaRequiresCharge.c)
 *     MiReferenceActiveSubsection @ 0x14009A070 (MiReferenceActiveSubsection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14009A340 (MiCheckPurgeAndUpMapCount.c)
 *     MiSectionControlArea @ 0x1400CDE10 (MiSectionControlArea.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400E19E0 (ObDereferenceObjectDeferDelete.c)
 *     MiSessionInsertImage @ 0x140148C0C (MiSessionInsertImage.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14020AC6C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiValidateStrongCodeDriverImage @ 0x140211A70 (MiValidateStrongCodeDriverImage.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiRelocateAmount @ 0x140423A60 (MiRelocateAmount.c)
 *     MiUseLargeDriverPage @ 0x1404B0F54 (MiUseLargeDriverPage.c)
 *     MiGetSystemAddressForImage @ 0x1404B1048 (MiGetSystemAddressForImage.c)
 *     MiMapSystemImage @ 0x1404B12D8 (MiMapSystemImage.c)
 *     MiProcessLoadConfigForDriver @ 0x1404B13E8 (MiProcessLoadConfigForDriver.c)
 *     MmReleaseLoadLock @ 0x1404B2930 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404B2970 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 *     MiGenerateSystemImageNames @ 0x1404B3008 (MiGenerateSystemImageNames.c)
 *     MiDriverLoadSucceeded @ 0x1404B317C (MiDriverLoadSucceeded.c)
 *     MiHandleDriverNonPagedSections @ 0x1404B3378 (MiHandleDriverNonPagedSections.c)
 *     KseDriverLoadImage @ 0x1404B4B60 (KseDriverLoadImage.c)
 *     MiConstructLoaderEntry @ 0x1404B65FC (MiConstructLoaderEntry.c)
 *     MiObtainSectionForDriver @ 0x1404F7528 (MiObtainSectionForDriver.c)
 *     MiResolveImageReferences @ 0x1404F8F54 (MiResolveImageReferences.c)
 *     MiCompactServiceTable @ 0x140580324 (MiCompactServiceTable.c)
 *     MiBackSingleImageWithPagefile @ 0x14058571C (MiBackSingleImageWithPagefile.c)
 *     MiApplyDriverHotPatch @ 0x1406B5468 (MiApplyDriverHotPatch.c)
 *     MiLocateHotPatchBase @ 0x1406B5678 (MiLocateHotPatchBase.c)
 *     MiLogFailedDriverLoad @ 0x1406B5708 (MiLogFailedDriverLoad.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1406B58F4 (MiLogStrongCodeDriverLoadFailure.c)
 *     VfDriverLoadImage @ 0x140761DB4 (VfDriverLoadImage.c)
 */

__int64 __fastcall MmLoadSystemImageEx(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5, unsigned __int64 *a6)
{
  int v7; // r14d
  __int64 result; // rax
  char v9; // r13
  PVOID v10; // rdi
  signed int ConfigForDriver; // ebx
  void *v12; // r13
  _QWORD **v13; // rax
  unsigned int v14; // esi
  unsigned __int64 v15; // r12
  _QWORD **v16; // rbx
  int v17; // eax
  char *v18; // r12
  char *v19; // rax
  PIMAGE_NT_HEADERS v20; // rsi
  unsigned int v21; // r12d
  PVOID v22; // rax
  unsigned int *v23; // rsi
  unsigned __int64 v24; // r13
  int v25; // r14d
  __int64 v26; // r12
  _QWORD **v27; // r14
  char *v28; // rsi
  int v29; // eax
  __int64 v30; // r15
  __int64 v31; // r14
  int inserted; // eax
  unsigned int TimeDateStamp; // eax
  char *v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  _QWORD *v37; // rax
  int v38; // r14d
  unsigned int *i; // rsi
  __int64 v40; // rcx
  _QWORD *v41; // rcx
  int j; // r8d
  char *v43; // rbx
  __int64 v44; // rdx
  unsigned __int64 v45; // rax
  char v46; // [rsp+30h] [rbp-D0h]
  int v47; // [rsp+34h] [rbp-CCh]
  char v48; // [rsp+38h] [rbp-C8h]
  char v49; // [rsp+3Ch] [rbp-C4h]
  __int64 Lock; // [rsp+40h] [rbp-C0h]
  int v51; // [rsp+4Ch] [rbp-B4h] BYREF
  _QWORD **v52; // [rsp+50h] [rbp-B0h]
  char *SystemAddressForImage; // [rsp+58h] [rbp-A8h]
  PVOID P; // [rsp+60h] [rbp-A0h]
  ULONG Size; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v56; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v57; // [rsp+70h] [rbp-90h] BYREF
  __int64 v58; // [rsp+78h] [rbp-88h]
  __int64 v59; // [rsp+80h] [rbp-80h] BYREF
  _QWORD **v60; // [rsp+88h] [rbp-78h]
  UNICODE_STRING v61; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING String1; // [rsp+A0h] [rbp-60h] BYREF
  ULONG v63; // [rsp+B0h] [rbp-50h] BYREF
  void *v64; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v65[56]; // [rsp+C0h] [rbp-40h] BYREF
  char v68; // [rsp+1C8h] [rbp+C8h]

  v57 = 0LL;
  v51 = 1;
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
  if ( (a4 & 0x10) != 0 && ((MiFlags & 0x10000) == 0 || (MiFlags & 0x8000) == 0 || !dword_1403E3168 || a4 >= 0) )
    return 3221225714LL;
  result = MiGenerateSystemImageNames(a1, a2, a3, &v61, v65, &String1);
  if ( (int)result < 0 )
    return result;
  v47 = 1;
  v9 = 0;
  v48 = 0;
  v49 = 0;
  P = 0LL;
  v46 = 0;
  Lock = MmAcquireLoadLock();
  v10 = 0LL;
  ConfigForDriver = MiObtainSectionForDriver(&String1);
  if ( ConfigForDriver < 0 )
  {
    v17 = 1;
    goto LABEL_78;
  }
  v12 = (void *)*((_QWORD *)P + 14);
  v58 = (__int64)v12;
  if ( v12 )
  {
    v13 = (_QWORD **)MiSectionControlArea((__int64)v12);
    v14 = *((_DWORD *)*v13 + 2);
  }
  else
  {
    v13 = 0LL;
    v14 = 0;
  }
  v52 = v13;
  if ( ConfigForDriver )
  {
    if ( (a4 & 0x10) != 0 )
    {
      ConfigForDriver = -1073741554;
    }
    else
    {
      v68 = 0;
      v15 = MEMORY[0x30];
      SystemAddressForImage = (char *)MEMORY[0x30];
      if ( !v7 )
        goto LABEL_61;
      inserted = MiSessionInsertImage(MEMORY[0x30], (__int64)v13);
      ConfigForDriver = inserted;
      if ( inserted >= 0 )
      {
        if ( inserted == 272 )
        {
LABEL_62:
          *a5 = 0LL;
          *a6 = v15;
          if ( (MEMORY[0x68] & 0x4000000) != 0 )
            ConfigForDriver = -1073741411;
          else
            ConfigForDriver = v7 == 0 ? 0xC000010E : 0;
          goto LABEL_64;
        }
        v46 = 1;
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
    MmReleaseLoadLock(Lock);
    goto LABEL_55;
  }
  v68 = 1;
  MEMORY[0x40] = v14 << 12;
  SystemAddressForImage = (char *)MiGetSystemAddressForImage((__int64)v12, a4, &v51);
  v15 = (unsigned __int64)SystemAddressForImage;
  if ( !SystemAddressForImage )
  {
    ObDereferenceObjectDeferDelete(v12);
    ExFreePoolWithTag(0LL, 0);
    v31 = Lock;
    ConfigForDriver = -1073741670;
    v30 = a1;
LABEL_80:
    MmReleaseLoadLock(v31);
    if ( v48 == 1 )
      MiLogFailedDriverLoad(v30, 0LL, 0LL, (unsigned int)ConfigForDriver);
    goto LABEL_55;
  }
  MiCheckPurgeAndUpMapCount((__int64)v52);
  v46 = v7;
  MEMORY[0x30] = v15;
LABEL_11:
  v56 = 0;
  if ( (a4 & 0x10) != 0 )
  {
    ConfigForDriver = MiLocateHotPatchBase(v58, &v57, &v56);
    if ( ConfigForDriver < 0 )
      goto LABEL_100;
    if ( !v57 )
    {
      ConfigForDriver = 0;
      goto LABEL_100;
    }
  }
  if ( v46 || v68 != 1 )
    goto LABEL_16;
  v16 = v52;
  v17 = MiControlAreaRequiresCharge();
  v47 = v17;
  if ( !v17 )
  {
    v9 = 0;
    ConfigForDriver = -1073740277;
    goto LABEL_78;
  }
  if ( v17 != 2
    || (ConfigForDriver = MiReferenceActiveSubsection((__int64)(v16 + 16), 0x88u, 0x11u), ConfigForDriver >= 0) )
  {
LABEL_16:
    ConfigForDriver = MiMapSystemImage(v58, v15);
    if ( ConfigForDriver < 0 )
      goto LABEL_100;
    if ( !v7 )
    {
      _InterlockedExchangeAdd(&dword_14036D140, v14);
      v10 = P;
    }
    v18 = 0LL;
    v49 = 1;
    if ( !v7 && SystemAddressForImage == (char *)(*v52)[4] )
    {
      v19 = (char *)MiUseLargeDriverPage(v58, v14, SystemAddressForImage, &v61);
      v18 = v19;
      if ( v19 )
      {
        _InterlockedExchangeAdd((_DWORD *)&xmmword_14036C0E0 + 3, -v14);
        v10 = P;
        SystemAddressForImage = v19;
        MEMORY[0x30] = v19;
      }
    }
    v48 = 1;
    v60 = v52 + 16;
    if ( v68 == 1 )
    {
      v20 = RtlImageNtHeader(MEMORY[0x30]);
      if ( !v20 )
      {
        ConfigForDriver = -1073741279;
        goto LABEL_100;
      }
      if ( v20->FileHeader.Machine != 0x8664 || v20->OptionalHeader.Magic != 523 )
      {
        ConfigForDriver = -1073741520;
        goto LABEL_100;
      }
      if ( (MiFlags & 0x10000) != 0 && (a4 & 0x10) == 0 )
      {
        ConfigForDriver = MiValidateStrongCodeDriverImage((__int64)v20);
        if ( ConfigForDriver < 0 )
        {
          memset(&v65[4], 0, 0xA0uLL);
          v65[34] = v20->OptionalHeader.CheckSum;
          TimeDateStamp = v20->FileHeader.TimeDateStamp;
          *(UNICODE_STRING *)&v65[26] = v61;
          v65[43] = TimeDateStamp;
          MiLogStrongCodeDriverLoadFailure("SectionWXable");
LABEL_109:
          v9 = v49;
          v31 = Lock;
          v30 = a1;
LABEL_53:
          v17 = v47;
          goto LABEL_54;
        }
      }
      ConfigForDriver = MiConstructLoaderEntry(
                          (_DWORD)v10,
                          (unsigned int)&v61,
                          (unsigned int)&String1,
                          a4,
                          v51,
                          (__int64)&v64);
      if ( ConfigForDriver < 0 )
        goto LABEL_100;
      ExFreePoolWithTag(v10, 0);
      v10 = v64;
      P = v64;
    }
    v49 = 5;
    if ( v47 == 2 )
      *((_DWORD *)v10 + 49) = *((_DWORD *)v10 + 49) & 0x1F | 0x20;
    if ( !v51 && !v18 && !v7 )
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
LABEL_113:
          MiLogStrongCodeDriverLoadFailure(v34);
          dword_14036BFD8 = 192;
          ConfigForDriver = -1073741701;
          goto LABEL_100;
        }
        v21 = 1;
      }
      else
      {
        v24 = 0LL;
        v25 = 0;
        v23 = (unsigned int *)RtlImageDirectoryEntryToData(*((PVOID *)v10 + 6), 1u, 1u, &v63);
        if ( !v23 )
          goto LABEL_44;
        do
        {
          v35 = *v23;
          if ( !(_DWORD)v35 )
            break;
          v36 = *((_QWORD *)v10 + 6) + v23[4];
          v37 = (_QWORD *)(*((_QWORD *)v10 + 6) + v35);
          v38 = 0;
          while ( *v37 )
          {
            ++v37;
            ++v38;
          }
          v25 = 8 * v38;
          Size = v25;
          if ( !(unsigned int)MiSetImageProtection((__int64)v10, v36, v25) )
          {
            v34 = "UnwritableImportDirectory";
            goto LABEL_113;
          }
          ++v21;
          v23 += 5;
        }
        while ( v23 );
        if ( !v21 )
          goto LABEL_44;
      }
      *((_DWORD *)v10 + 26) |= 0x1000u;
      v59 = -2LL;
      ConfigForDriver = MiResolveImageReferences(
                          (_DWORD)SystemAddressForImage,
                          (unsigned int)&v61,
                          (unsigned int)v65,
                          a2,
                          (unsigned __int64)&v59 & -(__int64)(v68 != 0));
      if ( v60[2] )
      {
        if ( v24 )
        {
          MiSetImageProtection((__int64)v10, v24, v25);
        }
        else
        {
          for ( i = &v23[-5 * v21]; i; i += 5 )
          {
            v40 = *i;
            if ( !(_DWORD)v40 )
              break;
            v41 = (_QWORD *)(*((_QWORD *)v10 + 6) + v40);
            for ( j = 0; *v41; ++j )
              ++v41;
            MiSetImageProtection((__int64)v10, *((_QWORD *)v10 + 6) + i[4], 8 * j);
          }
        }
      }
      *((_DWORD *)v10 + 26) &= ~0x1000u;
      if ( ConfigForDriver < 0 )
      {
        v48 = 0;
        goto LABEL_109;
      }
      if ( v68 == 1 )
        *((_QWORD *)v10 + 17) = v59;
    }
LABEL_44:
    v26 = (__int64)v60;
    ConfigForDriver = MiProcessLoadConfigForDriver((__int64)v10, a4, (__int64)v60, v57);
    if ( ConfigForDriver >= 0 )
    {
      v27 = v52;
      v9 = 21;
      v28 = SystemAddressForImage;
      if ( (*(_BYTE *)((*v52)[7] + 46LL) & 0x40) == 0 )
      {
        v43 = &SystemAddressForImage[*(unsigned int *)(*v52[12] + 64LL)];
        MiSetImageProtection((__int64)v10, (unsigned __int64)v43, 8u);
        *(_QWORD *)v43 = &v28[-MiRelocateAmount((__int64)v27, 0)];
        if ( *(_QWORD *)(v26 + 16) != v44 )
          MiSetImageProtection((__int64)v10, (unsigned __int64)v43, v44 + 8);
      }
      if ( (a4 & 0x10) == 0 )
      {
        VfDriverLoadImage(v10, 0LL, 0LL, 0LL);
        KseDriverLoadImage(v10);
        if ( v46 == 1 && (a4 & 4) != 0 )
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
          if ( v46 == 1 )
            *((_BYTE *)MiSessionLookupImage((unsigned __int64)v28) + 64) = 1;
          v30 = a1;
          MiDriverLoadSucceeded((_DWORD)v10, v58, a1, (unsigned int)&String1, (__int64)&v61, v68);
          v31 = Lock;
          MmReleaseLoadLock(Lock);
          ConfigForDriver = 0;
          *a5 = v10;
          *a6 = (unsigned __int64)v28;
          goto LABEL_53;
        }
        goto LABEL_72;
      }
      ConfigForDriver = MiHandleDriverNonPagedSections(v10, (unsigned int)a4, 1LL);
      if ( ConfigForDriver >= 0 )
      {
        v29 = MiApplyDriverHotPatch(v10, v57, v56);
        goto LABEL_49;
      }
LABEL_72:
      v17 = v47;
LABEL_78:
      v31 = Lock;
      v30 = a1;
LABEL_79:
      if ( v10 )
      {
        if ( v17 == 2 && (v9 & 4) == 0 )
        {
          v45 = MiSectionControlArea(*((_QWORD *)v10 + 14));
          MiReturnCrossPartitionControlAreaCharges(v45);
        }
        MiUnloadSystemImage((ULONG_PTR)v10);
      }
      goto LABEL_80;
    }
LABEL_100:
    v9 = v49;
    goto LABEL_72;
  }
  v9 = 0;
  v17 = 1;
  v31 = Lock;
  v30 = a1;
LABEL_54:
  if ( ConfigForDriver < 0 )
    goto LABEL_79;
LABEL_55:
  if ( a2 )
    ExFreePoolWithTag(String1.Buffer, 0);
  return (unsigned int)ConfigForDriver;
}
