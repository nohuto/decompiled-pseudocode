/*
 * XREFs of ?DestroyObjectCaches@CThreadContext@@SAXXZ @ 0x18018608C
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x18013EE78 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180094270 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     ?Destroy@CObjectCache@@QEAAXXZ @ 0x180186054 (-Destroy@CObjectCache@@QEAAXXZ.c)
 */

void CThreadContext::DestroyObjectCaches(void)
{
  int Current; // eax
  struct CThreadContext *v1; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v3; // [rsp+30h] [rbp+8h] BYREF

  Current = CThreadContext::GetCurrent(&v3);
  if ( Current < 0 )
  {
    ModuleFailFastForHRESULT(Current, retaddr);
    __debugbreak();
  }
  v1 = v3;
  CObjectCache::Destroy((struct CThreadContext *)((char *)v3 + 8));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 24));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 40));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 56));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 72));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 88));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 104));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 120));
  CObjectCache::Destroy((struct CThreadContext *)((char *)v1 + 136));
}
