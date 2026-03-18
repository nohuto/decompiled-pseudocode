/*
 * XREFs of ?GetD3D11DepthStencilDesc@DepthStencilMode@@YAAEBUD3D11_DEPTH_STENCIL_DESC@@W4Enum@1@@Z @ 0x1800C9F2C
 * Callers:
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x1800781F8 (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char *__fastcall DepthStencilMode::GetD3D11DepthStencilDesc(int a1)
{
  if ( (dword_1802414D4 & 1) == 0 )
  {
    dword_18023DA14 = 1;
    dword_1802414D4 |= 1u;
    xmmword_18023D9F4 = xmmword_1801F5568;
    word_18023DA24 = 0;
    xmmword_18023DA04 = xmmword_1801F5568;
    word_18023DA58 = 0;
    xmmword_18023DA28 = xmmword_1801F5568;
    word_18023DA8C = 0;
    xmmword_18023DA38 = xmmword_1801F5568;
    dword_18023DA18 = 1;
    xmmword_18023DA5C = xmmword_1801F5568;
    qword_18023DA1C = 8LL;
    xmmword_18023DA6C = xmmword_1801F5568;
    qword_18023DA48 = 1LL;
    xmmword_18023DA90 = xmmword_1801F5568;
    qword_18023DA50 = 7LL;
    xmmword_18023DAA0 = xmmword_1801F5568;
    dword_18023DA7C = 1;
    dword_18023DA80 = 1;
    qword_18023DA84 = 7LL;
  }
  return (char *)&unk_18023D9E0 + 52 * a1;
}
