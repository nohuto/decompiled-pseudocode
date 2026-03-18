/*
 * XREFs of GetInputs @ 0x1800C7760
 * Callers:
 *     ?GetShaderLinkingBody@CommonRenderingShaderBody@@YA?AUShaderLinkingBody@@W4Enum@1@W4D3DShaderProfileVersion@@@Z @ 0x1800C76D4 (-GetShaderLinkingBody@CommonRenderingShaderBody@@YA-AUShaderLinkingBody@@W4Enum@1@W4D3DShaderPro.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetInputs(__int64 a1, int a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // edx
  void *v5; // rax

  v2 = dword_1802414D0;
  if ( (dword_1802414D0 & 1) == 0 )
  {
    v2 = dword_1802414D0 | 1;
    dword_18023D9CE = 33620480;
    dword_1802414D0 |= 1u;
  }
  if ( (v2 & 2) == 0 )
  {
    word_18023D9CA = 513;
    dword_1802414D0 = v2 | 2;
  }
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( !v4 )
      {
        *(_DWORD *)(a1 + 8) = 2;
        v5 = &unk_18023D9C8;
        goto LABEL_12;
      }
      if ( v4 != 1 )
      {
        *(_DWORD *)(a1 + 8) = 0;
        *(_QWORD *)a1 = 0LL;
        return a1;
      }
      *(_DWORD *)(a1 + 8) = 3;
    }
    else
    {
      *(_DWORD *)(a1 + 8) = 2;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 1;
  }
  v5 = &unk_18023D9CC;
LABEL_12:
  *(_QWORD *)a1 = v5;
  return a1;
}
