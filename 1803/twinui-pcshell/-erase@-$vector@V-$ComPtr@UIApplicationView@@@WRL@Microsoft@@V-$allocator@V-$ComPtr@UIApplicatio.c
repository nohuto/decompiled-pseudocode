/*
 * XREFs of ?erase@?$vector@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x1801C558C
 * Callers:
 *     ?RemovePendingView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801C4428 (-RemovePendingView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_G?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x18013AEC8 (--_G-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall std::vector<Microsoft::WRL::ComPtr<IApplicationView>>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  CWinRTApplicationView **v3; // rbp
  CWinRTApplicationView **v4; // rdi
  CWinRTApplicationView *v8; // rcx
  CWinRTApplicationView *v9; // rax
  _QWORD *result; // rax
  CWinRTApplicationView *v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(CWinRTApplicationView ***)(a1 + 8);
  v4 = (CWinRTApplicationView **)(a3 + 8);
  if ( (CWinRTApplicationView **)(a3 + 8) != v3 )
  {
    do
    {
      v8 = 0LL;
      if ( &v11 != v4 )
      {
        v8 = *v4;
        *v4 = 0LL;
      }
      v9 = *(v4 - 1);
      *(v4 - 1) = v8;
      v11 = v9;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v11);
      ++v4;
    }
    while ( v4 != v3 );
    v3 = *(CWinRTApplicationView ***)(a1 + 8);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::`scalar deleting destructor'(v3 - 1);
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
