/*
 * XREFs of ?_FindAndRemoveViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1801B19BC
 * Callers:
 *     ?_RaiseViewRemoved@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B35C8 (-_RaiseViewRemoved@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007150C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     std::_Find_if_unchecked_Microsoft::WRL::ComPtr_Windows::Internal::Shell::Holographic::IViewHostItem______ptr64__lambda_59ad48e223c0890c092e71751c67a96b___ @ 0x18009EBAC (std--_Find_if_unchecked_Microsoft--WRL--ComPtr_Windows--Internal--Shell--Holographic--IViewHostI.c)
 *     ?erase@?$vector@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x1801B3EA8 (-erase@-$vector@V-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@V-$.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall HolographicPositioner::_FindAndRemoveViewHostItem(__int64 a1, __int64 *a2, __int64 a3)
{
  RTL_SRWLOCK *v6; // rsi
  __int64 *v7; // rbx
  __int64 *v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  v6 = (RTL_SRWLOCK *)(a1 + 288);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 288));
  *a2 = 0LL;
  v7 = (__int64 *)std::_Find_if_unchecked_Microsoft::WRL::ComPtr_Windows::Internal::Shell::Holographic::IViewHostItem______ptr64__lambda_59ad48e223c0890c092e71751c67a96b___(
                    *(_QWORD *)(a1 + 264),
                    *(_QWORD *)(a1 + 272),
                    a3);
  if ( v7 != *(__int64 **)(a1 + 272) )
  {
    Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(a2, v7);
    std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>>::erase(a1 + 264, &v9, v7);
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  return a2;
}
