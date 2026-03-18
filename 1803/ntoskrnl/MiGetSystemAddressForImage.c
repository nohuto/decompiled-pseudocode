/*
 * XREFs of MiGetSystemAddressForImage @ 0x1405F8C24
 * Callers:
 *     MmLoadSystemImageEx @ 0x1405F9AF4 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x14003EEB0 (RtlImageNtHeader.c)
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x140169C50 (MiFreePrivateFixupEntryForSystemImage.c)
 *     MiSessionInsertImage @ 0x14016C34C (MiSessionInsertImage.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x14016CFE4 (MiAddPrivateFixupEntryForSystemImage.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiMapImageInSystemSpace @ 0x1404BD390 (MiMapImageInSystemSpace.c)
 *     MiRelocateImage @ 0x14053C470 (MiRelocateImage.c)
 *     MiUnmapImageInSystemSpace @ 0x14053D034 (MiUnmapImageInSystemSpace.c)
 *     MiReturnSystemImageAddress @ 0x1405F6654 (MiReturnSystemImageAddress.c)
 *     MiSelectSystemImageAddress @ 0x1405F680C (MiSelectSystemImageAddress.c)
 *     MiImageSuitableForSystem @ 0x1405F8BD0 (MiImageSuitableForSystem.c)
 *     MiReservePrivilegedPtes @ 0x1405F8C00 (MiReservePrivilegedPtes.c)
 *     MiReleasePrivilegedPtes @ 0x140605F60 (MiReleasePrivilegedPtes.c)
 */

