/*
 * XREFs of ??$_Move_backward1@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@2@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@0V10@Urandom_access_iterator_tag@0@2@Z @ 0x1801244FC
 * Callers:
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@00@Z @ 0x180124214 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@PE$AAVXamlExplorerHostL.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::_Move_backward1<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>>(
        _QWORD *a1,
        __m128i *a2,
        __m128i *a3,
        __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rsi
  __int64 **v7; // rcx
  __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // xmm0_8
  unsigned __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // r13
  __int64 v16; // rcx
  _QWORD **v17; // rax
  _QWORD *v18; // rax
  __m128i v20; // [rsp+30h] [rbp-58h]

  v4 = a1;
  v5 = 0LL;
  v6 = a4;
  if ( *(_QWORD *)a4 )
  {
    v7 = **(__int64 ****)a4;
    if ( v7 )
      v5 = *v7;
  }
  if ( v5 )
    v8 = *v5;
  else
    v8 = 0LL;
  v9 = *(_QWORD *)(a4 + 16);
  v20 = *a3;
  v10 = _mm_srli_si128(*a2, 8).m128i_u64[0];
  v11 = _mm_srli_si128(*a3, 8).m128i_u64[0];
  if ( v10 != v11 )
  {
    do
    {
      --v11;
      v12 = --v9 & 1;
      v13 = (*(_QWORD *)(v20.m128i_i64[0] + 16) - 1LL) & (v11 >> 1);
      v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20.m128i_i64[0] + 8) + 8 * v13) + 8 * (v11 & 1));
      v15 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8 * ((*(_QWORD *)(v8 + 16) - 1LL) & (v9 >> 1)));
      if ( v14 != *(_QWORD *)(v15 + 8 * v12) )
      {
        if ( v14 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 8LL))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20.m128i_i64[0] + 8)
                                                                                        + 8 * v13)
                                                                            + 8 * (v11 & 1)));
        v16 = *(_QWORD *)(v15 + 8 * v12);
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        *(_QWORD *)(v15 + 8 * v12) = v14;
      }
    }
    while ( v11 != v10 );
    v4 = a1;
    v6 = a4;
  }
  *v4 = 0LL;
  v4[1] = 0LL;
  v17 = *(_QWORD ***)v6;
  *(_QWORD *)(v6 + 16) = v9;
  if ( v17 )
  {
    v18 = *v17;
    if ( v18 )
      *v4 = *v18;
  }
  v4[2] = v9;
  return v4;
}
