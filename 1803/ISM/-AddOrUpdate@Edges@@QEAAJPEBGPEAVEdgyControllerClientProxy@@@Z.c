/*
 * XREFs of ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x18006839C
 * Callers:
 *     ?RegisterEdgyControllerClient@EdgyControllerServer@@UEAAJPEAVBamoEdgyControllerServerStub@@PEBGPEAVBamoEdgyControllerClientProxy@@@Z @ 0x180067350 (-RegisterEdgyControllerClient@EdgyControllerServer@@UEAAJPEAVBamoEdgyControllerServerStub@@PEBGP.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800668E8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180067FBC (-Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?FindEdge@Edges@@AEAAHPEBG@Z @ 0x1800688D4 (-FindEdge@Edges@@AEAAHPEBG@Z.c)
 *     ??$emplace_back@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAAEAVEdge@@AEBV2@@Z @ 0x18006925C (--$emplace_back@AEBVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAAEAVEdge@@AEBV2@@.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Edges::AddOrUpdate(Edges *this, unsigned __int16 *a2, struct EdgyControllerClientProxy *a3)
{
  unsigned int v6; // edi
  int Edge; // eax
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int64 v11[4]; // [rsp+38h] [rbp-90h] BYREF
  __int64 v12; // [rsp+58h] [rbp-70h]
  _BYTE v13[48]; // [rsp+60h] [rbp-68h] BYREF

  v6 = 0;
  Edge = Edges::FindEdge(this, a2);
  if ( Edge < 0 )
  {
    v10 = 0LL;
    v11[2] = 0LL;
    v11[3] = 7LL;
    LOWORD(v11[0]) = 0;
    v12 = 0LL;
    memset_0(v13, 0, 0x2CuLL);
    Edge::Set((Edge *)&v10, a2, a3);
    try
    {
      std::vector<Edge>::emplace_back<Edge const &>(this, &v10);
    }
    catch ( ... )
    {
      v6 = -2147024882;
    }
    v8 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (**(void (__fastcall ***)(__int64))(v8 + 16))(v8 + 16);
    }
    std::wstring::_Tidy_deallocate(v11);
  }
  else
  {
    Edge::Set((Edge *)(*(_QWORD *)this + 96LL * Edge), a2, a3);
  }
  return v6;
}
