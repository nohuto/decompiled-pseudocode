/*
 * XREFs of ?GetInstance@ControllerNavigationManager@@SAPEAV1@XZ @ 0x18003BFD0
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x180006028 (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180006DE0 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x18003D2D8 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18003D638 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x18003FF08 (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??0ControllerNavigationManager@@AEAA@XZ @ 0x18003BE08 (--0ControllerNavigationManager@@AEAA@XZ.c)
 *     ?Initialize@ControllerNavigationManager@@AEAAJXZ @ 0x18003C350 (-Initialize@ControllerNavigationManager@@AEAAJXZ.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

// Hidden C++ exception states: #wind=1
struct ControllerNavigationManager *ControllerNavigationManager::GetInstance(void)
{
  ControllerNavigationManager *v0; // rax
  ControllerNavigationManager *v1; // rcx
  ControllerNavigationManager *v2; // rbx
  struct ControllerNavigationManager *v3; // rax

  if ( !ControllerNavigationManager::s_instance )
  {
    v0 = (ControllerNavigationManager *)malloc(0x230uLL);
    v2 = v0;
    if ( v0 )
      memset(v0, 0, 0x230uLL);
    if ( v2 )
      v3 = ControllerNavigationManager::ControllerNavigationManager(v2);
    else
      v3 = 0LL;
    ControllerNavigationManager::s_instance = v3;
    if ( !v3 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq((__int64)v1, &MinInput_Warning_CheckResult, 0, 114, 14);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    ControllerNavigationManager::Initialize(v1);
  }
  return ControllerNavigationManager::s_instance;
}
