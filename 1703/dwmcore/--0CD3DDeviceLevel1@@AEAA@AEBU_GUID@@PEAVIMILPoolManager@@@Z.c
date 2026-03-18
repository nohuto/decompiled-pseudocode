/*
 * XREFs of ??0CD3DDeviceLevel1@@AEAA@AEBU_GUID@@PEAVIMILPoolManager@@@Z @ 0x180078A74
 * Callers:
 *     ?Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x1800C7EBC (-Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

CD3DDeviceLevel1 *__fastcall CD3DDeviceLevel1::CD3DDeviceLevel1(
        CD3DDeviceLevel1 *this,
        const struct _GUID *a2,
        struct IMILPoolManager *a3)
{
  CD3DDeviceLevel1 *result; // rax

  *((_DWORD *)this + 128) = -1;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *(_QWORD *)this = &CD2DContext::`vftable';
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 76) = 0;
  *((_QWORD *)this + 42) = (char *)this + 368;
  *((_QWORD *)this + 43) = (char *)this + 368;
  *((_DWORD *)this + 88) = 4;
  *(_QWORD *)((char *)this + 356) = 4LL;
  *((_DWORD *)this + 112) = 0;
  *((_DWORD *)this + 100) = -1;
  *((_DWORD *)this + 106) = -1;
  *((_DWORD *)this + 101) = -1;
  *((_QWORD *)this + 61) = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 124) = 0;
  *((_QWORD *)this + 63) = a3;
  *((_QWORD *)this + 69) = (char *)this + 584;
  *((_QWORD *)this + 70) = (char *)this + 584;
  *((_DWORD *)this + 142) = 1;
  *(_QWORD *)((char *)this + 572) = 1LL;
  *((_DWORD *)this + 148) = 0;
  *(_QWORD *)this = &CD3DDeviceLevel1::`vftable'{for `CD2DContext'};
  *((_QWORD *)this + 61) = &CD3DDeviceLevel1::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_QWORD *)this + 80) = 0LL;
  *((_QWORD *)this + 81) = 0LL;
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 84) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 92) = 1LL;
  *((_QWORD *)this + 96) = 0LL;
  *((_QWORD *)this + 93) = 0LL;
  *((_QWORD *)this + 94) = 0LL;
  *((_QWORD *)this + 95) = 0xFFFFLL;
  *((_WORD *)this + 388) = 0;
  *((_BYTE *)this + 778) = 0;
  *((_DWORD *)this + 196) = 0;
  *((_QWORD *)this + 104) = 0LL;
  *((_QWORD *)this + 105) = 0LL;
  *((_QWORD *)this + 106) = 0LL;
  *((_QWORD *)this + 107) = 0LL;
  *((_QWORD *)this + 108) = 0LL;
  *((_QWORD *)this + 116) = &CD3DResourceManager::`vftable';
  *((_DWORD *)this + 262) = 0;
  InitializeSListHead((PSLIST_HEADER)this + 59);
  *((_QWORD *)this + 121) = (char *)this + 960;
  *((_QWORD *)this + 120) = (char *)this + 960;
  *((_QWORD *)this + 123) = (char *)this + 976;
  *((_QWORD *)this + 122) = (char *)this + 976;
  *((_QWORD *)this + 125) = (char *)this + 992;
  *((_QWORD *)this + 124) = (char *)this + 992;
  *((_QWORD *)this + 127) = (char *)this + 1008;
  *((_QWORD *)this + 126) = (char *)this + 1008;
  *((_QWORD *)this + 130) = (char *)this + 1032;
  *((_QWORD *)this + 129) = (char *)this + 1032;
  *((_QWORD *)this + 128) = 0LL;
  *((_DWORD *)this + 234) = 0;
  *((_QWORD *)this + 134) = 0LL;
  *((_QWORD *)this + 135) = 0LL;
  *((_QWORD *)this + 136) = 0LL;
  *((_DWORD *)this + 274) = 0;
  *((_BYTE *)this + 1124) = 1;
  *(struct _GUID *)((char *)this + 1128) = *a2;
  `vector constructor iterator'(
    (CD3DDeviceLevel1 *)((char *)this + 1144),
    8uLL,
    8uLL,
    Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::ComPtr<ID3D11DepthStencilState>);
  *((_QWORD *)this + 151) = 0LL;
  *((_QWORD *)this + 152) = 0LL;
  *((_DWORD *)this + 306) = 0;
  *((_QWORD *)this + 154) = 0LL;
  *((_QWORD *)this + 155) = 0LL;
  *((_QWORD *)this + 156) = 0LL;
  *((_QWORD *)this + 157) = 0LL;
  `vector constructor iterator'(
    (CD3DDeviceLevel1 *)((char *)this + 1264),
    8uLL,
    4uLL,
    Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::ComPtr<ID3D11DepthStencilState>);
  `vector constructor iterator'(
    (CD3DDeviceLevel1 *)((char *)this + 1296),
    8uLL,
    0x18uLL,
    Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::ComPtr<ID3D11DepthStencilState>);
  `vector constructor iterator'(
    (CD3DDeviceLevel1 *)((char *)this + 1488),
    8uLL,
    0x30uLL,
    Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::ComPtr<ID3D11DepthStencilState>);
  `vector constructor iterator'(
    (CD3DDeviceLevel1 *)((char *)this + 1872),
    8uLL,
    1uLL,
    Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::ComPtr<ID3D11DepthStencilState>);
  `vector constructor iterator'(
    (CD3DDeviceLevel1 *)((char *)this + 1880),
    8uLL,
    4uLL,
    Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::ComPtr<ID3D11DepthStencilState>);
  result = this;
  *((_QWORD *)this + 239) = 0LL;
  *((_QWORD *)this + 240) = 0LL;
  *((_DWORD *)this + 482) = 0;
  *((_QWORD *)this + 242) = 0LL;
  *((_QWORD *)this + 243) = 0LL;
  *((_DWORD *)this + 128) = -1;
  return result;
}
