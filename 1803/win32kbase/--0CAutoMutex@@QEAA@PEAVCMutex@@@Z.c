/*
 * XREFs of ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0062E40
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C0062E70 (-Lock@CMutex@@QEAAXXZ.c)
 */

CAutoMutex *__fastcall CAutoMutex::CAutoMutex(CAutoMutex *this, struct CMutex *a2)
{
  *(_QWORD *)this = a2;
  CMutex::Lock(a2);
  return this;
}
