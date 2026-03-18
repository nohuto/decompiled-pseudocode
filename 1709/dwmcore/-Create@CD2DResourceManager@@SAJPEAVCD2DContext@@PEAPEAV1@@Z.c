/*
 * XREFs of ?Create@CD2DResourceManager@@SAJPEAVCD2DContext@@PEAPEAV1@@Z @ 0x1800C060C
 * Callers:
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x1800457B4 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DResourceManager::Create(struct CD2DContext *a1, struct CD2DResourceManager **a2)
{
  unsigned int v3; // ebx
  _DWORD *v5; // rax

  v3 = 0;
  v5 = operator new(0x20uLL);
  if ( v5 )
  {
    v5[4] = 0;
    *((_QWORD *)v5 + 3) = a1;
    *((_QWORD *)v5 + 1) = v5;
    *(_QWORD *)v5 = v5;
  }
  else
  {
    v5 = 0LL;
  }
  *a2 = (struct CD2DResourceManager *)v5;
  if ( !v5 )
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0xFu);
  }
  return v3;
}
