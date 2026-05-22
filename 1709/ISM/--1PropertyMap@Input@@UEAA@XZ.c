/*
 * XREFs of ??1PropertyMap@Input@@UEAA@XZ @ 0x180016C64
 * Callers:
 *     ??_GPropertyMap@Input@@UEAAPEAXI@Z @ 0x180016C00 (--_GPropertyMap@Input@@UEAAPEAXI@Z.c)
 *     ??_EDisplayBinding@@UEAAPEAXI@Z @ 0x180020090 (--_EDisplayBinding@@UEAAPEAXI@Z.c)
 *     ??1DWMInputTarget@@UEAA@XZ @ 0x1800211A4 (--1DWMInputTarget@@UEAA@XZ.c)
 *     ??_EDWMNullInputTarget@@MEAAPEAXI@Z @ 0x18002264C (--_EDWMNullInputTarget@@MEAAPEAXI@Z.c)
 *     _DWMInputTarget::_DWMInputTarget_::_1_::dtor$2 @ 0x1800CD828 (_DWMInputTarget--_DWMInputTarget_--_1_--dtor$2.c)
 * Callees:
 *     ?clear@?$_Tree@V?$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@$0A@@std@@@std@@QEAAXXZ @ 0x18001E540 (-clear@-$_Tree@V-$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U-$KeyCompareTrait@U_GUID@@@3@V-$.c)
 *     ?Dispose@PropertyMap@Input@@UEAAXXZ @ 0x180031BA0 (-Dispose@PropertyMap@Input@@UEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Input::PropertyMap::~PropertyMap(void **this)
{
  *this = &Input::PropertyMap::`vftable';
  Input::PropertyMap::Dispose((Input::PropertyMap *)this);
  std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyNode *,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyNode *>>,0>>::clear(this + 4);
  operator delete(this[4]);
  *this = &Input::PropertyNode::`vftable';
}
