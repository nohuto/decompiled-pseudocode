/*
 * XREFs of ?Allocate@TokenQueueTableEntry@CTokenManager@@SAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1C009AAA0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 */

__int64 __fastcall CTokenManager::TokenQueueTableEntry::Allocate(struct _RTL_GENERIC_TABLE *Table, CLONG ByteSize)
{
  return Win32AllocPool(ByteSize, 0x65744D54u);
}
