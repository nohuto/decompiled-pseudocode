/*
 * XREFs of ToD3D11ParameterDesc @ 0x1800BB28C
 * Callers:
 *     ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@AEBV?$ArrayRef@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@@@@Z @ 0x1800B9084 (-Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@AEBV-$ArrayRef@$$CBUSign.c)
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x1800B92F4 (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

_QWORD *__fastcall ToD3D11ParameterDesc(_QWORD *a1, __int64 a2, int a3)
{
  int v6; // edx
  _QWORD *result; // rax

  memset_0(a1, 0, 0x38uLL);
  v6 = *(_DWORD *)(a2 + 28);
  *a1 = *(_QWORD *)(a2 + 8);
  a1[1] = *(_QWORD *)(a2 + 16);
  *((_DWORD *)a1 + 4) = *(_DWORD *)(a2 + 24);
  *((_DWORD *)a1 + 9) = a3;
  *((_DWORD *)a1 + 6) = 1;
  *((_DWORD *)a1 + 8) = 0;
  *((_DWORD *)a1 + 5) = v6 != 1;
  result = a1;
  *((_DWORD *)a1 + 7) = v6;
  return result;
}
