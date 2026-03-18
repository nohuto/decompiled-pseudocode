/*
 * XREFs of ?Initialize@CHolographicInteropTarget@@QEAAJPEAU_LUID@@@Z @ 0x1801C17E8
 * Callers:
 *     ?Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z @ 0x1801C1664 (-Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18001B0E8 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??B?$ComPtrRef@V?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVCD3DDeviceLevel1@@XZ @ 0x18011DEF8 (--B-$ComPtrRef@V-$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVC.c)
 *     ?GetHolographicManager@CComposition@@QEAAPEAVCHolographicManager@@XZ @ 0x180128048 (-GetHolographicManager@CComposition@@QEAAPEAVCHolographicManager@@XZ.c)
 */

__int64 __fastcall CHolographicInteropTarget::Initialize(struct CHolographicManager ***this, struct _LUID *a2)
{
  struct CHolographicManager *HolographicManager; // rax
  unsigned int v5; // ebx
  _QWORD *v6; // rsi
  int v7; // edi
  HANDLE Event; // rax
  HANDLE v9; // rax
  bool v10; // zf
  __int64 v11; // rdi
  struct CHolographicManager *v12; // rsi
  __int64 v13; // rcx
  __int64 *v14; // rax
  signed int D3DDevice; // eax
  unsigned int v17; // [rsp+20h] [rbp-28h]
  __int64 *v18; // [rsp+50h] [rbp+8h] BYREF

  HolographicManager = CComposition::GetHolographicManager(this[2]);
  this[14] = (struct CHolographicManager **)HolographicManager;
  if ( !HolographicManager )
  {
    v5 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8000FFFF, 0x52u);
    return v5;
  }
  *((_DWORD *)this + 34) = 87;
  v6 = this + 20;
  v7 = 0;
  do
  {
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    *v6 = Event;
    if ( !Event )
    {
      v17 = 90;
      goto LABEL_17;
    }
    v9 = CreateEventExW(0LL, 0LL, 2u, 0x1F0003u);
    v10 = *v6 == 0LL;
    v6[1] = v9;
    if ( v10 )
    {
      v17 = 92;
LABEL_17:
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, v17);
      return v5;
    }
    ++v7;
    ++v6;
  }
  while ( !v7 );
  v11 = 0LL;
  v12 = this[2][9];
  if ( !*((_DWORD *)v12 + 20) )
    goto LABEL_12;
  while ( 1 )
  {
    v13 = *(_QWORD *)(*((_QWORD *)v12 + 7) + 8 * v11);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v13 + 272LL))(v13) )
      break;
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= *((_DWORD *)v12 + 20) )
      goto LABEL_12;
  }
  if ( !*(_QWORD *)(*((_QWORD *)v12 + 7) + 8 * v11) )
LABEL_12:
    *((_BYTE *)this + 128) = 1;
  v18 = (__int64 *)(this + 15);
  v14 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<CD3DDeviceLevel1>>::operator CD3DDeviceLevel1 * *(&v18);
  D3DDevice = CD3DDeviceManager::GetD3DDevice(
                (CD3DDeviceManager *)&g_D3DDeviceManager,
                *a2,
                (struct CD3DDeviceLevel1 **)v14);
  v5 = D3DDevice;
  if ( D3DDevice < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, D3DDevice, 0x69u);
  return v5;
}
