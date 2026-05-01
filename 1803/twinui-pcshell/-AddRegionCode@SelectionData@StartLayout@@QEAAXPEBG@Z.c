/*
 * XREFs of ?AddRegionCode@SelectionData@StartLayout@@QEAAXPEBG@Z @ 0x18014AA48
 * Callers:
 *     ?CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ @ 0x18014AA84 (-CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ.c)
 *     ?CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ @ 0x18019BCB0 (-CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ.c)
 *     StartLayout::ParseTokenizedAttribute__lambda_7b0ceb0e91dc9688fdbd966b3a487469___ @ 0x1802FC998 (StartLayout--ParseTokenizedAttribute__lambda_7b0ceb0e91dc9688fdbd966b3a487469___.c)
 * Callees:
 *     ??$emplace_back@AEBQEAG@?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAAXAEBQEAG@Z @ 0x18014A16C (--$emplace_back@AEBQEAG@-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAAXAEBQEAG@Z.c)
 */

void __fastcall StartLayout::SelectionData::AddRegionCode(StartLayout::SelectionData *this, const unsigned __int16 *a2)
{
  LPWSTR ppwsz; // [rsp+40h] [rbp+18h] BYREF

  ppwsz = 0LL;
  if ( SHStrDupW(a2, &ppwsz) >= 0 )
  {
    std::vector<unsigned short *>::emplace_back<unsigned short * const &>((__int64)this + 8, (__int64 *)&ppwsz);
    *(_BYTE *)this = 1;
  }
}
