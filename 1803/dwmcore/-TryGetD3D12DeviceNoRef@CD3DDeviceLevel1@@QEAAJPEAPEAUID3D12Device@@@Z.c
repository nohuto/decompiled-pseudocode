/*
 * XREFs of ?TryGetD3D12DeviceNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x1801E1018
 * Callers:
 *     ?CheckComputeScribbleSupportForCurrentFrame@CHwFullScreenRenderTarget@@UEAAJPEA_N@Z @ 0x1801F1B40 (-CheckComputeScribbleSupportForCurrentFrame@CHwFullScreenRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureBeginCreateD3D12Resources@CD3DDeviceLevel1@@AEAAJXZ @ 0x1801DFC1C (-EnsureBeginCreateD3D12Resources@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?WaitForResult@?$CAsyncTask@UD3D12Resources@CD3DDeviceLevel1@@@@QEAAJPEAPEAUD3D12Resources@CD3DDeviceLevel1@@@Z @ 0x1801E153C (-WaitForResult@-$CAsyncTask@UD3D12Resources@CD3DDeviceLevel1@@@@QEAAJPEAPEAUD3D12Resources@CD3DD.c)
 */

__int64 __fastcall CD3DDeviceLevel1::TryGetD3D12DeviceNoRef(CD3DDeviceLevel1 *this, struct ID3D12Device **a2)
{
  struct ID3D12Device *v4; // rbx
  int D3D12Resources; // edi
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ID3D12Device **v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  D3D12Resources = CD3DDeviceLevel1::EnsureBeginCreateD3D12Resources(this);
  if ( D3D12Resources < 0 )
  {
    v6 = 1321LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevicelevel1.cpp",
      (const char *)(unsigned int)D3D12Resources);
    return (unsigned int)D3D12Resources;
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 90) + 92LL) )
  {
    D3D12Resources = CAsyncTask<CD3DDeviceLevel1::D3D12Resources>::WaitForResult(*((_QWORD *)this + 90), &v9);
    if ( D3D12Resources < 0 )
    {
      v6 = 1328LL;
      goto LABEL_3;
    }
    v4 = *v9;
  }
  *a2 = v4;
  return 0LL;
}
