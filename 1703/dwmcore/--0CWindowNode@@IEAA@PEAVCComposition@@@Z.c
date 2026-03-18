/*
 * XREFs of ??0CWindowNode@@IEAA@PEAVCComposition@@@Z @ 0x18004FF70
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x180084B84 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

CWindowNode *__fastcall CWindowNode::CWindowNode(CWindowNode *this, struct CComposition *a2)
{
  CWindowNode *result; // rax

  CVisual::CVisual(this, a2);
  *(_QWORD *)this = &CWindowNode::`vftable';
  memset_0((char *)this + 496, 0, 0x4CuLL);
  *((_DWORD *)this + 141) = 1;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 688),
    CGenericTableMap<unsigned long,CLegacySurfaceManager::TokenToWindowRecord>::CompareTableData,
    CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::AllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FreeTableData,
    0LL);
  *((_QWORD *)this + 96) = (char *)this + 800;
  *((_QWORD *)this + 97) = (char *)this + 800;
  *((_DWORD *)this + 196) = 2;
  *(_QWORD *)((char *)this + 788) = 2LL;
  *((_DWORD *)this + 206) = 1065353216;
  *((_DWORD *)this + 207) = 1065353216;
  *((_DWORD *)this + 208) = 1065353216;
  *(_QWORD *)((char *)this + 836) = 1065353216LL;
  result = this;
  *(_QWORD *)((char *)this + 844) = 0LL;
  *((_DWORD *)this + 213) = 0;
  *((_BYTE *)this + 856) = 0;
  *((_QWORD *)this + 116) = 0LL;
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_DWORD *)this + 238) = 0;
  *((_QWORD *)this + 126) = 0LL;
  *((_QWORD *)this + 127) = 0LL;
  *((_BYTE *)this + 1048) = 0;
  *((_QWORD *)this + 129) = 0LL;
  *((_QWORD *)this + 130) = 0LL;
  return result;
}
