/*
 * XREFs of ??0CLinkedShader@@QEAA@PEAUID3D10Blob@@W4Enum@VertexShaderKey@@@Z @ 0x1800D6000
 * Callers:
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x1800D5C80 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800213D4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CLinkedShader::CLinkedShader(__int64 a1, __int64 a2, int a3)
{
  __int64 *v5; // rcx

  *(_QWORD *)a1 = &CMILRefCountBase::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CLinkedShader::`vftable';
  v5 = (__int64 *)(a1 + 16);
  *v5 = a2;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v5);
  *(_DWORD *)(a1 + 24) = a3;
  *(_QWORD *)(a1 + 32) = &CDeviceResourceTable<CD3DPixelShader,CLinkedShader,CD3DDeviceLevel1>::`vftable';
  *(_QWORD *)(a1 + 40) = a1;
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 48) = a1 + 80;
  *(_QWORD *)(a1 + 56) = a1 + 80;
  *(_DWORD *)(a1 + 64) = 2;
  *(_DWORD *)(a1 + 68) = 2;
  return a1;
}
