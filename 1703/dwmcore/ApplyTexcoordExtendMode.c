/*
 * XREFs of ApplyTexcoordExtendMode @ 0x1800BB5F8
 * Callers:
 *     PrepareSamplerTexcoord @ 0x1800BB500 (PrepareSamplerTexcoord.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$ArrayRef@$$CBW4ShaderLinkingArgument@@@@@Z @ 0x1800B8F98 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 */

__int64 __fastcall ApplyTexcoordExtendMode(__int64 a1, __int16 a2, char a3, __int64 a4, __int16 *a5)
{
  __int16 *v5; // rsi
  unsigned int v6; // ebx
  __int16 v7; // di
  int v9; // edi
  char *v10; // rax
  int appended; // eax
  __int16 *v12; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+38h] [rbp-10h]
  __int16 v14; // [rsp+60h] [rbp+18h] BYREF
  __int16 v15; // [rsp+62h] [rbp+1Ah]

  v5 = a5;
  v6 = 0;
  v7 = a2;
  if ( !a3 )
    goto LABEL_2;
  if ( a5 )
  {
    v9 = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 80) = v9 + 1;
    v7 = v9 | 0x500;
  }
  v14 = a2;
  v13 = 2;
  v12 = &v14;
  v15 = (unsigned __int8)a2 | 0x300;
  if ( a3 == 1 )
  {
    v10 = "BorderEffectClamp";
  }
  else if ( a3 == 2 )
  {
    v10 = "BorderEffectWrap";
  }
  else
  {
    v10 = a3 == 3 ? "BorderEffectMirror" : 0LL;
  }
  appended = CShaderLinkingGraphBuilder::AppendNode(a1, v7, (__int64)&word_1801EA0DE, a4, (__int64)v10, (__int64)&v12);
  v6 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x18Au);
  }
  else
  {
LABEL_2:
    if ( v5 )
      *v5 = v7;
  }
  return v6;
}
