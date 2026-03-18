/*
 * XREFs of ?AddResourceNotifier@CBitmapRealization@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x18002B4A0
 * Callers:
 *     ?AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z @ 0x18007615C (-AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBitmapRealization::AddResourceNotifier(CBitmapRealization *this, struct IDeviceResourceNotify *a2)
{
  char *v2; // r10
  __int64 v3; // rcx
  unsigned int v4; // eax
  unsigned int v5; // ebx
  int v7; // eax
  struct IDeviceResourceNotify *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = a2;
  v2 = (char *)this + 8;
  v3 = *((unsigned int *)this + 8);
  v4 = v3 + 1;
  if ( (int)v3 + 1 >= (unsigned int)v3 )
    LODWORD(a2) = v3 + 1;
  v5 = v4 < (unsigned int)v3 ? 0x80070216 : 0;
  if ( v4 < (unsigned int)v3 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xB5u);
  }
  else if ( (unsigned int)a2 > *((_DWORD *)v2 + 5) )
  {
    v7 = DynArrayImpl<0>::AddMultipleAndSet(v2, 8LL, 1LL, &v8);
    v5 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)v2 + 8 * v3) = v8;
    *((_DWORD *)v2 + 6) = (_DWORD)a2;
  }
  return v5;
}
