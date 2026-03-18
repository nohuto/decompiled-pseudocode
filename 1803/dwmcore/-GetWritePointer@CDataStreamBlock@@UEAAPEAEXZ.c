/*
 * XREFs of ?GetWritePointer@CDataStreamBlock@@UEAAPEAEXZ @ 0x180088420
 * Callers:
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180087C98 (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall CDataStreamBlock::GetWritePointer(CDataStreamBlock *this)
{
  return (unsigned __int8 *)this + *((unsigned int *)this + 7) + 32;
}
