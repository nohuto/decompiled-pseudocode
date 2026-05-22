/*
 * XREFs of ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x18006829C
 * Callers:
 *     ?OnEdgyCompositionUpdateStatic@EdgyConnection@@CAJPEAXPEBXH@Z @ 0x180067B80 (-OnEdgyCompositionUpdateStatic@EdgyConnection@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800668E8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?Set@Edge@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x180067F54 (-Set@Edge@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ?FindEdge@Edges@@AEAAHIPEBG@Z @ 0x1800689E8 (-FindEdge@Edges@@AEAAHIPEBG@Z.c)
 *     ??$emplace_back@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAAEAVEdge@@AEBV2@@Z @ 0x18006925C (--$emplace_back@AEBVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAAEAVEdge@@AEBV2@@.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Edges::AddOrUpdate(Edges *this, const struct EdgyCompositionConfigurationUpdateEx *a2)
{
  unsigned int v4; // edi
  int Edge; // eax
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v9[4]; // [rsp+38h] [rbp-80h] BYREF
  __int64 v10; // [rsp+58h] [rbp-60h]
  _BYTE v11[48]; // [rsp+60h] [rbp-58h] BYREF

  v4 = 0;
  Edge = Edges::FindEdge(this, *((_DWORD *)a2 + 4), (const unsigned __int16 *)a2 + 12);
  if ( Edge < 0 )
  {
    v8 = 0LL;
    v9[2] = 0LL;
    v9[3] = 7LL;
    LOWORD(v9[0]) = 0;
    v10 = 0LL;
    memset_0(v11, 0, 0x2CuLL);
    Edge::Set((Edge *)&v8, a2);
    try
    {
      std::vector<Edge>::emplace_back<Edge const &>(this, &v8);
    }
    catch ( ... )
    {
      v4 = -2147024882;
    }
    v6 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (**(void (__fastcall ***)(__int64))(v6 + 16))(v6 + 16);
    }
    std::wstring::_Tidy_deallocate(v9);
  }
  else
  {
    Edge::Set((Edge *)(*(_QWORD *)this + 96LL * Edge), a2);
  }
  return v4;
}
