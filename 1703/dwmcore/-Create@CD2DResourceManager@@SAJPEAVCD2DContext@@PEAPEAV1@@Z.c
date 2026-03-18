/*
 * XREFs of ?Create@CD2DResourceManager@@SAJPEAVCD2DContext@@PEAPEAV1@@Z @ 0x1800CA5A8
 * Callers:
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x1800AE7B8 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xFu);
  }
  return v3;
}
