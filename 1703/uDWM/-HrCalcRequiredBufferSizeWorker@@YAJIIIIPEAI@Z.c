/*
 * XREFs of ?HrCalcRequiredBufferSizeWorker@@YAJIIIIPEAI@Z @ 0x180040448
 * Callers:
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x180040404 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x1800A17BC (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall HrCalcRequiredBufferSizeWorker(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int *a5)
{
  unsigned int v5; // r10d
  __int64 v6; // r11
  unsigned int v7; // ebx
  unsigned int v8; // r9d
  unsigned __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned __int64 v13; // rcx
  unsigned int v14; // eax

  v5 = 0;
  v6 = a2;
  v7 = 0;
  if ( a4 )
  {
    v8 = a4 - 1;
    v9 = a3 * (unsigned __int64)a1;
    if ( v9 > 0xFFFFFFFF )
    {
      LODWORD(v9) = -1;
      v7 = -2147024362;
    }
    if ( (v7 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x36Bu);
      return v7;
    }
    v10 = v9 + 7;
    v11 = -1;
    if ( (int)v9 + 7 >= (unsigned int)v9 )
      v11 = v9 + 7;
    v7 = v10 < (unsigned int)v9 ? 0x80070216 : 0;
    if ( v10 < (unsigned int)v9 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x36Cu);
      return v7;
    }
    v12 = v11 >> 3;
    if ( (unsigned int)v6 < v12 )
    {
      v7 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x371u);
      return v7;
    }
    v13 = v6 * v8;
    if ( v13 > 0xFFFFFFFF )
    {
      LODWORD(v13) = -1;
      v7 = -2147024362;
    }
    else
    {
      v7 = 0;
    }
    if ( (v7 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x374u);
      return v7;
    }
    v14 = v12 + v13;
    v5 = -1;
    if ( v12 + (unsigned int)v13 >= (unsigned int)v13 )
      v5 = v12 + v13;
    v7 = v14 < (unsigned int)v13 ? 0x80070216 : 0;
    if ( v14 < (unsigned int)v13 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x375u);
      return v7;
    }
  }
  *a5 = v5;
  return v7;
}
