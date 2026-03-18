/*
 * XREFs of ?AllocateTableEntry@?$CGenericTable@_KVCBatch@DirectComposition@@$0GFHDEDEE@$0A@@DirectComposition@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1C00897C0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 */

__int64 __fastcall DirectComposition::CGenericTable<unsigned __int64,DirectComposition::CBatch,1702052676,0>::AllocateTableEntry(
        struct _RTL_GENERIC_TABLE *Table,
        CLONG ByteSize)
{
  return Win32AllocPool(ByteSize, 0x65734344u);
}
