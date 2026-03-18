/*
 * XREFs of ?HrCalcRequiredBufferSizeWorker@@YAJIIIIPEAI@Z @ 0x18000BC8C
 * Callers:
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x18000BC48 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x1800BE784 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall HrCalcRequiredBufferSizeWorker(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int *a5)
{
  unsigned int v5; // ebx
  __int64 v6; // r11
  unsigned int v7; // r10d
  unsigned int v8; // r9d
  unsigned __int64 v9; // rcx
  unsigned int v10; // r8d
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // r8d
  unsigned __int64 v15; // rcx
  unsigned int v16; // eax

  v5 = 0;
  v6 = a2;
  v7 = 0;
  if ( a4 )
  {
    v7 = -1;
    v8 = a4 - 1;
    v9 = a3 * (unsigned __int64)a1;
    v10 = -1;
    if ( v9 <= 0xFFFFFFFF )
      v10 = v9;
    v5 = v9 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v9 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x64Cu);
      return v5;
    }
    v11 = v10 + 7;
    v12 = -1;
    if ( v10 + 7 >= v10 )
      v12 = v10 + 7;
    v5 = v11 < v10 ? 0x80070216 : 0;
    if ( v11 < v10 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x64Du);
      return v5;
    }
    v13 = v12 >> 3;
    if ( (unsigned int)v6 < v13 )
    {
      v5 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x652u);
      return v5;
    }
    v14 = -1;
    v15 = v6 * v8;
    if ( v15 <= 0xFFFFFFFF )
      v14 = v6 * v8;
    v5 = v15 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v15 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x655u);
      return v5;
    }
    v16 = v13 + v14;
    if ( v13 + v14 >= v14 )
      v7 = v13 + v14;
    v5 = v16 < v14 ? 0x80070216 : 0;
    if ( v16 < v14 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x656u);
      return v5;
    }
  }
  *a5 = v7;
  return v5;
}
