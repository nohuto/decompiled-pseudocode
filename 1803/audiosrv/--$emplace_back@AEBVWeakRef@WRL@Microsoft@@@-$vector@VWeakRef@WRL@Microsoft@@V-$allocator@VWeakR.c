/*
 * XREFs of ??$emplace_back@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x180014EA0
 * Callers:
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x18001E380 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 *     ?RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800B2F68 (-RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV-$ComPtr@UIStreamGroupProxy.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000B390 (--2@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00AEAV?$allocator@VWeakRef@WRL@Microsoft@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x18001515C (--$_Uninitialized_move_al_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@V-$allocator@VWeakRef@WRL.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<Microsoft::WRL::WeakRef>::emplace_back<Microsoft::WRL::WeakRef const &>(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v4; // rcx
  __int64 *v5; // rsi
  __int64 v6; // rsi
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r14
  HANDLE ProcessHeap; // rax
  _QWORD *v13; // r14
  __int64 v14; // rcx
  __int64 *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rcx
  LPVOID v18; // rax
  __int64 *v19; // r12
  __int64 v20; // rcx

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v6 = v5 - *a1;
    if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 + 1;
    v8 = v4 - *a1;
    v9 = v8 >> 1;
    if ( v8 > 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) || (v10 = v9 + v8, v9 + v8 < v7) )
      v10 = v6 + 1;
    if ( v10 )
    {
      if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
      {
        std::_Xbad_alloc();
        JUMPOUT(0x1800755C8LL);
      }
      v11 = 8 * v10;
      if ( 8 * v10 >= 0x1000 )
      {
        if ( v11 + 39 < v11 )
        {
          std::_Xbad_alloc();
          JUMPOUT(0x1800755D8LL);
        }
        v18 = operator new(v11 + 39);
        if ( !v18 )
        {
          _o__invalid_parameter_noinfo_noreturn();
          JUMPOUT(0x1800755E9LL);
        }
        v13 = (_QWORD *)(((unsigned __int64)v18 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v13 - 1) = v18;
      }
      else
      {
        ProcessHeap = GetProcessHeap();
        v13 = HeapAlloc(ProcessHeap, 0, 8 * v10);
        if ( !v13 )
        {
          _o__invalid_parameter_noinfo_noreturn();
          JUMPOUT(0x180075601LL);
        }
      }
    }
    else
    {
      v13 = 0LL;
    }
    try
    {
      v14 = *a2;
      v13[v6] = *a2;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      std::_Uninitialized_move_al_unchecked<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *,std::allocator<Microsoft::WRL::WeakRef>>(
        *a1,
        a1[1],
        v13);
    }
    catch ( ... )
    {
      v16 = v13[v6];
      if ( v16 )
      {
        v13[v6] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      std::_Deallocate(v13, v10, 8uLL);
      throw;
    }
    v15 = *a1;
    if ( *a1 )
    {
      v19 = a1[1];
      if ( v15 != v19 )
      {
        do
        {
          v20 = *v15;
          if ( *v15 )
          {
            *v15 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          }
          ++v15;
        }
        while ( v15 != v19 );
        v15 = *a1;
      }
      std::_Deallocate(v15, a1[2] - v15, 8uLL);
    }
    *a1 = v13;
    a1[1] = &v13[v7];
    a1[2] = &v13[v10];
  }
  else
  {
    v17 = *a2;
    *v5 = *a2;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    ++a1[1];
  }
}
