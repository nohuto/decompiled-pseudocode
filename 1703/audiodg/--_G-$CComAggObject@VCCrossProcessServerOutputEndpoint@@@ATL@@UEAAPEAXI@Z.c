/*
 * XREFs of ??_G?$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140050680
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D4D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140050220 (--1-$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ.c)
 */

void *__fastcall ATL::CComAggObject<CCrossProcessServerOutputEndpoint>::`scalar deleting destructor'(
        void *Block,
        char a2)
{
  ATL::CComAggObject<CCrossProcessServerOutputEndpoint>::~CComAggObject<CCrossProcessServerOutputEndpoint>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
