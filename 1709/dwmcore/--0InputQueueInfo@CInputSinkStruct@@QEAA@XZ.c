/*
 * XREFs of ??0InputQueueInfo@CInputSinkStruct@@QEAA@XZ @ 0x1800BE720
 * Callers:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 * Callees:
 *     <none>
 */

CInputSinkStruct::InputQueueInfo *__fastcall CInputSinkStruct::InputQueueInfo::InputQueueInfo(
        CInputSinkStruct::InputQueueInfo *this)
{
  *(_DWORD *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  return this;
}
