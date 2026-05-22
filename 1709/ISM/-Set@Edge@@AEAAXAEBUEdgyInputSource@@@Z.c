/*
 * XREFs of ?Set@Edge@@AEAAXAEBUEdgyInputSource@@@Z @ 0x18002AEAC
 * Callers:
 *     ?AddOrUpdate@Edges@@QEAAJAEBUEdgyInputSource@@@Z @ 0x18002B084 (-AddOrUpdate@Edges@@QEAAJAEBUEdgyInputSource@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     McTemplateU0qqqqq @ 0x180012DA8 (McTemplateU0qqqqq.c)
 */

void __fastcall Edge::Set(Edge *this, const struct EdgyInputSource *a2, __int64 a3, const char *a4)
{
  unsigned __int8 v4; // si
  float v7; // xmm2_4
  float v8; // xmm4_4
  float v9; // xmm1_4
  float v10; // xmm3_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  __int128 v13; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v4 = 0;
  if ( *((_DWORD *)a2 + 8) != 2 )
    goto LABEL_19;
  v7 = *((float *)a2 + 9);
  v8 = *((float *)a2 + 11);
  if ( v7 == v8 )
  {
    v9 = *((float *)a2 + 10);
    v10 = *((float *)a2 + 12);
    if ( v9 == v10 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x47,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\edgegesture\\lib\\cshelledges.cpp",
        a4);
      __debugbreak();
    }
  }
  else
  {
    v9 = *((float *)a2 + 10);
    v10 = *((float *)a2 + 12);
    if ( v9 != v10 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x44,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\edgegesture\\lib\\cshelledges.cpp",
        a4);
      JUMPOUT(0x18002B081LL);
    }
  }
  if ( v7 != v8 )
  {
    if ( v9 == v10 )
    {
      v12 = *((float *)a2 + 5);
      if ( v12 <= 0.0 )
      {
        if ( v12 >= 0.0 )
          goto LABEL_19;
        *((float *)&v13 + 3) = v9;
        v9 = v9 - *(float *)&dword_18010EF44;
      }
      else
      {
        *((float *)&v13 + 3) = *(float *)&dword_18010EF44 + v9;
      }
      *(_QWORD *)((char *)&v13 + 4) = __PAIR64__(COERCE_UNSIGNED_INT(fmaxf(v7, v8)), LODWORD(v9));
      LODWORD(v13) = fminf(v7, v8);
      goto LABEL_18;
    }
LABEL_19:
    *(_QWORD *)((char *)this + 12) = 0LL;
    *(_QWORD *)((char *)this + 20) = 0LL;
    goto LABEL_20;
  }
  v11 = *((float *)a2 + 4);
  if ( v11 <= 0.0 )
  {
    if ( v11 < 0.0 )
    {
      DWORD2(v13) = *((_DWORD *)a2 + 9);
      v7 = v7 - Edge::s_hittestSpan.x;
      goto LABEL_11;
    }
    goto LABEL_19;
  }
  *((float *)&v13 + 2) = Edge::s_hittestSpan.x + v7;
LABEL_11:
  *(_QWORD *)&v13 = __PAIR64__(COERCE_UNSIGNED_INT(fminf(v9, v10)), LODWORD(v7));
  HIDWORD(v13) = fmaxf(v9, v10);
LABEL_18:
  v4 = 1;
  *(_OWORD *)((char *)this + 12) = v13;
LABEL_20:
  if ( v4 != *((_BYTE *)this + 8) && (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
    McTemplateU0qqqqq(
      v4,
      &MinInput_CShellEdgy_EdgeHitTestableChanged,
      13,
      *((_DWORD *)a2 + 6),
      *((_DWORD *)a2 + 3),
      v4,
      *((_DWORD *)a2 + 7));
  *((_BYTE *)this + 8) = v4;
  *(_QWORD *)this = *(_QWORD *)a2;
  *(_OWORD *)((char *)this + 28) = *(_OWORD *)((char *)a2 + 12);
  *(_OWORD *)((char *)this + 44) = *(_OWORD *)((char *)a2 + 28);
  *(_QWORD *)((char *)this + 60) = *(_QWORD *)((char *)a2 + 44);
}
