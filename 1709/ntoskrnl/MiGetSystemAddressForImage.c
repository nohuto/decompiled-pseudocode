/*
 * XREFs of MiGetSystemAddressForImage @ 0x140542BF0
 * Callers:
 *     MmLoadSystemImageEx @ 0x1405431E0 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiSectionControlArea @ 0x1400A1610 (MiSectionControlArea.c)
 *     RtlImageNtHeader @ 0x1400AE3B0 (RtlImageNtHeader.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14014BC98 (MiFreePrivateFixupEntryForSystemImage.c)
 *     MiSessionInsertImage @ 0x1401550D4 (MiSessionInsertImage.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1401575A0 (MiAddPrivateFixupEntryForSystemImage.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiUnmapImageInSystemSpace @ 0x1404F73D4 (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x1404F7424 (MiMapImageInSystemSpace.c)
 *     MiRelocateImage @ 0x1404F8070 (MiRelocateImage.c)
 *     MiReturnSystemImageAddress @ 0x1405413B0 (MiReturnSystemImageAddress.c)
 *     MiSelectSystemImageAddress @ 0x140541514 (MiSelectSystemImageAddress.c)
 *     MiReservePrivilegedPtes @ 0x140542DC8 (MiReservePrivilegedPtes.c)
 *     MiImageSuitableForSystem @ 0x140542DEC (MiImageSuitableForSystem.c)
 *     MiReleasePrivilegedPtes @ 0x14059F1D8 (MiReleasePrivilegedPtes.c)
 */

