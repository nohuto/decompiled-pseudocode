/*
 * XREFs of MiReloadBootLoadedDrivers @ 0x1408AD7F4
 * Callers:
 *     MiInitializeDriverImages @ 0x1408AC7B8 (MiInitializeDriverImages.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     RtlImageNtHeader @ 0x14003EEB0 (RtlImageNtHeader.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x140160C04 (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgLoadImageSymbolsUnicode @ 0x14016120C (DbgLoadImageSymbolsUnicode.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiAllocateDriverPage @ 0x1405BB3F0 (MiAllocateDriverPage.c)
 *     MiUseLargeDriverPage @ 0x1405F83BC (MiUseLargeDriverPage.c)
 *     MiProcessLoadConfigForDriver @ 0x1405FA978 (MiProcessLoadConfigForDriver.c)
 *     VslReserveProtectedPages @ 0x140718CF0 (VslReserveProtectedPages.c)
 *     MiInitializeSystemImagePage @ 0x1408ADBC0 (MiInitializeSystemImagePage.c)
 *     MiRelocateBootImage @ 0x1408ADD30 (MiRelocateBootImage.c)
 *     MiFreeBootDriverPage @ 0x1408ADE54 (MiFreeBootDriverPage.c)
 *     MiGetNewAddressForBootImage @ 0x1408AE02C (MiGetNewAddressForBootImage.c)
 *     MiTradeBootImagePage @ 0x1408AE0E0 (MiTradeBootImagePage.c)
 *     MiInitializeDriverPtes @ 0x1408AE288 (MiInitializeDriverPtes.c)
 *     MiReleaseNewAddressForBootImage @ 0x1408E0B9C (MiReleaseNewAddressForBootImage.c)
 *     MiReturnDriverLoadPages @ 0x1408E0BF0 (MiReturnDriverLoadPages.c)
 */