unsigned __int64 __fastcall MiGetSystemAddressForImage(__int64 a1, int a2, _DWORD *a3)
{
  char v3; // r12
  unsigned __int64 v4; // r15
  unsigned int v5; // esi
  unsigned __int64 v6; // rbx
  int v7; // r9d
  PVOID *v8; // r8
  PVOID *v9; // r11
  __int64 v10; // rcx
  _DWORD *v11; // r10
  int v12; // r13d
  int v13; // r12d
  int v15; // ebx
  unsigned __int64 v16; // rax
  _DWORD *v17; // rbx
  PIMAGE_NT_HEADERS v18; // rdx
  unsigned int LoaderFlags; // ecx
  unsigned int NumberOfRvaAndSizes; // eax
  unsigned int v21; // eax
  int SizeOfHeapReserve; // ecx
  unsigned int SizeOfHeapReserve_high; // eax
  int v24; // ebx
  int v25; // [rsp+30h] [rbp-138h] BYREF
  unsigned int v26; // [rsp+34h] [rbp-134h]
  int v27; // [rsp+38h] [rbp-130h]
  __int64 PteAddress; // [rsp+40h] [rbp-128h]
  int v29; // [rsp+48h] [rbp-120h]
  unsigned int v30; // [rsp+4Ch] [rbp-11Ch]
  int v31; // [rsp+50h] [rbp-118h]
  unsigned __int64 v32; // [rsp+58h] [rbp-110h]
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
  char v57; // [rsp+118h] [rbp-50h]

  v3 = a2;
  v31 = a2;
  *a3 = 1;
  v4 = MiSectionControlArea(a1);
  v32 = v4;
  v5 = ((unsigned int)dword_14044B1C8 >> 12) + *(_DWORD *)(*(_QWORD *)v4 + 8LL) + ((dword_14044B1C8 & 0xFFF) != 0);
  v30 = v5;
  v6 = MiImageSuitableForSystem(v4, &v25);
  if ( v6 )
  {
    v8 = (PVOID *)PsLoadedModuleList;
    v9 = &PsLoadedModuleList;
    while ( v8 != v9 )
    {
      v10 = (__int64)v8[14];
      if ( v10 && v4 == MiSectionControlArea(v10) )
      {
        *v11 = 0;
        v7 = 1;
        break;
      }
      v8 = (PVOID *)*v8;
    }
  }
  if ( v6 )
  {
    if ( v7 != 1 && (v3 & 2) == 0 )
    {
      v12 = v3 & 1;
      if ( ((v3 & 1) == 0 || (unsigned int)MiGetSystemRegionType(v6) == 1)
        && ((v3 & 1) != 0 || (unsigned int)MiGetSystemRegionType(v6) != 1) )
      {
        PteAddress = MiGetPteAddress(v6);
        if ( (int)MiReservePrivilegedPtes() >= 0 )
        {
          v13 = 0;
          goto LABEL_16;
        }
        return 0LL;
      }
    }
  }
  v12 = v3 & 1;
  LODWORD(PteAddress) = v12;
  v27 = v12 + 1;
  if ( v25 )
  {
    v15 = (v3 & 1) + 1;
    goto LABEL_20;
  }
  v29 = MiMapImageInSystemSpace((__int64 *)v4, 3, (__int64)BaseAddress);
  if ( v29 < 0 )
    return 0LL;
  v17 = BaseAddress[0];
  v18 = RtlImageNtHeader(BaseAddress[0]);
  v26 = v17[15] + 48;
  if ( v18->OptionalHeader.Magic != 523 )
  {
    Magic = v18->OptionalHeader.Magic;
    FileAlignment = v18->OptionalHeader.FileAlignment;
    SectionAlignment = v18->OptionalHeader.SectionAlignment;
    SizeOfImage = v18->OptionalHeader.SizeOfImage;
    SizeOfHeapReserve = v18->OptionalHeader.SizeOfHeapReserve;
    v38 = SizeOfHeapReserve;
    ImageBase_high = HIDWORD(v18->OptionalHeader.ImageBase);
    SizeOfHeaders = v18->OptionalHeader.SizeOfHeaders;
    AddressOfEntryPoint = v18->OptionalHeader.AddressOfEntryPoint;
    SizeOfStackReserve_low = LODWORD(v18->OptionalHeader.SizeOfStackReserve);
    SizeOfStackReserve_high = HIDWORD(v18->OptionalHeader.SizeOfStackReserve);
    Subsystem = v18->OptionalHeader.Subsystem;
    MajorSubsystemVersion = v18->OptionalHeader.MajorSubsystemVersion;
    MinorSubsystemVersion = v18->OptionalHeader.MinorSubsystemVersion;
    MajorOperatingSystemVersion = v18->OptionalHeader.MajorOperatingSystemVersion;
    MinorOperatingSystemVersion = v18->OptionalHeader.MinorOperatingSystemVersion;
    DllCharacteristics = v18->OptionalHeader.DllCharacteristics;
    CheckSum = v18->OptionalHeader.CheckSum;
    SizeOfCode = v18->OptionalHeader.SizeOfCode;
    v57 = 0;
    SizeOfHeapReserve_high = HIDWORD(v18->OptionalHeader.SizeOfHeapReserve);
    if ( SizeOfHeapReserve_high > 6 && v18->OptionalHeader.DataDirectory[4].VirtualAddress )
    {
      v57 = 1;
      SizeOfHeapReserve_high = HIDWORD(v18->OptionalHeader.SizeOfHeapReserve);
    }
    if ( SizeOfHeapReserve_high > 0xC )
    {
      VirtualAddress = v18->OptionalHeader.DataDirectory[10].VirtualAddress;
      Size = v18->OptionalHeader.DataDirectory[10].Size;
      SizeOfHeapReserve_high = HIDWORD(v18->OptionalHeader.SizeOfHeapReserve);
    }
    if ( SizeOfHeapReserve_high <= 0xE )
    {
      v54 = 0LL;
    }
    else
    {
      v54 = v18->OptionalHeader.DataDirectory[12];
      if ( v18->OptionalHeader.DataDirectory[12].VirtualAddress && v18->OptionalHeader.DataDirectory[12].Size )
        v38 = SizeOfHeapReserve | 1;
    }
    if ( HIDWORD(v18->OptionalHeader.SizeOfHeapReserve) <= 5 )
      v55 = 0LL;
    else
      v55 = v18->OptionalHeader.DataDirectory[3];
    if ( HIDWORD(v18->OptionalHeader.SizeOfHeapReserve) > 0xA )
    {
      LODWORD(v56) = v18->OptionalHeader.DataDirectory[8].VirtualAddress;
      v21 = v18->OptionalHeader.DataDirectory[8].Size;
      goto LABEL_60;
    }
LABEL_61:
    v56 = 0LL;
    goto LABEL_62;
  }
  Magic = 523;
  FileAlignment = v18->OptionalHeader.FileAlignment;
  SectionAlignment = v18->OptionalHeader.SectionAlignment;
  SizeOfImage = v18->OptionalHeader.SizeOfImage;
  LoaderFlags = v18->OptionalHeader.LoaderFlags;
  v38 = LoaderFlags;
  ImageBase_high = v18->OptionalHeader.ImageBase;
  SizeOfHeaders = v18->OptionalHeader.SizeOfHeaders;
  AddressOfEntryPoint = v18->OptionalHeader.AddressOfEntryPoint;
  SizeOfStackReserve_low = v18->OptionalHeader.SizeOfStackReserve;
  SizeOfStackReserve_high = v18->OptionalHeader.SizeOfStackCommit;
  Subsystem = v18->OptionalHeader.Subsystem;
  MajorSubsystemVersion = v18->OptionalHeader.MajorSubsystemVersion;
  MinorSubsystemVersion = v18->OptionalHeader.MinorSubsystemVersion;
  MajorOperatingSystemVersion = v18->OptionalHeader.MajorOperatingSystemVersion;
  MinorOperatingSystemVersion = v18->OptionalHeader.MinorOperatingSystemVersion;
  DllCharacteristics = v18->OptionalHeader.DllCharacteristics;
  CheckSum = v18->OptionalHeader.CheckSum;
  SizeOfCode = v18->OptionalHeader.SizeOfCode;
  v57 = 0;
  NumberOfRvaAndSizes = v18->OptionalHeader.NumberOfRvaAndSizes;
  if ( NumberOfRvaAndSizes > 6 && v18->OptionalHeader.DataDirectory[6].VirtualAddress )
  {
    v57 = 1;
    NumberOfRvaAndSizes = v18->OptionalHeader.NumberOfRvaAndSizes;
  }
  if ( NumberOfRvaAndSizes > 0xC )
  {
    VirtualAddress = v18->OptionalHeader.DataDirectory[12].VirtualAddress;
    Size = v18->OptionalHeader.DataDirectory[12].Size;
    NumberOfRvaAndSizes = v18->OptionalHeader.NumberOfRvaAndSizes;
  }
  if ( NumberOfRvaAndSizes <= 0xE )
  {
    v54 = 0LL;
  }
  else
  {
    v54 = v18->OptionalHeader.DataDirectory[14];
    if ( v18->OptionalHeader.DataDirectory[14].VirtualAddress && v18->OptionalHeader.DataDirectory[14].Size )
      v38 = LoaderFlags | 1;
  }
  if ( v18->OptionalHeader.NumberOfRvaAndSizes <= 5 )
    v55 = 0LL;
  else
    v55 = v18->OptionalHeader.DataDirectory[5];
  if ( v18->OptionalHeader.NumberOfRvaAndSizes <= 0xA )
    goto LABEL_61;
  LODWORD(v56) = v18->OptionalHeader.DataDirectory[10].VirtualAddress;
  v21 = v18->OptionalHeader.DataDirectory[10].Size;
LABEL_60:
  HIDWORD(v56) = v21;
LABEL_62:
  v24 = v29;
  MiUnmapImageInSystemSpace((unsigned __int64 *)BaseAddress);
  if ( v24 < 0 )
    return 0LL;
  v15 = v27;
  if ( (int)MiRelocateImage(*(_QWORD *)v4, (int)&ImageBase_high, v26, v27, -1LL, 1u) < 0 )
    return 0LL;
  MiImageSuitableForSystem(v4, &v25);
  if ( !v25 && (*(_DWORD *)(v4 + 56) & 0x40000000) == 0 )
    return 0LL;
LABEL_20:
  v16 = MiSelectSystemImageAddress(v15);
  v6 = v16;
  if ( v16 )
  {
    PteAddress = MiGetPteAddress(v16);
    if ( (int)MiReservePrivilegedPtes() < 0 )
    {
LABEL_64:
      MiReturnSystemImageAddress(v6);
      return 0LL;
    }
    v13 = 1;
    if ( !(unsigned int)MiAddPrivateFixupEntryForSystemImage((_DWORD *)v4, v6) )
    {
LABEL_63:
      MiReleasePrivilegedPtes(PteAddress, v5);
      goto LABEL_64;
    }
LABEL_16:
    if ( !v12 || (int)MiSessionInsertImage(v6, (__int64 *)v4) >= 0 )
      return v6;
    if ( v13 == 1 )
      MiFreePrivateFixupEntryForSystemImage(v6, 1);
    goto LABEL_63;
  }
  return 0LL;
}
