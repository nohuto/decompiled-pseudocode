/*
 * XREFs of ??0TemporaryConfiguration@@QEAA@XZ @ 0x1800BE190
 * Callers:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 * Callees:
 *     <none>
 */

TemporaryConfiguration *__fastcall TemporaryConfiguration::TemporaryConfiguration(TemporaryConfiguration *this)
{
  TemporaryConfiguration *result; // rax

  *((_DWORD *)this + 2) = 0;
  result = this;
  *(_BYTE *)this = 0;
  *((_DWORD *)this + 1) = -805306369;
  return result;
}
