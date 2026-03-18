/*
 * XREFs of ??0CD3DDeviceLevel1@@AEAA@PEAVIMILPoolManager@@@Z @ 0x1800761D4
 * Callers:
 *     ?Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x1800CA4B0 (-Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

CD3DDeviceLevel1 *__fastcall CD3DDeviceLevel1::CD3DDeviceLevel1(CD3DDeviceLevel1 *this, struct IMILPoolManager *a2)
{
  *((_DWORD *)this + 124) = -1;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
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
  *((_QWORD *)this + 13) = 0LL;
  *(_QWORD *)this = &CD2DContext::`vftable';
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 70) = 0;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = (char *)this + 352;
  *((_QWORD *)this + 41) = (char *)this + 352;
  *((_DWORD *)this + 84) = 4;
  *(_QWORD *)((char *)this + 340) = 4LL;
  *((_DWORD *)this + 108) = 0;
  *((_DWORD *)this + 96) = -1;
  *((_DWORD *)this + 102) = -1;
  *((_DWORD *)this + 97) = -1;
  *((_QWORD *)this + 59) = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 120) = 0;
  *((_QWORD *)this + 61) = a2;
  *((_QWORD *)this + 67) = (char *)this + 568;
  *((_QWORD *)this + 68) = (char *)this + 568;
  *((_DWORD *)this + 138) = 1;
  *(_QWORD *)((char *)this + 556) = 1LL;
  *((_DWORD *)this + 144) = 0;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *(_QWORD *)this = &CD3DDeviceLevel1::`vftable'{for `CD2DContext'};
  *((_QWORD *)this + 59) = &CD3DDeviceLevel1::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = -1LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_QWORD *)this + 79) = 0LL;
  *((_QWORD *)this + 81) = 0LL;
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 84) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 92) = 0LL;
  *((_QWORD *)this + 93) = 0LL;
  *((_QWORD *)this + 94) = 1LL;
  *((_QWORD *)this + 98) = 0LL;
  *((_QWORD *)this + 95) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  *((_QWORD *)this + 97) = 0xFFFFLL;
  *((_WORD *)this + 396) = 0;
  *((_BYTE *)this + 794) = 0;
  *((_DWORD *)this + 200) = 0;
  *((_QWORD *)this + 106) = 0LL;
  *((_QWORD *)this + 107) = 0LL;
  *((_QWORD *)this + 108) = 0LL;
  *((_QWORD *)this + 109) = 0LL;
  *((_QWORD *)this + 110) = 0LL;
  *((_QWORD *)this + 112) = &CD3DResourceManager::`vftable';
  *((_DWORD *)this + 242) = 0;
  InitializeSListHead((PSLIST_HEADER)this + 57);
  *((_QWORD *)this + 117) = (char *)this + 928;
  *((_QWORD *)this + 116) = (char *)this + 928;
  *((_QWORD *)this + 120) = (char *)this + 952;
  *((_QWORD *)this + 119) = (char *)this + 952;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 124) = 0LL;
  *((_QWORD *)this + 125) = 0LL;
  *((_QWORD *)this + 126) = 0LL;
  *((_DWORD *)this + 254) = 0;
  *((_BYTE *)this + 1051) = 1;
  `vector constructor iterator'(
    (CD3DDeviceLevel1 *)((char *)this + 1056),
    8uLL,
    8uLL,
    wil::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>);
  *((_QWORD *)this + 140) = 0LL;
  *((_QWORD *)this + 141) = 0LL;
  *((_DWORD *)this + 284) = 0;
  *((_QWORD *)this + 143) = 0LL;
  *((_QWORD *)this + 144) = 0LL;
  *((_DWORD *)this + 290) = 0;
  *((_QWORD *)this + 146) = 0LL;
  `vector constructor iterator'(
    (CD3DDeviceLevel1 *)((char *)this + 1176),
    8uLL,
    4uLL,
    wil::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>);
  `vector constructor iterator'(
    (CD3DDeviceLevel1 *)((char *)this + 1208),
    8uLL,
    0x18uLL,
    wil::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>);
  `vector constructor iterator'(
    (CD3DDeviceLevel1 *)((char *)this + 1400),
    8uLL,
    0x30uLL,
    wil::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>);
  `vector constructor iterator'(
    (CD3DDeviceLevel1 *)((char *)this + 1784),
    8uLL,
    1uLL,
    wil::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>);
  `vector constructor iterator'(
    (CD3DDeviceLevel1 *)((char *)this + 1792),
    8uLL,
    4uLL,
    wil::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>);
  *((_DWORD *)this + 124) = -1;
  return this;
}
