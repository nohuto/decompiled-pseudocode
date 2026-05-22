/*
 * XREFs of ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdate@@@Z @ 0x180068494
 * Callers:
 *     ?OnEdgyCompositionUpdate@EdgyConnection@@AEAAXPEBUEdgyCompositionConfigurationUpdate@@@Z @ 0x180067C38 (-OnEdgyCompositionUpdate@EdgyConnection@@AEAAXPEBUEdgyCompositionConfigurationUpdate@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800668E8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?FindEdge@Edges@@AEAAHI@Z @ 0x180068998 (-FindEdge@Edges@@AEAAHI@Z.c)
 *     ??$emplace_back@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAAEAVEdge@@AEBV2@@Z @ 0x18006925C (--$emplace_back@AEBVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAAEAVEdge@@AEBV2@@.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Edges::AddOrUpdate(Edges *this, const struct EdgyCompositionConfigurationUpdate *a2)
{
  unsigned int v4; // esi
  int Edge; // eax
  const char *v6; // r9
  int v7; // r11d
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v12[4]; // [rsp+38h] [rbp-80h] BYREF
  __int64 v13; // [rsp+58h] [rbp-60h]
  _BYTE v14[4]; // [rsp+60h] [rbp-58h] BYREF
  __int128 v15; // [rsp+64h] [rbp-54h]
  __int128 v16; // [rsp+74h] [rbp-44h]
  __int64 v17; // [rsp+84h] [rbp-34h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v4 = 0;
  Edge = Edges::FindEdge(this, *((_DWORD *)a2 + 7));
  if ( Edge < 0 )
  {
    v12[2] = 0LL;
    v12[3] = 7LL;
    LOWORD(v12[0]) = 0;
    v13 = 0LL;
    memset_0(v14, 0, 0x2CuLL);
    v11 = *(_QWORD *)a2;
    v15 = *((_OWORD *)a2 + 1);
    v16 = *((_OWORD *)a2 + 2);
    v17 = *((_QWORD *)a2 + 6);
    try
    {
      std::vector<Edge>::emplace_back<Edge const &>(this, &v11);
    }
    catch ( ... )
    {
      v4 = -2147024882;
    }
    v9 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (**(void (__fastcall ***)(__int64))(v9 + 16))(v9 + 16);
    }
    std::wstring::_Tidy_deallocate(v12);
  }
  else
  {
    v8 = *(_QWORD *)this + 96LL * Edge;
    if ( !*(_DWORD *)(v8 + 64) || *(_DWORD *)(v8 + 64) != v7 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x71,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edges.cpp",
        v6);
      JUMPOUT(0x1800685EELL);
    }
    *(_QWORD *)v8 = *(_QWORD *)a2;
    *(_OWORD *)(v8 + 52) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(v8 + 68) = *((_OWORD *)a2 + 2);
    *(_QWORD *)(v8 + 84) = *((_QWORD *)a2 + 6);
  }
  return v4;
}
