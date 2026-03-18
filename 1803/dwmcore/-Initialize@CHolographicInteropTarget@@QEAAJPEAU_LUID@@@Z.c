/*
 * XREFs of ?Initialize@CHolographicInteropTarget@@QEAAJPEAU_LUID@@@Z @ 0x1801FDBE0
 * Callers:
 *     ?Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z @ 0x1801FDAA4 (-Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C340 (-InternalRelease@-$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180088CFC (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CHolographicInteropTarget::Initialize(CHolographicInteropTarget *this, struct _LUID *a2)
{
  __int64 v4; // r8
  unsigned int v5; // ebx
  _QWORD *v6; // rsi
  int v7; // edi
  HANDLE Event; // rax
  HANDLE v9; // rax
  bool v10; // zf
  int D3DDevice; // eax
  unsigned int v13; // [rsp+20h] [rbp-18h]

  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 128LL);
  *((_QWORD *)this + 21) = v4;
  if ( !v4 )
  {
    v5 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147418113, 0x51u);
    return v5;
  }
  *((_DWORD *)this + 47) = 87;
  v6 = (_QWORD *)((char *)this + 208);
  v7 = 0;
  do
  {
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    *v6 = Event;
    if ( !Event )
    {
      v13 = 89;
      goto LABEL_11;
    }
    v9 = CreateEventExW(0LL, 0LL, 2u, 0x1F0003u);
    v10 = *v6 == 0LL;
    v6[1] = v9;
    if ( v10 )
    {
      v13 = 91;
LABEL_11:
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, v13);
      return v5;
    }
    ++v7;
    ++v6;
  }
  while ( !v7 );
  Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease((__int64 *)this + 22);
  D3DDevice = CD3DDeviceManager::GetD3DDevice(
                (CD3DDeviceManager *)&g_D3DDeviceManager,
                *a2,
                (struct CD3DDeviceLevel1 **)this + 22);
  v5 = D3DDevice;
  if ( D3DDevice < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D3DDevice, 0x61u);
  return v5;
}
