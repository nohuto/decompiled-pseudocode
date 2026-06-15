/*
 * XREFs of ??0CAudioMediaType@@IEAA@XZ @ 0x180017E60
 * Callers:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180002DF0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 * Callees:
 *     ??0IUnknown@@QEAA@XZ @ 0x1800C7E24 (--0IUnknown@@QEAA@XZ.c)
 */

CAudioMediaType *__fastcall CAudioMediaType::CAudioMediaType(CAudioMediaType *this)
{
  IUnknown::IUnknown((IUnknown *)this);
  *(_QWORD *)this = &CAudioMediaType::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  return this;
}
