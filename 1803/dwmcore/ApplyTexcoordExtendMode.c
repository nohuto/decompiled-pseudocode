/*
 * XREFs of ApplyTexcoordExtendMode @ 0x1800D5868
 * Callers:
 *     PrepareSamplerTexcoord @ 0x1800D5760 (PrepareSamplerTexcoord.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800D4DF8 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 */

__int64 __fastcall ApplyTexcoordExtendMode(__int64 a1, __int16 a2, char a3, __int64 a4, __int16 *a5)
{
  __int16 *v5; // rsi
  unsigned int v6; // ebx
  __int16 v7; // di
  char *v9; // rax
  int appended; // eax
  int v11; // edi
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF
  __int16 v13; // [rsp+60h] [rbp+18h] BYREF
  __int16 v14; // [rsp+62h] [rbp+1Ah]

  v5 = a5;
  v6 = 0;
  v7 = a2;
  if ( !a3 )
    goto LABEL_2;
  if ( a5 )
  {
    v11 = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 80) = v11 + 1;
    v7 = v11 | 0x500;
  }
  v13 = a2;
  *(_QWORD *)&v12 = 2LL;
  *((_QWORD *)&v12 + 1) = &v13;
  v14 = (unsigned __int8)a2 | 0x300;
  if ( a3 == 1 )
  {
    v9 = "BorderEffectClamp";
  }
  else if ( a3 == 2 )
  {
    v9 = "BorderEffectWrap";
  }
  else
  {
    v9 = a3 == 3 ? "BorderEffectMirror" : 0LL;
  }
  appended = CShaderLinkingGraphBuilder::AppendNode((_QWORD *)a1, v7, (__int64)&word_18025290E, a4, (__int64)v9, &v12);
  v6 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x1E2u);
  }
  else
  {
LABEL_2:
    if ( v5 )
      *v5 = v7;
  }
  return v6;
}
