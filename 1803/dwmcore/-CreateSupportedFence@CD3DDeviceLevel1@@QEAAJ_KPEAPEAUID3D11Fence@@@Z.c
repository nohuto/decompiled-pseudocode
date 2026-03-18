/*
 * XREFs of ?CreateSupportedFence@CD3DDeviceLevel1@@QEAAJ_KPEAPEAUID3D11Fence@@@Z @ 0x1801DF918
 * Callers:
 *     ?EnsureResources@CCaptureRenderTarget@@AEAAJXZ @ 0x180155D54 (-EnsureResources@CCaptureRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateSupportedFence(
        CD3DDeviceLevel1 *this,
        struct ID3D11Fence *a2,
        struct ID3D11Fence **a3)
{
  __int64 v3; // rax
  __int64 v5; // rcx
  int v6; // ebx
  unsigned int v7; // ecx
  __int64 v8; // rcx
  struct ID3D11Fence *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v3 = *((_QWORD *)this + 89);
  v10 = 0LL;
  if ( *(_BYTE *)(v3 + 344) )
  {
    v5 = *((_QWORD *)this + 81);
    v10 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, GUID *, struct ID3D11Fence **))(*(_QWORD *)v5 + 544LL))(
           v5,
           0LL,
           0LL,
           &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80,
           &v10);
    if ( v6 < 0 )
    {
      v7 = 2135;
      goto LABEL_9;
    }
LABEL_7:
    *a3 = v10;
    return (unsigned int)v6;
  }
  if ( *(_BYTE *)(v3 + 345) )
  {
    v8 = *((_QWORD *)this + 81);
    v10 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, struct ID3D11Fence **))(*(_QWORD *)v8 + 544LL))(
           v8,
           0LL,
           8LL,
           &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80,
           &v10);
    if ( v6 >= 0 )
      goto LABEL_7;
    v7 = 2143;
  }
  else
  {
    v6 = -2147467259;
    v7 = 2147;
  }
LABEL_9:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v7);
  if ( v10 )
    ((void (__fastcall *)(struct ID3D11Fence *))v10->lpVtbl->Release)(v10);
  return (unsigned int)v6;
}
