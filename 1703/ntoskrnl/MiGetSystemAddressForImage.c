/*
 * XREFs of MiGetSystemAddressForImage @ 0x1404B1048
 * Callers:
 *     MmLoadSystemImageEx @ 0x1404B191C (MmLoadSystemImageEx.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 *     MiSectionControlArea @ 0x1400CDE10 (MiSectionControlArea.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14014463C (MiFreePrivateFixupEntryForSystemImage.c)
 *     MiSessionInsertImage @ 0x140148C0C (MiSessionInsertImage.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x140149D98 (MiAddPrivateFixupEntryForSystemImage.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeReservePrivilegedPages @ 0x1401FC9DC (KeReservePrivilegedPages.c)
 *     MiRelocateImage @ 0x140495140 (MiRelocateImage.c)
 *     MiMapImageInSystemSpace @ 0x140497368 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1404974E0 (MiUnmapImageInSystemSpace.c)
 *     MiImageSuitableForSystem @ 0x1404B1240 (MiImageSuitableForSystem.c)
 *     MiSelectSystemImageAddress @ 0x14055D080 (MiSelectSystemImageAddress.c)
 *     MiReturnSystemImageAddress @ 0x140583130 (MiReturnSystemImageAddress.c)
 *     MiReleasePrivilegedPtes @ 0x1406B5CE8 (MiReleasePrivilegedPtes.c)
 */

