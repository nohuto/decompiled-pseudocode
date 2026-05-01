/*
 * XREFs of ?_Change_array@?$vector@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIUnknown@@@WRL@Microsoft@@_K1@Z @ 0x180193088
 * Callers:
 *     ??$emplace_back@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@Z @ 0x180190EA4 (--$emplace_back@V-$ComPtr@UIUnknown@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIUnknown@@@WRL@Microso.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<IUnknown>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  CWinRTApplicationView **v4; // rbx
  CWinRTApplicationView **v9; // rbp
  __int64 result; // rax

  v4 = *(CWinRTApplicationView ***)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(CWinRTApplicationView ***)(a1 + 8);
    if ( v4 != v9 )
    {
      do
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4++);
      while ( v4 != v9 );
      v4 = *(CWinRTApplicationView ***)a1;
    }
    std::_Deallocate((char *)v4, (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v4) >> 3, 8uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
