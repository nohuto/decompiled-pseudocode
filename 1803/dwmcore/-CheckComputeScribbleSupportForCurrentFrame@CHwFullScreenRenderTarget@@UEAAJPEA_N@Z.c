/*
 * XREFs of ?CheckComputeScribbleSupportForCurrentFrame@CHwFullScreenRenderTarget@@UEAAJPEA_N@Z @ 0x1801F1B40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0d @ 0x180167AC0 (McTemplateU0d.c)
 *     ?TryGetD3D12DeviceNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x1801E1018 (-TryGetD3D12DeviceNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 *     ?CheckComputeScribbleSupport@CHwFullScreenRenderTarget@@AEAA_NXZ @ 0x1801F19A0 (-CheckComputeScribbleSupport@CHwFullScreenRenderTarget@@AEAA_NXZ.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::CheckComputeScribbleSupportForCurrentFrame(
        CHwFullScreenRenderTarget *this,
        bool *a2)
{
  char v3; // al
  int v5; // r8d
  int D3D12DeviceNoRef; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ID3D12Device *v10; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  v3 = *((_BYTE *)this + 360);
  if ( !v3 )
  {
    v3 = CHwFullScreenRenderTarget::CheckComputeScribbleSupport((CHwFullScreenRenderTarget *)((char *)this - 216)) != 0
       ? 1
       : -1;
    *((_BYTE *)this + 360) = v3;
  }
  if ( v3 == -1 )
    return 0LL;
  if ( *((_QWORD *)this + 46) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      v5 = 1;
LABEL_17:
      McTemplateU0d(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, v5);
    }
  }
  else if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 27) + 160LL))((char *)this - 216)
         || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 248LL))(*((_QWORD *)this + 4)) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      v5 = 4;
      goto LABEL_17;
    }
  }
  else
  {
    D3D12DeviceNoRef = CD3DDeviceLevel1::TryGetD3D12DeviceNoRef(*((CD3DDeviceLevel1 **)this + 1), &v10);
    v7 = D3D12DeviceNoRef;
    if ( D3D12DeviceNoRef < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21B,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
        (const char *)(unsigned int)D3D12DeviceNoRef);
      return v7;
    }
    if ( v10 )
    {
      *a2 = 1;
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      v5 = 0;
      goto LABEL_17;
    }
  }
  return 0LL;
}
