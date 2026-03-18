/*
 * XREFs of ?_Change_array@?$vector@USuperWetStroke@CWetInkManager@@V?$allocator@USuperWetStroke@CWetInkManager@@@std@@@std@@AEAAXQEAUSuperWetStroke@CWetInkManager@@_K1@Z @ 0x180171B98
 * Callers:
 *     ??$emplace_back@$$V@?$vector@USuperWetStroke@CWetInkManager@@V?$allocator@USuperWetStroke@CWetInkManager@@@std@@@std@@QEAAXXZ @ 0x180171188 (--$emplace_back@$$V@-$vector@USuperWetStroke@CWetInkManager@@V-$allocator@USuperWetStroke@CWetIn.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall std::vector<CWetInkManager::SuperWetStroke>::_Change_array(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v9; // rbp
  __int64 result; // rax

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    if ( v4 != v9 )
    {
      do
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)(v4 + 8));
        v4 += 72LL;
      }
      while ( v4 != v9 );
      v4 = *a1;
    }
    std::_Deallocate((char *)v4, (a1[2] - v4) / 72, 0x48uLL);
  }
  result = 9 * a4;
  a1[1] = a2 + 72 * a3;
  *a1 = a2;
  a1[2] = a2 + 72 * a4;
  return result;
}
