/*
 * XREFs of ??1?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@XZ @ 0x180089804
 * Callers:
 *     _TaskbarLayoutPolicyManager::ValidateDefaultLayoutXML_::_1_::dtor$0 @ 0x18019BA26 (_TaskbarLayoutPolicyManager--ValidateDefaultLayoutXML_--_1_--dtor$0.c)
 *     _TaskbarLayoutPolicyManager::ValidateDefaultLayoutXML_::_1_::dtor$66 @ 0x18019BA68 (_TaskbarLayoutPolicyManager--ValidateDefaultLayoutXML_--_1_--dtor$66.c)
 *     _TaskbarLayoutPolicyManager::ValidateLayoutModificationXML_::_1_::dtor$0 @ 0x18019BA74 (_TaskbarLayoutPolicyManager--ValidateLayoutModificationXML_--_1_--dtor$0.c)
 *     _TaskbarLayoutPolicyManager::ValidateLayoutModificationXML_::_1_::dtor$75 @ 0x18019BAB6 (_TaskbarLayoutPolicyManager--ValidateLayoutModificationXML_--_1_--dtor$75.c)
 *     _PWSLayoutPolicyManager::ValidateDefaultLayoutXML_::_1_::dtor$13 @ 0x18019D043 (_PWSLayoutPolicyManager--ValidateDefaultLayoutXML_--_1_--dtor$13.c)
 *     _PWSLayoutPolicyManager::ValidateDefaultLayoutXML_::_1_::dtor$0 @ 0x18019D04F (_PWSLayoutPolicyManager--ValidateDefaultLayoutXML_--_1_--dtor$0.c)
 *     _PWSLayoutPolicyManager::ValidateLayoutModificationXML_::_1_::dtor$16 @ 0x18019D091 (_PWSLayoutPolicyManager--ValidateLayoutModificationXML_--_1_--dtor$16.c)
 *     _PWSLayoutPolicyManager::ValidateLayoutModificationXML_::_1_::dtor$0 @ 0x18019D09D (_PWSLayoutPolicyManager--ValidateLayoutModificationXML_--_1_--dtor$0.c)
 *     _StartLayout::LoadSchema_::_1_::dtor$0 @ 0x1801A5056 (_StartLayout--LoadSchema_--_1_--dtor$0.c)
 *     _StartLayout::ValidateLayoutFile_::_1_::dtor$0 @ 0x1801A506E (_StartLayout--ValidateLayoutFile_--_1_--dtor$0.c)
 *     _StartLayout::ValidateLayoutFile_::_1_::dtor$7 @ 0x1801A5086 (_StartLayout--ValidateLayoutFile_--_1_--dtor$7.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::vector<std::pair<unsigned short const *,unsigned short const *>>::~vector<std::pair<unsigned short const *,unsigned short const *>>(
        __int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    std::_Deallocate(v2, (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 4, 0x10uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
