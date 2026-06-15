/*
 * XREFs of ??_E?$CComObject@VCVpoContext@@@ATL@@UEAAPEAXI@Z @ 0x140043760
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CComObject@VCVpoContext@@@ATL@@UEAA@XZ @ 0x140043684 (--1-$CComObject@VCVpoContext@@@ATL@@UEAA@XZ.c)
 */

CVpoContext *__fastcall ATL::CComObject<CVpoContext>::`vector deleting destructor'(CVpoContext *Block, char a2)
{
  ATL::CComObject<CVpoContext>::~CComObject<CVpoContext>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
