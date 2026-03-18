/*
 * XREFs of std::deque_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport_______::_Tidy @ 0x180147788
 * Callers:
 *     _anonymous_namespace_::State::_State @ 0x180147334 (_anonymous_namespace_--State--_State.c)
 * Callees:
 *     _anonymous_namespace_::FramesReport::_FramesReport @ 0x18002282C (_anonymous_namespace_--FramesReport--_FramesReport.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::deque_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport____std::allocator_std::unique_ptr__anonymous_namespace_::FramesReport_std::default_delete__anonymous_namespace_::FramesReport_______::_Tidy(
        _QWORD *a1)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  void *v6; // rdi
  __int64 v7; // rdi
  char *v8; // rcx
  char *v9; // rcx

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v3 = v2 + a1[3] - 1LL;
    v4 = v3 & 1;
    v5 = *(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & (v3 >> 1)));
    v6 = *(void **)(v5 + 8 * v4);
    if ( v6 )
    {
      anonymous_namespace_::FramesReport::_FramesReport(*(char ***)(v5 + 8 * v4));
      operator delete(v6);
      v2 = a1[4];
    }
    a1[4] = v2 - 1;
    if ( v2 == 1 )
      a1[3] = 0LL;
  }
  v7 = a1[2];
  while ( v7 )
  {
    --v7;
    v8 = *(char **)(a1[1] + 8 * v7);
    if ( v8 )
      std::_Deallocate(v8, 2uLL, 8uLL);
  }
  v9 = (char *)a1[1];
  if ( v9 )
    std::_Deallocate(v9, a1[2], 8uLL);
  a1[2] = 0LL;
  a1[1] = 0LL;
}
