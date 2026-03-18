/*
 * XREFs of ?Create@CHwSolidColorTextureSource@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1801EA02C
 * Callers:
 *     ?GetStockBlackSolidColorTextureSourceNoRef@CD3DDeviceLevel1@@QEAAJ_NPEAPEAVCHwSolidColorTextureSource@@@Z @ 0x1801E0300 (-GetStockBlackSolidColorTextureSourceNoRef@CD3DDeviceLevel1@@QEAAJ_NPEAPEAVCHwSolidColorTextureS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ??0CHwSolidColorTextureSource@@AEAA@PEAVCD3DDeviceLevel1@@@Z @ 0x1801E9F04 (--0CHwSolidColorTextureSource@@AEAA@PEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CHwSolidColorTextureSource::Create(
        struct CD3DDeviceLevel1 *a1,
        struct CHwSolidColorTextureSource **a2)
{
  unsigned int v2; // ebx
  CHwSolidColorTextureSource *v5; // rax
  volatile signed __int32 *v6; // rax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  *a2 = 0LL;
  v5 = (CHwSolidColorTextureSource *)HeapAlloc(WPF::g_processHeap, 0, 0x90uLL);
  if ( !v5 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v6 = (volatile signed __int32 *)CHwSolidColorTextureSource::CHwSolidColorTextureSource(v5, a1);
  if ( v6 )
  {
    _InterlockedIncrement(v6 + 2);
    *a2 = (struct CHwSolidColorTextureSource *)v6;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x67u);
  }
  return v2;
}
