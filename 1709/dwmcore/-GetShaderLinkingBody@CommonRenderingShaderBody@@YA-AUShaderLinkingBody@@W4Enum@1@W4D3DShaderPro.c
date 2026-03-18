/*
 * XREFs of ?GetShaderLinkingBody@CommonRenderingShaderBody@@YA?AUShaderLinkingBody@@W4Enum@1@W4D3DShaderProfileVersion@@@Z @ 0x1800BE460
 * Callers:
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x18001FF80 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShade.c)
 * Callees:
 *     GetInputs @ 0x1800BE4F4 (GetInputs.c)
 */

_QWORD *__fastcall CommonRenderingShaderBody::GetShaderLinkingBody(_QWORD *a1, int a2, char a3)
{
  void *v4; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm0
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  a1[6] = 0LL;
  if ( !a3 )
  {
    v4 = &unk_18021D850;
    goto LABEL_4;
  }
  if ( a3 == 1 )
  {
    v4 = &unk_1801F08A0;
LABEL_4:
    *(_QWORD *)&v8 = v4;
    *((_QWORD *)&v8 + 1) = 3106LL;
    v5 = v8;
    *((_BYTE *)a1 + 32) = a3;
    a1[5] = off_1801E5180[a2];
    *((_OWORD *)a1 + 1) = v5;
    v6 = *(_OWORD *)GetInputs(&v8);
    *((_DWORD *)a1 + 12) = 0;
    *(_OWORD *)a1 = v6;
  }
  return a1;
}
