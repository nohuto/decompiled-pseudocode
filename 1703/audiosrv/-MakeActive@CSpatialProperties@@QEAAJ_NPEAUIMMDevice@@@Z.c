/*
 * XREFs of ?MakeActive@CSpatialProperties@@QEAAJ_NPEAUIMMDevice@@@Z @ 0x18003DC7C
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x180043D9C (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800029E4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     Create_SpatialAudioConfigureDevice @ 0x1800461F0 (Create_SpatialAudioConfigureDevice.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpatialProperties::MakeActive(CSpatialProperties *this, char a2, struct IMMDevice *a3)
{
  struct IUnknown **v3; // rdi
  int SpatialAudioConfigureDevice; // ebx
  LPVOID pv; // [rsp+40h] [rbp+8h] BYREF

  pv = 0LL;
  v3 = (struct IUnknown **)((char *)this + 40);
  SpatialAudioConfigureDevice = -2147418113;
  if ( !*((_QWORD *)this + 5) )
  {
    SpatialAudioConfigureDevice = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a3->lpVtbl->GetId)(a3, &pv);
    if ( SpatialAudioConfigureDevice >= 0 )
    {
      SpatialAudioConfigureDevice = Create_SpatialAudioConfigureDevice(pv, v3);
      if ( SpatialAudioConfigureDevice >= 0 )
        *((_BYTE *)this + 48) = a2;
    }
  }
  CoTaskMemFree(pv);
  if ( SpatialAudioConfigureDevice < 0 )
    goto LABEL_14;
  if ( !*v3 )
    SpatialAudioConfigureDevice = -2147418113;
  if ( SpatialAudioConfigureDevice < 0 )
  {
LABEL_14:
    if ( *v3 )
      ATL::AtlComPtrAssign(v3, 0LL);
  }
  return (unsigned int)SpatialAudioConfigureDevice;
}
