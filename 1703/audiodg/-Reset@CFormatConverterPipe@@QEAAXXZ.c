/*
 * XREFs of ?Reset@CFormatConverterPipe@@QEAAXXZ @ 0x140031258
 * Callers:
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x140045368 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 * Callees:
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x140031214 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 */

void __fastcall CFormatConverterPipe::Reset(CPipeInstance **this)
{
  CPipeInstance *v2; // rcx

  ATL::CAutoPtr<CPipeInstance>::Free(this);
  v2 = this[1];
  if ( v2 )
  {
    CoTaskMemFree(v2);
    this[1] = 0LL;
  }
  *((_BYTE *)this + 24) = 0;
}
