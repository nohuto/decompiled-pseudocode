/*
 * XREFs of ?InitClass@AnimationManager@Animations@Components@@SAJXZ @ 0x1800C6070
 * Callers:
 *     ?AnInitializeEngine@@YAXXZ @ 0x1800C6048 (-AnInitializeEngine@@YAXXZ.c)
 * Callees:
 *     ?ApiCreate@AnimationManager@Animations@Components@@QEAAJXZ @ 0x18002A838 (-ApiCreate@AnimationManager@Animations@Components@@QEAAJXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

__int64 Components::Animations::AnimationManager::InitClass(void)
{
  Components::Animations::AnimationManager *v0; // rax
  Components::Animations::AnimationManager *v1; // rbx
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( Components::Animations::AnimationManager::s_PORT_pSingleton )
    return 0LL;
  v0 = (Components::Animations::AnimationManager *)WPF::ProcessHeapImpl::AllocClear(0xE8uLL);
  v1 = v0;
  if ( !v0 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  *((_DWORD *)v0 + 2) = 0;
  *(_QWORD *)v0 = (char *)v0 + 16;
  *((_DWORD *)v0 + 3) = 8;
  *((_DWORD *)v0 + 22) = 0;
  *((_DWORD *)v0 + 23) = 8;
  *((_QWORD *)v0 + 10) = (char *)v0 + 96;
  *((_QWORD *)v0 + 20) = 0LL;
  *((_QWORD *)v0 + 21) = 0LL;
  *((_QWORD *)v0 + 24) = 0LL;
  *((_QWORD *)v0 + 25) = 0LL;
  *((_QWORD *)v0 + 27) = 0LL;
  *((_QWORD *)v0 + 28) = 0LL;
  result = Components::Animations::AnimationManager::ApiCreate(v0);
  if ( (int)result >= 0 )
  {
    Components::Animations::AnimationManager::s_PORT_pSingleton = v1;
    return 0LL;
  }
  return result;
}
