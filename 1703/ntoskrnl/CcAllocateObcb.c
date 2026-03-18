/*
 * XREFs of CcAllocateObcb @ 0x14065E5A4
 * Callers:
 *     CcPinRead @ 0x140436EB0 (CcPinRead.c)
 *     CcPreparePinWrite @ 0x140440510 (CcPreparePinWrite.c)
 *     CcPinMappedData @ 0x140513FF0 (CcPinMappedData.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall CcAllocateObcb(_DWORD *a1, int a2, __int64 a3)
{
  SIZE_T v6; // rsi
  _WORD *PoolWithTag; // rdi
  _WORD *result; // rax

  v6 = 8
     * ((unsigned int)(*a1
                     - *(_DWORD *)((a3 & 0xFFFFFFFFFFFFFFFEuLL) + 8)
                     - *(_DWORD *)((a3 & 0xFFFFFFFFFFFFFFFEuLL) + 4)
                     + a2
                     + 4095) >> 12)
     + 32;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)528, v6, 0x624F6343u);
  memset(PoolWithTag, 0, (unsigned int)v6);
  *PoolWithTag = 762;
  result = PoolWithTag;
  PoolWithTag[1] = v6;
  *((_DWORD *)PoolWithTag + 1) = a2;
  *((_QWORD *)PoolWithTag + 1) = *(_QWORD *)a1;
  *((_QWORD *)PoolWithTag + 2) = a3;
  return result;
}
