/*
 * XREFs of ??0TemporaryConfiguration@@QEAA@XZ @ 0x1800B3530
 * Callers:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 * Callees:
 *     <none>
 */

TemporaryConfiguration *__fastcall TemporaryConfiguration::TemporaryConfiguration(TemporaryConfiguration *this)
{
  TemporaryConfiguration *result; // rax

  *((_DWORD *)this + 1) = -1;
  result = this;
  *((_DWORD *)this + 2) = 0;
  *(_BYTE *)this = 0;
  return result;
}
