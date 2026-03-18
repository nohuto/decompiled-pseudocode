/*
 * XREFs of ?IsTouchpadDevice@CTouchProcessor@@IEBAHPEAX@Z @ 0x1C0122480
 * Callers:
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C011CC50 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011E76C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0012E00 (HMValidateHandleNoSecure.c)
 */

_BOOL8 __fastcall CTouchProcessor::IsTouchpadDevice(CTouchProcessor *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  _BOOL8 result; // rax

  v4 = a2;
  LOBYTE(a2) = 19;
  v5 = HMValidateHandleNoSecure(v4, a2, a3, a4);
  result = 0;
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 472);
    if ( v6 )
    {
      if ( *(_DWORD *)(v6 + 24) == 7 )
        return 1;
    }
  }
  return result;
}
