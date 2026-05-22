/*
 * XREFs of ?FindEdge@Edges@@AEAAHIPEBG@Z @ 0x1800689E8
 * Callers:
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x18006829C (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ?Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1800685F0 (-Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ?FindEdge@Edges@@AEAAHAEBUCandidateIdentity@@@Z @ 0x180068B28 (-FindEdge@Edges@@AEAAHAEBUCandidateIdentity@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Edges::FindEdge(Edges *this, int a2, const unsigned __int16 *a3)
{
  __int64 v6; // r8
  unsigned int v7; // esi
  __int64 i; // r14
  _QWORD *v9; // rcx
  const char *v10; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r8d
  char v15; // al
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !a2 )
    return 0xFFFFFFFFLL;
  if ( !a3 )
    return 0xFFFFFFFFLL;
  if ( !*a3 )
    return 0xFFFFFFFFLL;
  v6 = *(_QWORD *)this;
  v7 = 0;
  if ( (int)((*((_QWORD *)this + 1) - *(_QWORD *)this) / 96LL) <= 0 )
    return 0xFFFFFFFFLL;
  for ( i = 0LL; ; i += 96LL )
  {
    v9 = (_QWORD *)(i + v6 + 8);
    if ( v9[3] >= 8uLL )
      v9 = (_QWORD *)*v9;
    if ( !(unsigned int)_o__wcsicmp(v9, a3) )
      break;
    v6 = *(_QWORD *)this;
    if ( (int)++v7 >= (int)((*((_QWORD *)this + 1) - *(_QWORD *)this) / 96LL) )
      return 0xFFFFFFFFLL;
  }
  v12 = *(_QWORD *)this;
  v13 = 96LL * (int)v7;
  v14 = *(_DWORD *)(v13 + *(_QWORD *)this + 64);
  if ( !v14 || v14 != a2 )
  {
    v15 = 0;
    if ( *(_QWORD *)(v13 + v12 + 24) )
    {
      v16 = *(_QWORD *)(v13 + v12 + 40);
      v15 = v16 != 0;
      if ( v14 )
        v15 = (v16 != 0) + 2;
    }
    if ( (v15 & 1) == 0 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x271,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edges.cpp",
        v10);
      JUMPOUT(0x180068B24LL);
    }
  }
  return v7;
}
