/*
 * XREFs of ??1Git@Details@Internal@Windows@@QEAA@XZ @ 0x180004B64
 * Callers:
 *     j_??1Git@Details@Internal@Windows@@QEAA@XZ @ 0x180008A00 (j_--1Git@Details@Internal@Windows@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::Details::Git::~Git(Windows::Internal::Details::Git *this)
{
  __int64 v1; // rcx

  v1 = qword_1800186A8;
  if ( qword_1800186A8 )
  {
    qword_1800186A8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
}
