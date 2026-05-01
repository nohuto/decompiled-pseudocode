/*
 * XREFs of ??0ModernResourceManagerProxy@@QEAA@XZ @ 0x1800035E4
 * Callers:
 *     ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x180002BA0 (-GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z.c)
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180003D2C (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 * Callees:
 *     <none>
 */

ModernResourceManagerProxy *__fastcall ModernResourceManagerProxy::ModernResourceManagerProxy(
        ModernResourceManagerProxy *this)
{
  *(_QWORD *)this = &ModernResourceManagerProxy::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  RtlInitializeSRWLock((char *)this + 72);
  return this;
}
