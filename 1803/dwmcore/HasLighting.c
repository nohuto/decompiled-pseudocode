/*
 * XREFs of HasLighting @ 0x1800D393C
 * Callers:
 *     GetExpectedVertexShaderDesc @ 0x1800D5B84 (GetExpectedVertexShaderDesc.c)
 * Callees:
 *     ??$find@V?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@details@gsl@@W4ShaderLinkingArgument@@@std@@YA?AV?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@details@gsl@@V123@0AEBW4ShaderLinkingArgument@@@Z @ 0x1800D5AC8 (--$find@V-$span_iterator@V-$span@$$CBW4ShaderLinkingArgument@@$0-0@gsl@@$0A@@details@gsl@@W4Shad.c)
 */

char __fastcall HasLighting(__int64 a1)
{
  __int128 v1; // rcx
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int128 v4; // xmm0
  _QWORD *v5; // rax
  bool v6; // zf
  char v7; // al
  __int128 v9; // [rsp+20h] [rbp-30h] BYREF
  __int128 v10; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v11[16]; // [rsp+40h] [rbp-10h] BYREF
  __int16 v12; // [rsp+60h] [rbp+10h] BYREF

  *(_QWORD *)&v1 = a1;
  *((_QWORD *)&v1 + 1) = 0LL;
  v2 = v1;
  if ( *(_BYTE *)(v1 + 52) )
    goto LABEL_7;
  v3 = *(_QWORD *)v1;
  *(_QWORD *)&v9 = v1;
  *((_QWORD *)&v9 + 1) = v3;
  v4 = v9;
  v9 = v1;
  v10 = v4;
  v12 = 2;
  v5 = (_QWORD *)((__int64 (__fastcall *)(_BYTE *, __int128 *, __int128 *, __int16 *))std::find<gsl::details::span_iterator<gsl::span<enum ShaderLinkingArgument const,-1>,0>,enum ShaderLinkingArgument>)(
                   v11,
                   &v9,
                   &v10,
                   &v12);
  if ( *v5 != v2 || (v6 = v5[1] == v3, v7 = 0, !v6) )
    v7 = 1;
  if ( v7 )
LABEL_7:
    BYTE8(v1) = 1;
  return BYTE8(v1);
}
