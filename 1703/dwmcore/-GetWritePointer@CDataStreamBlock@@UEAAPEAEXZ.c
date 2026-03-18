/*
 * XREFs of ?GetWritePointer@CDataStreamBlock@@UEAAPEAEXZ @ 0x180083860
 * Callers:
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18008336C (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall CDataStreamBlock::GetWritePointer(CDataStreamBlock *this)
{
  return (unsigned __int8 *)this + *((unsigned int *)this + 7) + 32;
}
