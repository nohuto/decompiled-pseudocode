/*
 * XREFs of ??0exception@std@@QEAA@XZ @ 0x180001A18
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_fdfea97a1e4915bc7c15af4fd38df93b_@@$$QEAPEAVWGIRawInputProvider@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@$00@2@$01@std@@YAHPEAX0PEAPEAX@Z @ 0x180077C70 (--$_Callback_once@V-$tuple@$$QEAV_lambda_fdfea97a1e4915bc7c15af4fd38df93b_@@$$QEAPEAVWGIRawInput.c)
 * Callees:
 *     <none>
 */

std::exception *__fastcall std::exception::exception(std::exception *this)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  return this;
}
