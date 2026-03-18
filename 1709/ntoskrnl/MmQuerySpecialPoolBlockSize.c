/*
 * XREFs of MmQuerySpecialPoolBlockSize @ 0x14022132C
 * Callers:
 *     ExQueryPoolBlockSize @ 0x140284880 (ExQueryPoolBlockSize.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQuerySpecialPoolBlockSize(__int64 a1)
{
  _DWORD *v1; // rcx

  if ( (a1 & 0xFFF) != 0 )
    v1 = (_DWORD *)(a1 & 0xFFFFFFFFFFFFF000uLL);
  else
    v1 = (_DWORD *)((a1 & 0xFFFFFFFFFFFFF000uLL) + 4080);
  return *v1 & 0xFFFLL;
}