unsigned __int64 __fastcall MiGetSystemAddressForImage(__int64 a1, int a2, _DWORD *a3)
{
  char v3; // r13
  unsigned __int64 v4; // r12
  unsigned int v5; // r14d
  __int64 v6; // r8
  unsigned __int64 v7; // rbx
  PVOID *v8; // r8
  __int64 v9; // r9
  PVOID *v10; // r11
  __int64 v11; // rcx
  _DWORD *v12; // r10
  int v13; // edx
  __int64 PteAddress; // r15
  int v15; // eax
  unsigned int v17; // r15d
  unsigned __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  _DWORD *v22; // rbx
  PIMAGE_NT_HEADERS v23; // rdx
  unsigned int LoaderFlags; // ecx
  unsigned int v25; // eax
  int SizeOfHeapReserve; // ecx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // [rsp+30h] [rbp-138h]
  _DWORD v30[6]; // [rsp+34h] [rbp-134h] BYREF
  unsigned int v31; // [rsp+4Ch] [rbp-11Ch]
  unsigned __int64 v32; // [rsp+50h] [rbp-118h]
  PVOID BaseAddress[10]; // [rsp+60h] [rbp-108h] BYREF
  unsigned __int64 ImageBase_high; // [rsp+B0h] [rbp-B8h] BYREF
  unsigned int FileAlignment; // [rsp+B8h] [rbp-B0h]
  unsigned int SectionAlignment; // [rsp+BCh] [rbp-ACh]
  unsigned int SizeOfImage; // [rsp+C0h] [rbp-A8h]
  int v38; // [rsp+C4h] [rbp-A4h]
  unsigned int SizeOfHeaders; // [rsp+C8h] [rbp-A0h]
  unsigned int AddressOfEntryPoint; // [rsp+CCh] [rbp-9Ch]
  unsigned __int64 SizeOfStackReserve_low; // [rsp+D0h] [rbp-98h]
  unsigned __int64 SizeOfStackReserve_high; // [rsp+D8h] [rbp-90h]
  __int16 Magic; // [rsp+E0h] [rbp-88h]
  unsigned __int16 Subsystem; // [rsp+E2h] [rbp-86h]
  unsigned __int16 MajorSubsystemVersion; // [rsp+E4h] [rbp-84h]
  unsigned __int16 MinorSubsystemVersion; // [rsp+E6h] [rbp-82h]
  unsigned __int16 MajorOperatingSystemVersion; // [rsp+E8h] [rbp-80h]
  unsigned __int16 MinorOperatingSystemVersion; // [rsp+EAh] [rbp-7Eh]
  unsigned __int16 DllCharacteristics; // [rsp+ECh] [rbp-7Ch]
  unsigned int CheckSum; // [rsp+F0h] [rbp-78h]
  unsigned int SizeOfCode; // [rsp+F4h] [rbp-74h]
  unsigned int VirtualAddress; // [rsp+F8h] [rbp-70h]
  unsigned int Size; // [rsp+FCh] [rbp-6Ch]
  _IMAGE_DATA_DIRECTORY v54; // [rsp+100h] [rbp-68h]
  _IMAGE_DATA_DIRECTORY v55; // [rsp+108h] [rbp-60h]
  __int64 v56; // [rsp+110h] [rbp-58h]
  bool v57; // [rsp+118h] [rbp-50h]

  v3 = a2;
  v30[3] = a2;
  *a3 = 1;
  v29 = 0;
  v4 = MiSectionControlArea(a1);
  v32 = v4;
  v5 = ((unsigned int)dword_1403E3168 >> 12) + *(_DWORD *)(*(_QWORD *)v4 + 8LL) + ((dword_1403E3168 & 0xFFF) != 0);
  v30[1] = v5;
  v7 = MiImageSuitableForSystem(v4, v30, v6, 0LL);
  if ( v7 )
  {
    v8 = (PVOID *)PsLoadedModuleList;
    v10 = &PsLoadedModuleList;
    while ( v8 != v10 )
    {
      v11 = (__int64)v8[14];
      if ( v11 && v4 == MiSectionControlArea(v11) )
      {
        *v12 = 0;
        v9 = 1LL;
        break;
      }
      v8 = (PVOID *)*v8;
    }
  }
  if ( v7 )
  {
    if ( (_DWORD)v9 != 1 && (v3 & 2) == 0 )
    {
      v13 = v3 & 1;
      if ( ((v3 & 1) == 0 || (unsigned int)MiGetSystemRegionType(v7) == 1)
        && (v13 || (unsigned int)MiGetSystemRegionType(v7) != 1) )
      {
        PteAddress = MiGetPteAddress(v7);
        if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 )
          v15 = KeReservePrivilegedPages();
        else
          v15 = 0;
        if ( v15 < 0 )
          return 0LL;
        goto LABEL_17;
      }
    }
  }
  v17 = (v3 & 1) + 1;
  v30[5] = v17;
  if ( v30[0] )
    goto LABEL_24;
  if ( (int)MiMapImageInSystemSpace(v4, 3, (__int64)BaseAddress) < 0 )
    return 0LL;
  v22 = BaseAddress[0];
  v23 = RtlImageNtHeader(BaseAddress[0]);
  v31 = v22[15] + 48;
  if ( v23->OptionalHeader.Magic != 523 )
  {
    Magic = v23->OptionalHeader.Magic;
    FileAlignment = v23->OptionalHeader.FileAlignment;
    SectionAlignment = v23->OptionalHeader.SectionAlignment;
    SizeOfImage = v23->OptionalHeader.SizeOfImage;
    SizeOfHeapReserve = v23->OptionalHeader.SizeOfHeapReserve;
    v38 = SizeOfHeapReserve;
    ImageBase_high = HIDWORD(v23->OptionalHeader.ImageBase);
    SizeOfHeaders = v23->OptionalHeader.SizeOfHeaders;
    AddressOfEntryPoint = v23->OptionalHeader.AddressOfEntryPoint;
    SizeOfStackReserve_low = LODWORD(v23->OptionalHeader.SizeOfStackReserve);
    SizeOfStackReserve_high = HIDWORD(v23->OptionalHeader.SizeOfStackReserve);
    Subsystem = v23->OptionalHeader.Subsystem;
    MajorSubsystemVersion = v23->OptionalHeader.MajorSubsystemVersion;
    MinorSubsystemVersion = v23->OptionalHeader.MinorSubsystemVersion;
    MajorOperatingSystemVersion = v23->OptionalHeader.MajorOperatingSystemVersion;
    MinorOperatingSystemVersion = v23->OptionalHeader.MinorOperatingSystemVersion;
    DllCharacteristics = v23->OptionalHeader.DllCharacteristics;
    CheckSum = v23->OptionalHeader.CheckSum;
    SizeOfCode = v23->OptionalHeader.SizeOfCode;
    v57 = 0;
    if ( HIDWORD(v23->OptionalHeader.SizeOfHeapReserve) > 6 )
      v57 = v23->OptionalHeader.DataDirectory[4].VirtualAddress != 0;
    if ( HIDWORD(v23->OptionalHeader.SizeOfHeapReserve) > 0xC )
    {
      VirtualAddress = v23->OptionalHeader.DataDirectory[10].VirtualAddress;
      Size = v23->OptionalHeader.DataDirectory[10].Size;
    }
    if ( HIDWORD(v23->OptionalHeader.SizeOfHeapReserve) <= 0xE )
    {
      v54 = 0LL;
    }
    else
    {
      v54 = v23->OptionalHeader.DataDirectory[12];
      if ( v23->OptionalHeader.DataDirectory[12].VirtualAddress && v23->OptionalHeader.DataDirectory[12].Size )
        v38 = SizeOfHeapReserve | 1;
    }
    if ( HIDWORD(v23->OptionalHeader.SizeOfHeapReserve) <= 5 )
      v55 = 0LL;
    else
      v55 = v23->OptionalHeader.DataDirectory[3];
    if ( HIDWORD(v23->OptionalHeader.SizeOfHeapReserve) > 0xA )
    {
      LODWORD(v56) = v23->OptionalHeader.DataDirectory[8].VirtualAddress;
      v25 = v23->OptionalHeader.DataDirectory[8].Size;
      goto LABEL_62;
    }
LABEL_63:
    v56 = 0LL;
    goto LABEL_64;
  }
  Magic = 523;
  FileAlignment = v23->OptionalHeader.FileAlignment;
  SectionAlignment = v23->OptionalHeader.SectionAlignment;
  SizeOfImage = v23->OptionalHeader.SizeOfImage;
  LoaderFlags = v23->OptionalHeader.LoaderFlags;
  v38 = LoaderFlags;
  ImageBase_high = v23->OptionalHeader.ImageBase;
  SizeOfHeaders = v23->OptionalHeader.SizeOfHeaders;
  AddressOfEntryPoint = v23->OptionalHeader.AddressOfEntryPoint;
  SizeOfStackReserve_low = v23->OptionalHeader.SizeOfStackReserve;
  SizeOfStackReserve_high = v23->OptionalHeader.SizeOfStackCommit;
  Subsystem = v23->OptionalHeader.Subsystem;
  MajorSubsystemVersion = v23->OptionalHeader.MajorSubsystemVersion;
  MinorSubsystemVersion = v23->OptionalHeader.MinorSubsystemVersion;
  MajorOperatingSystemVersion = v23->OptionalHeader.MajorOperatingSystemVersion;
  MinorOperatingSystemVersion = v23->OptionalHeader.MinorOperatingSystemVersion;
  DllCharacteristics = v23->OptionalHeader.DllCharacteristics;
  CheckSum = v23->OptionalHeader.CheckSum;
  SizeOfCode = v23->OptionalHeader.SizeOfCode;
  v57 = 0;
  if ( v23->OptionalHeader.NumberOfRvaAndSizes > 6 )
    v57 = v23->OptionalHeader.DataDirectory[6].VirtualAddress != 0;
  if ( v23->OptionalHeader.NumberOfRvaAndSizes > 0xC )
  {
    VirtualAddress = v23->OptionalHeader.DataDirectory[12].VirtualAddress;
    Size = v23->OptionalHeader.DataDirectory[12].Size;
  }
  if ( v23->OptionalHeader.NumberOfRvaAndSizes <= 0xE )
  {
    v54 = 0LL;
  }
  else
  {
    v54 = v23->OptionalHeader.DataDirectory[14];
    if ( v23->OptionalHeader.DataDirectory[14].VirtualAddress && v23->OptionalHeader.DataDirectory[14].Size )
      v38 = LoaderFlags | 1;
  }
  if ( v23->OptionalHeader.NumberOfRvaAndSizes <= 5 )
    v55 = 0LL;
  else
    v55 = v23->OptionalHeader.DataDirectory[5];
  if ( v23->OptionalHeader.NumberOfRvaAndSizes <= 0xA )
    goto LABEL_63;
  LODWORD(v56) = v23->OptionalHeader.DataDirectory[10].VirtualAddress;
  v25 = v23->OptionalHeader.DataDirectory[10].Size;
