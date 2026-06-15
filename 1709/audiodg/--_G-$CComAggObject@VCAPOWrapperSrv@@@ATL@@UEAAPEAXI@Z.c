/*
 * XREFs of ??_G?$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z @ 0x140047D10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001C890 (--3@YAXPEAX@Z.c)
 *     ??1?$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ @ 0x140047CB8 (--1-$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ.c)
 */

void *__fastcall ATL::CComAggObject<CAPOWrapperSrv>::`scalar deleting destructor'(void *Block, char a2)
{
  ATL::CComAggObject<CAPOWrapperSrv>::~CComAggObject<CAPOWrapperSrv>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
