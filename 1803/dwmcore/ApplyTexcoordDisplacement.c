/*
 * XREFs of ApplyTexcoordDisplacement @ 0x1802177E4
 * Callers:
 *     PrepareSamplerTexcoord @ 0x1800D5760 (PrepareSamplerTexcoord.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800D4DF8 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     GetChannelSelectorXFunction_32_ @ 0x180217604 (GetChannelSelectorXFunction_32_.c)
 *     GetChannelSelectorYFunction_32_ @ 0x1802176F4 (GetChannelSelectorYFunction_32_.c)
 */

__int64 __fastcall ApplyTexcoordDisplacement(__int64 a1, __int16 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // r14
  int v8; // edi
  char v10; // cl
  __int16 v11; // di
  __int16 v12; // r14
  int appended; // eax
  unsigned int v14; // ebx
  int v15; // eax
  _WORD v17[2]; // [rsp+30h] [rbp-50h] BYREF
  _WORD v18[6]; // [rsp+34h] [rbp-4Ch] BYREF
  __int128 v19; // [rsp+40h] [rbp-40h] BYREF
  int v20; // [rsp+50h] [rbp-30h]
  _BYTE v21[32]; // [rsp+58h] [rbp-28h] BYREF

  v4 = *(_WORD *)(a3 + 20);
  v20 = (unsigned __int8)a2;
  v8 = *(_DWORD *)(a1 + 80);
  v10 = *(_BYTE *)(a3 + 18);
  *(_DWORD *)(a1 + 80) = v8 + 1;
  v11 = v8 | 0x500;
  v12 = v4 | 0x200;
  GetChannelSelectorXFunction_32_(v10, a2, v21);
  *(_QWORD *)&v19 = 2LL;
  *((_QWORD *)&v19 + 1) = v17;
  v17[0] = a2;
  v17[1] = v12;
  appended = CShaderLinkingGraphBuilder::AppendNode((_QWORD *)a1, v11, (__int64)&word_18025290E, a4, (__int64)v21, &v19);
  v14 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x23Fu);
  }
  else
  {
    GetChannelSelectorYFunction_32_(*(_BYTE *)(a3 + 19), v20, v21);
    *(_QWORD *)&v19 = 2LL;
    *((_QWORD *)&v19 + 1) = v18;
    v18[0] = v11;
    v18[1] = v12;
    v15 = CShaderLinkingGraphBuilder::AppendNode((_QWORD *)a1, a2, (__int64)&word_18025290E, a4, (__int64)v21, &v19);
    v14 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x248u);
  }
  return v14;
}
