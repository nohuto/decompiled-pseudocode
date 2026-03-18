/*
 * XREFs of ?AddResourceNotifier@CColorKeyBitmap@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x1801D1340
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CColorKeyBitmap::AddResourceNotifier(CColorKeyBitmap *this, struct IDeviceResourceNotify *a2)
{
  char *v2; // r10
  __int64 v3; // rcx
  unsigned int v4; // eax
  DWORD v5; // ebx
  signed int v6; // eax
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
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0xB5u);
  }
  else if ( (unsigned int)a2 > *((_DWORD *)v2 + 5) )
  {
    v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v2, 8u, 1, &v8);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)v2 + 8 * v3) = v8;
    *((_DWORD *)v2 + 6) = (_DWORD)a2;
  }
  return v5;
}
