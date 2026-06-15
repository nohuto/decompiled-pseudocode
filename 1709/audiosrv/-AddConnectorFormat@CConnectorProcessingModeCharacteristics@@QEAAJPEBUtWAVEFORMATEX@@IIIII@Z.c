/*
 * XREFs of ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x1800B1228
 * Callers:
 *     _lambda_bc829bb10b63470994cc211668497c87_::operator() @ 0x1800B0698 (_lambda_bc829bb10b63470994cc211668497c87_--operator().c)
 *     ?DeserializeProcessingModeCharacteristics@@YAJKPEAEPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x1800B2D64 (-DeserializeProcessingModeCharacteristics@@YAJKPEAEPEAPEAV-$CSimpleArray@PEAVCConnectorProcessin.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x1800B8308 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180008054 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180033A5A (memset.c)
 *     ??_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z @ 0x1800B1054 (--_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z.c)
 *     ?Add@?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAHAEBQEAVCConnectorProcessingModeCharacteristics@@@Z @ 0x1800BBCF4 (-Add@-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAV.c)
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
  struct tWAVEFORMATEX **v12; // rbx
  int v13; // edi
  struct tWAVEFORMATEX **v15; // [rsp+20h] [rbp-18h] BYREF

  v11 = (struct tWAVEFORMATEX **)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( v11 )
  {
    memset(v11, 0, 0x20uLL);
    *v12 = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  v15 = v12;
  if ( v12 )
  {
    v13 = CloneWaveFormat(a2, v12);
    if ( v13 < 0 )
      goto LABEL_8;
    *((_DWORD *)v12 + 3) = a3;
    *((_DWORD *)v12 + 2) = a4;
    *((_DWORD *)v12 + 4) = a5;
    *((_DWORD *)v12 + 5) = a6;
    *((_DWORD *)v12 + 6) = a7;
    if ( (unsigned int)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::Add(
                         (char *)this + 16,
                         &v15) )
      return (unsigned int)v13;
  }
  v13 = -2147024882;
LABEL_8:
  if ( v12 )
    CConnectorFormatCharacteristics::`scalar deleting destructor'((LPVOID *)v12);
  return (unsigned int)v13;
}
