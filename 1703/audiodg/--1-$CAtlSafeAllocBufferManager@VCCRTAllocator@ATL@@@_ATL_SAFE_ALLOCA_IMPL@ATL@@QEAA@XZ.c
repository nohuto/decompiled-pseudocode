/*
 * XREFs of ??1?$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ @ 0x140045BEC
 * Callers:
 *     ?AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z @ 0x140050CE0 (-AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z.c)
 *     _ATL::CRegObject::AddReplacement_::_1_::dtor$0 @ 0x140050D6E (_ATL--CRegObject--AddReplacement_--_1_--dtor$0.c)
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x140050D7C (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 *     _ATL::CRegParser::AddValue_::_1_::dtor$1 @ 0x14005122B (_ATL--CRegParser--AddValue_--_1_--dtor$1.c)
 *     ?PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z @ 0x140052314 (-PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z.c)
 *     _ATL::CRegParser::PreProcessBuffer_::_1_::dtor$1 @ 0x1400524FE (_ATL--CRegParser--PreProcessBuffer_--_1_--dtor$1.c)
 *     ?RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z @ 0x1400529B0 (-RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z.c)
 *     _ATL::CRegObject::RegisterFromResource_::_1_::dtor$0 @ 0x140052B80 (_ATL--CRegObject--RegisterFromResource_--_1_--dtor$0.c)
 *     ?UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z @ 0x1400534F0 (-UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z.c)
 * Callees:
 *     free @ 0x14001DC20 (free.c)
 */

void __fastcall ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>(
        _QWORD **a1)
{
  _QWORD *v2; // rcx

  while ( *a1 )
  {
    v2 = *a1;
    *a1 = (_QWORD *)**a1;
    free(v2);
  }
}
