/*
 * XREFs of ??0CHolographicManager@@AEAA@PEAVCComposition@@@Z @ 0x1801A5A10
 * Callers:
 *     ?Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1801A5E40 (-Create@CHolographicManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CHolographicManager *__fastcall CHolographicManager::CHolographicManager(
        CHolographicManager *this,
        struct CComposition *a2)
{
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &CHolographicManager::`vftable';
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  InitializeSRWLock((PSRWLOCK)this + 9);
  return this;
}
