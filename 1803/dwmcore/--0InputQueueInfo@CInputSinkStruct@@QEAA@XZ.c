/*
 * XREFs of ??0InputQueueInfo@CInputSinkStruct@@QEAA@XZ @ 0x1800CD700
 * Callers:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 * Callees:
 *     <none>
 */

CInputSinkStruct::InputQueueInfo *__fastcall CInputSinkStruct::InputQueueInfo::InputQueueInfo(
        CInputSinkStruct::InputQueueInfo *this)
{
  CInputSinkStruct::InputQueueInfo *result; // rax

  *(_DWORD *)this = 0;
  result = this;
  *((_QWORD *)this + 1) = 0LL;
  return result;
}
