/*
 * XREFs of ?SetBufferProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0143330
 * Callers:
 *     <none>
 * Callees:
 *     ?Add@?$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x1C0142D7C (-Add@-$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 */

__int64 __fastcall DirectComposition::CManipulationMarshaler::SetBufferProperty(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _OWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( a3 != 7 || !a4 || a5 != 128 )
    return 3221225485LL;
  result = CStructDynamicArray<InjectManipulationArgs>::Add((__int64)this + 88, a4);
  if ( (int)result >= 0 )
    *a6 = 1;
  return result;
}
