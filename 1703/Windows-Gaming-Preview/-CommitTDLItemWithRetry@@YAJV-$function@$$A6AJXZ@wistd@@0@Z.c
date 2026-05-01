/*
 * XREFs of ?CommitTDLItemWithRetry@@YAJV?$function@$$A6AJXZ@wistd@@0@Z @ 0x180024184
 * Callers:
 *     ?CommitInternal@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@_N2@Z @ 0x1800251A8 (-CommitInternal@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualE.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3deb4ce6cabefd1711534afb604daca8__&___ptr64_::Run @ 0x1800277A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3deb4ce6cabefd1711534afb604daca8__-___ptr64.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800029D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180002AE4 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CommitTDLItemWithRetry(wil::details::in1diag3 *a1, __int64 a2)
{
  int v2; // esi
  DWORD v5; // r14d
  int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // ebp
  __int64 v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  v5 = 10;
  if ( !*((_QWORD *)a1 + 13) )
LABEL_21:
    wil::details::in1diag3::_FailFastImmediate_Unexpected(a1);
  while ( 1 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 13) + 16LL))(*((_QWORD *)a1 + 13));
    v8 = v6;
    if ( v6 >= 0 )
      break;
    if ( v2 >= 5 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x92,
        (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)v6);
      break;
    }
    if ( ++v2 >= 2 )
    {
      Sleep(v5);
      v5 += 50;
    }
    v9 = *(_QWORD *)(a2 + 104);
    if ( !v9 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v8 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x8F,
        (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)v10);
      break;
    }
    if ( !*((_QWORD *)a1 + 13) )
      goto LABEL_21;
  }
  v11 = (wil::details::in1diag3 *)*((_QWORD *)a1 + 13);
  if ( v11 )
  {
    LOBYTE(v7) = v11 != a1;
    (*(void (__fastcall **)(wil::details::in1diag3 *, __int64))(*(_QWORD *)v11 + 24LL))(v11, v7);
    *((_QWORD *)a1 + 13) = 0LL;
  }
  v12 = (wil::details::in1diag3 *)*((_QWORD *)a1 + 13);
  if ( v12 )
  {
    LOBYTE(v7) = v12 != a1;
    (*(void (__fastcall **)(wil::details::in1diag3 *, __int64))(*(_QWORD *)v12 + 24LL))(v12, v7);
    *((_QWORD *)a1 + 13) = 0LL;
  }
  v13 = *(_QWORD *)(a2 + 104);
  if ( v13 )
  {
    LOBYTE(v7) = v13 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 24LL))(v13, v7);
    *(_QWORD *)(a2 + 104) = 0LL;
  }
  v14 = *(_QWORD *)(a2 + 104);
  if ( v14 )
  {
    LOBYTE(v7) = v14 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 24LL))(v14, v7);
    *(_QWORD *)(a2 + 104) = 0LL;
  }
  return v8;
}
