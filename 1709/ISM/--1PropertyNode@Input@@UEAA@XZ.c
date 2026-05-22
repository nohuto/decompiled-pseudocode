/*
 * XREFs of ??1PropertyNode@Input@@UEAA@XZ @ 0x180016A0C
 * Callers:
 *     _Input::PropertyMap::PropertyMap_::_1_::dtor$0 @ 0x1800CCF61 (_Input--PropertyMap--PropertyMap_--_1_--dtor$0.c)
 *     _Input::PropertyMap::_PropertyMap_::_1_::dtor$0 @ 0x1800CCF6D (_Input--PropertyMap--_PropertyMap_--_1_--dtor$0.c)
 *     _Input::PropertyVector::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x1800CD88B (_Input--PropertyVector--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     _Input::PropertyVector::MoveConstruct_::_1_::dtor$2 @ 0x1800CD8C4 (_Input--PropertyVector--MoveConstruct_--_1_--dtor$2.c)
 *     _DisplayBinding::RuntimeClassInitialize_::_1_::dtor$17 @ 0x1800CD8F8 (_DisplayBinding--RuntimeClassInitialize_--_1_--dtor$17.c)
 *     _Input::PropertyModifiedAdapter_Input::ModifiedNotifier_Input::Property___::MoveConstruct_::_1_::dtor$6 @ 0x1800CD93D (_Input--PropertyModifiedAdapter_Input--ModifiedNotifier_Input--Property___--MoveCon_ea_1800CD93D.c)
 *     _Input::PropertyVectorModifiedAdapter_Input::ModifiedNotifier_Input::PropertyVector___::MoveConstruct_::_1_::dtor$6 @ 0x1800CD976 (_Input--PropertyVectorModifiedAdapter_Input--ModifiedNotifier_Input--PropertyVector_ea_1800CD976.c)
 *     _Input::PropertyNode::CreateFromStream_::_1_::dtor$3 @ 0x1800CE014 (_Input--PropertyNode--CreateFromStream_--_1_--dtor$3.c)
 *     _Input::Property::MoveConstruct_::_1_::dtor$2 @ 0x1800CE077 (_Input--Property--MoveConstruct_--_1_--dtor$2.c)
 *     _Input::PropertyMap::MoveConstruct_::_1_::dtor$2 @ 0x1800CE0D2 (_Input--PropertyMap--MoveConstruct_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall Input::PropertyNode::~PropertyNode(Input::PropertyNode *this)
{
  *(_QWORD *)this = &Input::PropertyNode::`vftable';
}
