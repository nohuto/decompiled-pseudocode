/*
 * XREFs of ?Initialize@CHolographicInteropTarget@@QEAAJPEAU_LUID@@@Z @ 0x1801A6868
 * Callers:
 *     ?Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z @ 0x1801A66E4 (-Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800431FC (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetHolographicManager@CComposition@@QEAAPEAVCHolographicManager@@XZ @ 0x18013F660 (-GetHolographicManager@CComposition@@QEAAPEAVCHolographicManager@@XZ.c)
 */

__int64 __fastcall CHolographicInteropTarget::Initialize(CHolographicInteropTarget *this, struct _LUID *a2)
{
  struct CHolographicManager *HolographicManager; // rax
  unsigned int v5; // ebx
  _QWORD *v6; // rsi
  int v7; // edi
  HANDLE Event; // rax
  HANDLE v9; // rax
  bool v10; // zf
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rcx
  int D3DDevice; // eax
  unsigned int v16; // [rsp+20h] [rbp-18h]

  HolographicManager = CComposition::GetHolographicManager(*((struct CHolographicManager ***)this + 2));
  *((_QWORD *)this + 14) = HolographicManager;
  if ( !HolographicManager )
  {
    v5 = -2147418113;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x52u);
    return v5;
  }
  *((_DWORD *)this + 34) = 87;
  v6 = (_QWORD *)((char *)this + 160);
  v7 = 0;
  do
  {
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    *v6 = Event;
    if ( !Event )
    {
      v16 = 90;
      goto LABEL_17;
    }
    v9 = CreateEventExW(0LL, 0LL, 2u, 0x1F0003u);
    v10 = *v6 == 0LL;
    v6[1] = v9;
    if ( v10 )
    {
      v16 = 92;
LABEL_17:
      v5 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v16);
      return v5;
    }
    ++v7;
    ++v6;
  }
  while ( !v7 );
  v11 = 0LL;
  v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
  if ( !*(_DWORD *)(v12 + 80) )
    goto LABEL_12;
  while ( 1 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(v12 + 56) + 8 * v11);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v13 + 264LL))(v13) )
      break;
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= *(_DWORD *)(v12 + 80) )
      goto LABEL_12;
  }
  if ( !*(_QWORD *)(*(_QWORD *)(v12 + 56) + 8 * v11) )
LABEL_12:
    *((_BYTE *)this + 128) = 1;
  D3DDevice = CD3DDeviceManager::GetD3DDevice(
                (CD3DDeviceManager *)&g_D3DDeviceManager,
                (struct _GUID *)(*((_QWORD *)this + 2) + 324LL),
                *a2,
                (struct CD3DDeviceLevel1 **)this + 15);
  v5 = D3DDevice;
  if ( D3DDevice < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDevice, 0x6Au);
  return v5;
}
