/*
 * XREFs of ?AddResourceNotifier@CColorKeyBitmapRealization@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x180213570
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CColorKeyBitmapRealization::AddResourceNotifier(
        CColorKeyBitmapRealization *this,
        struct IDeviceResourceNotify *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // ebx
  int v5; // eax
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
    v5 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 8, 8u, 1, &v7);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * v2) = v7;
    *((_DWORD *)this + 8) = v3;
  }
  return v4;
}
