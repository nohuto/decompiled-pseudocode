/*
 * XREFs of ?RegisterForSignaling@CGdiSpriteBitmap@@IEAAJXZ @ 0x18009D54C
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18009DF10 (-CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18001D1C0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@KPEAX@Z @ 0x18007F2CC (-SetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@KPEAX@Z.c)
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@IEAAJXZ @ 0x18009D974 (-DirtyFromAccum@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

__int64 __fastcall CGdiSpriteBitmap::RegisterForSignaling(CGdiSpriteBitmap *this)
{
  int v1; // edi
  char v2; // si
  char v4; // si
  __int64 v5; // rcx
  signed int v6; // eax
  __int64 v8; // rcx
  signed int v9; // eax
  unsigned int v10[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+40h] [rbp-10h]
  __int64 v12; // [rsp+48h] [rbp-8h]
  signed int v13; // [rsp+70h] [rbp+20h] BYREF

  v1 = 0;
  v2 = *((_BYTE *)this + 116) >> 5;
  v13 = 0;
  v4 = v2 & 1;
  if ( (*((_BYTE *)this + 116) & 8) != 0 )
  {
    v4 = 1;
  }
  else
  {
    if ( *((_QWORD *)this + 37) )
    {
      v8 = *((_QWORD *)this + 10);
      v13 = 1;
      v9 = CRedirectedGDISurface::SetInformation(v8, 1, 4u, (unsigned int *)&v13);
      v13 = v9;
      v1 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024E4, 1u, v9, 0x35Au);
        goto LABEL_7;
      }
      v4 = 1;
    }
    else
    {
      memset_0(v10, 0, 0x20uLL);
      v5 = *((_QWORD *)this + 10);
      v10[3] = *((_DWORD *)this + 22);
      v11 = *((_QWORD *)this + 44);
      v12 = *((_QWORD *)this + 43);
      v10[2] = 1;
      v6 = CRedirectedGDISurface::SetInformation(v5, 4, 0x20u, v10);
      v13 = v6;
      v1 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024E4, 1u, v6, 0x352u);
        goto LABEL_7;
      }
    }
    *((_BYTE *)this + 116) |= 8u;
  }
  if ( v4 )
    CGdiSpriteBitmap::DirtyFromAccum(this);
LABEL_7:
  TranslateDXGIorD3DErrorInContext(v1, 10, &v13);
  return (unsigned int)v13;
}
