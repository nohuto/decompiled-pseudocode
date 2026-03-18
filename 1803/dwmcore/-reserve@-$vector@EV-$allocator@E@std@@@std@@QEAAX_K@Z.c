/*
 * XREFs of ?reserve@?$vector@EV?$allocator@E@std@@@std@@QEAAX_K@Z @ 0x180209824
 * Callers:
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180208A78 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18020B914 (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Reallocate_exactly@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x1802097B8 (-_Reallocate_exactly@-$vector@EV-$allocator@E@std@@@std@@AEAAX_K@Z.c)
 */

unsigned __int64 __fastcall std::vector<unsigned char>::reserve(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  result = a1[2] - *a1;
  if ( a2 > result )
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    return std::vector<unsigned char>::_Reallocate_exactly((__int64)a1, a2);
  }
  return result;
}
