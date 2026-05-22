/*
 * XREFs of ??_EWin32kInterop@@UEAAPEAXI@Z @ 0x18000F4F0
 * Callers:
 *     ??_EWin32kInterop@@WBI@EAAPEAXI@Z @ 0x180016E90 (--_EWin32kInterop@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@QEAA@XZ @ 0x18000F62C (--1-$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@QEAA@XZ.c)
 *     ??1?$_Hash@V?$_Umap_traits@KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18000F6D4 (--1-$_Hash@V-$_Umap_traits@KUTargetingInfo@Win32kInterop@@V-$_Uhash_compare@KU-$hash@K@std@@U-$e.c)
 *     ??1?$_Hash@V?$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18000F75C (--1-$_Hash@V-$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V-$_Uhash_compare@IU-$hash@I@std@.c)
 *     ??1CursorNotificationProcessor@@QEAA@XZ @ 0x180017120 (--1CursorNotificationProcessor@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

Win32kInterop *__fastcall Win32kInterop::`vector deleting destructor'(Win32kInterop *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  KernelInputConnection<_MIT_POINTER_INPUT_DOWN_MESSAGE>::~KernelInputConnection<_MIT_POINTER_INPUT_DOWN_MESSAGE>((char *)this + 2408);
  KernelInputConnection<_MIT_POINTER_INPUT_DOWN_MESSAGE>::~KernelInputConnection<_MIT_POINTER_INPUT_DOWN_MESSAGE>((char *)this + 2280);
  KernelInputConnection<_MIT_POINTER_INPUT_DOWN_MESSAGE>::~KernelInputConnection<_MIT_POINTER_INPUT_DOWN_MESSAGE>((char *)this + 2152);
  KernelInputConnection<_MIT_POINTER_INPUT_DOWN_MESSAGE>::~KernelInputConnection<_MIT_POINTER_INPUT_DOWN_MESSAGE>((char *)this + 2024);
  CursorNotificationProcessor::~CursorNotificationProcessor((Win32kInterop *)((char *)this + 1984));
  v4 = *((_QWORD *)this + 28);
  if ( v4 )
  {
    *((_QWORD *)this + 28) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 27);
  if ( v5 )
  {
    *((_QWORD *)this + 27) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  std::_Hash<std::_Umap_traits<unsigned int,ViewHierarchy::ViewHierarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>,0>>::~_Hash<std::_Umap_traits<unsigned int,ViewHierarchy::ViewHierarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>,0>>((char *)this + 152);
  std::_Hash<std::_Umap_traits<unsigned long,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>,0>>::~_Hash<std::_Umap_traits<unsigned long,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>,0>>((char *)this + 88);
  operator delete(*((void **)this + 8));
  v6 = *((_QWORD *)this + 7);
  if ( v6 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 6);
  if ( v7 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      operator delete(this);
    else
      free(this);
  }
  return this;
}
