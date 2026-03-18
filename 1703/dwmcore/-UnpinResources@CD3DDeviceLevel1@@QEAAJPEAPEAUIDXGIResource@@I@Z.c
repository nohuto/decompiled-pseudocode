/*
 * XREFs of ?UnpinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z @ 0x180197740
 * Callers:
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x180175D64 (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::UnpinResources(CD3DDeviceLevel1 *this, struct IDXGIResource **a2, unsigned int a3)
{
  unsigned int v3; // r14d
  int v6; // ebx
  unsigned int v7; // esi
  char *v8; // rdi
  __int64 v9; // rcx
  unsigned int v10; // eax
  int v11; // eax
  unsigned int v13; // [rsp+70h] [rbp+18h]
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v6 = -2147467259;
  if ( a3 )
  {
    v7 = v13;
    v8 = (char *)this + 1072;
    while ( 1 )
    {
      v9 = *((unsigned int *)v8 + 6);
      v14 = (__int64)*a2;
      v10 = v9 + 1;
      if ( (int)v9 + 1 >= (unsigned int)v9 )
        v7 = v9 + 1;
      v6 = v10 < (unsigned int)v9 ? 0x80070216 : 0;
      if ( v10 < (unsigned int)v9 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xB5u);
      }
      else if ( v7 > *((_DWORD *)v8 + 5) )
      {
        v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v8, 8u, 1, &v14);
        v6 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v8 + 8 * v9) = v14;
        *((_DWORD *)v8 + 6) = v7;
      }
      if ( v6 < 0 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      ++v3;
      ++a2;
      if ( v3 >= a3 )
        return (unsigned int)v6;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xF05u);
  }
  return (unsigned int)v6;
}
