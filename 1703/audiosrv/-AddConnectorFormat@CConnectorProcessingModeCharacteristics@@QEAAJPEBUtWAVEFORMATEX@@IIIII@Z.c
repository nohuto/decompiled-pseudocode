/*
 * XREFs of ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x18007B2C0
 * Callers:
 *     _lambda_0a80d7e3d12d42377e48064cdd362aeb_::operator() @ 0x1800BB974 (_lambda_0a80d7e3d12d42377e48064cdd362aeb_--operator().c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x1800BEE48 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180049B8A (memset.c)
 *     ?Add@?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAHAEBQEAVCConnectorProcessingModeCharacteristics@@@Z @ 0x18007B38C (-Add@-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAV.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180098DD8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ??_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z @ 0x1800BBCB8 (--_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CConnectorProcessingModeCharacteristics::AddConnectorFormat(
        CConnectorProcessingModeCharacteristics *this,
        const struct tWAVEFORMATEX *a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  struct tWAVEFORMATEX **v11; // rax
  unsigned int v12; // edx
  struct tWAVEFORMATEX **v13; // rbx
  int v14; // edi
  struct tWAVEFORMATEX **v16; // [rsp+20h] [rbp-18h] BYREF

  v11 = (struct tWAVEFORMATEX **)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v11;
  if ( v11 )
  {
    memset(v11, 0, 0x20uLL);
    *v13 = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  v16 = v13;
  if ( v13 )
  {
    v14 = CloneWaveFormat(a2, v13);
    if ( v14 < 0 )
      goto LABEL_8;
    *((_DWORD *)v13 + 3) = a3;
    *((_DWORD *)v13 + 2) = a4;
    *((_DWORD *)v13 + 4) = a5;
    *((_DWORD *)v13 + 5) = a6;
    *((_DWORD *)v13 + 6) = a7;
    if ( (unsigned int)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::Add(
                         (char *)this + 16,
                         &v16) )
      return (unsigned int)v14;
  }
  v14 = -2147024882;
LABEL_8:
  if ( v13 )
    CConnectorFormatCharacteristics::`scalar deleting destructor'((CConnectorFormatCharacteristics *)v13, v12);
  return (unsigned int)v14;
}
