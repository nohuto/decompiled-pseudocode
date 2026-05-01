/*
 * XREFs of ??$remove@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@0AEBQE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x180123E80
 * Callers:
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x180122770 (_lambda_d1cc878f49256a12ed651bb70f914db7_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::remove<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>,WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v5; // rdi
  _QWORD *v6; // rcx
  __int64 v7; // r14
  _QWORD *v8; // rax
  __int64 v9; // rax
  __m128i v10; // xmm0
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // r15
  __m128i v15; // xmm0
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD **v19; // rax
  _QWORD *v20; // rax
  _QWORD *result; // rax
  __m128i v22; // [rsp+20h] [rbp-30h]
  __m128i v23; // [rsp+20h] [rbp-30h]
  __int64 v24; // [rsp+30h] [rbp-20h]
  __int64 v26; // [rsp+98h] [rbp+48h]
  _QWORD *v27; // [rsp+A8h] [rbp+58h]

  v27 = a4;
  v5 = a1;
  v6 = 0LL;
  v7 = *(_QWORD *)(a3 + 16);
  if ( *(_QWORD *)a2 )
  {
    v8 = **(_QWORD ***)a2;
    if ( v8 )
      v6 = (_QWORD *)*v8;
  }
  v9 = *(_QWORD *)(a2 + 16);
  if ( v6 )
    v6 = (_QWORD *)*v6;
  v22.m128i_i64[0] = (__int64)v6;
  v22.m128i_i64[1] = *(_QWORD *)(a2 + 16);
  v10 = v22;
  v11 = v22.m128i_u64[1];
  if ( v9 != v7 )
  {
    do
    {
      if ( *(_QWORD *)(*(_QWORD *)(v6[1] + 8 * ((v6[2] - 1LL) & (v11 >> 1))) + 8 * (v11 & 1)) == *a4 )
        break;
      v22.m128i_i64[1] = ++v11;
    }
    while ( v11 != v7 );
    v10 = v22;
  }
  v24 = v10.m128i_i64[0];
  v23 = v10;
  if ( v11 == v7 || (v12 = v11 + 1, v11 + 1 == v7) )
  {
    v13 = v10.m128i_i64[1];
  }
  else
  {
    v13 = v10.m128i_i64[1];
    do
    {
      v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) + 8 * ((*(_QWORD *)(v24 + 16) - 1LL) & (v12 >> 1)))
                      + 8 * (v12 & 1));
      if ( v14 != *a4 )
      {
        v15 = v23;
        v23.m128i_i64[1] = ++v13;
        v15.m128i_i64[0] = _mm_srli_si128(v15, 8).m128i_u64[0];
        v16 = v15.m128i_i8[0] & 1;
        v17 = *(_QWORD *)(*(_QWORD *)(v23.m128i_i64[0] + 8)
                        + 8 * (((unsigned __int64)v15.m128i_i64[0] >> 1) & (*(_QWORD *)(v23.m128i_i64[0] + 16) - 1LL)));
        v26 = v17;
        if ( v14 != *(_QWORD *)(v17 + 8 * v16) )
        {
          if ( v14 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
            v17 = v26;
          }
          v18 = *(_QWORD *)(v17 + 8 * v16);
          if ( v18 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
            v17 = v26;
          }
          a4 = v27;
          *(_QWORD *)(v17 + 8 * v16) = v14;
        }
      }
      ++v12;
    }
    while ( v12 != v7 );
    v5 = a1;
  }
  *v5 = 0LL;
  v5[1] = 0LL;
  v19 = *(_QWORD ***)a2;
  *(_QWORD *)(a2 + 16) = v13;
  if ( v19 )
  {
    v20 = *v19;
    if ( v20 )
      *v5 = *v20;
  }
  result = v5;
  v5[2] = v13;
  return result;
}
