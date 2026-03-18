/*
 * XREFs of ?PinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z @ 0x1801973E0
 * Callers:
 *     ?PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x1801757EC (-PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180077818 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::PinResources(CD3DDeviceLevel1 *this, struct IDXGIResource **a2, unsigned int a3)
{
  int v3; // edi
  unsigned int v4; // esi
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 i; // r9
  int v12; // eax
  _QWORD v14[32]; // [rsp+30h] [rbp-128h] BYREF

  v3 = *((_DWORD *)this + 218);
  v4 = 0;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801FD8B8, 1u, v3, 0xEBCu);
  }
  else if ( a3 )
  {
    v7 = a3;
    do
    {
      v8 = *((unsigned int *)this + 274);
      v9 = 0LL;
      v10 = (__int64)*a2;
      for ( i = *((_QWORD *)this + 134); (unsigned int)v9 < (unsigned int)v8; v9 = (unsigned int)(v9 + 1) )
      {
        if ( v10 == *(_QWORD *)(i + 8 * v9) )
          break;
      }
      if ( (unsigned int)v9 >= (unsigned int)v8 )
      {
        v14[v4++] = v10;
      }
      else
      {
        if ( (unsigned int)v9 < (int)v8 - 1 )
        {
          do
          {
            v8 = (unsigned int)(v9 + 1);
            *(_QWORD *)(i + 8 * v9) = *(_QWORD *)(i + 8 * v8);
            v9 = v8;
          }
          while ( (unsigned int)v8 < *((_DWORD *)this + 274) - 1 );
        }
        --*((_DWORD *)this + 274);
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v10 + 16LL))(v10, v8, v10, i);
      }
      ++a2;
      --v7;
    }
    while ( v7 );
    if ( v4 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**((_QWORD **)this + 75) + 48LL))(
              *((_QWORD *)this + 75),
              v14,
              v4);
      v3 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801FD8B8, 1u, v12, 0xEDCu);
    }
  }
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v3, 0xFu);
}
