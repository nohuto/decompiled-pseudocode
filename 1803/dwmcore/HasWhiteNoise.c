/*
 * XREFs of HasWhiteNoise @ 0x1800D59A8
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800D4288 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ??$find@V?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@details@gsl@@W4ShaderLinkingArgument@@@std@@YA?AV?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@details@gsl@@V123@0AEBW4ShaderLinkingArgument@@@Z @ 0x1800D5AC8 (--$find@V-$span_iterator@V-$span@$$CBW4ShaderLinkingArgument@@$0-0@gsl@@$0A@@details@gsl@@W4Shad.c)
 */

char __fastcall HasWhiteNoise(__int64 *a1)
{
  __int64 *v1; // rsi
  __int128 v2; // xmm0
  char v4; // di
  __int64 **v5; // rax
  __int128 v7; // [rsp+20h] [rbp-30h] BYREF
  __int128 v8; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v9[16]; // [rsp+40h] [rbp-10h] BYREF
  __int16 v10; // [rsp+60h] [rbp+10h] BYREF

  v1 = (__int64 *)*a1;
  *(_QWORD *)&v7 = a1;
  *((_QWORD *)&v7 + 1) = v1;
  v2 = v7;
  v7 = (unsigned __int64)a1;
  v8 = v2;
  v4 = 0;
  v10 = 12;
  v5 = (__int64 **)((__int64 (__fastcall *)(_BYTE *, __int128 *, __int128 *, __int16 *))std::find<gsl::details::span_iterator<gsl::span<enum ShaderLinkingArgument const,-1>,0>,enum ShaderLinkingArgument>)(
                     v9,
                     &v7,
                     &v8,
                     &v10);
  if ( *v5 != a1 || v5[1] != v1 )
    return 1;
  return v4;
}
