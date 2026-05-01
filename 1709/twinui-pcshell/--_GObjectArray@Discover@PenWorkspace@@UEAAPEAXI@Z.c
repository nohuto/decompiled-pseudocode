/*
 * XREFs of ??_GObjectArray@Discover@PenWorkspace@@UEAAPEAXI@Z @ 0x1800E5970
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180072B38 (--1-$vector@V-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIDiscoverRec.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

PenWorkspace::Discover::ObjectArray *__fastcall PenWorkspace::Discover::ObjectArray::`scalar deleting destructor'(
        PenWorkspace::Discover::ObjectArray *this,
        char a2)
{
  __int64 v4; // rcx

  std::vector<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>::~vector<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>((unsigned __int64 *)this + 7);
  *((_DWORD *)this + 13) = -1073741823;
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
