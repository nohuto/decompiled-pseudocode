/*
 * XREFs of ?IsTouchpadDevice@CTouchProcessor@@IEBAHPEAX@Z @ 0x1C0117968
 * Callers:
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C0110F30 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011303C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C0117E90 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C004DDD4 (HMValidateHandleNoSecure.c)
 */

_BOOL8 __fastcall CTouchProcessor::IsTouchpadDevice(CTouchProcessor *this, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _BOOL8 result; // rax

  v2 = HMValidateHandleNoSecure(a2, 19);
  result = 0;
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 480);
    if ( v3 )
    {
      if ( *(_DWORD *)(v3 + 24) == 7 )
        return 1;
    }
  }
  return result;
}
