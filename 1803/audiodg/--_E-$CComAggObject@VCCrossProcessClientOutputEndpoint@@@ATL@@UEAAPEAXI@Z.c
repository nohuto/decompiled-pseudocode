/*
 * XREFs of ??_E?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x14004FFA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x14004FB10 (--1-$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ.c)
 */

void *__fastcall ATL::CComAggObject<CCrossProcessClientOutputEndpoint>::`vector deleting destructor'(
        void *Block,
        char a2)
{
  ATL::CComAggObject<CCrossProcessClientOutputEndpoint>::~CComAggObject<CCrossProcessClientOutputEndpoint>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
