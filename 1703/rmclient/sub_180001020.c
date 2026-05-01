/*
 * XREFs of sub_180001020 @ 0x180001020
 * Callers:
 *     <none>
 * Callees:
 *     ??0Git@Details@Internal@Windows@@QEAA@XZ @ 0x180004C24 (--0Git@Details@Internal@Windows@@QEAA@XZ.c)
 */

int __fastcall sub_180001020(Windows::Internal::Details::Git *a1)
{
  Windows::Internal::Details::Git::Git(a1);
  return atexit((void (__cdecl *)())Windows::Internal::Details::Git::~Git);
}
