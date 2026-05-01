/*
 * XREFs of ??_EPeoplePaneViewManager@@UEAAPEAXI@Z @ 0x1800EC8C4
 * Callers:
 *     ??_EPeoplePaneViewManager@@WBA@EAAPEAXI@Z @ 0x1800ED520 (--_EPeoplePaneViewManager@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$vector@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18006FE08 (--1-$vector@V-$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VMonitorFrame@@@WRL@.c)
 *     ??1CImmersiveShellComponentWithSite@@UEAA@XZ @ 0x1800EC0C0 (--1CImmersiveShellComponentWithSite@@UEAA@XZ.c)
 *     ??1?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAA@XZ @ 0x1800ECBC4 (--1-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@UPeoplePaneViewI.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

PeoplePaneViewManager *__fastcall PeoplePaneViewManager::`vector deleting destructor'(
        PeoplePaneViewManager *this,
        char a2)
{
  __int64 v3; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx

  v3 = *((_QWORD *)this + 34);
  if ( v3 )
  {
    *((_QWORD *)this + 34) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v5 = *((_QWORD *)this + 33);
  if ( v5 )
  {
    *((_QWORD *)this + 33) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 32);
  if ( v6 )
  {
    *((_QWORD *)this + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 31);
  if ( v7 )
  {
    *((_QWORD *)this + 31) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 30);
  if ( v8 )
  {
    *((_QWORD *)this + 30) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 29);
  if ( v9 )
  {
    *((_QWORD *)this + 29) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *((_QWORD *)this + 28);
  if ( v10 )
  {
    *((_QWORD *)this + 28) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( *((_QWORD *)this + 22) )
  {
    v11 = 0LL;
    if ( *((_QWORD *)this + 23) )
    {
      v12 = 0LL;
      do
      {
        v13 = *((_QWORD *)this + 22);
        v14 = *(_QWORD *)(v12 + v13);
        if ( v14 )
        {
          *(_QWORD *)(v12 + v13) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        ++v11;
        v12 += 16LL;
      }
      while ( v11 < *((_QWORD *)this + 23) );
    }
    CoTaskMemFree(*((LPVOID *)this + 22));
    *((_QWORD *)this + 22) = 0LL;
  }
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  v15 = *((_QWORD *)this + 20);
  if ( v15 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  std::vector<Microsoft::WRL::ComPtr<MonitorFrame>>::~vector<Microsoft::WRL::ComPtr<MonitorFrame>>((__int64)this + 136);
  std::vector<std::shared_ptr<PeoplePaneViewInfo>>::~vector<std::shared_ptr<PeoplePaneViewInfo>>((char *)this + 104);
  *((_DWORD *)this + 23) = -1073741823;
  CImmersiveShellComponentWithSite::~CImmersiveShellComponentWithSite(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
