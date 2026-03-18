/*
 * XREFs of ??0CLinkedShader@@QEAA@PEAUID3D10Blob@@W4Enum@VertexShaderKey@@@Z @ 0x180018144
 * Callers:
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@AEBV?$ArrayRef@PEBUShaderLinkingBody@@@@PEAPEAVCLinkedShader@@@Z @ 0x180018420 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800C1CB0 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CLinkedShader::CLinkedShader(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &CMILRefCountBase::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CLinkedShader::`vftable';
  *(_QWORD *)(a1 + 16) = a2;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef();
  *(_DWORD *)(a1 + 24) = a3;
  *(_QWORD *)(a1 + 32) = &CDeviceResourceTable<CD3DPixelShader,CLinkedShader,CD3DDeviceLevel1>::`vftable';
  *(_QWORD *)(a1 + 40) = a1;
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 48) = a1 + 80;
  *(_QWORD *)(a1 + 56) = a1 + 80;
  *(_DWORD *)(a1 + 64) = 2;
  *(_DWORD *)(a1 + 68) = 2;
  result = a1;
  *(GUID *)(a1 + 96) = GUID_NULL;
  return result;
}
