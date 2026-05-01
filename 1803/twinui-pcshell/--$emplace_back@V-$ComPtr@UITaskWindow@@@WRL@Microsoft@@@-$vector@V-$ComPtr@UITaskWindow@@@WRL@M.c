/*
 * XREFs of ??$emplace_back@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@Z @ 0x18008CD34
 * Callers:
 *     ?OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x18005BE68 (-OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEAV123@00AEAV?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x18008CE28 (--$_Uninitialized_move_al_unchecked@PEAV-$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEAV123@V-$alloca.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800932D0 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Win.c)
 */

char *__fastcall std::vector<Microsoft::WRL::ComPtr<ITaskWindow>>::emplace_back<Microsoft::WRL::ComPtr<ITaskWindow>>(
        _QWORD *a1,
        char *a2)
{
  char *result; // rax
  char *v5; // rdi
  __int64 v6; // rdi
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r14
  char *v11; // rax
  char *v12; // r15
  char *v13; // rax
  char *v14; // rdi
  char *v15; // rsi
  char *v16; // [rsp+80h] [rbp+18h]

  result = (char *)a1[2];
  v5 = (char *)a1[1];
  if ( result == v5 )
  {
    v6 = (__int64)&v5[-*a1] >> 3;
    if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 + 1;
    v8 = (__int64)&result[-*a1] >> 3;
    v9 = v8 >> 1;
    if ( v8 > 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v6 + 1;
    }
    else
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 )
        v10 = v6 + 1;
    }
    v11 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(v10, 8uLL);
    v12 = v11;
    v16 = v11;
    try
    {
      v13 = &v11[8 * v6];
      *(_QWORD *)v13 = 0LL;
      if ( v13 != a2 )
      {
        *(_QWORD *)v13 = *(_QWORD *)a2;
        *(_QWORD *)a2 = 0LL;
      }
      std::_Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<ITaskWindow> *,Microsoft::WRL::ComPtr<ITaskWindow> *,std::allocator<Microsoft::WRL::ComPtr<ITaskWindow>>>(
        *a1,
        a1[1],
        v12);
    }
    catch ( ... )
    {
      IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant>>(&v16[8 * v6]);
      std::_Deallocate(v16, v10, 8uLL);
      throw;
    }
    v14 = (char *)*a1;
    if ( *a1 )
    {
      v15 = (char *)a1[1];
      if ( v14 != v15 )
      {
        do
        {
          IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant>>(v14);
          v14 += 8;
        }
        while ( v14 != v15 );
        v14 = (char *)*a1;
      }
      std::_Deallocate(v14, (__int64)(a1[2] - (_QWORD)v14) >> 3, 8uLL);
    }
    *a1 = v12;
    a1[1] = &v12[8 * v7];
    result = &v12[8 * v10];
    a1[2] = result;
  }
  else
  {
    *(_QWORD *)v5 = 0LL;
    if ( v5 != a2 )
    {
      result = *(char **)a2;
      *(_QWORD *)v5 = *(_QWORD *)a2;
      *(_QWORD *)a2 = 0LL;
    }
    a1[1] += 8LL;
  }
  return result;
}
