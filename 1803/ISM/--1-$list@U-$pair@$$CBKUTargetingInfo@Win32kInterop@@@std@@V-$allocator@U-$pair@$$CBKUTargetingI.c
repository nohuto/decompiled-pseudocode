/*
 * XREFs of ??1?$list@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@2@@std@@QEAA@XZ @ 0x1800158F0
 * Callers:
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$22 @ 0x1800E3D73 (_Win32kInterop--Win32kInterop_--_1_--dtor$22.c)
 * Callees:
 *     ?clear@?$list@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@2@@std@@QEAAXXZ @ 0x18001631C (-clear@-$list@U-$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V-$allocator@U-$pair@$$CBKUTarget.c)
 */

void __fastcall std::list<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>::~list<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>(
        void **a1)
{
  std::list<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>::clear(a1);
  operator delete(*a1);
}