LABEL_62:
  HIDWORD(v56) = v25;
LABEL_64:
  MiUnmapImageInSystemSpace((__int64)BaseAddress);
  if ( (int)MiRelocateImage(*(_QWORD *)v4, (unsigned int *)&ImageBase_high, v31, v17, -1LL, 1) < 0 )
    return 0LL;
  MiImageSuitableForSystem(v4, v30, v27, v28);
  if ( !v30[0] && (*(_DWORD *)(v4 + 56) & 0x40000000) == 0 )
    return 0LL;
LABEL_24:
  v18 = MiSelectSystemImageAddress(v17, v5, v8, v9);
  v7 = v18;
  if ( v18 )
  {
    PteAddress = MiGetPteAddress(v18);
    v20 = v3 & 0x20;
    if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 )
      v21 = KeReservePrivilegedPages();
    else
      v21 = 0;
    if ( v21 < 0 )
      goto LABEL_66;
    v29 = 1;
    if ( !(unsigned int)MiAddPrivateFixupEntryForSystemImage((_DWORD *)v4, v7) )
    {
LABEL_65:
      MiReleasePrivilegedPtes(PteAddress, v5);
LABEL_66:
      MiReturnSystemImageAddress(v7, v5 << 12, v19, v20);
      return 0LL;
    }
LABEL_17:
    if ( (v3 & 1) == 0 || (int)MiSessionInsertImage(v7, v4) >= 0 )
      return v7;
    if ( v29 == 1 )
      MiFreePrivateFixupEntryForSystemImage(v7, 1);
    goto LABEL_65;
  }
  return 0LL;
}
