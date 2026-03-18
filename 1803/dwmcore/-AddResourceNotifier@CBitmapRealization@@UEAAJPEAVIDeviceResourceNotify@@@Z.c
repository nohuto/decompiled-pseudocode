/*
 * XREFs of ?AddResourceNotifier@CBitmapRealization@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x18000C810
 * Callers:
 *     ?AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z @ 0x180082694 (-AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CBitmapRealization::AddResourceNotifier(CBitmapRealization *this, struct IDeviceResourceNotify *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // ebx
  int v6; // eax
  struct IDeviceResourceNotify *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = a2;
  v2 = *((_DWORD *)this + 8);
  v3 = v2 + 1;
  v4 = v2 + 1 < v2 ? 0x80070216 : 0;
  if ( v2 + 1 < v2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xB5u);
  }
  else if ( v3 > *((_DWORD *)this + 7) )
  {
    v6 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 8, 8LL, 1LL, &v7);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * v2) = v7;
    *((_DWORD *)this + 8) = v3;
  }
  return v4;
}
