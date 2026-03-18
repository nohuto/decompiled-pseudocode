/*
 * XREFs of ?RegisterForSignaling@CGdiSpriteBitmap@@IEAAJXZ @ 0x18005491C
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180055624 (-CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@IEAAJXZ @ 0x180055064 (-DirtyFromAccum@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?SetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@KPEAX@Z @ 0x1800B0A9C (-SetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@KPEAX@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall CGdiSpriteBitmap::RegisterForSignaling(CGdiSpriteBitmap *this)
{
  char v1; // al
  unsigned int v2; // edi
  bool v4; // si
  __int64 v5; // rcx
  int v6; // eax
  __int64 v8; // rcx
  int v9; // eax
  _BYTE v10[8]; // [rsp+30h] [rbp-20h] BYREF
  int v11; // [rsp+38h] [rbp-18h]
  int v12; // [rsp+3Ch] [rbp-14h]
  __int64 v13; // [rsp+40h] [rbp-10h]
  __int64 v14; // [rsp+48h] [rbp-8h]
  unsigned int v15; // [rsp+70h] [rbp+20h] BYREF

  v1 = *((_BYTE *)this + 148);
  v2 = 0;
  v15 = 0;
  v4 = (v1 & 0x40) != 0;
  if ( (v1 & 0x10) != 0 )
  {
    v4 = 1;
  }
  else
  {
    if ( *((_QWORD *)this + 48) )
    {
      memset_0(v10, 0, 0x20uLL);
      v5 = *((_QWORD *)this + 14);
      v12 = *((_DWORD *)this + 30);
      v13 = *((_QWORD *)this + 47);
      v14 = *((_QWORD *)this + 46);
      v11 = 1;
      v6 = CRedirectedGDISurface::SetInformation(v5, 4LL, 32LL, v10);
      v15 = v6;
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801F3600, 1u, v6, 0x415u);
        goto LABEL_7;
      }
    }
    else
    {
      v8 = *((_QWORD *)this + 14);
      v15 = 1;
      v9 = CRedirectedGDISurface::SetInformation(v8, 1LL, 4LL, &v15);
      v15 = v9;
      v2 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801F3600, 1u, v9, 0x41Du);
        goto LABEL_7;
      }
      v4 = 1;
    }
    *((_BYTE *)this + 148) |= 0x10u;
  }
  if ( v4 )
    CGdiSpriteBitmap::DirtyFromAccum(this);
LABEL_7:
  TranslateDXGIorD3DErrorInContext(v2, 10LL, &v15);
  return v15;
}