unsigned __int64 __fastcall MiGetSystemAddressForImage(__int64 a1, int a2, _DWORD *a3)
{
  char v3; // r13
  unsigned __int64 v4; // r15
  unsigned int v5; // r14d
  __int64 v6; // r8
  unsigned __int64 v7; // rbx
  int v8; // r9d
  PVOID *v9; // r8
  PVOID *v10; // r11
  __int64 v11; // rcx
  _DWORD *v12; // r10
  int v13; // edx
  __int64 PteAddress; // r12
  int v16; // r12d
  unsigned __int64 v17; // rax
  _DWORD *v18; // rbx
  PIMAGE_NT_HEADERS v19; // rdx
  unsigned int LoaderFlags; // ecx
  unsigned int v21; // eax
  int SizeOfHeapReserve; // ecx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // [rsp+30h] [rbp-138h]
  _DWORD v26[6]; // [rsp+34h] [rbp-134h] BYREF
  unsigned int v27; // [rsp+4Ch] [rbp-11Ch]
  unsigned __int64 v28; // [rsp+50h] [rbp-118h]
  PVOID BaseAddress[10]; // [rsp+60h] [rbp-108h] BYREF
  unsigned __int64 ImageBase; // [rsp+B0h] [rbp-B8h] BYREF
  unsigned int FileAlignment; // [rsp+B8h] [rbp-B0h]
  unsigned int SectionAlignment; // [rsp+BCh] [rbp-ACh]
  unsigned int SizeOfImage; // [rsp+C0h] [rbp-A8h]
  int v34; // [rsp+C4h] [rbp-A4h]
  unsigned int SizeOfHeaders; // [rsp+C8h] [rbp-A0h]
  unsigned int AddressOfEntryPoint; // [rsp+CCh] [rbp-9Ch]
  unsigned __int64 SizeOfStackReserve; // [rsp+D0h] [rbp-98h]
  unsigned __int64 SizeOfStackCommit; // [rsp+D8h] [rbp-90h]
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
  _IMAGE_DATA_DIRECTORY v50; // [rsp+100h] [rbp-68h]
  _IMAGE_DATA_DIRECTORY v51; // [rsp+108h] [rbp-60h]
  __int64 v52; // [rsp+110h] [rbp-58h]
  bool v53; // [rsp+118h] [rbp-50h]

  v3 = a2;
  v26[3] = a2;
  *a3 = 1;
  v25 = 0;
  v4 = MiSectionControlArea(a1);
  v28 = v4;
  v5 = ((unsigned int)dword_140400168 >> 12) + *(_DWORD *)(*(_QWORD *)v4 + 8LL) + ((dword_140400168 & 0xFFF) != 0);
  v26[1] = v5;
  v7 = MiImageSuitableForSystem(v4, v26, v6, 0LL);
  if ( v7 )
  {
    v9 = (PVOID *)PsLoadedModuleList;
    v10 = &PsLoadedModuleList;
    while ( v9 != v10 )
    {
      v11 = (__int64)v9[14];
      if ( v11 && v4 == MiSectionControlArea(v11) )
      {
        *v12 = 0;
        v8 = 1;
        break;
      }
      v9 = (PVOID *)*v9;
    }
  }
  if ( v7 )
  {
    if ( v8 != 1 && (v3 & 2) == 0 )
    {
      v13 = v3 & 1;
      if ( ((v3 & 1) == 0 || (unsigned int)MiGetSystemRegionType(v7) == 1)
        && (v13 || (unsigned int)MiGetSystemRegionType(v7) != 1) )
      {
        PteAddress = MiGetPteAddress(v7);
        if ( (int)MiReservePrivilegedPtes(v4, PteAddress, v5, v3 & 0x20) >= 0 )
          goto LABEL_15;
        return 0LL;
      }
    }
  }
  v16 = (v3 & 1) + 1;
  v26[5] = v16;
  if ( !v26[0] )
  {
    if ( (int)MiMapImageInSystemSpace((__int64 *)v4, 3, (__int64)BaseAddress) < 0 )
      return 0LL;
    v18 = BaseAddress[0];
    v19 = RtlImageNtHeader(BaseAddress[0]);
    v27 = v18[15] + 48;
    if ( v19->OptionalHeader.Magic == 523 )
    {
      Magic = 523;
      FileAlignment = v19->OptionalHeader.FileAlignment;
      SectionAlignment = v19->OptionalHeader.SectionAlignment;
      SizeOfImage = v19->OptionalHeader.SizeOfImage;
      LoaderFlags = v19->OptionalHeader.LoaderFlags;
      v34 = LoaderFlags;
      ImageBase = v19->OptionalHeader.ImageBase;
      SizeOfHeaders = v19->OptionalHeader.SizeOfHeaders;
      AddressOfEntryPoint = v19->OptionalHeader.AddressOfEntryPoint;
      SizeOfStackReserve = v19->OptionalHeader.SizeOfStackReserve;
      SizeOfStackCommit = v19->OptionalHeader.SizeOfStackCommit;
      Subsystem = v19->OptionalHeader.Subsystem;
      MajorSubsystemVersion = v19->OptionalHeader.MajorSubsystemVersion;
      MinorSubsystemVersion = v19->OptionalHeader.MinorSubsystemVersion;
      MajorOperatingSystemVersion = v19->OptionalHeader.MajorOperatingSystemVersion;
      MinorOperatingSystemVersion = v19->OptionalHeader.MinorOperatingSystemVersion;
      DllCharacteristics = v19->OptionalHeader.DllCharacteristics;
      CheckSum = v19->OptionalHeader.CheckSum;
      SizeOfCode = v19->OptionalHeader.SizeOfCode;
      v53 = 0;
      if ( v19->OptionalHeader.NumberOfRvaAndSizes > 6 )
        v53 = v19->OptionalHeader.DataDirectory[6].VirtualAddress != 0;
      if ( v19->OptionalHeader.NumberOfRvaAndSizes > 0xC )
      {
        VirtualAddress = v19->OptionalHeader.DataDirectory[12].VirtualAddress;
        Size = v19->OptionalHeader.DataDirectory[12].Size;
      }
      if ( v19->OptionalHeader.NumberOfRvaAndSizes <= 0xE )
      {
        v50 = 0LL;
      }
      else
      {
        v50 = v19->OptionalHeader.DataDirectory[14];
        if ( v19->OptionalHeader.DataDirectory[14].VirtualAddress && v19->OptionalHeader.DataDirectory[14].Size )
          v34 = LoaderFlags | 1;
      }
      if ( v19->OptionalHeader.NumberOfRvaAndSizes <= 5 )
        v51 = 0LL;
      else
        v51 = v19->OptionalHeader.DataDirectory[5];
      if ( v19->OptionalHeader.NumberOfRvaAndSizes > 0xA )
      {
        LODWORD(v52) = v19->OptionalHeader.DataDirectory[10].VirtualAddress;
        v21 = v19->OptionalHeader.DataDirectory[10].Size;
LABEL_56:
        HIDWORD(v52) = v21;
LABEL_58:
        MiUnmapImageInSystemSpace((__int64)BaseAddress);
        if ( (int)MiRelocateImage(*(_QWORD *)v4, (__int64)&ImageBase, v27, v16, -1LL, 1) < 0 )
          return 0LL;
        MiImageSuitableForSystem(v4, v26, v23, v24);
        if ( !v26[0] && (*(_DWORD *)(v4 + 56) & 0x40000000) == 0 )
          return 0LL;
        goto LABEL_22;
      }
    }
    else
    {
      Magic = v19->OptionalHeader.Magic;
      FileAlignment = v19->OptionalHeader.FileAlignment;
      SectionAlignment = v19->OptionalHeader.SectionAlignment;
      SizeOfImage = v19->OptionalHeader.SizeOfImage;
      SizeOfHeapReserve = v19->OptionalHeader.SizeOfHeapReserve;
      v34 = SizeOfHeapReserve;
      ImageBase = HIDWORD(v19->OptionalHeader.ImageBase);
      SizeOfHeaders = v19->OptionalHeader.SizeOfHeaders;
      AddressOfEntryPoint = v19->OptionalHeader.AddressOfEntryPoint;
      SizeOfStackReserve = LODWORD(v19->OptionalHeader.SizeOfStackReserve);
      SizeOfStackCommit = HIDWORD(v19->OptionalHeader.SizeOfStackReserve);
      Subsystem = v19->OptionalHeader.Subsystem;
      MajorSubsystemVersion = v19->OptionalHeader.MajorSubsystemVersion;
      MinorSubsystemVersion = v19->OptionalHeader.MinorSubsystemVersion;
      MajorOperatingSystemVersion = v19->OptionalHeader.MajorOperatingSystemVersion;
      MinorOperatingSystemVersion = v19->OptionalHeader.MinorOperatingSystemVersion;
      DllCharacteristics = v19->OptionalHeader.DllCharacteristics;
      CheckSum = v19->OptionalHeader.CheckSum;
      SizeOfCode = v19->OptionalHeader.SizeOfCode;
      v53 = 0;
      if ( HIDWORD(v19->OptionalHeader.SizeOfHeapReserve) > 6 )
        v53 = v19->OptionalHeader.DataDirectory[4].VirtualAddress != 0;
      if ( HIDWORD(v19->OptionalHeader.SizeOfHeapReserve) > 0xC )
      {
        VirtualAddress = v19->OptionalHeader.DataDirectory[10].VirtualAddress;
        Size = v19->OptionalHeader.DataDirectory[10].Size;
      }
      if ( HIDWORD(v19->OptionalHeader.SizeOfHeapReserve) <= 0xE )
      {
        v50 = 0LL;
      }
      else
      {
        v50 = v19->OptionalHeader.DataDirectory[12];
        if ( v19->OptionalHeader.DataDirectory[12].VirtualAddress && v19->OptionalHeader.DataDirectory[12].Size )
          v34 = SizeOfHeapReserve | 1;
      }
      if ( HIDWORD(v19->OptionalHeader.SizeOfHeapReserve) <= 5 )
        v51 = 0LL;
      else
        v51 = v19->OptionalHeader.DataDirectory[3];
      if ( HIDWORD(v19->OptionalHeader.SizeOfHeapReserve) > 0xA )
      {
        LODWORD(v52) = v19->OptionalHeader.DataDirectory[8].VirtualAddress;
        v21 = v19->OptionalHeader.DataDirectory[8].Size;
        goto LABEL_56;
      }
    }
    v52 = 0LL;
    goto LABEL_58;
  }
LABEL_22:
  v17 = MiSelectSystemImageAddress(v16);
  v7 = v17;
  if ( v17 )
  {
    PteAddress = MiGetPteAddress(v17);
    if ( (int)MiReservePrivilegedPtes(v4, PteAddress, v5, v3 & 0x20) < 0 )
    {
LABEL_60:
      MiReturnSystemImageAddress(v7);
      return 0LL;
    }
    v25 = 1;
    if ( !(unsigned int)MiAddPrivateFixupEntryForSystemImage((_DWORD *)v4, v7) )
    {
LABEL_59:
      MiReleasePrivilegedPtes(PteAddress, v5);
      goto LABEL_60;
    }
LABEL_15:
    if ( (v3 & 1) == 0 || (int)MiSessionInsertImage(v7, (__int64 *)v4) >= 0 )
      return v7;
    if ( v25 == 1 )
      MiFreePrivateFixupEntryForSystemImage(v7, 1);
    goto LABEL_59;
  }
  return 0LL;
}
