/*
 * XREFs of ?AddOrUpdate@Edges@@QEAAJAEBUEdgyInputSource@@@Z @ 0x18002B084
 * Callers:
 *     ?OnEdgyConfigurationUpdateStatic@CShellEdgyNotifier@@CAJPEAXPEBXH@Z @ 0x18002BF10 (-OnEdgyConfigurationUpdateStatic@CShellEdgyNotifier@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     McTemplateU0qqqqq @ 0x180012DA8 (McTemplateU0qqqqq.c)
 *     McTemplateU0qqqqqq @ 0x180012E48 (McTemplateU0qqqqqq.c)
 *     ?Set@Edge@@AEAAXAEBUEdgyInputSource@@@Z @ 0x18002AEAC (-Set@Edge@@AEAAXAEBUEdgyInputSource@@@Z.c)
 *     ?FindEdge@Edges@@AEAAHI@Z @ 0x18002B2A0 (-FindEdge@Edges@@AEAAHI@Z.c)
 *     ??$emplace_back@AEAVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAXAEAVEdge@@@Z @ 0x18002B70C (--$emplace_back@AEAVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAXAEAVEdge@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

__int64 __fastcall Edges::AddOrUpdate(Edges *this, const struct EdgyInputSource *a2)
{
  unsigned int v4; // ebx
  int Edge; // eax
  __int64 v6; // r8
  const char *v7; // r9
  int v8; // r11d
  __int64 v9; // r15
  Edge *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  const char *v13; // r9
  __int64 v15; // [rsp+50h] [rbp-68h] BYREF
  char v16; // [rsp+58h] [rbp-60h]
  _BYTE v17[56]; // [rsp+5Ch] [rbp-5Ch] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v4 = 0;
  Edge = Edges::FindEdge(this, *((_DWORD *)a2 + 6));
  v9 = Edge;
  if ( Edge < 0 )
  {
    v15 = 0LL;
    v16 = 0;
    memset(v17, 0, sizeof(v17));
    Edge::Set((Edge *)&v15, a2, v12, v13);
    try
    {
      std::vector<Edge>::emplace_back<Edge &>(this, &v15);
      if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
        McTemplateU0qqqqq(
          *((_QWORD *)this + 1) - *(_QWORD *)this,
          &MinInput_CShellEdgy_EdgeCountChanged,
          13,
          *((_DWORD *)a2 + 6),
          1,
          (*((_DWORD *)this + 2) - *(_DWORD *)this) / 72 - 1,
          (*((_DWORD *)this + 2) - *(_DWORD *)this) / 72);
    }
    catch ( ... )
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    v10 = (Edge *)(*(_QWORD *)this + 72LL * Edge);
    if ( !*((_DWORD *)v10 + 10) || *((_DWORD *)v10 + 10) != v8 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\edgegesture\\lib\\cshelledges.cpp",
        v7);
      __debugbreak();
    }
    Edge::Set(v10, a2, v6, v7);
    if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
    {
      v11 = *(unsigned __int8 *)(*(_QWORD *)this + 72 * v9 + 8);
      McTemplateU0qqqqqq(
        v11,
        &MinInput_CShellEdgy_EdgeUpdated,
        13,
        *(_DWORD *)(*(_QWORD *)this + 72 * v9 + 40),
        v9,
        *(_DWORD *)(*(_QWORD *)this + 72 * v9 + 28),
        v11,
        *(_DWORD *)(*(_QWORD *)this + 72 * v9 + 44));
    }
  }
  return v4;
}
