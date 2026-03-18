/*
 * XREFs of ?IsNodeFullyReleased@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01996E4
 * Callers:
 *     ?CanCoalesceIgnoreNode@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAW4tagPOINTERCOALESCE@@@Z @ 0x1C01981C8 (-CanCoalesceIgnoreNode@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAW4tagPOINTERCOAL.c)
 *     ?CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z @ 0x1C0198548 (-CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z.c)
 *     ?GetPointerFrameDataWithHistory@@YAH_KKHKPEAI1PEAE@Z @ 0x1C01C61F4 (-GetPointerFrameDataWithHistory@@YAH_KKHKPEAI1PEAE@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsNodeFullyReleased(const struct tagPOINTERINFONODE *a1)
{
  int v1; // eax
  int v2; // eax
  _BOOL8 result; // rax

  v1 = *(_DWORD *)a1;
  result = 0;
  if ( (*(_DWORD *)a1 & 0x200000) != 0
    && ((v1 & 0x800000) == 0 || (v1 & 0x2000000) != 0)
    && ((v1 & 0x8000000) == 0 || (v1 & 0x20000000) != 0)
    && (v1 >= 0 || (*((_DWORD *)a1 + 1) & 2) != 0) )
  {
    v2 = *((_DWORD *)a1 + 1);
    if ( (v2 & 8) == 0 || (v2 & 0x20) != 0 )
      return 1;
  }
  return result;
}
