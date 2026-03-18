/*
 * XREFs of ?ReleaseCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0146E38
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0013D90 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C0146EB8 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0015294 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall DirectComposition::CApplicationChannel::ReleaseCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *a1,
        unsigned int a2)
{
  _UNKNOWN **result; // rax
  _QWORD *v3; // rsi
  _QWORD *i; // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = (_QWORD *)((char *)a1 + 248);
  for ( i = (_QWORD *)*((_QWORD *)a1 + 31); i != v3; i = (_QWORD *)*i )
  {
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*(i - 36) + 288LL))(i - 36, a2);
    if ( (_BYTE)result )
      return (_UNKNOWN **)DirectComposition::CApplicationChannel::ReleaseResource(
                            a1,
                            (struct DirectComposition::CResourceMarshaler *)(i - 36));
  }
  return result;
}
