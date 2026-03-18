/*
 * XREFs of CmpInitializeDiscardReplaceContext @ 0x140697F38
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401E47C0 (CmDeleteLayeredKey.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall CmpInitializeDiscardReplaceContext(__int64 a1)
{
  __int64 result; // rax

  memset((void *)a1, 0, 0x20uLL);
  result = a1 + 16;
  *(_DWORD *)(a1 + 8) = -1073741823;
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  return result;
}
