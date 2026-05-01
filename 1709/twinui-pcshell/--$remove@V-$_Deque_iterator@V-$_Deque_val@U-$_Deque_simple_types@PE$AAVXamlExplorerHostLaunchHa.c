/*
 * XREFs of ??$remove@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@0AEBQE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x18014E490
 * Callers:
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x18014CD24 (_lambda_d1cc878f49256a12ed651bb70f914db7_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::remove<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>,WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // r14
  _QWORD *v5; // rdi
  _QWORD *v6; // rcx
  __int64 v7; // r12
  __int128 v8; // xmm0
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD **v16; // rax
  _QWORD *v17; // rax
  __int128 v19; // [rsp+20h] [rbp-28h]
  __int64 v22; // [rsp+A0h] [rbp+58h]
  _QWORD *v23; // [rsp+A8h] [rbp+60h]

  v23 = a4;
  v4 = *(_QWORD *)(a3 + 16);
  v5 = a1;
  v6 = *(_QWORD **)a2;
  v7 = a2;
  if ( *(_QWORD *)a2 )
    v6 = (_QWORD *)*v6;
  *((_QWORD *)&v19 + 1) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)&v19 = v6;
  v8 = v19;
  v9 = *((_QWORD *)&v19 + 1);
  if ( *((_QWORD *)&v19 + 1) != v4 )
  {
    do
    {
      if ( *(_QWORD *)(*(_QWORD *)(v6[1] + 8 * ((v6[2] - 1LL) & (v9 >> 1))) + 8 * (v9 & 1)) == *a4 )
        break;
      *((_QWORD *)&v19 + 1) = ++v9;
    }
    while ( v9 != v4 );
    v8 = v19;
  }
  if ( v9 == v4 || (v10 = v9 + 1, v9 + 1 == v4) )
  {
    v11 = *((_QWORD *)&v8 + 1);
  }
  else
  {
    v11 = *((_QWORD *)&v8 + 1);
    do
    {
      v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8 * ((*(_QWORD *)(v8 + 16) - 1LL) & (v10 >> 1)))
                      + 8 * (v10 & 1));
      if ( v12 != *a4 )
      {
        v13 = v11 & 1;
        v14 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8 * ((v11 >> 1) & (*(_QWORD *)(v8 + 16) - 1LL)));
        v22 = v14;
        if ( v12 != *(_QWORD *)(v14 + 8 * v13) )
        {
          if ( v12 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
            v14 = v22;
          }
          v15 = *(_QWORD *)(v14 + 8 * v13);
          if ( v15 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
            v14 = v22;
          }
          a4 = v23;
          *(_QWORD *)(v14 + 8 * v13) = v12;
        }
        ++v11;
      }
      ++v10;
    }
    while ( v10 != v4 );
    v5 = a1;
    v7 = a2;
  }
  *v5 = 0LL;
  v5[1] = 0LL;
  v16 = *(_QWORD ***)v7;
  *(_QWORD *)(v7 + 16) = v11;
  if ( v16 )
  {
    v17 = *v16;
    if ( v17 )
      *v5 = *v17;
  }
  v5[2] = v11;
  return v5;
}
