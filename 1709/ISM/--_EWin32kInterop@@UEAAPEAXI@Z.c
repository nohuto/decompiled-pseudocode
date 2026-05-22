/*
 * XREFs of ??_EWin32kInterop@@UEAAPEAXI@Z @ 0x18000B164
 * Callers:
 *     ??_EWin32kInterop@@WCA@EAAPEAXI@Z @ 0x180012590 (--_EWin32kInterop@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@QEAA@XZ @ 0x18000B234 (--1-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@QEAA@XZ.c)
 *     ??1?$_Hash@V?$_Umap_traits@KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1800111C4 (--1-$_Hash@V-$_Umap_traits@KUTargetingInfo@Win32kInterop@@V-$_Uhash_compare@KU-$hash@K@std@@U-$e.c)
 *     ??1CursorNotificationProcessor@@QEAA@XZ @ 0x1800128BC (--1CursorNotificationProcessor@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void **__fastcall Win32kInterop::`vector deleting destructor'(void **this, char a2)
{
  void *v4; // rcx
  void *v5; // rcx

  KernelInputConnection<_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE>::~KernelInputConnection<_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE>(this + 43);
  KernelInputConnection<_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE>::~KernelInputConnection<_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE>(this + 27);
  CursorNotificationProcessor::~CursorNotificationProcessor((CursorNotificationProcessor *)(this + 22));
  std::_Hash<std::_Umap_traits<unsigned long,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>,0>>::~_Hash<std::_Umap_traits<unsigned long,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>,0>>(this + 12);
  operator delete(this[9]);
  v4 = this[8];
  if ( v4 )
  {
    this[8] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = this[7];
  if ( v5 )
  {
    this[7] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  this[4] = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents((MPCClickerProcessor *)this);
    else
      free(this);
  }
  return this;
}
