/*
 * XREFs of ?_Change_array@?$vector@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@_K1@Z @ 0x1801C52C0
 * Callers:
 *     ??$emplace_back@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Z @ 0x1801BFE1C (--$emplace_back@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIApplicationVi.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??_G?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x18013AEC8 (--_G-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<IApplicationView>>::_Change_array(
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
        Microsoft::WRL::ComPtr<IApplicationView>::`scalar deleting destructor'(v4++);
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
