/*
 * XREFs of ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x18012A1C8
 * Callers:
 *     ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x18012B514 (-_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z.c)
 *     ?RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@@Z @ 0x18024CF10 (-RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@.c)
 * Callees:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x18012A7E0 (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 */

__int64 wil::details::in1diag3::Log_IfFailedMsg(
        wil::details::in1diag3 *this,
        void *a2,
        unsigned int a3,
        const char *a4,
        int a5,
        const char *a6,
        ...)
{
  unsigned int v6; // ebx

  v6 = (unsigned int)a4;
  if ( (int)a4 < 0 )
    wil::details::ReportFailure_HrMsg(this, a2);
  return v6;
}