__int64 __fastcall MiReloadBootLoadedDrivers(__int64 a1)
{
  unsigned __int64 NewAddressForBootImage; // r12
  PIMAGE_NT_HEADERS v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rsi
  __int64 v6; // rdi
  unsigned int v7; // r15d
  unsigned int v8; // ebx
  unsigned int v9; // r13d
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r14
  unsigned int VirtualAddress; // ecx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r14
  __int64 DriverPage; // rax
  unsigned __int64 v19; // r14
  int v20; // [rsp+40h] [rbp-138h]
  _IMAGE_NT_HEADERS64 *v21; // [rsp+48h] [rbp-130h]
  unsigned int v22; // [rsp+54h] [rbp-124h]
  unsigned __int64 v23; // [rsp+58h] [rbp-120h]
  __int64 v24; // [rsp+60h] [rbp-118h]
  unsigned __int64 v26; // [rsp+70h] [rbp-108h]
  int v27; // [rsp+80h] [rbp-F8h] BYREF
  __int16 v28; // [rsp+84h] [rbp-F4h]
  __int64 v29; // [rsp+88h] [rbp-F0h]
  __int64 v30; // [rsp+90h] [rbp-E8h]
  __int64 v31; // [rsp+98h] [rbp-E0h]

  NewAddressForBootImage = 0LL;
  qword_1403CB5B8 = 0LL;
  v27 = 0;
  v28 = 0;
  v30 = 0LL;
  v31 = 0LL;
  v29 = 20LL;
  if ( !(unsigned int)MiInitializeDriverPtes() )
    return 0LL;
  v5 = a1 + 16;
  v6 = *(_QWORD *)(a1 + 16);
  v24 = a1 + 16;
  v7 = ((unsigned int)dword_14044B1C8 >> 12) + ((dword_14044B1C8 & 0xFFF) != 0);
  v22 = v7;
  if ( v6 != a1 + 16 )
  {
    while ( 1 )
    {
      v8 = 0;
      v9 = 0;
      if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 )
        v9 = 2;
      v10 = *(_QWORD *)(v6 + 48);
      v3 = RtlImageNtHeader((PVOID)v10);
      v11 = ((unsigned __int64)*(unsigned int *)(v6 + 64) + 4095) >> 12;
      v21 = v3;
      v20 = v11;
      if ( PsNtosImageBase != *(PVOID *)(v6 + 48) )
      {
        MiProcessLoadConfigForDriver(v6, 0, 0LL, 0LL);
        v3 = v21;
      }
      if ( (v3->FileHeader.Characteristics & 1) != 0 || v3->OptionalHeader.NumberOfRvaAndSizes <= 5 )
        goto LABEL_37;
      VirtualAddress = v3->OptionalHeader.DataDirectory[5].VirtualAddress;
      if ( !VirtualAddress )
        goto LABEL_11;
      if ( v3->OptionalHeader.DataDirectory[5].Size + VirtualAddress <= *(_DWORD *)(v6 + 64) )
        break;
LABEL_37:
      NewAddressForBootImage = 0LL;
      if ( v9 )
        VslReserveProtectedPages(0LL, v10, v11 + v7, v9);
      v6 = *(_QWORD *)v6;
      if ( v6 == v5 )
        goto LABEL_40;
    }
    v8 = 2;
LABEL_11:
    v23 = (unsigned int)v11;
    v13 = 8LL * (unsigned int)v11 + ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v7 )
    {
      if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v10) )
      {
        v19 = v13 + 8LL * v7;
        while ( v13 < v19 )
        {
          MiFreeBootDriverPage(v13, &v27);
          v13 += 8LL;
        }
        LODWORD(v11) = v20;
      }
      v3 = v21;
    }
    if ( (PVOID)v10 == PsNtosImageBase || (PVOID)v10 == PsHalImageBase )
      goto LABEL_34;
    v3->OptionalHeader.ImageBase = v10;
    if ( (*(_DWORD *)(v6 + 104) & 0x800000) == 0 )
    {
      DbgUnLoadImageSymbolsUnicode((PCUNICODE_STRING)(v6 + 88), v10, 0xFFFFFFFFLL);
      v8 |= 0xCu;
      if ( !v7 )
      {
        NewAddressForBootImage = (unsigned __int64)MiUseLargeDriverPage(
                                                     0LL,
                                                     v11,
                                                     (const void *)v10,
                                                     (const UNICODE_STRING *)(v6 + 88));
        if ( NewAddressForBootImage )
          v8 |= 1u;
      }
    }
    if ( (v8 & 1) == 0 )
    {
      if ( (v8 & 4) != 0 )
        NewAddressForBootImage = MiGetNewAddressForBootImage(v10, (unsigned int)v11 + v7);
      if ( !NewAddressForBootImage )
      {
        if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 )
          goto LABEL_34;
        NewAddressForBootImage = v10;
        v8 &= ~4u;
      }
      v14 = v23;
      v15 = ((NewAddressForBootImage >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v26 = v15 + 8 * v23;
      if ( v15 >= v26 )
        goto LABEL_29;
      v16 = v15 + ((v10 >> 9) & 0x7FFFFFFFF8LL) - ((NewAddressForBootImage >> 9) & 0x7FFFFFFFF8LL);
      do
      {
        DriverPage = MiAllocateDriverPage(&MiSystemPartition);
        if ( (v8 & 4) != 0 )
          MiInitializeSystemImagePage(DriverPage, v15, v16);
        else
          MiTradeBootImagePage(v16, DriverPage);
        v15 += 8LL;
        v16 += 8LL;
      }
      while ( v15 < v26 );
      v7 = v22;
    }
    v14 = v23;
LABEL_29:
    if ( (v8 & 4) == 0 )
    {
LABEL_32:
      if ( (v8 & 1) != 0 )
      {
        MiReturnResidentAvailable(v14);
        MiReturnCommit((__int64)&MiSystemPartition, v14);
      }
      goto LABEL_34;
    }
    if ( (int)MiRelocateBootImage(a1, v6, v10, NewAddressForBootImage, v21, v20, v7, &v27) >= 0 )
    {
      if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 )
        v9 |= 1u;
      goto LABEL_32;
    }
    MiReturnDriverLoadPages(
      ((NewAddressForBootImage >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
      ((NewAddressForBootImage >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL + 8 * (v14 - 1));
    MiReleaseNewAddressForBootImage(NewAddressForBootImage, v20 + v7);
LABEL_34:
    if ( v8 < 8 )
    {
      LODWORD(v11) = v20;
      v5 = v24;
    }
    else
    {
      LODWORD(v11) = v20;
      v5 = v24;
      if ( (unsigned int)DbgLoadImageSymbolsUnicode((PCUNICODE_STRING)(v6 + 88), (PVOID)NewAddressForBootImage) == 1 )
        *(_DWORD *)(v6 + 104) |= 0x100000u;
    }
    goto LABEL_37;
  }
LABEL_40:
  MiFlushTbList((__int64)&v27, (__int64)v3, v4);
  return 1LL;
}
