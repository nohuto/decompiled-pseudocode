/*
 * XREFs of ??1?$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ @ 0x140044DCC
 * Callers:
 *     ?AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z @ 0x140050790 (-AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z.c)
 *     _ATL::CRegObject::AddReplacement_::_1_::dtor$0 @ 0x14005081E (_ATL--CRegObject--AddReplacement_--_1_--dtor$0.c)
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x14005082C (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 *     _ATL::CRegParser::AddValue_::_1_::dtor$1 @ 0x140050CE5 (_ATL--CRegParser--AddValue_--_1_--dtor$1.c)
 *     ?PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z @ 0x140051E28 (-PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z.c)
 *     _ATL::CRegParser::PreProcessBuffer_::_1_::dtor$2 @ 0x14005201C (_ATL--CRegParser--PreProcessBuffer_--_1_--dtor$2.c)
 *     ?RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z @ 0x140052530 (-RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z.c)
 *     _ATL::CRegObject::RegisterFromResource_::_1_::dtor$0 @ 0x140052700 (_ATL--CRegObject--RegisterFromResource_--_1_--dtor$0.c)
 *     ?UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z @ 0x1400530E0 (-UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z.c)
 * Callees:
 *     free @ 0x14001CA60 (free.c)
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
