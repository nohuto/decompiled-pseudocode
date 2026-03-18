/*
 * XREFs of ?ReleaseCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0019D44
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C008ABFC (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C008E584 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00188E4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ReleaseCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *a1,
        unsigned int a2)
{
  _QWORD *v2; // rdi
  __int64 result; // rax
  struct DirectComposition::CResourceMarshaler *v6; // rsi

  v2 = (_QWORD *)((char *)a1 + 264);
  for ( result = *((_QWORD *)a1 + 33); (_QWORD *)result != v2; result = *((_QWORD *)v6 + 31) )
  {
    v6 = (struct DirectComposition::CResourceMarshaler *)(result - 248);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(result - 248) + 280LL))(result - 248, a2) )
      return DirectComposition::CApplicationChannel::ReleaseResource(a1, v6);
  }
  return result;
}
