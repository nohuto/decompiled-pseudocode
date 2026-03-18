/*
 * XREFs of ?AddResourceNotifier@CD3DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x180024410
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CD3DResource::AddResourceNotifier(CD3DResource *this, struct IDeviceResourceNotify *a2)
{
  unsigned int v2; // edx
  char *v3; // r10
  __int64 v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // ebx
  int v8; // eax
  unsigned int v9; // [rsp+40h] [rbp+8h]
  struct IDeviceResourceNotify *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v2 = v9;
  v3 = (char *)this + 56;
  v4 = *((unsigned int *)this + 20);
  v5 = v4 + 1;
  if ( (int)v4 + 1 >= (unsigned int)v4 )
    v2 = v4 + 1;
  v6 = v5 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( v5 < (unsigned int)v4 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xB5u);
  }
  else if ( v2 > *((_DWORD *)v3 + 5) )
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet(v3, 8LL, 1LL, &v10);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)v3 + 8 * v4) = v10;
    *((_DWORD *)v3 + 6) = v2;
  }
  return v6;
}
